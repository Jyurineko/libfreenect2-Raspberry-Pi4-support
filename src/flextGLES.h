#ifndef __gl_h_
#define __gl_h_

#include <KHR/khrplatform.h>

#ifdef __cplusplus
extern "C" {
#endif

	/* Function declaration macros - to move into glplatform.h */

#if defined(_WIN32) && !defined(APIENTRY) && !defined(__CYGWIN__) && !defined(__SCITECH_SNAP__)
#define WIN32_LEAN_AND_MEAN 1
#ifndef WINAPI
#define WINAPI __stdcall
#endif
#define APIENTRY WINAPI
#endif

#ifndef APIENTRY
#define APIENTRY
#endif
#ifndef APIENTRYP
#define APIENTRYP APIENTRY *
#endif
#ifndef GLAPI
#define GLAPI extern
#endif

/* ------------------------------- DATA TYPES ------------------------------ */

typedef khronos_int8_t GLbyte;
typedef khronos_float_t GLclampf;
typedef khronos_int32_t GLfixed;
typedef short GLshort;
typedef unsigned short GLushort;
typedef void GLvoid;
typedef struct __GLsync* GLsync;
typedef khronos_int64_t GLint64;
typedef khronos_uint64_t GLuint64;
typedef unsigned int GLenum;
typedef unsigned int GLuint;
typedef char GLchar;
typedef khronos_float_t GLfloat;
typedef khronos_ssize_t GLsizeiptr;
typedef khronos_intptr_t GLintptr;
typedef unsigned int GLbitfield;
typedef int GLint;
typedef unsigned char GLboolean;
typedef int GLsizei;
typedef khronos_uint8_t GLubyte;
typedef unsigned short GLhalf;


/* ---------------------------------- ENUMS -------------------------------- */

/* GL_ES_VERSION_2_0 */

#define GL_DEPTH_BUFFER_BIT 0x00000100
#define GL_STENCIL_BUFFER_BIT 0x00000400
#define GL_COLOR_BUFFER_BIT 0x00004000
#define GL_FALSE 0
#define GL_TRUE 1
#define GL_POINTS 0x0000
#define GL_LINES 0x0001
#define GL_LINE_LOOP 0x0002
#define GL_LINE_STRIP 0x0003
#define GL_TRIANGLES 0x0004
#define GL_TRIANGLE_STRIP 0x0005
#define GL_TRIANGLE_FAN 0x0006
#define GL_ZERO 0
#define GL_ONE 1
#define GL_SRC_COLOR 0x0300
#define GL_ONE_MINUS_SRC_COLOR 0x0301
#define GL_SRC_ALPHA 0x0302
#define GL_ONE_MINUS_SRC_ALPHA 0x0303
#define GL_DST_ALPHA 0x0304
#define GL_ONE_MINUS_DST_ALPHA 0x0305
#define GL_DST_COLOR 0x0306
#define GL_ONE_MINUS_DST_COLOR 0x0307
#define GL_SRC_ALPHA_SATURATE 0x0308
#define GL_FUNC_ADD 0x8006
#define GL_BLEND_EQUATION 0x8009
#define GL_BLEND_EQUATION_RGB 0x8009
#define GL_BLEND_EQUATION_ALPHA 0x883D
#define GL_FUNC_SUBTRACT 0x800A
#define GL_FUNC_REVERSE_SUBTRACT 0x800B
#define GL_BLEND_DST_RGB 0x80C8
#define GL_BLEND_SRC_RGB 0x80C9
#define GL_BLEND_DST_ALPHA 0x80CA
#define GL_BLEND_SRC_ALPHA 0x80CB
#define GL_CONSTANT_COLOR 0x8001
#define GL_ONE_MINUS_CONSTANT_COLOR 0x8002
#define GL_CONSTANT_ALPHA 0x8003
#define GL_ONE_MINUS_CONSTANT_ALPHA 0x8004
#define GL_BLEND_COLOR 0x8005
#define GL_ARRAY_BUFFER 0x8892
#define GL_ELEMENT_ARRAY_BUFFER 0x8893
#define GL_ARRAY_BUFFER_BINDING 0x8894
#define GL_ELEMENT_ARRAY_BUFFER_BINDING 0x8895
#define GL_STREAM_DRAW 0x88E0
#define GL_STATIC_DRAW 0x88E4
#define GL_DYNAMIC_DRAW 0x88E8
#define GL_BUFFER_SIZE 0x8764
#define GL_BUFFER_USAGE 0x8765
#define GL_CURRENT_VERTEX_ATTRIB 0x8626
#define GL_FRONT 0x0404
#define GL_BACK 0x0405
#define GL_FRONT_AND_BACK 0x0408
#define GL_TEXTURE_2D 0x0DE1
#define GL_CULL_FACE 0x0B44
#define GL_BLEND 0x0BE2
#define GL_DITHER 0x0BD0
#define GL_STENCIL_TEST 0x0B90
#define GL_DEPTH_TEST 0x0B71
#define GL_SCISSOR_TEST 0x0C11
#define GL_POLYGON_OFFSET_FILL 0x8037
#define GL_SAMPLE_ALPHA_TO_COVERAGE 0x809E
#define GL_SAMPLE_COVERAGE 0x80A0
#define GL_NO_ERROR 0
#define GL_INVALID_ENUM 0x0500
#define GL_INVALID_VALUE 0x0501
#define GL_INVALID_OPERATION 0x0502
#define GL_OUT_OF_MEMORY 0x0505
#define GL_CW 0x0900
#define GL_CCW 0x0901
#define GL_LINE_WIDTH 0x0B21
#define GL_ALIASED_POINT_SIZE_RANGE 0x846D
#define GL_ALIASED_LINE_WIDTH_RANGE 0x846E
#define GL_CULL_FACE_MODE 0x0B45
#define GL_FRONT_FACE 0x0B46
#define GL_DEPTH_RANGE 0x0B70
#define GL_DEPTH_WRITEMASK 0x0B72
#define GL_DEPTH_CLEAR_VALUE 0x0B73
#define GL_DEPTH_FUNC 0x0B74
#define GL_STENCIL_CLEAR_VALUE 0x0B91
#define GL_STENCIL_FUNC 0x0B92
#define GL_STENCIL_FAIL 0x0B94
#define GL_STENCIL_PASS_DEPTH_FAIL 0x0B95
#define GL_STENCIL_PASS_DEPTH_PASS 0x0B96
#define GL_STENCIL_REF 0x0B97
#define GL_STENCIL_VALUE_MASK 0x0B93
#define GL_STENCIL_WRITEMASK 0x0B98
#define GL_STENCIL_BACK_FUNC 0x8800
#define GL_STENCIL_BACK_FAIL 0x8801
#define GL_STENCIL_BACK_PASS_DEPTH_FAIL 0x8802
#define GL_STENCIL_BACK_PASS_DEPTH_PASS 0x8803
#define GL_STENCIL_BACK_REF 0x8CA3
#define GL_STENCIL_BACK_VALUE_MASK 0x8CA4
#define GL_STENCIL_BACK_WRITEMASK 0x8CA5
#define GL_VIEWPORT 0x0BA2
#define GL_SCISSOR_BOX 0x0C10
#define GL_COLOR_CLEAR_VALUE 0x0C22
#define GL_COLOR_WRITEMASK 0x0C23
#define GL_UNPACK_ALIGNMENT 0x0CF5
#define GL_PACK_ALIGNMENT 0x0D05
#define GL_MAX_TEXTURE_SIZE 0x0D33
#define GL_MAX_VIEWPORT_DIMS 0x0D3A
#define GL_SUBPIXEL_BITS 0x0D50
#define GL_RED_BITS 0x0D52
#define GL_GREEN_BITS 0x0D53
#define GL_BLUE_BITS 0x0D54
#define GL_ALPHA_BITS 0x0D55
#define GL_DEPTH_BITS 0x0D56
#define GL_STENCIL_BITS 0x0D57
#define GL_POLYGON_OFFSET_UNITS 0x2A00
#define GL_POLYGON_OFFSET_FACTOR 0x8038
#define GL_TEXTURE_BINDING_2D 0x8069
#define GL_SAMPLE_BUFFERS 0x80A8
#define GL_SAMPLES 0x80A9
#define GL_SAMPLE_COVERAGE_VALUE 0x80AA
#define GL_SAMPLE_COVERAGE_INVERT 0x80AB
#define GL_NUM_COMPRESSED_TEXTURE_FORMATS 0x86A2
#define GL_COMPRESSED_TEXTURE_FORMATS 0x86A3
#define GL_DONT_CARE 0x1100
#define GL_FASTEST 0x1101
#define GL_NICEST 0x1102
#define GL_GENERATE_MIPMAP_HINT 0x8192
#define GL_BYTE 0x1400
#define GL_UNSIGNED_BYTE 0x1401
#define GL_SHORT 0x1402
#define GL_UNSIGNED_SHORT 0x1403
#define GL_INT 0x1404
#define GL_UNSIGNED_INT 0x1405
#define GL_FLOAT 0x1406
#define GL_FIXED 0x140C
#define GL_DEPTH_COMPONENT 0x1902
#define GL_ALPHA 0x1906
#define GL_RGB 0x1907
#define GL_RGBA 0x1908
#define GL_LUMINANCE 0x1909
#define GL_LUMINANCE_ALPHA 0x190A
#define GL_UNSIGNED_SHORT_4_4_4_4 0x8033
#define GL_UNSIGNED_SHORT_5_5_5_1 0x8034
#define GL_UNSIGNED_SHORT_5_6_5 0x8363
#define GL_FRAGMENT_SHADER 0x8B30
#define GL_VERTEX_SHADER 0x8B31
#define GL_MAX_VERTEX_ATTRIBS 0x8869
#define GL_MAX_VERTEX_UNIFORM_VECTORS 0x8DFB
#define GL_MAX_VARYING_VECTORS 0x8DFC
#define GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS 0x8B4D
#define GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS 0x8B4C
#define GL_MAX_TEXTURE_IMAGE_UNITS 0x8872
#define GL_MAX_FRAGMENT_UNIFORM_VECTORS 0x8DFD
#define GL_SHADER_TYPE 0x8B4F
#define GL_DELETE_STATUS 0x8B80
#define GL_LINK_STATUS 0x8B82
#define GL_VALIDATE_STATUS 0x8B83
#define GL_ATTACHED_SHADERS 0x8B85
#define GL_ACTIVE_UNIFORMS 0x8B86
#define GL_ACTIVE_UNIFORM_MAX_LENGTH 0x8B87
#define GL_ACTIVE_ATTRIBUTES 0x8B89
#define GL_ACTIVE_ATTRIBUTE_MAX_LENGTH 0x8B8A
#define GL_SHADING_LANGUAGE_VERSION 0x8B8C
#define GL_CURRENT_PROGRAM 0x8B8D
#define GL_NEVER 0x0200
#define GL_LESS 0x0201
#define GL_EQUAL 0x0202
#define GL_LEQUAL 0x0203
#define GL_GREATER 0x0204
#define GL_NOTEQUAL 0x0205
#define GL_GEQUAL 0x0206
#define GL_ALWAYS 0x0207
#define GL_KEEP 0x1E00
#define GL_REPLACE 0x1E01
#define GL_INCR 0x1E02
#define GL_DECR 0x1E03
#define GL_INVERT 0x150A
#define GL_INCR_WRAP 0x8507
#define GL_DECR_WRAP 0x8508
#define GL_VENDOR 0x1F00
#define GL_RENDERER 0x1F01
#define GL_VERSION 0x1F02
#define GL_EXTENSIONS 0x1F03
#define GL_NEAREST 0x2600
#define GL_LINEAR 0x2601
#define GL_NEAREST_MIPMAP_NEAREST 0x2700
#define GL_LINEAR_MIPMAP_NEAREST 0x2701
#define GL_NEAREST_MIPMAP_LINEAR 0x2702
#define GL_LINEAR_MIPMAP_LINEAR 0x2703
#define GL_TEXTURE_MAG_FILTER 0x2800
#define GL_TEXTURE_MIN_FILTER 0x2801
#define GL_TEXTURE_WRAP_S 0x2802
#define GL_TEXTURE_WRAP_T 0x2803
#define GL_TEXTURE 0x1702
#define GL_TEXTURE_CUBE_MAP 0x8513
#define GL_TEXTURE_BINDING_CUBE_MAP 0x8514
#define GL_TEXTURE_CUBE_MAP_POSITIVE_X 0x8515
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_X 0x8516
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Y 0x8517
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Y 0x8518
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Z 0x8519
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Z 0x851A
#define GL_MAX_CUBE_MAP_TEXTURE_SIZE 0x851C
#define GL_TEXTURE0 0x84C0
#define GL_TEXTURE1 0x84C1
#define GL_TEXTURE2 0x84C2
#define GL_TEXTURE3 0x84C3
#define GL_TEXTURE4 0x84C4
#define GL_TEXTURE5 0x84C5
#define GL_TEXTURE6 0x84C6
#define GL_TEXTURE7 0x84C7
#define GL_TEXTURE8 0x84C8
#define GL_TEXTURE9 0x84C9
#define GL_TEXTURE10 0x84CA
#define GL_TEXTURE11 0x84CB
#define GL_TEXTURE12 0x84CC
#define GL_TEXTURE13 0x84CD
#define GL_TEXTURE14 0x84CE
#define GL_TEXTURE15 0x84CF
#define GL_TEXTURE16 0x84D0
#define GL_TEXTURE17 0x84D1
#define GL_TEXTURE18 0x84D2
#define GL_TEXTURE19 0x84D3
#define GL_TEXTURE20 0x84D4
#define GL_TEXTURE21 0x84D5
#define GL_TEXTURE22 0x84D6
#define GL_TEXTURE23 0x84D7
#define GL_TEXTURE24 0x84D8
#define GL_TEXTURE25 0x84D9
#define GL_TEXTURE26 0x84DA
#define GL_TEXTURE27 0x84DB
#define GL_TEXTURE28 0x84DC
#define GL_TEXTURE29 0x84DD
#define GL_TEXTURE30 0x84DE
#define GL_TEXTURE31 0x84DF
#define GL_ACTIVE_TEXTURE 0x84E0
#define GL_REPEAT 0x2901
#define GL_CLAMP_TO_EDGE 0x812F
#define GL_MIRRORED_REPEAT 0x8370
#define GL_FLOAT_VEC2 0x8B50
#define GL_FLOAT_VEC3 0x8B51
#define GL_FLOAT_VEC4 0x8B52
#define GL_INT_VEC2 0x8B53
#define GL_INT_VEC3 0x8B54
#define GL_INT_VEC4 0x8B55
#define GL_BOOL 0x8B56
#define GL_BOOL_VEC2 0x8B57
#define GL_BOOL_VEC3 0x8B58
#define GL_BOOL_VEC4 0x8B59
#define GL_FLOAT_MAT2 0x8B5A
#define GL_FLOAT_MAT3 0x8B5B
#define GL_FLOAT_MAT4 0x8B5C
#define GL_SAMPLER_2D 0x8B5E
#define GL_SAMPLER_CUBE 0x8B60
#define GL_VERTEX_ATTRIB_ARRAY_ENABLED 0x8622
#define GL_VERTEX_ATTRIB_ARRAY_SIZE 0x8623
#define GL_VERTEX_ATTRIB_ARRAY_STRIDE 0x8624
#define GL_VERTEX_ATTRIB_ARRAY_TYPE 0x8625
#define GL_VERTEX_ATTRIB_ARRAY_NORMALIZED 0x886A
#define GL_VERTEX_ATTRIB_ARRAY_POINTER 0x8645
#define GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING 0x889F
#define GL_IMPLEMENTATION_COLOR_READ_TYPE 0x8B9A
#define GL_IMPLEMENTATION_COLOR_READ_FORMAT 0x8B9B
#define GL_COMPILE_STATUS 0x8B81
#define GL_INFO_LOG_LENGTH 0x8B84
#define GL_SHADER_SOURCE_LENGTH 0x8B88
#define GL_SHADER_COMPILER 0x8DFA
#define GL_SHADER_BINARY_FORMATS 0x8DF8
#define GL_NUM_SHADER_BINARY_FORMATS 0x8DF9
#define GL_LOW_FLOAT 0x8DF0
#define GL_MEDIUM_FLOAT 0x8DF1
#define GL_HIGH_FLOAT 0x8DF2
#define GL_LOW_INT 0x8DF3
#define GL_MEDIUM_INT 0x8DF4
#define GL_HIGH_INT 0x8DF5
#define GL_FRAMEBUFFER 0x8D40
#define GL_RENDERBUFFER 0x8D41
#define GL_RGBA4 0x8056
#define GL_RGB5_A1 0x8057
#define GL_RGB565 0x8D62
#define GL_DEPTH_COMPONENT16 0x81A5
#define GL_STENCIL_INDEX8 0x8D48
#define GL_RENDERBUFFER_WIDTH 0x8D42
#define GL_RENDERBUFFER_HEIGHT 0x8D43
#define GL_RENDERBUFFER_INTERNAL_FORMAT 0x8D44
#define GL_RENDERBUFFER_RED_SIZE 0x8D50
#define GL_RENDERBUFFER_GREEN_SIZE 0x8D51
#define GL_RENDERBUFFER_BLUE_SIZE 0x8D52
#define GL_RENDERBUFFER_ALPHA_SIZE 0x8D53
#define GL_RENDERBUFFER_DEPTH_SIZE 0x8D54
#define GL_RENDERBUFFER_STENCIL_SIZE 0x8D55
#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE 0x8CD0
#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME 0x8CD1
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL 0x8CD2
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE 0x8CD3
#define GL_COLOR_ATTACHMENT0 0x8CE0
#define GL_DEPTH_ATTACHMENT 0x8D00
#define GL_STENCIL_ATTACHMENT 0x8D20
#define GL_NONE 0
#define GL_FRAMEBUFFER_COMPLETE 0x8CD5
#define GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT 0x8CD6
#define GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT 0x8CD7
#define GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS 0x8CD9
#define GL_FRAMEBUFFER_UNSUPPORTED 0x8CDD
#define GL_FRAMEBUFFER_BINDING 0x8CA6
#define GL_RENDERBUFFER_BINDING 0x8CA7
#define GL_MAX_RENDERBUFFER_SIZE 0x84E8
#define GL_INVALID_FRAMEBUFFER_OPERATION 0x0506

/* GL_ES_VERSION_3_0 */

#define GL_READ_BUFFER 0x0C02
#define GL_UNPACK_ROW_LENGTH 0x0CF2
#define GL_UNPACK_SKIP_ROWS 0x0CF3
#define GL_UNPACK_SKIP_PIXELS 0x0CF4
#define GL_PACK_ROW_LENGTH 0x0D02
#define GL_PACK_SKIP_ROWS 0x0D03
#define GL_PACK_SKIP_PIXELS 0x0D04
#define GL_COLOR 0x1800
#define GL_DEPTH 0x1801
#define GL_STENCIL 0x1802
#define GL_RED 0x1903
#define GL_RGB8 0x8051
#define GL_RGBA8 0x8058
#define GL_RGB10_A2 0x8059
#define GL_TEXTURE_BINDING_3D 0x806A
#define GL_UNPACK_SKIP_IMAGES 0x806D
#define GL_UNPACK_IMAGE_HEIGHT 0x806E
#define GL_TEXTURE_3D 0x806F
#define GL_TEXTURE_WRAP_R 0x8072
#define GL_MAX_3D_TEXTURE_SIZE 0x8073
#define GL_UNSIGNED_INT_2_10_10_10_REV 0x8368
#define GL_MAX_ELEMENTS_VERTICES 0x80E8
#define GL_MAX_ELEMENTS_INDICES 0x80E9
#define GL_TEXTURE_MIN_LOD 0x813A
#define GL_TEXTURE_MAX_LOD 0x813B
#define GL_TEXTURE_BASE_LEVEL 0x813C
#define GL_TEXTURE_MAX_LEVEL 0x813D
#define GL_MIN 0x8007
#define GL_MAX 0x8008
#define GL_DEPTH_COMPONENT24 0x81A6
#define GL_MAX_TEXTURE_LOD_BIAS 0x84FD
#define GL_TEXTURE_COMPARE_MODE 0x884C
#define GL_TEXTURE_COMPARE_FUNC 0x884D
#define GL_CURRENT_QUERY 0x8865
#define GL_QUERY_RESULT 0x8866
#define GL_QUERY_RESULT_AVAILABLE 0x8867
#define GL_BUFFER_MAPPED 0x88BC
#define GL_BUFFER_MAP_POINTER 0x88BD
#define GL_STREAM_READ 0x88E1
#define GL_STREAM_COPY 0x88E2
#define GL_STATIC_READ 0x88E5
#define GL_STATIC_COPY 0x88E6
#define GL_DYNAMIC_READ 0x88E9
#define GL_DYNAMIC_COPY 0x88EA
#define GL_MAX_DRAW_BUFFERS 0x8824
#define GL_DRAW_BUFFER0 0x8825
#define GL_DRAW_BUFFER1 0x8826
#define GL_DRAW_BUFFER2 0x8827
#define GL_DRAW_BUFFER3 0x8828
#define GL_DRAW_BUFFER4 0x8829
#define GL_DRAW_BUFFER5 0x882A
#define GL_DRAW_BUFFER6 0x882B
#define GL_DRAW_BUFFER7 0x882C
#define GL_DRAW_BUFFER8 0x882D
#define GL_DRAW_BUFFER9 0x882E
#define GL_DRAW_BUFFER10 0x882F
#define GL_DRAW_BUFFER11 0x8830
#define GL_DRAW_BUFFER12 0x8831
#define GL_DRAW_BUFFER13 0x8832
#define GL_DRAW_BUFFER14 0x8833
#define GL_DRAW_BUFFER15 0x8834
#define GL_MAX_FRAGMENT_UNIFORM_COMPONENTS 0x8B49
#define GL_MAX_VERTEX_UNIFORM_COMPONENTS 0x8B4A
#define GL_SAMPLER_3D 0x8B5F
#define GL_SAMPLER_2D_SHADOW 0x8B62
#define GL_FRAGMENT_SHADER_DERIVATIVE_HINT 0x8B8B
#define GL_PIXEL_PACK_BUFFER 0x88EB
#define GL_PIXEL_UNPACK_BUFFER 0x88EC
#define GL_PIXEL_PACK_BUFFER_BINDING 0x88ED
#define GL_PIXEL_UNPACK_BUFFER_BINDING 0x88EF
#define GL_FLOAT_MAT2x3 0x8B65
#define GL_FLOAT_MAT2x4 0x8B66
#define GL_FLOAT_MAT3x2 0x8B67
#define GL_FLOAT_MAT3x4 0x8B68
#define GL_FLOAT_MAT4x2 0x8B69
#define GL_FLOAT_MAT4x3 0x8B6A
#define GL_SRGB 0x8C40
#define GL_SRGB8 0x8C41
#define GL_SRGB8_ALPHA8 0x8C43
#define GL_COMPARE_REF_TO_TEXTURE 0x884E
#define GL_MAJOR_VERSION 0x821B
#define GL_MINOR_VERSION 0x821C
#define GL_NUM_EXTENSIONS 0x821D
#define GL_RGBA32F 0x8814
#define GL_RGB32F 0x8815
#define GL_RGBA16F 0x881A
#define GL_RGB16F 0x881B
#define GL_VERTEX_ATTRIB_ARRAY_INTEGER 0x88FD
#define GL_MAX_ARRAY_TEXTURE_LAYERS 0x88FF
#define GL_MIN_PROGRAM_TEXEL_OFFSET 0x8904
#define GL_MAX_PROGRAM_TEXEL_OFFSET 0x8905
#define GL_MAX_VARYING_COMPONENTS 0x8B4B
#define GL_TEXTURE_2D_ARRAY 0x8C1A
#define GL_TEXTURE_BINDING_2D_ARRAY 0x8C1D
#define GL_R11F_G11F_B10F 0x8C3A
#define GL_UNSIGNED_INT_10F_11F_11F_REV 0x8C3B
#define GL_RGB9_E5 0x8C3D
#define GL_UNSIGNED_INT_5_9_9_9_REV 0x8C3E
#define GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH 0x8C76
#define GL_TRANSFORM_FEEDBACK_BUFFER_MODE 0x8C7F
#define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS 0x8C80
#define GL_TRANSFORM_FEEDBACK_VARYINGS 0x8C83
#define GL_TRANSFORM_FEEDBACK_BUFFER_START 0x8C84
#define GL_TRANSFORM_FEEDBACK_BUFFER_SIZE 0x8C85
#define GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN 0x8C88
#define GL_RASTERIZER_DISCARD 0x8C89
#define GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS 0x8C8A
#define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS 0x8C8B
#define GL_INTERLEAVED_ATTRIBS 0x8C8C
#define GL_SEPARATE_ATTRIBS 0x8C8D
#define GL_TRANSFORM_FEEDBACK_BUFFER 0x8C8E
#define GL_TRANSFORM_FEEDBACK_BUFFER_BINDING 0x8C8F
#define GL_RGBA32UI 0x8D70
#define GL_RGB32UI 0x8D71
#define GL_RGBA16UI 0x8D76
#define GL_RGB16UI 0x8D77
#define GL_RGBA8UI 0x8D7C
#define GL_RGB8UI 0x8D7D
#define GL_RGBA32I 0x8D82
#define GL_RGB32I 0x8D83
#define GL_RGBA16I 0x8D88
#define GL_RGB16I 0x8D89
#define GL_RGBA8I 0x8D8E
#define GL_RGB8I 0x8D8F
#define GL_RED_INTEGER 0x8D94
#define GL_RGB_INTEGER 0x8D98
#define GL_RGBA_INTEGER 0x8D99
#define GL_SAMPLER_2D_ARRAY 0x8DC1
#define GL_SAMPLER_2D_ARRAY_SHADOW 0x8DC4
#define GL_SAMPLER_CUBE_SHADOW 0x8DC5
#define GL_UNSIGNED_INT_VEC2 0x8DC6
#define GL_UNSIGNED_INT_VEC3 0x8DC7
#define GL_UNSIGNED_INT_VEC4 0x8DC8
#define GL_INT_SAMPLER_2D 0x8DCA
#define GL_INT_SAMPLER_3D 0x8DCB
#define GL_INT_SAMPLER_CUBE 0x8DCC
#define GL_INT_SAMPLER_2D_ARRAY 0x8DCF
#define GL_UNSIGNED_INT_SAMPLER_2D 0x8DD2
#define GL_UNSIGNED_INT_SAMPLER_3D 0x8DD3
#define GL_UNSIGNED_INT_SAMPLER_CUBE 0x8DD4
#define GL_UNSIGNED_INT_SAMPLER_2D_ARRAY 0x8DD7
#define GL_BUFFER_ACCESS_FLAGS 0x911F
#define GL_BUFFER_MAP_LENGTH 0x9120
#define GL_BUFFER_MAP_OFFSET 0x9121
#define GL_DEPTH_COMPONENT32F 0x8CAC
#define GL_DEPTH32F_STENCIL8 0x8CAD
#define GL_FLOAT_32_UNSIGNED_INT_24_8_REV 0x8DAD
#define GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING 0x8210
#define GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE 0x8211
#define GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE 0x8212
#define GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE 0x8213
#define GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE 0x8214
#define GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE 0x8215
#define GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE 0x8216
#define GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE 0x8217
#define GL_FRAMEBUFFER_DEFAULT 0x8218
#define GL_FRAMEBUFFER_UNDEFINED 0x8219
#define GL_DEPTH_STENCIL_ATTACHMENT 0x821A
#define GL_DEPTH_STENCIL 0x84F9
#define GL_UNSIGNED_INT_24_8 0x84FA
#define GL_DEPTH24_STENCIL8 0x88F0
#define GL_UNSIGNED_NORMALIZED 0x8C17
#define GL_DRAW_FRAMEBUFFER_BINDING 0x8CA6
#define GL_READ_FRAMEBUFFER 0x8CA8
#define GL_DRAW_FRAMEBUFFER 0x8CA9
#define GL_READ_FRAMEBUFFER_BINDING 0x8CAA
#define GL_RENDERBUFFER_SAMPLES 0x8CAB
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER 0x8CD4
#define GL_MAX_COLOR_ATTACHMENTS 0x8CDF
#define GL_COLOR_ATTACHMENT1 0x8CE1
#define GL_COLOR_ATTACHMENT2 0x8CE2
#define GL_COLOR_ATTACHMENT3 0x8CE3
#define GL_COLOR_ATTACHMENT4 0x8CE4
#define GL_COLOR_ATTACHMENT5 0x8CE5
#define GL_COLOR_ATTACHMENT6 0x8CE6
#define GL_COLOR_ATTACHMENT7 0x8CE7
#define GL_COLOR_ATTACHMENT8 0x8CE8
#define GL_COLOR_ATTACHMENT9 0x8CE9
#define GL_COLOR_ATTACHMENT10 0x8CEA
#define GL_COLOR_ATTACHMENT11 0x8CEB
#define GL_COLOR_ATTACHMENT12 0x8CEC
#define GL_COLOR_ATTACHMENT13 0x8CED
#define GL_COLOR_ATTACHMENT14 0x8CEE
#define GL_COLOR_ATTACHMENT15 0x8CEF
#define GL_COLOR_ATTACHMENT16 0x8CF0
#define GL_COLOR_ATTACHMENT17 0x8CF1
#define GL_COLOR_ATTACHMENT18 0x8CF2
#define GL_COLOR_ATTACHMENT19 0x8CF3
#define GL_COLOR_ATTACHMENT20 0x8CF4
#define GL_COLOR_ATTACHMENT21 0x8CF5
#define GL_COLOR_ATTACHMENT22 0x8CF6
#define GL_COLOR_ATTACHMENT23 0x8CF7
#define GL_COLOR_ATTACHMENT24 0x8CF8
#define GL_COLOR_ATTACHMENT25 0x8CF9
#define GL_COLOR_ATTACHMENT26 0x8CFA
#define GL_COLOR_ATTACHMENT27 0x8CFB
#define GL_COLOR_ATTACHMENT28 0x8CFC
#define GL_COLOR_ATTACHMENT29 0x8CFD
#define GL_COLOR_ATTACHMENT30 0x8CFE
#define GL_COLOR_ATTACHMENT31 0x8CFF
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE 0x8D56
#define GL_MAX_SAMPLES 0x8D57
#define GL_HALF_FLOAT 0x140B
#define GL_MAP_READ_BIT 0x0001
#define GL_MAP_WRITE_BIT 0x0002
#define GL_MAP_INVALIDATE_RANGE_BIT 0x0004
#define GL_MAP_INVALIDATE_BUFFER_BIT 0x0008
#define GL_MAP_FLUSH_EXPLICIT_BIT 0x0010
#define GL_MAP_UNSYNCHRONIZED_BIT 0x0020
#define GL_RG 0x8227
#define GL_RG_INTEGER 0x8228
#define GL_R8 0x8229
#define GL_RG8 0x822B
#define GL_R16F 0x822D
#define GL_R32F 0x822E
#define GL_RG16F 0x822F
#define GL_RG32F 0x8230
#define GL_R8I 0x8231
#define GL_R8UI 0x8232
#define GL_R16I 0x8233
#define GL_R16UI 0x8234
#define GL_R32I 0x8235
#define GL_R32UI 0x8236
#define GL_RG8I 0x8237
#define GL_RG8UI 0x8238
#define GL_RG16I 0x8239
#define GL_RG16UI 0x823A
#define GL_RG32I 0x823B
#define GL_RG32UI 0x823C
#define GL_VERTEX_ARRAY_BINDING 0x85B5
#define GL_R8_SNORM 0x8F94
#define GL_RG8_SNORM 0x8F95
#define GL_RGB8_SNORM 0x8F96
#define GL_RGBA8_SNORM 0x8F97
#define GL_SIGNED_NORMALIZED 0x8F9C
#define GL_PRIMITIVE_RESTART_FIXED_INDEX 0x8D69
#define GL_COPY_READ_BUFFER 0x8F36
#define GL_COPY_WRITE_BUFFER 0x8F37
#define GL_COPY_READ_BUFFER_BINDING 0x8F36
#define GL_COPY_WRITE_BUFFER_BINDING 0x8F37
#define GL_UNIFORM_BUFFER 0x8A11
#define GL_UNIFORM_BUFFER_BINDING 0x8A28
#define GL_UNIFORM_BUFFER_START 0x8A29
#define GL_UNIFORM_BUFFER_SIZE 0x8A2A
#define GL_MAX_VERTEX_UNIFORM_BLOCKS 0x8A2B
#define GL_MAX_FRAGMENT_UNIFORM_BLOCKS 0x8A2D
#define GL_MAX_COMBINED_UNIFORM_BLOCKS 0x8A2E
#define GL_MAX_UNIFORM_BUFFER_BINDINGS 0x8A2F
#define GL_MAX_UNIFORM_BLOCK_SIZE 0x8A30
#define GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS 0x8A31
#define GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS 0x8A33
#define GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT 0x8A34
#define GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH 0x8A35
#define GL_ACTIVE_UNIFORM_BLOCKS 0x8A36
#define GL_UNIFORM_TYPE 0x8A37
#define GL_UNIFORM_SIZE 0x8A38
#define GL_UNIFORM_NAME_LENGTH 0x8A39
#define GL_UNIFORM_BLOCK_INDEX 0x8A3A
#define GL_UNIFORM_OFFSET 0x8A3B
#define GL_UNIFORM_ARRAY_STRIDE 0x8A3C
#define GL_UNIFORM_MATRIX_STRIDE 0x8A3D
#define GL_UNIFORM_IS_ROW_MAJOR 0x8A3E
#define GL_UNIFORM_BLOCK_BINDING 0x8A3F
#define GL_UNIFORM_BLOCK_DATA_SIZE 0x8A40
#define GL_UNIFORM_BLOCK_NAME_LENGTH 0x8A41
#define GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS 0x8A42
#define GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES 0x8A43
#define GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER 0x8A44
#define GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER 0x8A46
#define GL_INVALID_INDEX 0xFFFFFFFFu
#define GL_MAX_VERTEX_OUTPUT_COMPONENTS 0x9122
#define GL_MAX_FRAGMENT_INPUT_COMPONENTS 0x9125
#define GL_MAX_SERVER_WAIT_TIMEOUT 0x9111
#define GL_OBJECT_TYPE 0x9112
#define GL_SYNC_CONDITION 0x9113
#define GL_SYNC_STATUS 0x9114
#define GL_SYNC_FLAGS 0x9115
#define GL_SYNC_FENCE 0x9116
#define GL_SYNC_GPU_COMMANDS_COMPLETE 0x9117
#define GL_UNSIGNALED 0x9118
#define GL_SIGNALED 0x9119
#define GL_ALREADY_SIGNALED 0x911A
#define GL_TIMEOUT_EXPIRED 0x911B
#define GL_CONDITION_SATISFIED 0x911C
#define GL_WAIT_FAILED 0x911D
#define GL_SYNC_FLUSH_COMMANDS_BIT 0x00000001
#define GL_TIMEOUT_IGNORED 0xFFFFFFFFFFFFFFFFull
#define GL_VERTEX_ATTRIB_ARRAY_DIVISOR 0x88FE
#define GL_ANY_SAMPLES_PASSED 0x8C2F
#define GL_ANY_SAMPLES_PASSED_CONSERVATIVE 0x8D6A
#define GL_SAMPLER_BINDING 0x8919
#define GL_RGB10_A2UI 0x906F
#define GL_TEXTURE_SWIZZLE_R 0x8E42
#define GL_TEXTURE_SWIZZLE_G 0x8E43
#define GL_TEXTURE_SWIZZLE_B 0x8E44
#define GL_TEXTURE_SWIZZLE_A 0x8E45
#define GL_GREEN 0x1904
#define GL_BLUE 0x1905
#define GL_INT_2_10_10_10_REV 0x8D9F
#define GL_TRANSFORM_FEEDBACK 0x8E22
#define GL_TRANSFORM_FEEDBACK_PAUSED 0x8E23
#define GL_TRANSFORM_FEEDBACK_ACTIVE 0x8E24
#define GL_TRANSFORM_FEEDBACK_BINDING 0x8E25
#define GL_PROGRAM_BINARY_RETRIEVABLE_HINT 0x8257
#define GL_PROGRAM_BINARY_LENGTH 0x8741
#define GL_NUM_PROGRAM_BINARY_FORMATS 0x87FE
#define GL_PROGRAM_BINARY_FORMATS 0x87FF
#define GL_COMPRESSED_R11_EAC 0x9270
#define GL_COMPRESSED_SIGNED_R11_EAC 0x9271
#define GL_COMPRESSED_RG11_EAC 0x9272
#define GL_COMPRESSED_SIGNED_RG11_EAC 0x9273
#define GL_COMPRESSED_RGB8_ETC2 0x9274
#define GL_COMPRESSED_SRGB8_ETC2 0x9275
#define GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2 0x9276
#define GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2 0x9277
#define GL_COMPRESSED_RGBA8_ETC2_EAC 0x9278
#define GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC 0x9279
#define GL_TEXTURE_IMMUTABLE_FORMAT 0x912F
#define GL_MAX_ELEMENT_INDEX 0x8D6B
#define GL_NUM_SAMPLE_COUNTS 0x9380
#define GL_TEXTURE_IMMUTABLE_LEVELS 0x82DF

/* GL_OES_standard_derivatives */

#define GL_FRAGMENT_SHADER_DERIVATIVE_HINT_OES 0x8B8B

/* GL_OES_vertex_array_object */

#define GL_VERTEX_ARRAY_BINDING_OES 0x85B5

/* GL_KHR_context_flush_control */

#define GL_CONTEXT_RELEASE_BEHAVIOR_KHR 0x82FB
#define GL_CONTEXT_RELEASE_BEHAVIOR_FLUSH_KHR 0x82FC
#define GL_NONE 0

/* -------------------------- FUNCTION PROTOTYPES -------------------------- */

/* GL_ES_VERSION_2_0 */

GLAPI void APIENTRY glActiveTexture(GLenum texture);
GLAPI void APIENTRY glAttachShader(GLuint program, GLuint shader);
GLAPI void APIENTRY glBindAttribLocation(GLuint program, GLuint index, const GLchar* name);
GLAPI void APIENTRY glBindBuffer(GLenum target, GLuint buffer);
GLAPI void APIENTRY glBindFramebuffer(GLenum target, GLuint framebuffer);
GLAPI void APIENTRY glBindRenderbuffer(GLenum target, GLuint renderbuffer);
GLAPI void APIENTRY glBindTexture(GLenum target, GLuint texture);
GLAPI void APIENTRY glBlendColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
GLAPI void APIENTRY glBlendEquation(GLenum mode);
GLAPI void APIENTRY glBlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha);
GLAPI void APIENTRY glBlendFunc(GLenum sfactor, GLenum dfactor);
GLAPI void APIENTRY glBlendFuncSeparate(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
GLAPI void APIENTRY glBufferData(GLenum target, GLsizeiptr size, const void* data, GLenum usage);
GLAPI void APIENTRY glBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const void* data);
GLAPI GLenum APIENTRY glCheckFramebufferStatus(GLenum target);
GLAPI void APIENTRY glClear(GLbitfield mask);
GLAPI void APIENTRY glClearColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
GLAPI void APIENTRY glClearDepthf(GLfloat d);
GLAPI void APIENTRY glClearStencil(GLint s);
GLAPI void APIENTRY glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
GLAPI void APIENTRY glCompileShader(GLuint shader);
GLAPI void APIENTRY glCompressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void* data);
GLAPI void APIENTRY glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void* data);
GLAPI void APIENTRY glCopyTexImage2D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
GLAPI void APIENTRY glCopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
GLAPI GLuint APIENTRY glCreateProgram(void);
GLAPI GLuint APIENTRY glCreateShader(GLenum type);
GLAPI void APIENTRY glCullFace(GLenum mode);
GLAPI void APIENTRY glDeleteBuffers(GLsizei n, const GLuint* buffers);
GLAPI void APIENTRY glDeleteFramebuffers(GLsizei n, const GLuint* framebuffers);
GLAPI void APIENTRY glDeleteProgram(GLuint program);
GLAPI void APIENTRY glDeleteRenderbuffers(GLsizei n, const GLuint* renderbuffers);
GLAPI void APIENTRY glDeleteShader(GLuint shader);
GLAPI void APIENTRY glDeleteTextures(GLsizei n, const GLuint* textures);
GLAPI void APIENTRY glDepthFunc(GLenum func);
GLAPI void APIENTRY glDepthMask(GLboolean flag);
GLAPI void APIENTRY glDepthRangef(GLfloat n, GLfloat f);
GLAPI void APIENTRY glDetachShader(GLuint program, GLuint shader);
GLAPI void APIENTRY glDisable(GLenum cap);
GLAPI void APIENTRY glDisableVertexAttribArray(GLuint index);
GLAPI void APIENTRY glDrawArrays(GLenum mode, GLint first, GLsizei count);
GLAPI void APIENTRY glDrawElements(GLenum mode, GLsizei count, GLenum type, const void* indices);
GLAPI void APIENTRY glEnable(GLenum cap);
GLAPI void APIENTRY glEnableVertexAttribArray(GLuint index);
GLAPI void APIENTRY glFinish(void);
GLAPI void APIENTRY glFlush(void);
GLAPI void APIENTRY glFramebufferRenderbuffer(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
GLAPI void APIENTRY glFramebufferTexture2D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
GLAPI void APIENTRY glFrontFace(GLenum mode);
GLAPI void APIENTRY glGenBuffers(GLsizei n, GLuint* buffers);
GLAPI void APIENTRY glGenerateMipmap(GLenum target);
GLAPI void APIENTRY glGenFramebuffers(GLsizei n, GLuint* framebuffers);
GLAPI void APIENTRY glGenRenderbuffers(GLsizei n, GLuint* renderbuffers);
GLAPI void APIENTRY glGenTextures(GLsizei n, GLuint* textures);
GLAPI void APIENTRY glGetActiveAttrib(GLuint program, GLuint index, GLsizei bufSize, GLsizei* length, GLint* size, GLenum* type, GLchar* name);
GLAPI void APIENTRY glGetActiveUniform(GLuint program, GLuint index, GLsizei bufSize, GLsizei* length, GLint* size, GLenum* type, GLchar* name);
GLAPI void APIENTRY glGetAttachedShaders(GLuint program, GLsizei maxCount, GLsizei* count, GLuint* shaders);
GLAPI GLint APIENTRY glGetAttribLocation(GLuint program, const GLchar* name);
GLAPI void APIENTRY glGetBooleanv(GLenum pname, GLboolean* data);
GLAPI void APIENTRY glGetBufferParameteriv(GLenum target, GLenum pname, GLint* params);
GLAPI GLenum APIENTRY glGetError(void);
GLAPI void APIENTRY glGetFloatv(GLenum pname, GLfloat* data);
GLAPI void APIENTRY glGetFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname, GLint* params);
GLAPI void APIENTRY glGetIntegerv(GLenum pname, GLint* data);
GLAPI void APIENTRY glGetProgramiv(GLuint program, GLenum pname, GLint* params);
GLAPI void APIENTRY glGetProgramInfoLog(GLuint program, GLsizei bufSize, GLsizei* length, GLchar* infoLog);
GLAPI void APIENTRY glGetRenderbufferParameteriv(GLenum target, GLenum pname, GLint* params);
GLAPI void APIENTRY glGetShaderiv(GLuint shader, GLenum pname, GLint* params);
GLAPI void APIENTRY glGetShaderInfoLog(GLuint shader, GLsizei bufSize, GLsizei* length, GLchar* infoLog);
GLAPI void APIENTRY glGetShaderPrecisionFormat(GLenum shadertype, GLenum precisiontype, GLint* range, GLint* precision);
GLAPI void APIENTRY glGetShaderSource(GLuint shader, GLsizei bufSize, GLsizei* length, GLchar* source);
GLAPI const GLubyte* APIENTRY glGetString(GLenum name);
GLAPI void APIENTRY glGetTexParameterfv(GLenum target, GLenum pname, GLfloat* params);
GLAPI void APIENTRY glGetTexParameteriv(GLenum target, GLenum pname, GLint* params);
GLAPI void APIENTRY glGetUniformfv(GLuint program, GLint location, GLfloat* params);
GLAPI void APIENTRY glGetUniformiv(GLuint program, GLint location, GLint* params);
GLAPI GLint APIENTRY glGetUniformLocation(GLuint program, const GLchar* name);
GLAPI void APIENTRY glGetVertexAttribfv(GLuint index, GLenum pname, GLfloat* params);
GLAPI void APIENTRY glGetVertexAttribiv(GLuint index, GLenum pname, GLint* params);
GLAPI void APIENTRY glGetVertexAttribPointerv(GLuint index, GLenum pname, void** pointer);
GLAPI void APIENTRY glHint(GLenum target, GLenum mode);
GLAPI GLboolean APIENTRY glIsBuffer(GLuint buffer);
GLAPI GLboolean APIENTRY glIsEnabled(GLenum cap);
GLAPI GLboolean APIENTRY glIsFramebuffer(GLuint framebuffer);
GLAPI GLboolean APIENTRY glIsProgram(GLuint program);
GLAPI GLboolean APIENTRY glIsRenderbuffer(GLuint renderbuffer);
GLAPI GLboolean APIENTRY glIsShader(GLuint shader);
GLAPI GLboolean APIENTRY glIsTexture(GLuint texture);
GLAPI void APIENTRY glLineWidth(GLfloat width);
GLAPI void APIENTRY glLinkProgram(GLuint program);
GLAPI void APIENTRY glPixelStorei(GLenum pname, GLint param);
GLAPI void APIENTRY glPolygonOffset(GLfloat factor, GLfloat units);
GLAPI void APIENTRY glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void* pixels);
GLAPI void APIENTRY glReleaseShaderCompiler(void);
GLAPI void APIENTRY glRenderbufferStorage(GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
GLAPI void APIENTRY glSampleCoverage(GLfloat value, GLboolean invert);
GLAPI void APIENTRY glScissor(GLint x, GLint y, GLsizei width, GLsizei height);
GLAPI void APIENTRY glShaderBinary(GLsizei count, const GLuint* shaders, GLenum binaryformat, const void* binary, GLsizei length);
GLAPI void APIENTRY glShaderSource(GLuint shader, GLsizei count, const GLchar* const* string, const GLint* length);
GLAPI void APIENTRY glStencilFunc(GLenum func, GLint ref, GLuint mask);
GLAPI void APIENTRY glStencilFuncSeparate(GLenum face, GLenum func, GLint ref, GLuint mask);
GLAPI void APIENTRY glStencilMask(GLuint mask);
GLAPI void APIENTRY glStencilMaskSeparate(GLenum face, GLuint mask);
GLAPI void APIENTRY glStencilOp(GLenum fail, GLenum zfail, GLenum zpass);
GLAPI void APIENTRY glStencilOpSeparate(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass);
GLAPI void APIENTRY glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void* pixels);
GLAPI void APIENTRY glTexParameterf(GLenum target, GLenum pname, GLfloat param);
GLAPI void APIENTRY glTexParameterfv(GLenum target, GLenum pname, const GLfloat* params);
GLAPI void APIENTRY glTexParameteri(GLenum target, GLenum pname, GLint param);
GLAPI void APIENTRY glTexParameteriv(GLenum target, GLenum pname, const GLint* params);
GLAPI void APIENTRY glTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void* pixels);
GLAPI void APIENTRY glUniform1f(GLint location, GLfloat v0);
GLAPI void APIENTRY glUniform1fv(GLint location, GLsizei count, const GLfloat* value);
GLAPI void APIENTRY glUniform1i(GLint location, GLint v0);
GLAPI void APIENTRY glUniform1iv(GLint location, GLsizei count, const GLint* value);
GLAPI void APIENTRY glUniform2f(GLint location, GLfloat v0, GLfloat v1);
GLAPI void APIENTRY glUniform2fv(GLint location, GLsizei count, const GLfloat* value);
GLAPI void APIENTRY glUniform2i(GLint location, GLint v0, GLint v1);
GLAPI void APIENTRY glUniform2iv(GLint location, GLsizei count, const GLint* value);
GLAPI void APIENTRY glUniform3f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
GLAPI void APIENTRY glUniform3fv(GLint location, GLsizei count, const GLfloat* value);
GLAPI void APIENTRY glUniform3i(GLint location, GLint v0, GLint v1, GLint v2);
GLAPI void APIENTRY glUniform3iv(GLint location, GLsizei count, const GLint* value);
GLAPI void APIENTRY glUniform4f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
GLAPI void APIENTRY glUniform4fv(GLint location, GLsizei count, const GLfloat* value);
GLAPI void APIENTRY glUniform4i(GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
GLAPI void APIENTRY glUniform4iv(GLint location, GLsizei count, const GLint* value);
GLAPI void APIENTRY glUniformMatrix2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
GLAPI void APIENTRY glUniformMatrix3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
GLAPI void APIENTRY glUniformMatrix4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
GLAPI void APIENTRY glUseProgram(GLuint program);
GLAPI void APIENTRY glValidateProgram(GLuint program);
GLAPI void APIENTRY glVertexAttrib1f(GLuint index, GLfloat x);
GLAPI void APIENTRY glVertexAttrib1fv(GLuint index, const GLfloat* v);
GLAPI void APIENTRY glVertexAttrib2f(GLuint index, GLfloat x, GLfloat y);
GLAPI void APIENTRY glVertexAttrib2fv(GLuint index, const GLfloat* v);
GLAPI void APIENTRY glVertexAttrib3f(GLuint index, GLfloat x, GLfloat y, GLfloat z);
GLAPI void APIENTRY glVertexAttrib3fv(GLuint index, const GLfloat* v);
GLAPI void APIENTRY glVertexAttrib4f(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
GLAPI void APIENTRY glVertexAttrib4fv(GLuint index, const GLfloat* v);
GLAPI void APIENTRY glVertexAttribPointer(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void* pointer);
GLAPI void APIENTRY glViewport(GLint x, GLint y, GLsizei width, GLsizei height);

/* GL_ES_VERSION_3_0 */

GLAPI void APIENTRY glReadBuffer(GLenum src);
GLAPI void APIENTRY glDrawRangeElements(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void* indices);
GLAPI void APIENTRY glTexImage3D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void* pixels);
GLAPI void APIENTRY glTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void* pixels);
GLAPI void APIENTRY glCopyTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
GLAPI void APIENTRY glCompressedTexImage3D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void* data);
GLAPI void APIENTRY glCompressedTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void* data);
GLAPI void APIENTRY glGenQueries(GLsizei n, GLuint* ids);
GLAPI void APIENTRY glDeleteQueries(GLsizei n, const GLuint* ids);
GLAPI GLboolean APIENTRY glIsQuery(GLuint id);
GLAPI void APIENTRY glBeginQuery(GLenum target, GLuint id);
GLAPI void APIENTRY glEndQuery(GLenum target);
GLAPI void APIENTRY glGetQueryiv(GLenum target, GLenum pname, GLint* params);
GLAPI void APIENTRY glGetQueryObjectuiv(GLuint id, GLenum pname, GLuint* params);
GLAPI GLboolean APIENTRY glUnmapBuffer(GLenum target);
GLAPI void APIENTRY glGetBufferPointerv(GLenum target, GLenum pname, void** params);
GLAPI void APIENTRY glDrawBuffers(GLsizei n, const GLenum* bufs);
GLAPI void APIENTRY glUniformMatrix2x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
GLAPI void APIENTRY glUniformMatrix3x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
GLAPI void APIENTRY glUniformMatrix2x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
GLAPI void APIENTRY glUniformMatrix4x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
GLAPI void APIENTRY glUniformMatrix3x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
GLAPI void APIENTRY glUniformMatrix4x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
GLAPI void APIENTRY glBlitFramebuffer(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
GLAPI void APIENTRY glRenderbufferStorageMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
GLAPI void APIENTRY glFramebufferTextureLayer(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
GLAPI void* APIENTRY glMapBufferRange(GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access);
GLAPI void APIENTRY glFlushMappedBufferRange(GLenum target, GLintptr offset, GLsizeiptr length);
GLAPI void APIENTRY glBindVertexArray(GLuint array);
GLAPI void APIENTRY glDeleteVertexArrays(GLsizei n, const GLuint* arrays);
GLAPI void APIENTRY glGenVertexArrays(GLsizei n, GLuint* arrays);
GLAPI GLboolean APIENTRY glIsVertexArray(GLuint array);
GLAPI void APIENTRY glGetIntegeri_v(GLenum target, GLuint index, GLint* data);
GLAPI void APIENTRY glBeginTransformFeedback(GLenum primitiveMode);
GLAPI void APIENTRY glEndTransformFeedback(void);
GLAPI void APIENTRY glBindBufferRange(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
GLAPI void APIENTRY glBindBufferBase(GLenum target, GLuint index, GLuint buffer);
GLAPI void APIENTRY glTransformFeedbackVaryings(GLuint program, GLsizei count, const GLchar* const* varyings, GLenum bufferMode);
GLAPI void APIENTRY glGetTransformFeedbackVarying(GLuint program, GLuint index, GLsizei bufSize, GLsizei* length, GLsizei* size, GLenum* type, GLchar* name);
GLAPI void APIENTRY glVertexAttribIPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const void* pointer);
GLAPI void APIENTRY glGetVertexAttribIiv(GLuint index, GLenum pname, GLint* params);
GLAPI void APIENTRY glGetVertexAttribIuiv(GLuint index, GLenum pname, GLuint* params);
GLAPI void APIENTRY glVertexAttribI4i(GLuint index, GLint x, GLint y, GLint z, GLint w);
GLAPI void APIENTRY glVertexAttribI4ui(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
GLAPI void APIENTRY glVertexAttribI4iv(GLuint index, const GLint* v);
GLAPI void APIENTRY glVertexAttribI4uiv(GLuint index, const GLuint* v);
GLAPI void APIENTRY glGetUniformuiv(GLuint program, GLint location, GLuint* params);
GLAPI GLint APIENTRY glGetFragDataLocation(GLuint program, const GLchar* name);
GLAPI void APIENTRY glUniform1ui(GLint location, GLuint v0);
GLAPI void APIENTRY glUniform2ui(GLint location, GLuint v0, GLuint v1);
GLAPI void APIENTRY glUniform3ui(GLint location, GLuint v0, GLuint v1, GLuint v2);
GLAPI void APIENTRY glUniform4ui(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
GLAPI void APIENTRY glUniform1uiv(GLint location, GLsizei count, const GLuint* value);
GLAPI void APIENTRY glUniform2uiv(GLint location, GLsizei count, const GLuint* value);
GLAPI void APIENTRY glUniform3uiv(GLint location, GLsizei count, const GLuint* value);
GLAPI void APIENTRY glUniform4uiv(GLint location, GLsizei count, const GLuint* value);
GLAPI void APIENTRY glClearBufferiv(GLenum buffer, GLint drawbuffer, const GLint* value);
GLAPI void APIENTRY glClearBufferuiv(GLenum buffer, GLint drawbuffer, const GLuint* value);
GLAPI void APIENTRY glClearBufferfv(GLenum buffer, GLint drawbuffer, const GLfloat* value);
GLAPI void APIENTRY glClearBufferfi(GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil);
GLAPI const GLubyte* APIENTRY glGetStringi(GLenum name, GLuint index);
GLAPI void APIENTRY glCopyBufferSubData(GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
GLAPI void APIENTRY glGetUniformIndices(GLuint program, GLsizei uniformCount, const GLchar* const* uniformNames, GLuint* uniformIndices);
GLAPI void APIENTRY glGetActiveUniformsiv(GLuint program, GLsizei uniformCount, const GLuint* uniformIndices, GLenum pname, GLint* params);
GLAPI GLuint APIENTRY glGetUniformBlockIndex(GLuint program, const GLchar* uniformBlockName);
GLAPI void APIENTRY glGetActiveUniformBlockiv(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint* params);
GLAPI void APIENTRY glGetActiveUniformBlockName(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei* length, GLchar* uniformBlockName);
GLAPI void APIENTRY glUniformBlockBinding(GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding);
GLAPI void APIENTRY glDrawArraysInstanced(GLenum mode, GLint first, GLsizei count, GLsizei instancecount);
GLAPI void APIENTRY glDrawElementsInstanced(GLenum mode, GLsizei count, GLenum type, const void* indices, GLsizei instancecount);
GLAPI GLsync APIENTRY glFenceSync(GLenum condition, GLbitfield flags);
GLAPI GLboolean APIENTRY glIsSync(GLsync sync);
GLAPI void APIENTRY glDeleteSync(GLsync sync);
GLAPI GLenum APIENTRY glClientWaitSync(GLsync sync, GLbitfield flags, GLuint64 timeout);
GLAPI void APIENTRY glWaitSync(GLsync sync, GLbitfield flags, GLuint64 timeout);
GLAPI void APIENTRY glGetInteger64v(GLenum pname, GLint64* data);
GLAPI void APIENTRY glGetSynciv(GLsync sync, GLenum pname, GLsizei bufSize, GLsizei* length, GLint* values);
GLAPI void APIENTRY glGetInteger64i_v(GLenum target, GLuint index, GLint64* data);
GLAPI void APIENTRY glGetBufferParameteri64v(GLenum target, GLenum pname, GLint64* params);
GLAPI void APIENTRY glGenSamplers(GLsizei count, GLuint* samplers);
GLAPI void APIENTRY glDeleteSamplers(GLsizei count, const GLuint* samplers);
GLAPI GLboolean APIENTRY glIsSampler(GLuint sampler);
GLAPI void APIENTRY glBindSampler(GLuint unit, GLuint sampler);
GLAPI void APIENTRY glSamplerParameteri(GLuint sampler, GLenum pname, GLint param);
GLAPI void APIENTRY glSamplerParameteriv(GLuint sampler, GLenum pname, const GLint* param);
GLAPI void APIENTRY glSamplerParameterf(GLuint sampler, GLenum pname, GLfloat param);
GLAPI void APIENTRY glSamplerParameterfv(GLuint sampler, GLenum pname, const GLfloat* param);
GLAPI void APIENTRY glGetSamplerParameteriv(GLuint sampler, GLenum pname, GLint* params);
GLAPI void APIENTRY glGetSamplerParameterfv(GLuint sampler, GLenum pname, GLfloat* params);
GLAPI void APIENTRY glVertexAttribDivisor(GLuint index, GLuint divisor);
GLAPI void APIENTRY glBindTransformFeedback(GLenum target, GLuint id);
GLAPI void APIENTRY glDeleteTransformFeedbacks(GLsizei n, const GLuint* ids);
GLAPI void APIENTRY glGenTransformFeedbacks(GLsizei n, GLuint* ids);
GLAPI GLboolean APIENTRY glIsTransformFeedback(GLuint id);
GLAPI void APIENTRY glPauseTransformFeedback(void);
GLAPI void APIENTRY glResumeTransformFeedback(void);
GLAPI void APIENTRY glGetProgramBinary(GLuint program, GLsizei bufSize, GLsizei* length, GLenum* binaryFormat, void* binary);
GLAPI void APIENTRY glProgramBinary(GLuint program, GLenum binaryFormat, const void* binary, GLsizei length);
GLAPI void APIENTRY glProgramParameteri(GLuint program, GLenum pname, GLint value);
GLAPI void APIENTRY glInvalidateFramebuffer(GLenum target, GLsizei numAttachments, const GLenum* attachments);
GLAPI void APIENTRY glInvalidateSubFramebuffer(GLenum target, GLsizei numAttachments, const GLenum* attachments, GLint x, GLint y, GLsizei width, GLsizei height);
GLAPI void APIENTRY glTexStorage2D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
GLAPI void APIENTRY glTexStorage3D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
GLAPI void APIENTRY glGetInternalformativ(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint* params);


/* GL_ES_VERSION_2_0 */

typedef void (APIENTRY PFNGLACTIVETEXTUREPROC) (GLenum texture);
typedef void (APIENTRY PFNGLATTACHSHADERPROC) (GLuint program, GLuint shader);
typedef void (APIENTRY PFNGLBINDATTRIBLOCATIONPROC) (GLuint program, GLuint index, const GLchar* name);
typedef void (APIENTRY PFNGLBINDBUFFERPROC) (GLenum target, GLuint buffer);
typedef void (APIENTRY PFNGLBINDFRAMEBUFFERPROC) (GLenum target, GLuint framebuffer);
typedef void (APIENTRY PFNGLBINDRENDERBUFFERPROC) (GLenum target, GLuint renderbuffer);
typedef void (APIENTRY PFNGLBINDTEXTUREPROC) (GLenum target, GLuint texture);
typedef void (APIENTRY PFNGLBLENDCOLORPROC) (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
typedef void (APIENTRY PFNGLBLENDEQUATIONPROC) (GLenum mode);
typedef void (APIENTRY PFNGLBLENDEQUATIONSEPARATEPROC) (GLenum modeRGB, GLenum modeAlpha);
typedef void (APIENTRY PFNGLBLENDFUNCPROC) (GLenum sfactor, GLenum dfactor);
typedef void (APIENTRY PFNGLBLENDFUNCSEPARATEPROC) (GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
typedef void (APIENTRY PFNGLBUFFERDATAPROC) (GLenum target, GLsizeiptr size, const void* data, GLenum usage);
typedef void (APIENTRY PFNGLBUFFERSUBDATAPROC) (GLenum target, GLintptr offset, GLsizeiptr size, const void* data);
typedef GLenum(APIENTRY PFNGLCHECKFRAMEBUFFERSTATUSPROC) (GLenum target);
typedef void (APIENTRY PFNGLCLEARPROC) (GLbitfield mask);
typedef void (APIENTRY PFNGLCLEARCOLORPROC) (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
typedef void (APIENTRY PFNGLCLEARDEPTHFPROC) (GLfloat d);
typedef void (APIENTRY PFNGLCLEARSTENCILPROC) (GLint s);
typedef void (APIENTRY PFNGLCOLORMASKPROC) (GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
typedef void (APIENTRY PFNGLCOMPILESHADERPROC) (GLuint shader);
typedef void (APIENTRY PFNGLCOMPRESSEDTEXIMAGE2DPROC) (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void* data);
typedef void (APIENTRY PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void* data);
typedef void (APIENTRY PFNGLCOPYTEXIMAGE2DPROC) (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
typedef void (APIENTRY PFNGLCOPYTEXSUBIMAGE2DPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef GLuint(APIENTRY PFNGLCREATEPROGRAMPROC) (void);
typedef GLuint(APIENTRY PFNGLCREATESHADERPROC) (GLenum type);
typedef void (APIENTRY PFNGLCULLFACEPROC) (GLenum mode);
typedef void (APIENTRY PFNGLDELETEBUFFERSPROC) (GLsizei n, const GLuint* buffers);
typedef void (APIENTRY PFNGLDELETEFRAMEBUFFERSPROC) (GLsizei n, const GLuint* framebuffers);
typedef void (APIENTRY PFNGLDELETEPROGRAMPROC) (GLuint program);
typedef void (APIENTRY PFNGLDELETERENDERBUFFERSPROC) (GLsizei n, const GLuint* renderbuffers);
typedef void (APIENTRY PFNGLDELETESHADERPROC) (GLuint shader);
typedef void (APIENTRY PFNGLDELETETEXTURESPROC) (GLsizei n, const GLuint* textures);
typedef void (APIENTRY PFNGLDEPTHFUNCPROC) (GLenum func);
typedef void (APIENTRY PFNGLDEPTHMASKPROC) (GLboolean flag);
typedef void (APIENTRY PFNGLDEPTHRANGEFPROC) (GLfloat n, GLfloat f);
typedef void (APIENTRY PFNGLDETACHSHADERPROC) (GLuint program, GLuint shader);
typedef void (APIENTRY PFNGLDISABLEPROC) (GLenum cap);
typedef void (APIENTRY PFNGLDISABLEVERTEXATTRIBARRAYPROC) (GLuint index);
typedef void (APIENTRY PFNGLDRAWARRAYSPROC) (GLenum mode, GLint first, GLsizei count);
typedef void (APIENTRY PFNGLDRAWELEMENTSPROC) (GLenum mode, GLsizei count, GLenum type, const void* indices);
typedef void (APIENTRY PFNGLENABLEPROC) (GLenum cap);
typedef void (APIENTRY PFNGLENABLEVERTEXATTRIBARRAYPROC) (GLuint index);
typedef void (APIENTRY PFNGLFINISHPROC) (void);
typedef void (APIENTRY PFNGLFLUSHPROC) (void);
typedef void (APIENTRY PFNGLFRAMEBUFFERRENDERBUFFERPROC) (GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
typedef void (APIENTRY PFNGLFRAMEBUFFERTEXTURE2DPROC) (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
typedef void (APIENTRY PFNGLFRONTFACEPROC) (GLenum mode);
typedef void (APIENTRY PFNGLGENBUFFERSPROC) (GLsizei n, GLuint* buffers);
typedef void (APIENTRY PFNGLGENERATEMIPMAPPROC) (GLenum target);
typedef void (APIENTRY PFNGLGENFRAMEBUFFERSPROC) (GLsizei n, GLuint* framebuffers);
typedef void (APIENTRY PFNGLGENRENDERBUFFERSPROC) (GLsizei n, GLuint* renderbuffers);
typedef void (APIENTRY PFNGLGENTEXTURESPROC) (GLsizei n, GLuint* textures);
typedef void (APIENTRY PFNGLGETACTIVEATTRIBPROC) (GLuint program, GLuint index, GLsizei bufSize, GLsizei* length, GLint* size, GLenum* type, GLchar* name);
typedef void (APIENTRY PFNGLGETACTIVEUNIFORMPROC) (GLuint program, GLuint index, GLsizei bufSize, GLsizei* length, GLint* size, GLenum* type, GLchar* name);
typedef void (APIENTRY PFNGLGETATTACHEDSHADERSPROC) (GLuint program, GLsizei maxCount, GLsizei* count, GLuint* shaders);
typedef GLint(APIENTRY PFNGLGETATTRIBLOCATIONPROC) (GLuint program, const GLchar* name);
typedef void (APIENTRY PFNGLGETBOOLEANVPROC) (GLenum pname, GLboolean* data);
typedef void (APIENTRY PFNGLGETBUFFERPARAMETERIVPROC) (GLenum target, GLenum pname, GLint* params);
typedef GLenum(APIENTRY PFNGLGETERRORPROC) (void);
typedef void (APIENTRY PFNGLGETFLOATVPROC) (GLenum pname, GLfloat* data);
typedef void (APIENTRY PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC) (GLenum target, GLenum attachment, GLenum pname, GLint* params);
typedef void (APIENTRY PFNGLGETINTEGERVPROC) (GLenum pname, GLint* data);
typedef void (APIENTRY PFNGLGETPROGRAMIVPROC) (GLuint program, GLenum pname, GLint* params);
typedef void (APIENTRY PFNGLGETPROGRAMINFOLOGPROC) (GLuint program, GLsizei bufSize, GLsizei* length, GLchar* infoLog);
typedef void (APIENTRY PFNGLGETRENDERBUFFERPARAMETERIVPROC) (GLenum target, GLenum pname, GLint* params);
typedef void (APIENTRY PFNGLGETSHADERIVPROC) (GLuint shader, GLenum pname, GLint* params);
typedef void (APIENTRY PFNGLGETSHADERINFOLOGPROC) (GLuint shader, GLsizei bufSize, GLsizei* length, GLchar* infoLog);
typedef void (APIENTRY PFNGLGETSHADERPRECISIONFORMATPROC) (GLenum shadertype, GLenum precisiontype, GLint* range, GLint* precision);
typedef void (APIENTRY PFNGLGETSHADERSOURCEPROC) (GLuint shader, GLsizei bufSize, GLsizei* length, GLchar* source);
typedef const GLubyte* (APIENTRY PFNGLGETSTRINGPROC) (GLenum name);
typedef void (APIENTRY PFNGLGETTEXPARAMETERFVPROC) (GLenum target, GLenum pname, GLfloat* params);
typedef void (APIENTRY PFNGLGETTEXPARAMETERIVPROC) (GLenum target, GLenum pname, GLint* params);
typedef void (APIENTRY PFNGLGETUNIFORMFVPROC) (GLuint program, GLint location, GLfloat* params);
typedef void (APIENTRY PFNGLGETUNIFORMIVPROC) (GLuint program, GLint location, GLint* params);
typedef GLint(APIENTRY PFNGLGETUNIFORMLOCATIONPROC) (GLuint program, const GLchar* name);
typedef void (APIENTRY PFNGLGETVERTEXATTRIBFVPROC) (GLuint index, GLenum pname, GLfloat* params);
typedef void (APIENTRY PFNGLGETVERTEXATTRIBIVPROC) (GLuint index, GLenum pname, GLint* params);
typedef void (APIENTRY PFNGLGETVERTEXATTRIBPOINTERVPROC) (GLuint index, GLenum pname, void** pointer);
typedef void (APIENTRY PFNGLHINTPROC) (GLenum target, GLenum mode);
typedef GLboolean(APIENTRY PFNGLISBUFFERPROC) (GLuint buffer);
typedef GLboolean(APIENTRY PFNGLISENABLEDPROC) (GLenum cap);
typedef GLboolean(APIENTRY PFNGLISFRAMEBUFFERPROC) (GLuint framebuffer);
typedef GLboolean(APIENTRY PFNGLISPROGRAMPROC) (GLuint program);
typedef GLboolean(APIENTRY PFNGLISRENDERBUFFERPROC) (GLuint renderbuffer);
typedef GLboolean(APIENTRY PFNGLISSHADERPROC) (GLuint shader);
typedef GLboolean(APIENTRY PFNGLISTEXTUREPROC) (GLuint texture);
typedef void (APIENTRY PFNGLLINEWIDTHPROC) (GLfloat width);
typedef void (APIENTRY PFNGLLINKPROGRAMPROC) (GLuint program);
typedef void (APIENTRY PFNGLPIXELSTOREIPROC) (GLenum pname, GLint param);
typedef void (APIENTRY PFNGLPOLYGONOFFSETPROC) (GLfloat factor, GLfloat units);
typedef void (APIENTRY PFNGLREADPIXELSPROC) (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void* pixels);
typedef void (APIENTRY PFNGLRELEASESHADERCOMPILERPROC) (void);
typedef void (APIENTRY PFNGLRENDERBUFFERSTORAGEPROC) (GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (APIENTRY PFNGLSAMPLECOVERAGEPROC) (GLfloat value, GLboolean invert);
typedef void (APIENTRY PFNGLSCISSORPROC) (GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (APIENTRY PFNGLSHADERBINARYPROC) (GLsizei count, const GLuint* shaders, GLenum binaryformat, const void* binary, GLsizei length);
typedef void (APIENTRY PFNGLSHADERSOURCEPROC) (GLuint shader, GLsizei count, const GLchar* const* string, const GLint* length);
typedef void (APIENTRY PFNGLSTENCILFUNCPROC) (GLenum func, GLint ref, GLuint mask);
typedef void (APIENTRY PFNGLSTENCILFUNCSEPARATEPROC) (GLenum face, GLenum func, GLint ref, GLuint mask);
typedef void (APIENTRY PFNGLSTENCILMASKPROC) (GLuint mask);
typedef void (APIENTRY PFNGLSTENCILMASKSEPARATEPROC) (GLenum face, GLuint mask);
typedef void (APIENTRY PFNGLSTENCILOPPROC) (GLenum fail, GLenum zfail, GLenum zpass);
typedef void (APIENTRY PFNGLSTENCILOPSEPARATEPROC) (GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass);
typedef void (APIENTRY PFNGLTEXIMAGE2DPROC) (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void* pixels);
typedef void (APIENTRY PFNGLTEXPARAMETERFPROC) (GLenum target, GLenum pname, GLfloat param);
typedef void (APIENTRY PFNGLTEXPARAMETERFVPROC) (GLenum target, GLenum pname, const GLfloat* params);
typedef void (APIENTRY PFNGLTEXPARAMETERIPROC) (GLenum target, GLenum pname, GLint param);
typedef void (APIENTRY PFNGLTEXPARAMETERIVPROC) (GLenum target, GLenum pname, const GLint* params);
typedef void (APIENTRY PFNGLTEXSUBIMAGE2DPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void* pixels);
typedef void (APIENTRY PFNGLUNIFORM1FPROC) (GLint location, GLfloat v0);
typedef void (APIENTRY PFNGLUNIFORM1FVPROC) (GLint location, GLsizei count, const GLfloat* value);
typedef void (APIENTRY PFNGLUNIFORM1IPROC) (GLint location, GLint v0);
typedef void (APIENTRY PFNGLUNIFORM1IVPROC) (GLint location, GLsizei count, const GLint* value);
typedef void (APIENTRY PFNGLUNIFORM2FPROC) (GLint location, GLfloat v0, GLfloat v1);
typedef void (APIENTRY PFNGLUNIFORM2FVPROC) (GLint location, GLsizei count, const GLfloat* value);
typedef void (APIENTRY PFNGLUNIFORM2IPROC) (GLint location, GLint v0, GLint v1);
typedef void (APIENTRY PFNGLUNIFORM2IVPROC) (GLint location, GLsizei count, const GLint* value);
typedef void (APIENTRY PFNGLUNIFORM3FPROC) (GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
typedef void (APIENTRY PFNGLUNIFORM3FVPROC) (GLint location, GLsizei count, const GLfloat* value);
typedef void (APIENTRY PFNGLUNIFORM3IPROC) (GLint location, GLint v0, GLint v1, GLint v2);
typedef void (APIENTRY PFNGLUNIFORM3IVPROC) (GLint location, GLsizei count, const GLint* value);
typedef void (APIENTRY PFNGLUNIFORM4FPROC) (GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
typedef void (APIENTRY PFNGLUNIFORM4FVPROC) (GLint location, GLsizei count, const GLfloat* value);
typedef void (APIENTRY PFNGLUNIFORM4IPROC) (GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
typedef void (APIENTRY PFNGLUNIFORM4IVPROC) (GLint location, GLsizei count, const GLint* value);
typedef void (APIENTRY PFNGLUNIFORMMATRIX2FVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (APIENTRY PFNGLUNIFORMMATRIX3FVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (APIENTRY PFNGLUNIFORMMATRIX4FVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (APIENTRY PFNGLUSEPROGRAMPROC) (GLuint program);
typedef void (APIENTRY PFNGLVALIDATEPROGRAMPROC) (GLuint program);
typedef void (APIENTRY PFNGLVERTEXATTRIB1FPROC) (GLuint index, GLfloat x);
typedef void (APIENTRY PFNGLVERTEXATTRIB1FVPROC) (GLuint index, const GLfloat* v);
typedef void (APIENTRY PFNGLVERTEXATTRIB2FPROC) (GLuint index, GLfloat x, GLfloat y);
typedef void (APIENTRY PFNGLVERTEXATTRIB2FVPROC) (GLuint index, const GLfloat* v);
typedef void (APIENTRY PFNGLVERTEXATTRIB3FPROC) (GLuint index, GLfloat x, GLfloat y, GLfloat z);
typedef void (APIENTRY PFNGLVERTEXATTRIB3FVPROC) (GLuint index, const GLfloat* v);
typedef void (APIENTRY PFNGLVERTEXATTRIB4FPROC) (GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef void (APIENTRY PFNGLVERTEXATTRIB4FVPROC) (GLuint index, const GLfloat* v);
typedef void (APIENTRY PFNGLVERTEXATTRIBPOINTERPROC) (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void* pointer);
typedef void (APIENTRY PFNGLVIEWPORTPROC) (GLint x, GLint y, GLsizei width, GLsizei height);

/* GL_ES_VERSION_3_0 */

typedef void (APIENTRY PFNGLREADBUFFERPROC) (GLenum src);
typedef void (APIENTRY PFNGLDRAWRANGEELEMENTSPROC) (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void* indices);
typedef void (APIENTRY PFNGLTEXIMAGE3DPROC) (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void* pixels);
typedef void (APIENTRY PFNGLTEXSUBIMAGE3DPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void* pixels);
typedef void (APIENTRY PFNGLCOPYTEXSUBIMAGE3DPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (APIENTRY PFNGLCOMPRESSEDTEXIMAGE3DPROC) (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void* data);
typedef void (APIENTRY PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void* data);
typedef void (APIENTRY PFNGLGENQUERIESPROC) (GLsizei n, GLuint* ids);
typedef void (APIENTRY PFNGLDELETEQUERIESPROC) (GLsizei n, const GLuint* ids);
typedef GLboolean(APIENTRY PFNGLISQUERYPROC) (GLuint id);
typedef void (APIENTRY PFNGLBEGINQUERYPROC) (GLenum target, GLuint id);
typedef void (APIENTRY PFNGLENDQUERYPROC) (GLenum target);
typedef void (APIENTRY PFNGLGETQUERYIVPROC) (GLenum target, GLenum pname, GLint* params);
typedef void (APIENTRY PFNGLGETQUERYOBJECTUIVPROC) (GLuint id, GLenum pname, GLuint* params);
typedef GLboolean(APIENTRY PFNGLUNMAPBUFFERPROC) (GLenum target);
typedef void (APIENTRY PFNGLGETBUFFERPOINTERVPROC) (GLenum target, GLenum pname, void** params);
typedef void (APIENTRY PFNGLDRAWBUFFERSPROC) (GLsizei n, const GLenum* bufs);
typedef void (APIENTRY PFNGLUNIFORMMATRIX2X3FVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (APIENTRY PFNGLUNIFORMMATRIX3X2FVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (APIENTRY PFNGLUNIFORMMATRIX2X4FVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (APIENTRY PFNGLUNIFORMMATRIX4X2FVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (APIENTRY PFNGLUNIFORMMATRIX3X4FVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (APIENTRY PFNGLUNIFORMMATRIX4X3FVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (APIENTRY PFNGLBLITFRAMEBUFFERPROC) (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
typedef void (APIENTRY PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC) (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (APIENTRY PFNGLFRAMEBUFFERTEXTURELAYERPROC) (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
typedef void* (APIENTRY PFNGLMAPBUFFERRANGEPROC) (GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access);
typedef void (APIENTRY PFNGLFLUSHMAPPEDBUFFERRANGEPROC) (GLenum target, GLintptr offset, GLsizeiptr length);
typedef void (APIENTRY PFNGLBINDVERTEXARRAYPROC) (GLuint array);
typedef void (APIENTRY PFNGLDELETEVERTEXARRAYSPROC) (GLsizei n, const GLuint* arrays);
typedef void (APIENTRY PFNGLGENVERTEXARRAYSPROC) (GLsizei n, GLuint* arrays);
typedef GLboolean(APIENTRY PFNGLISVERTEXARRAYPROC) (GLuint array);
typedef void (APIENTRY PFNGLGETINTEGERI_VPROC) (GLenum target, GLuint index, GLint* data);
typedef void (APIENTRY PFNGLBEGINTRANSFORMFEEDBACKPROC) (GLenum primitiveMode);
typedef void (APIENTRY PFNGLENDTRANSFORMFEEDBACKPROC) (void);
typedef void (APIENTRY PFNGLBINDBUFFERRANGEPROC) (GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
typedef void (APIENTRY PFNGLBINDBUFFERBASEPROC) (GLenum target, GLuint index, GLuint buffer);
typedef void (APIENTRY PFNGLTRANSFORMFEEDBACKVARYINGSPROC) (GLuint program, GLsizei count, const GLchar* const* varyings, GLenum bufferMode);
typedef void (APIENTRY PFNGLGETTRANSFORMFEEDBACKVARYINGPROC) (GLuint program, GLuint index, GLsizei bufSize, GLsizei* length, GLsizei* size, GLenum* type, GLchar* name);
typedef void (APIENTRY PFNGLVERTEXATTRIBIPOINTERPROC) (GLuint index, GLint size, GLenum type, GLsizei stride, const void* pointer);
typedef void (APIENTRY PFNGLGETVERTEXATTRIBIIVPROC) (GLuint index, GLenum pname, GLint* params);
typedef void (APIENTRY PFNGLGETVERTEXATTRIBIUIVPROC) (GLuint index, GLenum pname, GLuint* params);
typedef void (APIENTRY PFNGLVERTEXATTRIBI4IPROC) (GLuint index, GLint x, GLint y, GLint z, GLint w);
typedef void (APIENTRY PFNGLVERTEXATTRIBI4UIPROC) (GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
typedef void (APIENTRY PFNGLVERTEXATTRIBI4IVPROC) (GLuint index, const GLint* v);
typedef void (APIENTRY PFNGLVERTEXATTRIBI4UIVPROC) (GLuint index, const GLuint* v);
typedef void (APIENTRY PFNGLGETUNIFORMUIVPROC) (GLuint program, GLint location, GLuint* params);
typedef GLint(APIENTRY PFNGLGETFRAGDATALOCATIONPROC) (GLuint program, const GLchar* name);
typedef void (APIENTRY PFNGLUNIFORM1UIPROC) (GLint location, GLuint v0);
typedef void (APIENTRY PFNGLUNIFORM2UIPROC) (GLint location, GLuint v0, GLuint v1);
typedef void (APIENTRY PFNGLUNIFORM3UIPROC) (GLint location, GLuint v0, GLuint v1, GLuint v2);
typedef void (APIENTRY PFNGLUNIFORM4UIPROC) (GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
typedef void (APIENTRY PFNGLUNIFORM1UIVPROC) (GLint location, GLsizei count, const GLuint* value);
typedef void (APIENTRY PFNGLUNIFORM2UIVPROC) (GLint location, GLsizei count, const GLuint* value);
typedef void (APIENTRY PFNGLUNIFORM3UIVPROC) (GLint location, GLsizei count, const GLuint* value);
typedef void (APIENTRY PFNGLUNIFORM4UIVPROC) (GLint location, GLsizei count, const GLuint* value);
typedef void (APIENTRY PFNGLCLEARBUFFERIVPROC) (GLenum buffer, GLint drawbuffer, const GLint* value);
typedef void (APIENTRY PFNGLCLEARBUFFERUIVPROC) (GLenum buffer, GLint drawbuffer, const GLuint* value);
typedef void (APIENTRY PFNGLCLEARBUFFERFVPROC) (GLenum buffer, GLint drawbuffer, const GLfloat* value);
typedef void (APIENTRY PFNGLCLEARBUFFERFIPROC) (GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil);
typedef const GLubyte* (APIENTRY PFNGLGETSTRINGIPROC) (GLenum name, GLuint index);
typedef void (APIENTRY PFNGLCOPYBUFFERSUBDATAPROC) (GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
typedef void (APIENTRY PFNGLGETUNIFORMINDICESPROC) (GLuint program, GLsizei uniformCount, const GLchar* const* uniformNames, GLuint* uniformIndices);
typedef void (APIENTRY PFNGLGETACTIVEUNIFORMSIVPROC) (GLuint program, GLsizei uniformCount, const GLuint* uniformIndices, GLenum pname, GLint* params);
typedef GLuint(APIENTRY PFNGLGETUNIFORMBLOCKINDEXPROC) (GLuint program, const GLchar* uniformBlockName);
typedef void (APIENTRY PFNGLGETACTIVEUNIFORMBLOCKIVPROC) (GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint* params);
typedef void (APIENTRY PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC) (GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei* length, GLchar* uniformBlockName);
typedef void (APIENTRY PFNGLUNIFORMBLOCKBINDINGPROC) (GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding);
typedef void (APIENTRY PFNGLDRAWARRAYSINSTANCEDPROC) (GLenum mode, GLint first, GLsizei count, GLsizei instancecount);
typedef void (APIENTRY PFNGLDRAWELEMENTSINSTANCEDPROC) (GLenum mode, GLsizei count, GLenum type, const void* indices, GLsizei instancecount);
typedef GLsync(APIENTRY PFNGLFENCESYNCPROC) (GLenum condition, GLbitfield flags);
typedef GLboolean(APIENTRY PFNGLISSYNCPROC) (GLsync sync);
typedef void (APIENTRY PFNGLDELETESYNCPROC) (GLsync sync);
typedef GLenum(APIENTRY PFNGLCLIENTWAITSYNCPROC) (GLsync sync, GLbitfield flags, GLuint64 timeout);
typedef void (APIENTRY PFNGLWAITSYNCPROC) (GLsync sync, GLbitfield flags, GLuint64 timeout);
typedef void (APIENTRY PFNGLGETINTEGER64VPROC) (GLenum pname, GLint64* data);
typedef void (APIENTRY PFNGLGETSYNCIVPROC) (GLsync sync, GLenum pname, GLsizei bufSize, GLsizei* length, GLint* values);
typedef void (APIENTRY PFNGLGETINTEGER64I_VPROC) (GLenum target, GLuint index, GLint64* data);
typedef void (APIENTRY PFNGLGETBUFFERPARAMETERI64VPROC) (GLenum target, GLenum pname, GLint64* params);
typedef void (APIENTRY PFNGLGENSAMPLERSPROC) (GLsizei count, GLuint* samplers);
typedef void (APIENTRY PFNGLDELETESAMPLERSPROC) (GLsizei count, const GLuint* samplers);
typedef GLboolean(APIENTRY PFNGLISSAMPLERPROC) (GLuint sampler);
typedef void (APIENTRY PFNGLBINDSAMPLERPROC) (GLuint unit, GLuint sampler);
typedef void (APIENTRY PFNGLSAMPLERPARAMETERIPROC) (GLuint sampler, GLenum pname, GLint param);
typedef void (APIENTRY PFNGLSAMPLERPARAMETERIVPROC) (GLuint sampler, GLenum pname, const GLint* param);
typedef void (APIENTRY PFNGLSAMPLERPARAMETERFPROC) (GLuint sampler, GLenum pname, GLfloat param);
typedef void (APIENTRY PFNGLSAMPLERPARAMETERFVPROC) (GLuint sampler, GLenum pname, const GLfloat* param);
typedef void (APIENTRY PFNGLGETSAMPLERPARAMETERIVPROC) (GLuint sampler, GLenum pname, GLint* params);
typedef void (APIENTRY PFNGLGETSAMPLERPARAMETERFVPROC) (GLuint sampler, GLenum pname, GLfloat* params);
typedef void (APIENTRY PFNGLVERTEXATTRIBDIVISORPROC) (GLuint index, GLuint divisor);
typedef void (APIENTRY PFNGLBINDTRANSFORMFEEDBACKPROC) (GLenum target, GLuint id);
typedef void (APIENTRY PFNGLDELETETRANSFORMFEEDBACKSPROC) (GLsizei n, const GLuint* ids);
typedef void (APIENTRY PFNGLGENTRANSFORMFEEDBACKSPROC) (GLsizei n, GLuint* ids);
typedef GLboolean(APIENTRY PFNGLISTRANSFORMFEEDBACKPROC) (GLuint id);
typedef void (APIENTRY PFNGLPAUSETRANSFORMFEEDBACKPROC) (void);
typedef void (APIENTRY PFNGLRESUMETRANSFORMFEEDBACKPROC) (void);
typedef void (APIENTRY PFNGLGETPROGRAMBINARYPROC) (GLuint program, GLsizei bufSize, GLsizei* length, GLenum* binaryFormat, void* binary);
typedef void (APIENTRY PFNGLPROGRAMBINARYPROC) (GLuint program, GLenum binaryFormat, const void* binary, GLsizei length);
typedef void (APIENTRY PFNGLPROGRAMPARAMETERIPROC) (GLuint program, GLenum pname, GLint value);
typedef void (APIENTRY PFNGLINVALIDATEFRAMEBUFFERPROC) (GLenum target, GLsizei numAttachments, const GLenum* attachments);
typedef void (APIENTRY PFNGLINVALIDATESUBFRAMEBUFFERPROC) (GLenum target, GLsizei numAttachments, const GLenum* attachments, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (APIENTRY PFNGLTEXSTORAGE2DPROC) (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (APIENTRY PFNGLTEXSTORAGE3DPROC) (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
typedef void (APIENTRY PFNGLGETINTERNALFORMATIVPROC) (GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint* params);



/* GL_OES_vertex_array_object */

typedef void(APIENTRY PFNGLGENVERTEXARRAYSOESPROC(GLsizei n, GLuint* arrays));

GLAPI PFNGLGENVERTEXARRAYSOESPROC* glpfGenVertexArraysOES;

#define glGenVertexArraysOES glpfGenVertexArraysOES

//-------------------------------------------------------------------------------

struct OpenGLESBindings
{
	/*GL_ES_VERSION_2_0_AND_3_0*/

	PFNGLDRAWRANGEELEMENTSPROC* glDrawRangeElements;
	PFNGLTEXIMAGE3DPROC* glTexImage3D;
	PFNGLTEXSUBIMAGE3DPROC* glTexSubImage3D;
	PFNGLCOPYTEXSUBIMAGE3DPROC* glCopyTexSubImage3D;

	PFNGLACTIVETEXTUREPROC* glActiveTexture;
	PFNGLSAMPLECOVERAGEPROC* glSampleCoverage;
	PFNGLCOMPRESSEDTEXIMAGE3DPROC* glCompressedTexImage3D;
	PFNGLCOMPRESSEDTEXIMAGE2DPROC* glCompressedTexImage2D;
	PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC* glCompressedTexSubImage3D;
	PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC* glCompressedTexSubImage2D;

	PFNGLBLENDFUNCSEPARATEPROC* glBlendFuncSeparate;
	PFNGLBLENDCOLORPROC* glBlendColor;
	PFNGLBLENDEQUATIONPROC* glBlendEquation;

	PFNGLGENQUERIESPROC* glGenQueries;
	PFNGLDELETEQUERIESPROC* glDeleteQueries;
	PFNGLISQUERYPROC* glIsQuery;
	PFNGLBEGINQUERYPROC* glBeginQuery;
	PFNGLENDQUERYPROC* glEndQuery;
	PFNGLGETQUERYIVPROC* glGetQueryiv;
	PFNGLGETQUERYOBJECTUIVPROC* glGetQueryObjectuiv;
	PFNGLBINDBUFFERPROC* glBindBuffer;
	PFNGLDELETEBUFFERSPROC* glDeleteBuffers;
	PFNGLGENBUFFERSPROC* glGenBuffers;
	PFNGLISBUFFERPROC* glIsBuffer;
	PFNGLBUFFERDATAPROC* glBufferData;
	PFNGLBUFFERSUBDATAPROC* glBufferSubData;
	PFNGLUNMAPBUFFERPROC* glUnmapBuffer;
	PFNGLGETBUFFERPARAMETERIVPROC* glGetBufferParameteriv;
	PFNGLGETBUFFERPOINTERVPROC* glGetBufferPointerv;

	PFNGLBLENDEQUATIONSEPARATEPROC* glBlendEquationSeparate;
	PFNGLDRAWBUFFERSPROC* glDrawBuffers;
	PFNGLSTENCILOPSEPARATEPROC* glStencilOpSeparate;
	PFNGLSTENCILFUNCSEPARATEPROC* glStencilFuncSeparate;
	PFNGLSTENCILMASKSEPARATEPROC* glStencilMaskSeparate;
	PFNGLATTACHSHADERPROC* glAttachShader;
	PFNGLBINDATTRIBLOCATIONPROC* glBindAttribLocation;
	PFNGLCOMPILESHADERPROC* glCompileShader;
	PFNGLCREATEPROGRAMPROC* glCreateProgram;
	PFNGLCREATESHADERPROC* glCreateShader;
	PFNGLDELETEPROGRAMPROC* glDeleteProgram;
	PFNGLDELETESHADERPROC* glDeleteShader;
	PFNGLDETACHSHADERPROC* glDetachShader;
	PFNGLDISABLEVERTEXATTRIBARRAYPROC* glDisableVertexAttribArray;
	PFNGLENABLEVERTEXATTRIBARRAYPROC* glEnableVertexAttribArray;
	PFNGLGETACTIVEATTRIBPROC* glGetActiveAttrib;
	PFNGLGETACTIVEUNIFORMPROC* glGetActiveUniform;
	PFNGLGETATTACHEDSHADERSPROC* glGetAttachedShaders;
	PFNGLGETATTRIBLOCATIONPROC* glGetAttribLocation;
	PFNGLGETPROGRAMIVPROC* glGetProgramiv;
	PFNGLGETPROGRAMINFOLOGPROC* glGetProgramInfoLog;
	PFNGLGETSHADERIVPROC* glGetShaderiv;
	PFNGLGETSHADERINFOLOGPROC* glGetShaderInfoLog;
	PFNGLGETSHADERSOURCEPROC* glGetShaderSource;
	PFNGLGETUNIFORMLOCATIONPROC* glGetUniformLocation;
	PFNGLGETUNIFORMFVPROC* glGetUniformfv;
	PFNGLGETUNIFORMIVPROC* glGetUniformiv;
	PFNGLGETVERTEXATTRIBFVPROC* glGetVertexAttribfv;
	PFNGLGETVERTEXATTRIBIVPROC* glGetVertexAttribiv;
	PFNGLGETVERTEXATTRIBPOINTERVPROC* glGetVertexAttribPointerv;
	PFNGLISPROGRAMPROC* glIsProgram;
	PFNGLISSHADERPROC* glIsShader;
	PFNGLLINKPROGRAMPROC* glLinkProgram;
	PFNGLSHADERSOURCEPROC* glShaderSource;
	PFNGLUSEPROGRAMPROC* glUseProgram;
	PFNGLUNIFORM1FPROC* glUniform1f;
	PFNGLUNIFORM2FPROC* glUniform2f;
	PFNGLUNIFORM3FPROC* glUniform3f;
	PFNGLUNIFORM4FPROC* glUniform4f;
	PFNGLUNIFORM1IPROC* glUniform1i;
	PFNGLUNIFORM2IPROC* glUniform2i;
	PFNGLUNIFORM3IPROC* glUniform3i;
	PFNGLUNIFORM4IPROC* glUniform4i;
	PFNGLUNIFORM1FVPROC* glUniform1fv;
	PFNGLUNIFORM2FVPROC* glUniform2fv;
	PFNGLUNIFORM3FVPROC* glUniform3fv;
	PFNGLUNIFORM4FVPROC* glUniform4fv;
	PFNGLUNIFORM1IVPROC* glUniform1iv;
	PFNGLUNIFORM2IVPROC* glUniform2iv;
	PFNGLUNIFORM3IVPROC* glUniform3iv;
	PFNGLUNIFORM4IVPROC* glUniform4iv;
	PFNGLUNIFORMMATRIX2FVPROC* glUniformMatrix2fv;
	PFNGLUNIFORMMATRIX3FVPROC* glUniformMatrix3fv;
	PFNGLUNIFORMMATRIX4FVPROC* glUniformMatrix4fv;
	PFNGLVALIDATEPROGRAMPROC* glValidateProgram;
	PFNGLVERTEXATTRIB1FPROC* glVertexAttrib1f;
	PFNGLVERTEXATTRIB1FVPROC* glVertexAttrib1fv;
	PFNGLVERTEXATTRIB2FPROC* glVertexAttrib2f;
	PFNGLVERTEXATTRIB2FVPROC* glVertexAttrib2fv;
	PFNGLVERTEXATTRIB3FPROC* glVertexAttrib3f;
	PFNGLVERTEXATTRIB3FVPROC* glVertexAttrib3fv;
	PFNGLVERTEXATTRIB4FPROC* glVertexAttrib4f;
	PFNGLVERTEXATTRIB4FVPROC* glVertexAttrib4fv;
	PFNGLVERTEXATTRIBPOINTERPROC* glVertexAttribPointer;

	PFNGLUNIFORMMATRIX2X3FVPROC* glUniformMatrix2x3fv;
	PFNGLUNIFORMMATRIX3X2FVPROC* glUniformMatrix3x2fv;
	PFNGLUNIFORMMATRIX2X4FVPROC* glUniformMatrix2x4fv;
	PFNGLUNIFORMMATRIX4X2FVPROC* glUniformMatrix4x2fv;
	PFNGLUNIFORMMATRIX3X4FVPROC* glUniformMatrix3x4fv;
	PFNGLUNIFORMMATRIX4X3FVPROC* glUniformMatrix4x3fv;

	PFNGLGETINTEGERI_VPROC* glGetIntegeri_v;
	PFNGLBEGINTRANSFORMFEEDBACKPROC* glBeginTransformFeedback;
	PFNGLENDTRANSFORMFEEDBACKPROC* glEndTransformFeedback;
	PFNGLBINDBUFFERRANGEPROC* glBindBufferRange;
	PFNGLBINDBUFFERBASEPROC* glBindBufferBase;
	PFNGLTRANSFORMFEEDBACKVARYINGSPROC* glTransformFeedbackVaryings;
	PFNGLGETTRANSFORMFEEDBACKVARYINGPROC* glGetTransformFeedbackVarying;
	PFNGLVERTEXATTRIBIPOINTERPROC* glVertexAttribIPointer;
	PFNGLGETVERTEXATTRIBIIVPROC* glGetVertexAttribIiv;
	PFNGLGETVERTEXATTRIBIUIVPROC* glGetVertexAttribIuiv;
	PFNGLVERTEXATTRIBI4IPROC* glVertexAttribI4i;
	PFNGLVERTEXATTRIBI4UIPROC* glVertexAttribI4ui;
	PFNGLVERTEXATTRIBI4IVPROC* glVertexAttribI4iv;
	PFNGLVERTEXATTRIBI4UIVPROC* glVertexAttribI4uiv;
	PFNGLGETUNIFORMUIVPROC* glGetUniformuiv;
	PFNGLGETFRAGDATALOCATIONPROC* glGetFragDataLocation;
	PFNGLUNIFORM1UIPROC* glUniform1ui;
	PFNGLUNIFORM2UIPROC* glUniform2ui;
	PFNGLUNIFORM3UIPROC* glUniform3ui;
	PFNGLUNIFORM4UIPROC* glUniform4ui;
	PFNGLUNIFORM1UIVPROC* glUniform1uiv;
	PFNGLUNIFORM2UIVPROC* glUniform2uiv;
	PFNGLUNIFORM3UIVPROC* glUniform3uiv;
	PFNGLUNIFORM4UIVPROC* glUniform4uiv;
	PFNGLCLEARBUFFERIVPROC* glClearBufferiv;
	PFNGLCLEARBUFFERUIVPROC* glClearBufferuiv;
	PFNGLCLEARBUFFERFVPROC* glClearBufferfv;
	PFNGLCLEARBUFFERFIPROC* glClearBufferfi;
	PFNGLGETSTRINGIPROC* glGetStringi;
	PFNGLISRENDERBUFFERPROC* glIsRenderbuffer;
	PFNGLBINDRENDERBUFFERPROC* glBindRenderbuffer;
	PFNGLDELETERENDERBUFFERSPROC* glDeleteRenderbuffers;
	PFNGLGENRENDERBUFFERSPROC* glGenRenderbuffers;
	PFNGLRENDERBUFFERSTORAGEPROC* glRenderbufferStorage;
	PFNGLGETRENDERBUFFERPARAMETERIVPROC* glGetRenderbufferParameteriv;
	PFNGLISFRAMEBUFFERPROC* glIsFramebuffer;
	PFNGLBINDFRAMEBUFFERPROC* glBindFramebuffer;
	PFNGLDELETEFRAMEBUFFERSPROC* glDeleteFramebuffers;
	PFNGLGENFRAMEBUFFERSPROC* glGenFramebuffers;
	PFNGLCHECKFRAMEBUFFERSTATUSPROC* glCheckFramebufferStatus;
	PFNGLFRAMEBUFFERTEXTURE2DPROC* glFramebufferTexture2D;
	PFNGLFRAMEBUFFERRENDERBUFFERPROC* glFramebufferRenderbuffer;
	PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC* glGetFramebufferAttachmentParameteriv;
	PFNGLGENERATEMIPMAPPROC* glGenerateMipmap;
	PFNGLBLITFRAMEBUFFERPROC* glBlitFramebuffer;
	PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC* glRenderbufferStorageMultisample;
	PFNGLFRAMEBUFFERTEXTURELAYERPROC* glFramebufferTextureLayer;
	PFNGLMAPBUFFERRANGEPROC* glMapBufferRange;
	PFNGLFLUSHMAPPEDBUFFERRANGEPROC* glFlushMappedBufferRange;
	PFNGLBINDVERTEXARRAYPROC* glBindVertexArray;
	PFNGLDELETEVERTEXARRAYSPROC* glDeleteVertexArrays;
	PFNGLGENVERTEXARRAYSPROC* glGenVertexArrays;
	PFNGLISVERTEXARRAYPROC* glIsVertexArray;

	PFNGLDRAWARRAYSINSTANCEDPROC* glDrawArraysInstanced;
	PFNGLDRAWELEMENTSINSTANCEDPROC* glDrawElementsInstanced;
	PFNGLCOPYBUFFERSUBDATAPROC* glCopyBufferSubData;
	PFNGLGETUNIFORMINDICESPROC* glGetUniformIndices;
	PFNGLGETACTIVEUNIFORMSIVPROC* glGetActiveUniformsiv;
	PFNGLGETUNIFORMBLOCKINDEXPROC* glGetUniformBlockIndex;
	PFNGLGETACTIVEUNIFORMBLOCKIVPROC* glGetActiveUniformBlockiv;
	PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC* glGetActiveUniformBlockName;
	PFNGLUNIFORMBLOCKBINDINGPROC* glUniformBlockBinding;



	/*exist in libfreenect file "flextGL.h" but not exist in gl3.h or higher gl31.h gl32.h*/


	/*PFNGLCOMPRESSEDTEXIMAGE1DPROC* glCompressedTexImage1D;
	PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC* glCompressedTexSubImage1D;
	PFNGLGETCOMPRESSEDTEXIMAGEPROC* glGetCompressedTexImage;

	PFNGLMULTIDRAWARRAYSPROC* glMultiDrawArrays;
	PFNGLMULTIDRAWELEMENTSPROC* glMultiDrawElements;
	PFNGLPOINTPARAMETERFPROC* glPointParameterf;
	PFNGLPOINTPARAMETERFVPROC* glPointParameterfv;
	PFNGLPOINTPARAMETERIPROC* glPointParameteri;
	PFNGLPOINTPARAMETERIVPROC* glPointParameteriv;

	PFNGLGETQUERYOBJECTIVPROC* glGetQueryObjectiv;
	PFNGLGETBUFFERSUBDATAPROC* glGetBufferSubData;
	PFNGLMAPBUFFERPROC* glMapBuffer;

	PFNGLGETVERTEXATTRIBDVPROC* glGetVertexAttribdv;
	PFNGLVERTEXATTRIB1DPROC* glVertexAttrib1d;
	PFNGLVERTEXATTRIB1DVPROC* glVertexAttrib1dv;
	PFNGLVERTEXATTRIB1SPROC* glVertexAttrib1s;
	PFNGLVERTEXATTRIB1SVPROC* glVertexAttrib1sv;
	PFNGLVERTEXATTRIB2DPROC* glVertexAttrib2d;
	PFNGLVERTEXATTRIB2DVPROC* glVertexAttrib2dv;
	PFNGLVERTEXATTRIB2SPROC* glVertexAttrib2s;
	PFNGLVERTEXATTRIB2SVPROC* glVertexAttrib2sv;
	PFNGLVERTEXATTRIB3DPROC* glVertexAttrib3d;
	PFNGLVERTEXATTRIB3DVPROC* glVertexAttrib3dv;
	PFNGLVERTEXATTRIB3SPROC* glVertexAttrib3s;
	PFNGLVERTEXATTRIB3SVPROC* glVertexAttrib3sv;
	PFNGLVERTEXATTRIB4NBVPROC* glVertexAttrib4Nbv;
	PFNGLVERTEXATTRIB4NIVPROC* glVertexAttrib4Niv;
	PFNGLVERTEXATTRIB4NSVPROC* glVertexAttrib4Nsv;
	PFNGLVERTEXATTRIB4NUBPROC* glVertexAttrib4Nub;
	PFNGLVERTEXATTRIB4NUBVPROC* glVertexAttrib4Nubv;
	PFNGLVERTEXATTRIB4NUIVPROC* glVertexAttrib4Nuiv;
	PFNGLVERTEXATTRIB4NUSVPROC* glVertexAttrib4Nusv;
	PFNGLVERTEXATTRIB4BVPROC* glVertexAttrib4bv;
	PFNGLVERTEXATTRIB4DPROC* glVertexAttrib4d;
	PFNGLVERTEXATTRIB4DVPROC* glVertexAttrib4dv;
	PFNGLVERTEXATTRIB4IVPROC* glVertexAttrib4iv;
	PFNGLVERTEXATTRIB4SPROC* glVertexAttrib4s;
	PFNGLVERTEXATTRIB4SVPROC* glVertexAttrib4sv;
	PFNGLVERTEXATTRIB4UBVPROC* glVertexAttrib4ubv;
	PFNGLVERTEXATTRIB4UIVPROC* glVertexAttrib4uiv;
	PFNGLVERTEXATTRIB4USVPROC* glVertexAttrib4usv;

	PFNGLCOLORMASKIPROC* glColorMaski;
	PFNGLGETBOOLEANI_VPROC* glGetBooleani_v;
	PFNGLENABLEIPROC* glEnablei;
	PFNGLDISABLEIPROC* glDisablei;
	PFNGLISENABLEDIPROC* glIsEnabledi;
	PFNGLCLAMPCOLORPROC* glClampColor;
	PFNGLBEGINCONDITIONALRENDERPROC* glBeginConditionalRender;
	PFNGLENDCONDITIONALRENDERPROC* glEndConditionalRender;
	PFNGLVERTEXATTRIBI1IPROC* glVertexAttribI1i;
	PFNGLVERTEXATTRIBI2IPROC* glVertexAttribI2i;
	PFNGLVERTEXATTRIBI3IPROC* glVertexAttribI3i;
	PFNGLVERTEXATTRIBI1UIPROC* glVertexAttribI1ui;
	PFNGLVERTEXATTRIBI2UIPROC* glVertexAttribI2ui;
	PFNGLVERTEXATTRIBI3UIPROC* glVertexAttribI3ui;
	PFNGLVERTEXATTRIBI1IVPROC* glVertexAttribI1iv;
	PFNGLVERTEXATTRIBI2IVPROC* glVertexAttribI2iv;
	PFNGLVERTEXATTRIBI3IVPROC* glVertexAttribI3iv;
	PFNGLVERTEXATTRIBI1UIVPROC* glVertexAttribI1uiv;
	PFNGLVERTEXATTRIBI2UIVPROC* glVertexAttribI2uiv;
	PFNGLVERTEXATTRIBI3UIVPROC* glVertexAttribI3uiv;
	PFNGLVERTEXATTRIBI4BVPROC* glVertexAttribI4bv;
	PFNGLVERTEXATTRIBI4SVPROC* glVertexAttribI4sv;
	PFNGLVERTEXATTRIBI4UBVPROC* glVertexAttribI4ubv;
	PFNGLVERTEXATTRIBI4USVPROC* glVertexAttribI4usv;
	PFNGLBINDFRAGDATALOCATIONPROC* glBindFragDataLocation;
	PFNGLTEXPARAMETERIIVPROC* glTexParameterIiv;
	PFNGLTEXPARAMETERIUIVPROC* glTexParameterIuiv;
	PFNGLGETTEXPARAMETERIIVPROC* glGetTexParameterIiv;
	PFNGLGETTEXPARAMETERIUIVPROC* glGetTexParameterIuiv;
	PFNGLFRAMEBUFFERTEXTURE1DPROC* glFramebufferTexture1D;
	PFNGLFRAMEBUFFERTEXTURE3DPROC* glFramebufferTexture3D;


	PFNGLTEXBUFFERPROC* glTexBuffer;
	PFNGLPRIMITIVERESTARTINDEXPROC* glPrimitiveRestartIndex;
	PFNGLGETACTIVEUNIFORMNAMEPROC* glGetActiveUniformName;*/


};
typedef struct OpenGLESBindings OpenGLESBindings;



/* -------------------------- CATEGORY DEFINES ----------------------------- */

#define GL_ES_VERSION_2_0
#define GL_ES_VERSION_3_0
#define GL_KHR_context_flush_control
#define GL_OES_standard_derivatives
#define GL_OES_vertex_array_object

/* --------------------- FLAGS FOR OPTIONAL EXTENSIONS --------------------- */

extern int FLEXT_OES_standard_derivatives;
extern int FLEXT_OES_vertex_array_object;
extern int FLEXT_KHR_context_flush_control;


//int flextInit(GLFWwindow* window);
void flextESInit(OpenGLESBindings* esbindings);

#define FLEXT_MAJOR_VERSION 3
#define FLEXT_MINOR_VERSION 1

#ifdef __cplusplus
}
#endif

#endif

