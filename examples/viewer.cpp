#include "viewer.h"
#include <cstdlib>


Viewer::Viewer() : shader_folder("src/shader/"), 
                   win_width(600),
                   win_height(400)
{
}

static void glfwErrorCallback(int error, const char* description)
{
  std::cerr << "GLFW error " << error << " " << description << std::endl;
}

void Viewer::initialize()
{
    // init glfw - if already initialized nothing happens
    glfwInit();

    GLFWerrorfun prev_func = glfwSetErrorCallback(glfwErrorCallback);
    if (prev_func)
      glfwSetErrorCallback(prev_func);

    // setup context
    glfwDefaultWindowHints();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
#ifdef __APPLE__
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 2);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
#else
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);
    glfwWindowHint(GLFW_CLIENT_API,GLFW_OPENGL_ES_API);
#endif
    //glfwWindowHint(GLFW_VISIBLE, debug ? GL_TRUE : GL_FALSE);

    window = glfwCreateWindow(win_width*2, win_height*2, "(ES) Viewer (press ESC to exit)", 0, NULL);
    if (window == NULL)
    {
        std::cerr << "(ES)Failed to create opengl window." << std::endl;
        exit(-1);
    }

    glfwMakeContextCurrent(window);
    OpenGLESBindings *es_b = new OpenGLESBindings();
    flextESInit(es_b);
    gl(es_b);

    std::string vertexshadersrc = ""
        "#version 300 es                                \n"
        
        "in vec2 Position;                              \n"
        "in vec2 TexCoord;                              \n"
                    
        "out VertexData{                                \n"
        "   vec2 TexCoord;                              \n" 
        "} VertexOut;                                   \n"  
                    
        "void main(void)                                \n"
        "{                                              \n"
        "    gl_Position = vec4(Position, 0.0, 1.0);    \n"
        "    VertexOut.TexCoord = TexCoord;             \n"
        "}                                              \n";

    std::string grayfragmentshader = ""
        "#version 300 es                                                                \n"
 
        //"uniform sampler2DRect Data;                                                    \n"
        "uniform sampler2D Data;                                                        \n"
        
        "vec4 tempColor;                                                           \n"
        "in VertexData{                                                                 \n"
        "   vec2 TexCoord;                                                              \n"
        "} FragmentIn;                                                                  \n"
        
        "layout(location = 0) out vec4 Color;                                           \n"
        
        "void main(void)                                                                \n"
        "{                                                                              \n"
        "   ivec2 uv = ivec2(FragmentIn.TexCoord.x, FragmentIn.TexCoord.y);             \n"
        "   tempColor = texelFetch(Data, uv, 0);                                           \n"
        "   Color = vec4(tempColor.x/4500, tempColor.x/4500, tempColor.x/4500, 1);      \n"
        "}                                                                              \n";

    std::string fragmentshader = ""
        "#version 300 es                                                            \n"
        //"precision mediump float;                     \n"
        //"uniform sampler2DRect Data;                                                \n"
        "uniform sampler2D Data;                                                    \n"

        "in VertexData{                                                             \n"
        "    vec2 TexCoord;                                                 \n"
        "} FragmentIn;                                                              \n"
       
        "layout(location = 0) out vec4 Color;                                  \n"
        
        "void main(void)                                                            \n"
        "{                                                                          \n"
        "    ivec2 uv = ivec2(FragmentIn.TexCoord.x, FragmentIn.TexCoord.y);        \n"

        "    Color = texelFetch(Data, uv, 0);                                          \n"
        "}                                                                          \n";

    renderShader.setVertexShader(vertexshadersrc);
    renderShader.setFragmentShader(fragmentshader);
    renderShader.build();

    renderGrayShader.setVertexShader(vertexshadersrc);
    renderGrayShader.setFragmentShader(grayfragmentshader);
    renderGrayShader.build();


    glfwSetWindowUserPointer(window, this);
    glfwSetKeyCallback(window, Viewer::key_callbackstatic);
    glfwSetWindowSizeCallback(window, Viewer::winsize_callbackstatic);

    shouldStop = false;
}

void Viewer::winsize_callbackstatic(GLFWwindow* window, int w, int h)
{
    Viewer* viewer = reinterpret_cast<Viewer*>(glfwGetWindowUserPointer(window));
    viewer->winsize_callback(window, w, h);
}

void Viewer::winsize_callback(GLFWwindow* window, int w, int h)
{
    win_width = w/2;
    win_height = h/2;
}

void Viewer::key_callbackstatic(GLFWwindow* window, int key, int scancode, int action, int mods)
{
    Viewer* viewer = reinterpret_cast<Viewer*>(glfwGetWindowUserPointer(window));
    viewer->key_callback(window, key, scancode, action, mods);
}

void Viewer::key_callback(GLFWwindow* window, int key, int scancode, int action, int mods)
{
    if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
        shouldStop = true;
}

void Viewer::onOpenGLBindingsChanged(OpenGLESBindings *b)
{
    renderShader.gl(b);
    renderGrayShader.gl(b);
    rgb.gl(b);
    ir.gl(b);
}

bool Viewer::render()
{
    // wipe the drawing surface clear
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    GLint x = 0, y = 0;
    int fb_width, fb_width_half, fb_height, fb_height_half;

    std::map<std::string, libfreenect2::Frame*>::iterator iter;

    for (iter = frames.begin(); iter != frames.end(); ++iter)
    {
        libfreenect2::Frame* frame = iter->second;

        // Using the frame buffer size to account for screens where window.size != framebuffer.size, e.g. retina displays
        glfwGetFramebufferSize(window, &fb_width, &fb_height);
        fb_width_half = (fb_width + 1) / 2;
        fb_height_half = (fb_height + 1) / 2;

        glViewport(x, y, fb_width_half, fb_height_half);
        x += fb_width_half;
        if (x >= (fb_width - 1))
        {
            x = 0;
            y += fb_height_half;
        }

        float w = static_cast<float>(frame->width);
        float h = static_cast<float>(frame->height);

        Vertex bl = { -1.0f, -1.0f, 0.0f, 0.0f };
        Vertex br = { 1.0f, -1.0f, w, 0.0f }; 
        Vertex tl = { -1.0f, 1.0f, 0.0f, h };
        Vertex tr = { 1.0f, 1.0f, w, h };
        Vertex vertices[] = {
            bl, tl, tr, 
            tr, br, bl
        };

        gl()->glGenBuffers(1, &triangle_vbo);
        gl()->glGenVertexArrays(1, &triangle_vao);

        gl()->glBindVertexArray(triangle_vao);
        gl()->glBindBuffer(GL_ARRAY_BUFFER, triangle_vbo);
        gl()->glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
        //glGenBuffers(1, &triangle_vbo);
        //glGenVertexArrays(1, &triangle_vao);

        //glBindVertexArray(triangle_vao);
        //glBindBuffer(GL_ARRAY_BUFFER, triangle_vbo);
        //glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);


        GLint position_attr = renderShader.getAttributeLocation("Position");
        gl()->glVertexAttribPointer(position_attr, 2, GL_FLOAT, GL_FALSE, sizeof(Vertex), (GLvoid*)0);
        gl()->glEnableVertexAttribArray(position_attr);
        //glVertexAttribPointer(position_attr, 2, GL_FLOAT, GL_FALSE, sizeof(Vertex), (GLvoid*)0);
        //glEnableVertexAttribArray(position_attr);

        GLint texcoord_attr = renderShader.getAttributeLocation("TexCoord");
        gl()->glVertexAttribPointer(texcoord_attr, 2, GL_FLOAT, GL_FALSE, sizeof(Vertex), (GLvoid*)(2 * sizeof(float)));
        gl()->glEnableVertexAttribArray(texcoord_attr);
        //glVertexAttribPointer(texcoord_attr, 2, GL_FLOAT, GL_FALSE, sizeof(Vertex), (GLvoid*)(2 * sizeof(float)));
        //glEnableVertexAttribArray(texcoord_attr);

        if (iter->first == "RGB" || iter->first == "registered")
        {
            renderShader.use();

            rgb.allocate(frame->width, frame->height);
            std::copy(frame->data, frame->data + frame->width * frame->height * frame->bytes_per_pixel, rgb.data);
            rgb.flipY();
            rgb.upload();
            glDrawArrays(GL_TRIANGLES, 0, 6);

            rgb.deallocate();

        }
        else
        {
            renderGrayShader.use();

            ir.allocate(frame->width, frame->height);
            std::copy(frame->data, frame->data + frame->width * frame->height * frame->bytes_per_pixel, ir.data);
            ir.flipY();
            ir.upload();
            glDrawArrays(GL_TRIANGLES, 0, 6);
            ir.deallocate();
        }

        gl()->glDeleteBuffers(1, &triangle_vbo);
        gl()->glDeleteVertexArrays(1, &triangle_vao);
        //glDeleteBuffers(1, &triangle_vbo);
        //glDeleteVertexArrays(1, &triangle_vao);

    }

    // put the stuff we've been drawing onto the display
    glfwSwapBuffers(window);
    // update other events like input handling 
    glfwPollEvents();

    return shouldStop || glfwWindowShouldClose(window);
}

void Viewer::addFrame(std::string id, libfreenect2::Frame* frame)
{
    frames[id] = frame;
}
