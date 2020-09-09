precision highp float;
precision highp sampler2D;

//uniform sampler2DRect Data;

uniform sampler2D Data;

in vec2 TexCoord;

out vec4 Color;

void main(void)
{
  ivec2 uv = ivec2(TexCoord.x, TexCoord.y);
  
  Color = texelFetch(Data, uv, 0);
}
