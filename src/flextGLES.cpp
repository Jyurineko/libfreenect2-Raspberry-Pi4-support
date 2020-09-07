#define GLFW_INCLUDE_ES31
#include "flextGLES.h"
//#define GLFW_INCLUDE_GLEXT
#include "GLFW/glfw3.h"

#ifdef __cplusplus
extern "C" {
#endif

void flextESInit(OpenGLESBindings* esbindings)
{
	
	esbindings->glDrawRangeElements = (PFNGLDRAWRANGEELEMENTSPROC*)glfwGetProcAddress("glDrawRangeElements");
	esbindings->glTexImage3D = (PFNGLTEXIMAGE3DPROC*)glfwGetProcAddress("glTexImage3D");
	esbindings->glTexSubImage3D = (PFNGLTEXSUBIMAGE3DPROC*)glfwGetProcAddress("glTexSubImage3D");
	esbindings->glCopyTexSubImage3D = (PFNGLCOPYTEXSUBIMAGE3DPROC*)glfwGetProcAddress("glCopyTexSubImage3D");

	esbindings->glActiveTexture = (PFNGLACTIVETEXTUREPROC*)glfwGetProcAddress("glActiveTexture");
	esbindings->glSampleCoverage = (PFNGLSAMPLECOVERAGEPROC*)glfwGetProcAddress("glSampleCoverage");
	esbindings->glCompressedTexImage3D = (PFNGLCOMPRESSEDTEXIMAGE3DPROC*)glfwGetProcAddress("glCompressedTexImage3D");
	esbindings->glCompressedTexImage2D = (PFNGLCOMPRESSEDTEXIMAGE2DPROC*)glfwGetProcAddress("glCompressedTexImage2D");
	esbindings->glCompressedTexSubImage3D = (PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC*)glfwGetProcAddress("glCompressedTexSubImage3D");
	esbindings->glCompressedTexSubImage2D = (PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC*)glfwGetProcAddress("glCompressedTexSubImage2D");

	esbindings->glBlendFuncSeparate = (PFNGLBLENDFUNCSEPARATEPROC*)glfwGetProcAddress("glBlendFuncSeparate");
	esbindings->glBlendColor = (PFNGLBLENDCOLORPROC*)glfwGetProcAddress("glBlendColor");
	esbindings->glBlendEquation = (PFNGLBLENDEQUATIONPROC*)glfwGetProcAddress("glBlendEquation");
	
	esbindings->glGenQueries = (PFNGLGENQUERIESPROC*)glfwGetProcAddress("glGenQueries");
	esbindings->glDeleteQueries = (PFNGLDELETEQUERIESPROC*)glfwGetProcAddress("glDeleteQueries");
	esbindings->glIsQuery = (PFNGLISQUERYPROC*)glfwGetProcAddress("glIsQuery");
	esbindings->glBeginQuery = (PFNGLBEGINQUERYPROC*)glfwGetProcAddress("glBeginQuery");
	esbindings->glEndQuery = (PFNGLENDQUERYPROC*)glfwGetProcAddress("glEndQuery");
	esbindings->glGetQueryiv = (PFNGLGETQUERYIVPROC*)glfwGetProcAddress("glGetQueryiv");
	esbindings->glGetQueryObjectuiv = (PFNGLGETQUERYOBJECTUIVPROC*)glfwGetProcAddress("glGetQueryObjectuiv");
	esbindings->glBindBuffer = (PFNGLBINDBUFFERPROC*)glfwGetProcAddress("glBindBuffer");
	esbindings->glDeleteBuffers = (PFNGLDELETEBUFFERSPROC*)glfwGetProcAddress("glDeleteBuffers");
	esbindings->glGenBuffers = (PFNGLGENBUFFERSPROC*)glfwGetProcAddress("glGenBuffers");
	esbindings->glIsBuffer = (PFNGLISBUFFERPROC*)glfwGetProcAddress("glIsBuffer");
	esbindings->glBufferData = (PFNGLBUFFERDATAPROC*)glfwGetProcAddress("glBufferData");
	esbindings->glBufferSubData = (PFNGLBUFFERSUBDATAPROC*)glfwGetProcAddress("glBufferSubData");
	esbindings->glUnmapBuffer = (PFNGLUNMAPBUFFERPROC*)glfwGetProcAddress("glUnmapBuffer");
	esbindings->glGetBufferParameteriv = (PFNGLGETBUFFERPARAMETERIVPROC*)glfwGetProcAddress("glGetBufferParameteriv");
	esbindings->glGetBufferPointerv = (PFNGLGETBUFFERPOINTERVPROC*)glfwGetProcAddress("glGetBufferPointerv");

	esbindings->glBlendEquationSeparate = (PFNGLBLENDEQUATIONSEPARATEPROC*)glfwGetProcAddress("glBlendEquationSeparate");
	esbindings->glDrawBuffers = (PFNGLDRAWBUFFERSPROC*)glfwGetProcAddress("glDrawBuffers");
	esbindings->glStencilOpSeparate = (PFNGLSTENCILOPSEPARATEPROC*)glfwGetProcAddress("glStencilOpSeparate");
	esbindings->glStencilFuncSeparate = (PFNGLSTENCILFUNCSEPARATEPROC*)glfwGetProcAddress("glStencilFuncSeparate");
	esbindings->glStencilMaskSeparate = (PFNGLSTENCILMASKSEPARATEPROC*)glfwGetProcAddress("glStencilMaskSeparate");
	esbindings->glAttachShader = (PFNGLATTACHSHADERPROC*)glfwGetProcAddress("glAttachShader");
	esbindings->glBindAttribLocation = (PFNGLBINDATTRIBLOCATIONPROC*)glfwGetProcAddress("glBindAttribLocation");
	esbindings->glCompileShader = (PFNGLCOMPILESHADERPROC*)glfwGetProcAddress("glCompileShader");
	esbindings->glCreateProgram = (PFNGLCREATEPROGRAMPROC*)glfwGetProcAddress("glCreateProgram");
	esbindings->glCreateShader = (PFNGLCREATESHADERPROC*)glfwGetProcAddress("glCreateShader");
	esbindings->glDeleteProgram = (PFNGLDELETEPROGRAMPROC*)glfwGetProcAddress("glDeleteProgram");
	esbindings->glDeleteShader = (PFNGLDELETESHADERPROC*)glfwGetProcAddress("glDeleteShader");
	esbindings->glDetachShader = (PFNGLDETACHSHADERPROC*)glfwGetProcAddress("glDetachShader");
	esbindings->glDisableVertexAttribArray = (PFNGLDISABLEVERTEXATTRIBARRAYPROC*)glfwGetProcAddress("glDisableVertexAttribArray");
	esbindings->glEnableVertexAttribArray = (PFNGLENABLEVERTEXATTRIBARRAYPROC*)glfwGetProcAddress("glEnableVertexAttribArray");
	esbindings->glGetActiveAttrib = (PFNGLGETACTIVEATTRIBPROC*)glfwGetProcAddress("glGetActiveAttrib");
	esbindings->glGetActiveUniform = (PFNGLGETACTIVEUNIFORMPROC*)glfwGetProcAddress("glGetActiveUniform");
	esbindings->glGetAttachedShaders = (PFNGLGETATTACHEDSHADERSPROC*)glfwGetProcAddress("glGetAttachedShaders");
	esbindings->glGetAttribLocation = (PFNGLGETATTRIBLOCATIONPROC*)glfwGetProcAddress("glGetAttribLocation");
	esbindings->glGetProgramiv = (PFNGLGETPROGRAMIVPROC*)glfwGetProcAddress("glGetProgramiv");
	esbindings->glGetProgramInfoLog = (PFNGLGETPROGRAMINFOLOGPROC*)glfwGetProcAddress("glGetProgramInfoLog");
	esbindings->glGetShaderiv = (PFNGLGETSHADERIVPROC*)glfwGetProcAddress("glGetShaderiv");
	esbindings->glGetShaderInfoLog = (PFNGLGETSHADERINFOLOGPROC*)glfwGetProcAddress("glGetShaderInfoLog");
	esbindings->glGetShaderSource = (PFNGLGETSHADERSOURCEPROC*)glfwGetProcAddress("glGetShaderSource");
	esbindings->glGetUniformLocation = (PFNGLGETUNIFORMLOCATIONPROC*)glfwGetProcAddress("glGetUniformLocation");
	esbindings->glGetUniformfv = (PFNGLGETUNIFORMFVPROC*)glfwGetProcAddress("glGetUniformfv");
	esbindings->glGetUniformiv = (PFNGLGETUNIFORMIVPROC*)glfwGetProcAddress("glGetUniformiv");
	esbindings->glGetVertexAttribfv = (PFNGLGETVERTEXATTRIBFVPROC*)glfwGetProcAddress("glGetVertexAttribfv");
	esbindings->glGetVertexAttribiv = (PFNGLGETVERTEXATTRIBIVPROC*)glfwGetProcAddress("glGetVertexAttribiv");
	esbindings->glGetVertexAttribPointerv = (PFNGLGETVERTEXATTRIBPOINTERVPROC*)glfwGetProcAddress("glGetVertexAttribPointerv");
	esbindings->glIsProgram = (PFNGLISPROGRAMPROC*)glfwGetProcAddress("glIsProgram");
	esbindings->glIsShader = (PFNGLISSHADERPROC*)glfwGetProcAddress("glIsShader");
	esbindings->glLinkProgram = (PFNGLLINKPROGRAMPROC*)glfwGetProcAddress("glLinkProgram");
	esbindings->glShaderSource = (PFNGLSHADERSOURCEPROC*)glfwGetProcAddress("glShaderSource");
	esbindings->glUseProgram = (PFNGLUSEPROGRAMPROC*)glfwGetProcAddress("glUseProgram");
	esbindings->glUniform1f = (PFNGLUNIFORM1FPROC*)glfwGetProcAddress("glUniform1f");
	esbindings->glUniform2f = (PFNGLUNIFORM2FPROC*)glfwGetProcAddress("glUniform2f");
	esbindings->glUniform3f = (PFNGLUNIFORM3FPROC*)glfwGetProcAddress("glUniform3f");
	esbindings->glUniform4f = (PFNGLUNIFORM4FPROC*)glfwGetProcAddress("glUniform4f");
	esbindings->glUniform1i = (PFNGLUNIFORM1IPROC*)glfwGetProcAddress("glUniform1i");
	esbindings->glUniform2i = (PFNGLUNIFORM2IPROC*)glfwGetProcAddress("glUniform2i");
	esbindings->glUniform3i = (PFNGLUNIFORM3IPROC*)glfwGetProcAddress("glUniform3i");
	esbindings->glUniform4i = (PFNGLUNIFORM4IPROC*)glfwGetProcAddress("glUniform4i");
	esbindings->glUniform1fv = (PFNGLUNIFORM1FVPROC*)glfwGetProcAddress("glUniform1fv");
	esbindings->glUniform2fv = (PFNGLUNIFORM2FVPROC*)glfwGetProcAddress("glUniform2fv");
	esbindings->glUniform3fv = (PFNGLUNIFORM3FVPROC*)glfwGetProcAddress("glUniform3fv");
	esbindings->glUniform4fv = (PFNGLUNIFORM4FVPROC*)glfwGetProcAddress("glUniform4fv");
	esbindings->glUniform1iv = (PFNGLUNIFORM1IVPROC*)glfwGetProcAddress("glUniform1iv");
	esbindings->glUniform2iv = (PFNGLUNIFORM2IVPROC*)glfwGetProcAddress("glUniform2iv");
	esbindings->glUniform3iv = (PFNGLUNIFORM3IVPROC*)glfwGetProcAddress("glUniform3iv");
	esbindings->glUniform4iv = (PFNGLUNIFORM4IVPROC*)glfwGetProcAddress("glUniform4iv");
	esbindings->glUniformMatrix2fv = (PFNGLUNIFORMMATRIX2FVPROC*)glfwGetProcAddress("glUniformMatrix2fv");
	esbindings->glUniformMatrix3fv = (PFNGLUNIFORMMATRIX3FVPROC*)glfwGetProcAddress("glUniformMatrix3fv");
	esbindings->glUniformMatrix4fv = (PFNGLUNIFORMMATRIX4FVPROC*)glfwGetProcAddress("glUniformMatrix4fv");
	esbindings->glValidateProgram = (PFNGLVALIDATEPROGRAMPROC*)glfwGetProcAddress("glValidateProgram");
	esbindings->glVertexAttrib1f = (PFNGLVERTEXATTRIB1FPROC*)glfwGetProcAddress("glVertexAttrib1f");
	esbindings->glVertexAttrib1fv = (PFNGLVERTEXATTRIB1FVPROC*)glfwGetProcAddress("glVertexAttrib1fv");
	esbindings->glVertexAttrib2f = (PFNGLVERTEXATTRIB2FPROC*)glfwGetProcAddress("glVertexAttrib2f");
	esbindings->glVertexAttrib2fv = (PFNGLVERTEXATTRIB2FVPROC*)glfwGetProcAddress("glVertexAttrib2fv");
	esbindings->glVertexAttrib3f = (PFNGLVERTEXATTRIB3FPROC*)glfwGetProcAddress("glVertexAttrib3f");
	esbindings->glVertexAttrib3fv = (PFNGLVERTEXATTRIB3FVPROC*)glfwGetProcAddress("glVertexAttrib3fv");
	esbindings->glVertexAttrib4f = (PFNGLVERTEXATTRIB4FPROC*)glfwGetProcAddress("glVertexAttrib4f");
	esbindings->glVertexAttrib4fv = (PFNGLVERTEXATTRIB4FVPROC*)glfwGetProcAddress("glVertexAttrib4fv");
	esbindings->glVertexAttribPointer = (PFNGLVERTEXATTRIBPOINTERPROC*)glfwGetProcAddress("glVertexAttribPointer");

	esbindings->glUniformMatrix2x3fv = (PFNGLUNIFORMMATRIX2X3FVPROC*)glfwGetProcAddress("glUniformMatrix2x3fv");
	esbindings->glUniformMatrix3x2fv = (PFNGLUNIFORMMATRIX3X2FVPROC*)glfwGetProcAddress("glUniformMatrix3x2fv");
	esbindings->glUniformMatrix2x4fv = (PFNGLUNIFORMMATRIX2X4FVPROC*)glfwGetProcAddress("glUniformMatrix2x4fv");
	esbindings->glUniformMatrix4x2fv = (PFNGLUNIFORMMATRIX4X2FVPROC*)glfwGetProcAddress("glUniformMatrix4x2fv");
	esbindings->glUniformMatrix3x4fv = (PFNGLUNIFORMMATRIX3X4FVPROC*)glfwGetProcAddress("glUniformMatrix3x4fv");
	esbindings->glUniformMatrix4x3fv = (PFNGLUNIFORMMATRIX4X3FVPROC*)glfwGetProcAddress("glUniformMatrix4x3fv");

	esbindings->glGetIntegeri_v = (PFNGLGETINTEGERI_VPROC*)glfwGetProcAddress("glGetIntegeri_v");
	esbindings->glBeginTransformFeedback = (PFNGLBEGINTRANSFORMFEEDBACKPROC*)glfwGetProcAddress("glBeginTransformFeedback");
	esbindings->glEndTransformFeedback = (PFNGLENDTRANSFORMFEEDBACKPROC*)glfwGetProcAddress("glEndTransformFeedback");
	esbindings->glBindBufferRange = (PFNGLBINDBUFFERRANGEPROC*)glfwGetProcAddress("glBindBufferRange");
	esbindings->glBindBufferBase = (PFNGLBINDBUFFERBASEPROC*)glfwGetProcAddress("glBindBufferBase");
	esbindings->glTransformFeedbackVaryings = (PFNGLTRANSFORMFEEDBACKVARYINGSPROC*)glfwGetProcAddress("glTransformFeedbackVaryings");
	esbindings->glGetTransformFeedbackVarying = (PFNGLGETTRANSFORMFEEDBACKVARYINGPROC*)glfwGetProcAddress("glGetTransformFeedbackVarying");
	esbindings->glVertexAttribIPointer = (PFNGLVERTEXATTRIBIPOINTERPROC*)glfwGetProcAddress("glVertexAttribIPointer");
	esbindings->glGetVertexAttribIiv = (PFNGLGETVERTEXATTRIBIIVPROC*)glfwGetProcAddress("glGetVertexAttribIiv");
	esbindings->glGetVertexAttribIuiv = (PFNGLGETVERTEXATTRIBIUIVPROC*)glfwGetProcAddress("glGetVertexAttribIuiv");
	esbindings->glVertexAttribI4i = (PFNGLVERTEXATTRIBI4IPROC*)glfwGetProcAddress("glVertexAttribI4i");
	esbindings->glVertexAttribI4ui = (PFNGLVERTEXATTRIBI4UIPROC*)glfwGetProcAddress("glVertexAttribI4ui");
	esbindings->glVertexAttribI4iv = (PFNGLVERTEXATTRIBI4IVPROC*)glfwGetProcAddress("glVertexAttribI4iv");
	esbindings->glVertexAttribI4uiv = (PFNGLVERTEXATTRIBI4UIVPROC*)glfwGetProcAddress("glVertexAttribI4uiv");
	esbindings->glGetUniformuiv = (PFNGLGETUNIFORMUIVPROC*)glfwGetProcAddress("glGetUniformuiv");
	esbindings->glGetFragDataLocation = (PFNGLGETFRAGDATALOCATIONPROC*)glfwGetProcAddress("glGetFragDataLocation");
	esbindings->glUniform1ui = (PFNGLUNIFORM1UIPROC*)glfwGetProcAddress("glUniform1ui");
	esbindings->glUniform2ui = (PFNGLUNIFORM2UIPROC*)glfwGetProcAddress("glUniform2ui");
	esbindings->glUniform3ui = (PFNGLUNIFORM3UIPROC*)glfwGetProcAddress("glUniform3ui");
	esbindings->glUniform4ui = (PFNGLUNIFORM4UIPROC*)glfwGetProcAddress("glUniform4ui");
	esbindings->glUniform1uiv = (PFNGLUNIFORM1UIVPROC*)glfwGetProcAddress("glUniform1uiv");
	esbindings->glUniform2uiv = (PFNGLUNIFORM2UIVPROC*)glfwGetProcAddress("glUniform2uiv");
	esbindings->glUniform3uiv = (PFNGLUNIFORM3UIVPROC*)glfwGetProcAddress("glUniform3uiv");
	esbindings->glUniform4uiv = (PFNGLUNIFORM4UIVPROC*)glfwGetProcAddress("glUniform4uiv");
	esbindings->glClearBufferiv = (PFNGLCLEARBUFFERIVPROC*)glfwGetProcAddress("glClearBufferiv");
	esbindings->glClearBufferuiv = (PFNGLCLEARBUFFERUIVPROC*)glfwGetProcAddress("glClearBufferuiv");
	esbindings->glClearBufferfv = (PFNGLCLEARBUFFERFVPROC*)glfwGetProcAddress("glClearBufferfv");
	esbindings->glClearBufferfi = (PFNGLCLEARBUFFERFIPROC*)glfwGetProcAddress("glClearBufferfi");
	esbindings->glGetStringi = (PFNGLGETSTRINGIPROC*)glfwGetProcAddress("glGetStringi");
	esbindings->glIsRenderbuffer = (PFNGLISRENDERBUFFERPROC*)glfwGetProcAddress("glIsRenderbuffer");
	esbindings->glBindRenderbuffer = (PFNGLBINDRENDERBUFFERPROC*)glfwGetProcAddress("glBindRenderbuffer");
	esbindings->glDeleteRenderbuffers = (PFNGLDELETERENDERBUFFERSPROC*)glfwGetProcAddress("glDeleteRenderbuffers");
	esbindings->glGenRenderbuffers = (PFNGLGENRENDERBUFFERSPROC*)glfwGetProcAddress("glGenRenderbuffers");
	esbindings->glRenderbufferStorage = (PFNGLRENDERBUFFERSTORAGEPROC*)glfwGetProcAddress("glRenderbufferStorage");
	esbindings->glGetRenderbufferParameteriv = (PFNGLGETRENDERBUFFERPARAMETERIVPROC*)glfwGetProcAddress("glGetRenderbufferParameteriv");
	esbindings->glIsFramebuffer = (PFNGLISFRAMEBUFFERPROC*)glfwGetProcAddress("glIsFramebuffer");
	esbindings->glBindFramebuffer = (PFNGLBINDFRAMEBUFFERPROC*)glfwGetProcAddress("glBindFramebuffer");
	esbindings->glDeleteFramebuffers = (PFNGLDELETEFRAMEBUFFERSPROC*)glfwGetProcAddress("glDeleteFramebuffers");
	esbindings->glGenFramebuffers = (PFNGLGENFRAMEBUFFERSPROC*)glfwGetProcAddress("glGenFramebuffers");
	esbindings->glCheckFramebufferStatus = (PFNGLCHECKFRAMEBUFFERSTATUSPROC*)glfwGetProcAddress("glCheckFramebufferStatus");
	esbindings->glFramebufferTexture2D = (PFNGLFRAMEBUFFERTEXTURE2DPROC*)glfwGetProcAddress("glFramebufferTexture2D");
	esbindings->glFramebufferRenderbuffer = (PFNGLFRAMEBUFFERRENDERBUFFERPROC*)glfwGetProcAddress("glFramebufferRenderbuffer");
	esbindings->glGetFramebufferAttachmentParameteriv = (PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC*)glfwGetProcAddress("glGetFramebufferAttachmentParameteriv");
	esbindings->glGenerateMipmap = (PFNGLGENERATEMIPMAPPROC*)glfwGetProcAddress("glGenerateMipmap");
	esbindings->glBlitFramebuffer = (PFNGLBLITFRAMEBUFFERPROC*)glfwGetProcAddress("glBlitFramebuffer");
	esbindings->glRenderbufferStorageMultisample = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC*)glfwGetProcAddress("glRenderbufferStorageMultisample");
	esbindings->glFramebufferTextureLayer = (PFNGLFRAMEBUFFERTEXTURELAYERPROC*)glfwGetProcAddress("glFramebufferTextureLayer");
	esbindings->glMapBufferRange = (PFNGLMAPBUFFERRANGEPROC*)glfwGetProcAddress("glMapBufferRange");
	esbindings->glFlushMappedBufferRange = (PFNGLFLUSHMAPPEDBUFFERRANGEPROC*)glfwGetProcAddress("glFlushMappedBufferRange");
	esbindings->glBindVertexArray = (PFNGLBINDVERTEXARRAYPROC*)glfwGetProcAddress("glBindVertexArray");
	esbindings->glDeleteVertexArrays = (PFNGLDELETEVERTEXARRAYSPROC*)glfwGetProcAddress("glDeleteVertexArrays");
	esbindings->glGenVertexArrays = (PFNGLGENVERTEXARRAYSPROC*)glfwGetProcAddress("glGenVertexArrays");
	esbindings->glIsVertexArray = (PFNGLISVERTEXARRAYPROC*)glfwGetProcAddress("glIsVertexArray");

	esbindings->glDrawArraysInstanced = (PFNGLDRAWARRAYSINSTANCEDPROC*)glfwGetProcAddress("glDrawArraysInstanced");
	esbindings->glDrawElementsInstanced = (PFNGLDRAWELEMENTSINSTANCEDPROC*)glfwGetProcAddress("glDrawElementsInstanced");
	esbindings->glCopyBufferSubData = (PFNGLCOPYBUFFERSUBDATAPROC*)glfwGetProcAddress("glCopyBufferSubData");
	esbindings->glGetUniformIndices = (PFNGLGETUNIFORMINDICESPROC*)glfwGetProcAddress("glGetUniformIndices");
	esbindings->glGetActiveUniformsiv = (PFNGLGETACTIVEUNIFORMSIVPROC*)glfwGetProcAddress("glGetActiveUniformsiv");
	esbindings->glGetUniformBlockIndex = (PFNGLGETUNIFORMBLOCKINDEXPROC*)glfwGetProcAddress("glGetUniformBlockIndex");
	esbindings->glGetActiveUniformBlockiv = (PFNGLGETACTIVEUNIFORMBLOCKIVPROC*)glfwGetProcAddress("glGetActiveUniformBlockiv");
	esbindings->glGetActiveUniformBlockName = (PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC*)glfwGetProcAddress("glGetActiveUniformBlockName");
	esbindings->glUniformBlockBinding = (PFNGLUNIFORMBLOCKBINDINGPROC*)glfwGetProcAddress("glUniformBlockBinding");


}



#ifdef __cplusplus
}
#endif // __cplusplus
