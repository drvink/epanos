#ifndef __gl_h_
#define __gl_h_

#ifdef __cplusplus
extern "C" {
#endif

/*
** Copyright 1991-1993, Silicon Graphics, Inc.
** All Rights Reserved.
** 
** This is UNPUBLISHED PROPRIETARY SOURCE CODE of Silicon Graphics, Inc.;
** the contents of this file may not be disclosed to third parties, copied or
** duplicated in any form, in whole or in part, without the prior written
** permission of Silicon Graphics, Inc.
** 
** RESTRICTED RIGHTS LEGEND:
** Use, duplication or disclosure by the Government is subject to restrictions
** as set forth in subdivision (c)(1)(ii) of the Rights in Technical Data
** and Computer Software clause at DFARS 252.227-7013, and/or in similar or
** successor clauses in the FAR, DOD or NASA FAR Supplement. Unpublished -
** rights reserved under the Copyright Laws of the United States.
*/

#if defined(_LANGUAGE_C) || defined(__cplusplus)

typedef unsigned int GLenum;
typedef unsigned char GLboolean;
typedef unsigned int GLbitfield;
typedef signed char GLbyte;
typedef short GLshort;
typedef int GLint;
typedef int GLsizei;
typedef unsigned char GLubyte;
typedef unsigned short GLushort;
typedef unsigned int GLuint;
typedef float GLfloat;
typedef float GLclampf;
typedef double GLdouble;
typedef double GLclampd;
typedef void GLvoid;

#endif /*defined(_LANGUAGE_C) || defined(__cplusplus)*/


/*************************************************************/

/* Extensions */
#define GL_VERSION_1_1                      1
#define GL_VERSION_1_2                      1
#define GL_VERSION_1_3                      1
#define GL_VERSION_1_4                      1
#define GL_ARB_imaging                      1
#define GL_EXT_abgr                         1
#define GL_EXT_blend_color                  1
#define GL_EXT_blend_logic_op               1
#define GL_EXT_blend_minmax                 1
#define GL_EXT_blend_subtract               1
#define GL_EXT_cmyka                        1
#define GL_EXT_convolution                  1
#define GL_EXT_copy_texture                 1
#define GL_EXT_histogram                    1
#define GL_EXT_packed_pixels                1
#define GL_EXT_point_parameters             1
#define GL_EXT_polygon_offset               1
#define GL_EXT_rescale_normal               1
#define GL_EXT_shared_texture_palette       1
#define GL_EXT_subtexture                   1
#define GL_EXT_texture                      1
#define GL_EXT_texture3D                    1
#define GL_EXT_texture_object               1
#define GL_EXT_vertex_array                 1
#define GL_SGIS_detail_texture              1
#define GL_SGIS_fog_function                1
#define GL_SGIS_generate_mipmap             1
#define GL_SGIS_multisample                 1
#define GL_SGIS_pixel_texture               1
#define GL_SGIS_point_line_texgen           1
#define GL_SGIS_point_parameters            1
#define GL_SGIS_sharpen_texture             1
#define GL_SGIS_texture4D                   1
#define GL_SGIS_texture_border_clamp        1
#define GL_SGIS_texture_color_mask          1
#define GL_SGIS_texture_edge_clamp          1
#define GL_SGIS_texture_filter4             1
#define GL_SGIS_texture_lod                 1
#define GL_SGIS_texture_select              1
#define GL_SGIX_async                       1
#define GL_SGIX_async_histogram             1
#define GL_SGIX_async_pixel                 1
#define GL_SGIX_blend_alpha_minmax          1
#define GL_SGIX_calligraphic_fragment       1
#define GL_SGIX_clipmap                     1
#define GL_SGIX_convolution_accuracy        1
#define GL_SGIX_depth_texture               1
#define GL_SGIX_flush_raster                1
#define GL_SGIX_fog_offset                  1
#define GL_SGIX_fragment_lighting           1
#define GL_SGIX_framezoom                   1
#define GL_SGIX_icc_texture                 1
#define GL_SGIX_impact_pixel_texture        1
#define GL_SGIX_instruments                 1
#define GL_SGIX_interlace                   1
#define GL_SGIX_ir_instrument1              1
#define GL_SGIX_list_priority               1
#define GL_SGIX_pixel_texture               1
#define GL_SGIX_pixel_tiles                 1
#define GL_SGIX_polynomial_ffd              1
#define GL_SGIX_reference_plane             1
#define GL_SGIX_resample                    1
#define GL_SGIX_scalebias_hint              1
#define GL_SGIX_shadow                      1
#define GL_SGIX_shadow_ambient              1
#define GL_SGIX_sprite                      1
#define GL_SGIX_subsample                   1
#define GL_SGIX_tag_sample_buffer           1
#define GL_SGIX_texture_add_env             1
#define GL_SGIX_texture_coordinate_clamp    1
#define GL_SGIX_texture_lod_bias            1
#define GL_SGIX_texture_multi_buffer        1
#define GL_SGIX_texture_scale_bias          1
#define GL_SGIX_vertex_preclip              1
#define GL_SGIX_ycrcb                       1
#define GL_SGI_color_matrix                 1
#define GL_SGI_color_table                  1
#define GL_SGI_texture_color_table          1
#define GL_ARB_multitexture                 1
#define GL_ARB_transpose_matrix             1
#define GL_ARB_multisample                  1
#define GL_ARB_texture_env_add              1
#define GL_ARB_texture_cube_map             1
#define GL_ARB_texture_compression          1
#define GL_ARB_texture_border_clamp         1
#define GL_ARB_point_parameters             1
#define GL_ARB_vertex_blend                 1
#define GL_ARB_texture_env_combine          1
#define GL_ARB_texture_env_crossbar         1
#define GL_ARB_texture_env_dot3             1
#define GL_ARB_depth_texture                1
#define GL_ARB_shadow                       1
#define GL_ARB_shadow_ambient               1
#define GL_ARB_window_pos                   1
#define GL_ARB_vertex_program               1
#define GL_ARB_fragment_program             1
#define GL_EXT_texture_cube_map             1
#define GL_EXT_texture_edge_clamp           1
#define GL_EXT_clip_volume_hint             1
#define GL_EXT_compiled_vertex_array        1
#define GL_EXT_draw_range_elements          1
#define GL_EXT_bgra                         1
#define GL_HP_occlusion_test                1
#define GL_EXT_separate_specular_color      1
#define GL_EXT_secondary_color              1
#define GL_EXT_multi_draw_arrays            1
#define GL_EXT_fog_coord                    1
#define GL_EXT_texture_env_combine          1
#define GL_EXT_blend_func_separate          1
#define GL_INGR_interlace_read              1
#define GL_EXT_stencil_wrap                 1
#define GL_NV_texgen_reflection             1
#define GL_EXT_texgen_reflection            1
#define GL_EXT_texture_env_add              1
#define GL_EXT_texture_lod_bias             1
#define GL_EXT_texture_filter_anisotropic   1
#define GL_NV_blend_square                  1
#define GL_EXT_texture_compression_s3tc     1
#define GL_EXT_texture_env_dot3             1
#define GL_ATI_texture_mirror_once          1
#define GL_ATI_envmap_bumpmap               1
#define GL_ATI_fragment_shader              1
#define GL_ATI_pn_triangles                 1
#define GL_ATI_vertex_array_object          1
#define GL_EXT_vertex_shader                1
#define GL_ATI_vertex_streams               1
#define GL_ATI_element_array                1
#define GL_NV_occlusion_query               1
#define GL_S3_s3tc                          1
#define GL_ATI_draw_buffers                 1
#define GL_ATI_map_object_buffer            1
#define GL_ATI_separate_stencil             1
#define GL_ATI_vertex_attrib_array_object   1

/* AttribMask */
#define GL_CURRENT_BIT                      0x00000001
#define GL_POINT_BIT                        0x00000002
#define GL_LINE_BIT                         0x00000004
#define GL_POLYGON_BIT                      0x00000008
#define GL_POLYGON_STIPPLE_BIT              0x00000010
#define GL_PIXEL_MODE_BIT                   0x00000020
#define GL_LIGHTING_BIT                     0x00000040
#define GL_FOG_BIT                          0x00000080
#define GL_DEPTH_BUFFER_BIT                 0x00000100
#define GL_ACCUM_BUFFER_BIT                 0x00000200
#define GL_STENCIL_BUFFER_BIT               0x00000400
#define GL_VIEWPORT_BIT                     0x00000800
#define GL_TRANSFORM_BIT                    0x00001000
#define GL_ENABLE_BIT                       0x00002000
#define GL_COLOR_BUFFER_BIT                 0x00004000
#define GL_HINT_BIT                         0x00008000
#define GL_EVAL_BIT                         0x00010000
#define GL_LIST_BIT                         0x00020000
#define GL_TEXTURE_BIT                      0x00040000
#define GL_SCISSOR_BIT                      0x00080000
#define GL_ALL_ATTRIB_BITS                  0x000fffff
#define GL_MULTISAMPLE_BIT_EXT              0x20000000

/* ClearBufferMask */
/*      GL_COLOR_BUFFER_BIT */
/*      GL_ACCUM_BUFFER_BIT */
/*      GL_STENCIL_BUFFER_BIT */
/*      GL_DEPTH_BUFFER_BIT */

/* ClientAttribMask */
#define GL_CLIENT_PIXEL_STORE_BIT           0x00000001
#define GL_CLIENT_VERTEX_ARRAY_BIT          0x00000002
#define GL_CLIENT_ALL_ATTRIB_BITS           0xFFFFFFFF

/* Boolean */
#define GL_FALSE                            0
#define GL_TRUE                             1

/* BeginMode */
#define GL_POINTS                           0x0000
#define GL_LINES                            0x0001
#define GL_LINE_LOOP                        0x0002
#define GL_LINE_STRIP                       0x0003
#define GL_TRIANGLES                        0x0004
#define GL_TRIANGLE_STRIP                   0x0005
#define GL_TRIANGLE_FAN                     0x0006
#define GL_QUADS                            0x0007
#define GL_QUAD_STRIP                       0x0008
#define GL_POLYGON                          0x0009

/* AccumOp */
#define GL_ACCUM                            0x0100
#define GL_LOAD                             0x0101
#define GL_RETURN                           0x0102
#define GL_MULT                             0x0103
#define GL_ADD                              0x0104

/* AlphaFunction */
#define GL_NEVER                            0x0200
#define GL_LESS                             0x0201
#define GL_EQUAL                            0x0202
#define GL_LEQUAL                           0x0203
#define GL_GREATER                          0x0204
#define GL_NOTEQUAL                         0x0205
#define GL_GEQUAL                           0x0206
#define GL_ALWAYS                           0x0207

/* BlendingFactorDest */
#define GL_ZERO                             0
#define GL_ONE                              1
#define GL_SRC_COLOR                        0x0300
#define GL_ONE_MINUS_SRC_COLOR              0x0301
#define GL_SRC_ALPHA                        0x0302
#define GL_ONE_MINUS_SRC_ALPHA              0x0303
#define GL_DST_ALPHA                        0x0304
#define GL_ONE_MINUS_DST_ALPHA              0x0305
/*      GL_CONSTANT_COLOR_EXT */
/*      GL_ONE_MINUS_CONSTANT_COLOR_EXT */
/*      GL_CONSTANT_ALPHA_EXT */
/*      GL_ONE_MINUS_CONSTANT_ALPHA_EXT */

/* BlendingFactorSrc */
/*      GL_ZERO */
/*      GL_ONE */
#define GL_DST_COLOR                        0x0306
#define GL_ONE_MINUS_DST_COLOR              0x0307
#define GL_SRC_ALPHA_SATURATE               0x0308
/*      GL_SRC_ALPHA */
/*      GL_ONE_MINUS_SRC_ALPHA */
/*      GL_DST_ALPHA */
/*      GL_ONE_MINUS_DST_ALPHA */
/*      GL_CONSTANT_COLOR_EXT */
/*      GL_ONE_MINUS_CONSTANT_COLOR_EXT */
/*      GL_CONSTANT_ALPHA_EXT */
/*      GL_ONE_MINUS_CONSTANT_ALPHA_EXT */

/* BlendEquationModeEXT */
/*      GL_LOGIC_OP */
/*      GL_FUNC_ADD_EXT */
/*      GL_MIN_EXT */
/*      GL_MAX_EXT */
/*      GL_FUNC_SUBTRACT_EXT */
/*      GL_FUNC_REVERSE_SUBTRACT_EXT */
/*      GL_ALPHA_MIN_SGIX */
/*      GL_ALPHA_MAX_SGIX */

/* ColorMaterialFace */
/*      GL_FRONT */
/*      GL_BACK */
/*      GL_FRONT_AND_BACK */

/* ColorMaterialParameter */
/*      GL_AMBIENT */
/*      GL_DIFFUSE */
/*      GL_SPECULAR */
/*      GL_EMISSION */
/*      GL_AMBIENT_AND_DIFFUSE */

/* ColorPointerType */
/*      GL_BYTE */
/*      GL_UNSIGNED_BYTE */
/*      GL_SHORT */
/*      GL_UNSIGNED_SHORT */
/*      GL_INT */
/*      GL_UNSIGNED_INT */
/*      GL_FLOAT */
/*      GL_DOUBLE */

/* ColorTableParameterPNameSGI */
/*      GL_COLOR_TABLE_SCALE_SGI */
/*      GL_COLOR_TABLE_BIAS_SGI */

/* ColorTableTargetSGI */
/*      GL_COLOR_TABLE_SGI */
/*      GL_POST_CONVOLUTION_COLOR_TABLE_SGI */
/*      GL_POST_COLOR_MATRIX_COLOR_TABLE_SGI */
/*      GL_PROXY_COLOR_TABLE_SGI */
/*      GL_PROXY_POST_CONVOLUTION_COLOR_TABLE_SGI */
/*      GL_PROXY_POST_COLOR_MATRIX_COLOR_TABLE_SGI */
/*      GL_TEXTURE_COLOR_TABLE_SGI */
/*      GL_PROXY_TEXTURE_COLOR_TABLE_SGI */

/* ConvolutionBorderModeEXT */
/*      GL_REDUCE_EXT */

/* ConvolutionParameterEXT */
/*      GL_CONVOLUTION_BORDER_MODE_EXT */
/*      GL_CONVOLUTION_FILTER_SCALE_EXT */
/*      GL_CONVOLUTION_FILTER_BIAS_EXT */

/* ConvolutionTargetEXT */
/*      GL_CONVOLUTION_1D_EXT */
/*      GL_CONVOLUTION_2D_EXT */

/* CullFaceMode */
/*      GL_FRONT */
/*      GL_BACK */
/*      GL_FRONT_AND_BACK */

/* DepthFunction */
/*      GL_NEVER */
/*      GL_LESS */
/*      GL_EQUAL */
/*      GL_LEQUAL */
/*      GL_GREATER */
/*      GL_NOTEQUAL */
/*      GL_GEQUAL */
/*      GL_ALWAYS */

/* DrawBufferMode */
#define GL_NONE                             0
#define GL_FRONT_LEFT                       0x0400
#define GL_FRONT_RIGHT                      0x0401
#define GL_BACK_LEFT                        0x0402
#define GL_BACK_RIGHT                       0x0403
#define GL_FRONT                            0x0404
#define GL_BACK                             0x0405
#define GL_LEFT                             0x0406
#define GL_RIGHT                            0x0407
#define GL_FRONT_AND_BACK                   0x0408
#define GL_AUX0                             0x0409
#define GL_AUX1                             0x040A
#define GL_AUX2                             0x040B
#define GL_AUX3                             0x040C

/* EnableCap */
/*      GL_FOG */
/*      GL_LIGHTING */
/*      GL_TEXTURE_1D */
/*      GL_TEXTURE_2D */
/*      GL_LINE_STIPPLE */
/*      GL_POLYGON_STIPPLE */
/*      GL_CULL_FACE */
/*      GL_ALPHA_TEST */
/*      GL_BLEND */
/*      GL_INDEX_LOGIC_OP */
/*      GL_COLOR_LOGIC_OP */
/*      GL_DITHER */
/*      GL_STENCIL_TEST */
/*      GL_DEPTH_TEST */
/*      GL_CLIP_PLANE0 */
/*      GL_CLIP_PLANE1 */
/*      GL_CLIP_PLANE2 */
/*      GL_CLIP_PLANE3 */
/*      GL_CLIP_PLANE4 */
/*      GL_CLIP_PLANE5 */
/*      GL_LIGHT0 */
/*      GL_LIGHT1 */
/*      GL_LIGHT2 */
/*      GL_LIGHT3 */
/*      GL_LIGHT4 */
/*      GL_LIGHT5 */
/*      GL_LIGHT6 */
/*      GL_LIGHT7 */
/*      GL_TEXTURE_GEN_S */
/*      GL_TEXTURE_GEN_T */
/*      GL_TEXTURE_GEN_R */
/*      GL_TEXTURE_GEN_Q */
/*      GL_MAP1_VERTEX_3 */
/*      GL_MAP1_VERTEX_4 */
/*      GL_MAP1_COLOR_4 */
/*      GL_MAP1_INDEX */
/*      GL_MAP1_NORMAL */
/*      GL_MAP1_TEXTURE_COORD_1 */
/*      GL_MAP1_TEXTURE_COORD_2 */
/*      GL_MAP1_TEXTURE_COORD_3 */
/*      GL_MAP1_TEXTURE_COORD_4 */
/*      GL_MAP2_VERTEX_3 */
/*      GL_MAP2_VERTEX_4 */
/*      GL_MAP2_COLOR_4 */
/*      GL_MAP2_INDEX */
/*      GL_MAP2_NORMAL */
/*      GL_MAP2_TEXTURE_COORD_1 */
/*      GL_MAP2_TEXTURE_COORD_2 */
/*      GL_MAP2_TEXTURE_COORD_3 */
/*      GL_MAP2_TEXTURE_COORD_4 */
/*      GL_POINT_SMOOTH */
/*      GL_LINE_SMOOTH */
/*      GL_POLYGON_SMOOTH */
/*      GL_SCISSOR_TEST */
/*      GL_COLOR_MATERIAL */
/*      GL_NORMALIZE */
/*      GL_AUTO_NORMAL */
/*      GL_POLYGON_OFFSET_POINT */
/*      GL_POLYGON_OFFSET_LINE */
/*      GL_POLYGON_OFFSET_FILL */
/*      GL_VERTEX_ARRAY */
/*      GL_NORMAL_ARRAY */
/*      GL_COLOR_ARRAY */
/*      GL_INDEX_ARRAY */
/*      GL_TEXTURE_COORD_ARRAY */
/*      GL_EDGE_FLAG_ARRAY */
/*      GL_CONVOLUTION_1D_EXT */
/*      GL_CONVOLUTION_2D_EXT */
/*      GL_SEPARABLE_2D_EXT */
/*      GL_HISTOGRAM_EXT */
/*      GL_MINMAX_EXT */
/*      GL_RESCALE_NORMAL_EXT */
/*      GL_SHARED_TEXTURE_PALETTE_EXT */
/*      GL_TEXTURE_3D_EXT */
/*      GL_INTERLACE_READ_INGR */
/*      GL_MULTISAMPLE_SGIS */
/*      GL_SAMPLE_ALPHA_TO_MASK_SGIS */
/*      GL_SAMPLE_ALPHA_TO_ONE_SGIS */
/*      GL_SAMPLE_MASK_SGIS */
/*      GL_TEXTURE_4D_SGIS */
/*      GL_ASYNC_HISTOGRAM_SGIX */
/*      GL_ASYNC_TEX_IMAGE_SGIX */
/*      GL_ASYNC_DRAW_PIXELS_SGIX */
/*      GL_ASYNC_READ_PIXELS_SGIX */
/*      GL_CALLIGRAPHIC_FRAGMENT_SGIX */
/*      GL_FOG_OFFSET_SGIX */
/*      GL_FRAGMENT_LIGHTING_SGIX */
/*      GL_FRAGMENT_COLOR_MATERIAL_SGIX */
/*      GL_FRAGMENT_LIGHT0_SGIX */
/*      GL_FRAGMENT_LIGHT1_SGIX */
/*      GL_FRAGMENT_LIGHT2_SGIX */
/*      GL_FRAGMENT_LIGHT3_SGIX */
/*      GL_FRAGMENT_LIGHT4_SGIX */
/*      GL_FRAGMENT_LIGHT5_SGIX */
/*      GL_FRAGMENT_LIGHT6_SGIX */
/*      GL_FRAGMENT_LIGHT7_SGIX */
/*      GL_FRAMEZOOM_SGIX */
/*      GL_INTERLACE_SGIX */
/*      GL_IR_INSTRUMENT1_SGIX */
/*      GL_PIXEL_TEX_GEN_SGIX */
/*      GL_PIXEL_TEXTURE_SGIS */
/*      GL_REFERENCE_PLANE_SGIX */
/*      GL_SPRITE_SGIX */
/*      GL_COLOR_TABLE_SGI */
/*      GL_POST_CONVOLUTION_COLOR_TABLE_SGI */
/*      GL_POST_COLOR_MATRIX_COLOR_TABLE_SGI */
/*      GL_TEXTURE_COLOR_TABLE_SGI */

/* ErrorCode */
#define GL_NO_ERROR                         0
#define GL_INVALID_ENUM                     0x0500
#define GL_INVALID_VALUE                    0x0501
#define GL_INVALID_OPERATION                0x0502
#define GL_STACK_OVERFLOW                   0x0503
#define GL_STACK_UNDERFLOW                  0x0504
#define GL_OUT_OF_MEMORY                    0x0505
/*      GL_TABLE_TOO_LARGE_EXT */
/*      GL_TEXTURE_TOO_LARGE_EXT */

/* FeedbackType */
#define GL_2D                               0x0600
#define GL_3D                               0x0601
#define GL_3D_COLOR                         0x0602
#define GL_3D_COLOR_TEXTURE                 0x0603
#define GL_4D_COLOR_TEXTURE                 0x0604

/* FeedBackToken */
#define GL_PASS_THROUGH_TOKEN               0x0700
#define GL_POINT_TOKEN                      0x0701
#define GL_LINE_TOKEN                       0x0702
#define GL_POLYGON_TOKEN                    0x0703
#define GL_BITMAP_TOKEN                     0x0704
#define GL_DRAW_PIXEL_TOKEN                 0x0705
#define GL_COPY_PIXEL_TOKEN                 0x0706
#define GL_LINE_RESET_TOKEN                 0x0707

/* FfdMaskSGIX */
#define GL_TEXTURE_DEFORMATION_BIT_SGIX     0x00000001
#define GL_GEOMETRY_DEFORMATION_BIT_SGIX    0x00000002

/* FfdTargetSGIX */
/*      GL_GEOMETRY_DEFORMATION_SGIX */
/*      GL_TEXTURE_DEFORMATION_SGIX */

/* FogMode */
/*      GL_LINEAR */
#define GL_EXP                              0x0800
#define GL_EXP2                             0x0801
/*      GL_FOG_FUNC_SGIS */

/* FogParameter */
/*      GL_FOG_COLOR */
/*      GL_FOG_DENSITY */
/*      GL_FOG_END */
/*      GL_FOG_INDEX */
/*      GL_FOG_MODE */
/*      GL_FOG_START */
/*      GL_FOG_OFFSET_VALUE_SGIX */

/* FragmentLightModelParameterSGIX */
/*      GL_FRAGMENT_LIGHT_MODEL_LOCAL_VIEWER_SGIX */
/*      GL_FRAGMENT_LIGHT_MODEL_TWO_SIDE_SGIX */
/*      GL_FRAGMENT_LIGHT_MODEL_AMBIENT_SGIX */
/*      GL_FRAGMENT_LIGHT_MODEL_NORMAL_INTERPOLATION_SGIX */

/* FrontFaceDirection */
#define GL_CW                               0x0900
#define GL_CCW                              0x0901

/* GetColorTableParameterPNameSGI */
/*      GL_COLOR_TABLE_SCALE_SGI */
/*      GL_COLOR_TABLE_BIAS_SGI */
/*      GL_COLOR_TABLE_FORMAT_SGI */
/*      GL_COLOR_TABLE_WIDTH_SGI */
/*      GL_COLOR_TABLE_RED_SIZE_SGI */
/*      GL_COLOR_TABLE_GREEN_SIZE_SGI */
/*      GL_COLOR_TABLE_BLUE_SIZE_SGI */
/*      GL_COLOR_TABLE_ALPHA_SIZE_SGI */
/*      GL_COLOR_TABLE_LUMINANCE_SIZE_SGI */
/*      GL_COLOR_TABLE_INTENSITY_SIZE_SGI */

/* GetConvolutionParameter */
/*      GL_CONVOLUTION_BORDER_MODE_EXT */
/*      GL_CONVOLUTION_FILTER_SCALE_EXT */
/*      GL_CONVOLUTION_FILTER_BIAS_EXT */
/*      GL_CONVOLUTION_FORMAT_EXT */
/*      GL_CONVOLUTION_WIDTH_EXT */
/*      GL_CONVOLUTION_HEIGHT_EXT */
/*      GL_MAX_CONVOLUTION_WIDTH_EXT */
/*      GL_MAX_CONVOLUTION_HEIGHT_EXT */

/* GetHistogramParameterPNameEXT */
/*      GL_HISTOGRAM_WIDTH_EXT */
/*      GL_HISTOGRAM_FORMAT_EXT */
/*      GL_HISTOGRAM_RED_SIZE_EXT */
/*      GL_HISTOGRAM_GREEN_SIZE_EXT */
/*      GL_HISTOGRAM_BLUE_SIZE_EXT */
/*      GL_HISTOGRAM_ALPHA_SIZE_EXT */
/*      GL_HISTOGRAM_LUMINANCE_SIZE_EXT */
/*      GL_HISTOGRAM_SINK_EXT */

/* GetMapQuery */
#define GL_COEFF                            0x0A00
#define GL_ORDER                            0x0A01
#define GL_DOMAIN                           0x0A02

/* GetMinmaxParameterPNameEXT */
/*      GL_MINMAX_FORMAT_EXT */
/*      GL_MINMAX_SINK_EXT */

/* GetPixelMap */
#define GL_PIXEL_MAP_I_TO_I                 0x0C70
#define GL_PIXEL_MAP_S_TO_S                 0x0C71
#define GL_PIXEL_MAP_I_TO_R                 0x0C72
#define GL_PIXEL_MAP_I_TO_G                 0x0C73
#define GL_PIXEL_MAP_I_TO_B                 0x0C74
#define GL_PIXEL_MAP_I_TO_A                 0x0C75
#define GL_PIXEL_MAP_R_TO_R                 0x0C76
#define GL_PIXEL_MAP_G_TO_G                 0x0C77
#define GL_PIXEL_MAP_B_TO_B                 0x0C78
#define GL_PIXEL_MAP_A_TO_A                 0x0C79

/* GetPointervPName */
#define GL_VERTEX_ARRAY_POINTER             0x808E
#define GL_NORMAL_ARRAY_POINTER             0x808F
#define GL_COLOR_ARRAY_POINTER              0x8090
#define GL_INDEX_ARRAY_POINTER              0x8091
#define GL_TEXTURE_COORD_ARRAY_POINTER      0x8092
#define GL_EDGE_FLAG_ARRAY_POINTER          0x8093
#define GL_FEEDBACK_BUFFER_POINTER          0x0DF0
#define GL_SELECTION_BUFFER_POINTER         0x0DF3
/*      GL_INSTRUMENT_BUFFER_POINTER_SGIX */

/* GetPName */
#define GL_CURRENT_COLOR                    0x0B00
#define GL_CURRENT_INDEX                    0x0B01
#define GL_CURRENT_NORMAL                   0x0B02
#define GL_CURRENT_TEXTURE_COORDS           0x0B03
#define GL_CURRENT_RASTER_COLOR             0x0B04
#define GL_CURRENT_RASTER_INDEX             0x0B05
#define GL_CURRENT_RASTER_TEXTURE_COORDS    0x0B06
#define GL_CURRENT_RASTER_POSITION          0x0B07
#define GL_CURRENT_RASTER_POSITION_VALID    0x0B08
#define GL_CURRENT_RASTER_DISTANCE          0x0B09
#define GL_POINT_SMOOTH                     0x0B10
#define GL_POINT_SIZE                       0x0B11
#define GL_POINT_SIZE_RANGE                 0x0B12
#define GL_POINT_SIZE_GRANULARITY           0x0B13
#define GL_LINE_SMOOTH                      0x0B20
#define GL_LINE_WIDTH                       0x0B21
#define GL_LINE_WIDTH_RANGE                 0x0B22
#define GL_LINE_WIDTH_GRANULARITY           0x0B23
#define GL_LINE_STIPPLE                     0x0B24
#define GL_LINE_STIPPLE_PATTERN             0x0B25
#define GL_LINE_STIPPLE_REPEAT              0x0B26
/*      GL_SMOOTH_POINT_SIZE_RANGE */
/*      GL_SMOOTH_POINT_SIZE_GRANULARITY */
/*      GL_SMOOTH_LINE_WIDTH_RANGE */
/*      GL_SMOOTH_LINE_WIDTH_GRANULARITY */
/*      GL_ALIASED_POINT_SIZE_RANGE */
/*      GL_ALIASED_LINE_WIDTH_RANGE */
#define GL_LIST_MODE                        0x0B30
#define GL_MAX_LIST_NESTING                 0x0B31
#define GL_LIST_BASE                        0x0B32
#define GL_LIST_INDEX                       0x0B33
#define GL_POLYGON_MODE                     0x0B40
#define GL_POLYGON_SMOOTH                   0x0B41
#define GL_POLYGON_STIPPLE                  0x0B42
#define GL_EDGE_FLAG                        0x0B43
#define GL_CULL_FACE                        0x0B44
#define GL_CULL_FACE_MODE                   0x0B45
#define GL_FRONT_FACE                       0x0B46
#define GL_LIGHTING                         0x0B50
#define GL_LIGHT_MODEL_LOCAL_VIEWER         0x0B51
#define GL_LIGHT_MODEL_TWO_SIDE             0x0B52
#define GL_LIGHT_MODEL_AMBIENT              0x0B53
#define GL_SHADE_MODEL                      0x0B54
#define GL_COLOR_MATERIAL_FACE              0x0B55
#define GL_COLOR_MATERIAL_PARAMETER         0x0B56
#define GL_COLOR_MATERIAL                   0x0B57
#define GL_FOG                              0x0B60
#define GL_FOG_INDEX                        0x0B61
#define GL_FOG_DENSITY                      0x0B62
#define GL_FOG_START                        0x0B63
#define GL_FOG_END                          0x0B64
#define GL_FOG_MODE                         0x0B65
#define GL_FOG_COLOR                        0x0B66
#define GL_DEPTH_RANGE                      0x0B70
#define GL_DEPTH_TEST                       0x0B71
#define GL_DEPTH_WRITEMASK                  0x0B72
#define GL_DEPTH_CLEAR_VALUE                0x0B73
#define GL_DEPTH_FUNC                       0x0B74
#define GL_ACCUM_CLEAR_VALUE                0x0B80
#define GL_STENCIL_TEST                     0x0B90
#define GL_STENCIL_CLEAR_VALUE              0x0B91
#define GL_STENCIL_FUNC                     0x0B92
#define GL_STENCIL_VALUE_MASK               0x0B93
#define GL_STENCIL_FAIL                     0x0B94
#define GL_STENCIL_PASS_DEPTH_FAIL          0x0B95
#define GL_STENCIL_PASS_DEPTH_PASS          0x0B96
#define GL_STENCIL_REF                      0x0B97
#define GL_STENCIL_WRITEMASK                0x0B98
#define GL_MATRIX_MODE                      0x0BA0
#define GL_NORMALIZE                        0x0BA1
#define GL_VIEWPORT                         0x0BA2
#define GL_MODELVIEW_STACK_DEPTH            0x0BA3
#define GL_PROJECTION_STACK_DEPTH           0x0BA4
#define GL_TEXTURE_STACK_DEPTH              0x0BA5
#define GL_MODELVIEW_MATRIX                 0x0BA6
#define GL_PROJECTION_MATRIX                0x0BA7
#define GL_TEXTURE_MATRIX                   0x0BA8
#define GL_ATTRIB_STACK_DEPTH               0x0BB0
#define GL_CLIENT_ATTRIB_STACK_DEPTH        0x0BB1
#define GL_ALPHA_TEST                       0x0BC0
#define GL_ALPHA_TEST_FUNC                  0x0BC1
#define GL_ALPHA_TEST_REF                   0x0BC2
#define GL_DITHER                           0x0BD0
#define GL_BLEND_DST                        0x0BE0
#define GL_BLEND_SRC                        0x0BE1
#define GL_BLEND                            0x0BE2
#define GL_LOGIC_OP_MODE                    0x0BF0
#define GL_INDEX_LOGIC_OP                   0x0BF1
#define GL_LOGIC_OP                         0x0BF1
#define GL_COLOR_LOGIC_OP                   0x0BF2
#define GL_AUX_BUFFERS                      0x0C00
#define GL_DRAW_BUFFER                      0x0C01
#define GL_READ_BUFFER                      0x0C02
#define GL_SCISSOR_BOX                      0x0C10
#define GL_SCISSOR_TEST                     0x0C11
#define GL_INDEX_CLEAR_VALUE                0x0C20
#define GL_INDEX_WRITEMASK                  0x0C21
#define GL_COLOR_CLEAR_VALUE                0x0C22
#define GL_COLOR_WRITEMASK                  0x0C23
#define GL_INDEX_MODE                       0x0C30
#define GL_RGBA_MODE                        0x0C31
#define GL_DOUBLEBUFFER                     0x0C32
#define GL_STEREO                           0x0C33
#define GL_RENDER_MODE                      0x0C40
#define GL_PERSPECTIVE_CORRECTION_HINT      0x0C50
#define GL_POINT_SMOOTH_HINT                0x0C51
#define GL_LINE_SMOOTH_HINT                 0x0C52
#define GL_POLYGON_SMOOTH_HINT              0x0C53
#define GL_FOG_HINT                         0x0C54
#define GL_TEXTURE_GEN_S                    0x0C60
#define GL_TEXTURE_GEN_T                    0x0C61
#define GL_TEXTURE_GEN_R                    0x0C62
#define GL_TEXTURE_GEN_Q                    0x0C63
#define GL_PIXEL_MAP_I_TO_I_SIZE            0x0CB0
#define GL_PIXEL_MAP_S_TO_S_SIZE            0x0CB1
#define GL_PIXEL_MAP_I_TO_R_SIZE            0x0CB2
#define GL_PIXEL_MAP_I_TO_G_SIZE            0x0CB3
#define GL_PIXEL_MAP_I_TO_B_SIZE            0x0CB4
#define GL_PIXEL_MAP_I_TO_A_SIZE            0x0CB5
#define GL_PIXEL_MAP_R_TO_R_SIZE            0x0CB6
#define GL_PIXEL_MAP_G_TO_G_SIZE            0x0CB7
#define GL_PIXEL_MAP_B_TO_B_SIZE            0x0CB8
#define GL_PIXEL_MAP_A_TO_A_SIZE            0x0CB9
#define GL_UNPACK_SWAP_BYTES                0x0CF0
#define GL_UNPACK_LSB_FIRST                 0x0CF1
#define GL_UNPACK_ROW_LENGTH                0x0CF2
#define GL_UNPACK_SKIP_ROWS                 0x0CF3
#define GL_UNPACK_SKIP_PIXELS               0x0CF4
#define GL_UNPACK_ALIGNMENT                 0x0CF5
#define GL_PACK_SWAP_BYTES                  0x0D00
#define GL_PACK_LSB_FIRST                   0x0D01
#define GL_PACK_ROW_LENGTH                  0x0D02
#define GL_PACK_SKIP_ROWS                   0x0D03
#define GL_PACK_SKIP_PIXELS                 0x0D04
#define GL_PACK_ALIGNMENT                   0x0D05
#define GL_MAP_COLOR                        0x0D10
#define GL_MAP_STENCIL                      0x0D11
#define GL_INDEX_SHIFT                      0x0D12
#define GL_INDEX_OFFSET                     0x0D13
#define GL_RED_SCALE                        0x0D14
#define GL_RED_BIAS                         0x0D15
#define GL_ZOOM_X                           0x0D16
#define GL_ZOOM_Y                           0x0D17
#define GL_GREEN_SCALE                      0x0D18
#define GL_GREEN_BIAS                       0x0D19
#define GL_BLUE_SCALE                       0x0D1A
#define GL_BLUE_BIAS                        0x0D1B
#define GL_ALPHA_SCALE                      0x0D1C
#define GL_ALPHA_BIAS                       0x0D1D
#define GL_DEPTH_SCALE                      0x0D1E
#define GL_DEPTH_BIAS                       0x0D1F
#define GL_MAX_EVAL_ORDER                   0x0D30
#define GL_MAX_LIGHTS                       0x0D31
#define GL_MAX_CLIP_PLANES                  0x0D32
#define GL_MAX_TEXTURE_SIZE                 0x0D33
#define GL_MAX_PIXEL_MAP_TABLE              0x0D34
#define GL_MAX_ATTRIB_STACK_DEPTH           0x0D35
#define GL_MAX_MODELVIEW_STACK_DEPTH        0x0D36
#define GL_MAX_NAME_STACK_DEPTH             0x0D37
#define GL_MAX_PROJECTION_STACK_DEPTH       0x0D38
#define GL_MAX_TEXTURE_STACK_DEPTH          0x0D39
#define GL_MAX_VIEWPORT_DIMS                0x0D3A
#define GL_MAX_CLIENT_ATTRIB_STACK_DEPTH    0x0D3B
#define GL_SUBPIXEL_BITS                    0x0D50
#define GL_INDEX_BITS                       0x0D51
#define GL_RED_BITS                         0x0D52
#define GL_GREEN_BITS                       0x0D53
#define GL_BLUE_BITS                        0x0D54
#define GL_ALPHA_BITS                       0x0D55
#define GL_DEPTH_BITS                       0x0D56
#define GL_STENCIL_BITS                     0x0D57
#define GL_ACCUM_RED_BITS                   0x0D58
#define GL_ACCUM_GREEN_BITS                 0x0D59
#define GL_ACCUM_BLUE_BITS                  0x0D5A
#define GL_ACCUM_ALPHA_BITS                 0x0D5B
#define GL_NAME_STACK_DEPTH                 0x0D70
#define GL_AUTO_NORMAL                      0x0D80
#define GL_MAP1_COLOR_4                     0x0D90
#define GL_MAP1_INDEX                       0x0D91
#define GL_MAP1_NORMAL                      0x0D92
#define GL_MAP1_TEXTURE_COORD_1             0x0D93
#define GL_MAP1_TEXTURE_COORD_2             0x0D94
#define GL_MAP1_TEXTURE_COORD_3             0x0D95
#define GL_MAP1_TEXTURE_COORD_4             0x0D96
#define GL_MAP1_VERTEX_3                    0x0D97
#define GL_MAP1_VERTEX_4                    0x0D98
#define GL_MAP2_COLOR_4                     0x0DB0
#define GL_MAP2_INDEX                       0x0DB1
#define GL_MAP2_NORMAL                      0x0DB2
#define GL_MAP2_TEXTURE_COORD_1             0x0DB3
#define GL_MAP2_TEXTURE_COORD_2             0x0DB4
#define GL_MAP2_TEXTURE_COORD_3             0x0DB5
#define GL_MAP2_TEXTURE_COORD_4             0x0DB6
#define GL_MAP2_VERTEX_3                    0x0DB7
#define GL_MAP2_VERTEX_4                    0x0DB8
#define GL_MAP1_GRID_DOMAIN                 0x0DD0
#define GL_MAP1_GRID_SEGMENTS               0x0DD1
#define GL_MAP2_GRID_DOMAIN                 0x0DD2
#define GL_MAP2_GRID_SEGMENTS               0x0DD3
#define GL_TEXTURE_1D                       0x0DE0
#define GL_TEXTURE_2D                       0x0DE1
#define GL_FEEDBACK_BUFFER_SIZE             0x0DF1
#define GL_FEEDBACK_BUFFER_TYPE             0x0DF2
#define GL_SELECTION_BUFFER_SIZE            0x0DF4
#define GL_POLYGON_OFFSET_UNITS             0x2A00
#define GL_POLYGON_OFFSET_POINT             0x2A01
#define GL_POLYGON_OFFSET_LINE              0x2A02
#define GL_POLYGON_OFFSET_FILL              0x8037
#define GL_POLYGON_OFFSET_FACTOR            0x8038
#define GL_TEXTURE_BINDING_1D               0x8068
#define GL_TEXTURE_BINDING_2D               0x8069
#define GL_TEXTURE_BINDING_3D               0x806A
#define GL_VERTEX_ARRAY                     0x8074
#define GL_NORMAL_ARRAY                     0x8075
#define GL_COLOR_ARRAY                      0x8076
#define GL_INDEX_ARRAY                      0x8077
#define GL_TEXTURE_COORD_ARRAY              0x8078
#define GL_EDGE_FLAG_ARRAY                  0x8079
#define GL_VERTEX_ARRAY_SIZE                0x807A
#define GL_VERTEX_ARRAY_TYPE                0x807B
#define GL_VERTEX_ARRAY_STRIDE              0x807C
#define GL_NORMAL_ARRAY_TYPE                0x807E
#define GL_NORMAL_ARRAY_STRIDE              0x807F
#define GL_COLOR_ARRAY_SIZE                 0x8081
#define GL_COLOR_ARRAY_TYPE                 0x8082
#define GL_COLOR_ARRAY_STRIDE               0x8083
#define GL_INDEX_ARRAY_TYPE                 0x8085
#define GL_INDEX_ARRAY_STRIDE               0x8086
#define GL_TEXTURE_COORD_ARRAY_SIZE         0x8088
#define GL_TEXTURE_COORD_ARRAY_TYPE         0x8089
#define GL_TEXTURE_COORD_ARRAY_STRIDE       0x808A
#define GL_EDGE_FLAG_ARRAY_STRIDE           0x808C
/*      GL_CLIP_PLANE0 */
/*      GL_CLIP_PLANE1 */
/*      GL_CLIP_PLANE2 */
/*      GL_CLIP_PLANE3 */
/*      GL_CLIP_PLANE4 */
/*      GL_CLIP_PLANE5 */
/*      GL_LIGHT0 */
/*      GL_LIGHT1 */
/*      GL_LIGHT2 */
/*      GL_LIGHT3 */
/*      GL_LIGHT4 */
/*      GL_LIGHT5 */
/*      GL_LIGHT6 */
/*      GL_LIGHT7 */
/*      GL_LIGHT_MODEL_COLOR_CONTROL */
/*      GL_BLEND_COLOR_EXT */
/*      GL_BLEND_EQUATION_EXT */
/*      GL_PACK_CMYK_HINT_EXT */
/*      GL_UNPACK_CMYK_HINT_EXT */
/*      GL_CONVOLUTION_1D_EXT */
/*      GL_CONVOLUTION_2D_EXT */
/*      GL_SEPARABLE_2D_EXT */
/*      GL_POST_CONVOLUTION_RED_SCALE_EXT */
/*      GL_POST_CONVOLUTION_GREEN_SCALE_EXT */
/*      GL_POST_CONVOLUTION_BLUE_SCALE_EXT */
/*      GL_POST_CONVOLUTION_ALPHA_SCALE_EXT */
/*      GL_POST_CONVOLUTION_RED_BIAS_EXT */
/*      GL_POST_CONVOLUTION_GREEN_BIAS_EXT */
/*      GL_POST_CONVOLUTION_BLUE_BIAS_EXT */
/*      GL_POST_CONVOLUTION_ALPHA_BIAS_EXT */
/*      GL_HISTOGRAM_EXT */
/*      GL_MINMAX_EXT */
/*      GL_POLYGON_OFFSET_BIAS_EXT */
/*      GL_RESCALE_NORMAL_EXT */
/*      GL_SHARED_TEXTURE_PALETTE_EXT */
/*      GL_TEXTURE_3D_BINDING_EXT */
/*      GL_PACK_SKIP_IMAGES_EXT */
/*      GL_PACK_IMAGE_HEIGHT_EXT */
/*      GL_UNPACK_SKIP_IMAGES_EXT */
/*      GL_UNPACK_IMAGE_HEIGHT_EXT */
/*      GL_TEXTURE_3D_EXT */
/*      GL_MAX_3D_TEXTURE_SIZE_EXT */
/*      GL_VERTEX_ARRAY_COUNT_EXT */
/*      GL_NORMAL_ARRAY_COUNT_EXT */
/*      GL_COLOR_ARRAY_COUNT_EXT */
/*      GL_INDEX_ARRAY_COUNT_EXT */
/*      GL_TEXTURE_COORD_ARRAY_COUNT_EXT */
/*      GL_EDGE_FLAG_ARRAY_COUNT_EXT */
/*      GL_INTERLACE_READ_INGR */
/*      GL_DETAIL_TEXTURE_2D_BINDING_SGIS */
/*      GL_FOG_FUNC_POINTS_SGIS */
/*      GL_MAX_FOG_FUNC_POINTS_SGIS */
/*      GL_GENERATE_MIPMAP_HINT_SGIS */
/*      GL_MULTISAMPLE_SGIS */
/*      GL_SAMPLE_ALPHA_TO_MASK_SGIS */
/*      GL_SAMPLE_ALPHA_TO_ONE_SGIS */
/*      GL_SAMPLE_MASK_SGIS */
/*      GL_SAMPLE_BUFFERS_SGIS */
/*      GL_SAMPLES_SGIS */
/*      GL_SAMPLE_MASK_VALUE_SGIS */
/*      GL_SAMPLE_MASK_INVERT_SGIS */
/*      GL_SAMPLE_PATTERN_SGIS */
/*      GL_PIXEL_TEXTURE_SGIS */
/*      GL_POINT_SIZE_MIN_SGIS */
/*      GL_POINT_SIZE_MAX_SGIS */
/*      GL_POINT_FADE_THRESHOLD_SIZE_SGIS */
/*      GL_DISTANCE_ATTENUATION_SGIS */
/*      GL_PACK_SKIP_VOLUMES_SGIS */
/*      GL_PACK_IMAGE_DEPTH_SGIS */
/*      GL_UNPACK_SKIP_VOLUMES_SGIS */
/*      GL_UNPACK_IMAGE_DEPTH_SGIS */
/*      GL_TEXTURE_4D_SGIS */
/*      GL_MAX_4D_TEXTURE_SIZE_SGIS */
/*      GL_TEXTURE_4D_BINDING_SGIS */
/*      GL_ASYNC_MARKER_SGIX */
/*      GL_ASYNC_HISTOGRAM_SGIX */
/*      GL_MAX_ASYNC_HISTOGRAM_SGIX */
/*      GL_ASYNC_TEX_IMAGE_SGIX */
/*      GL_ASYNC_DRAW_PIXELS_SGIX */
/*      GL_ASYNC_READ_PIXELS_SGIX */
/*      GL_MAX_ASYNC_TEX_IMAGE_SGIX */
/*      GL_MAX_ASYNC_DRAW_PIXELS_SGIX */
/*      GL_MAX_ASYNC_READ_PIXELS_SGIX */
/*      GL_CALLIGRAPHIC_FRAGMENT_SGIX */
/*      GL_MAX_CLIPMAP_VIRTUAL_DEPTH_SGIX */
/*      GL_MAX_CLIPMAP_DEPTH_SGIX */
/*      GL_CONVOLUTION_HINT_SGIX */
/*      GL_FOG_OFFSET_SGIX */
/*      GL_FOG_OFFSET_VALUE_SGIX */
/*      GL_FRAGMENT_LIGHTING_SGIX */
/*      GL_FRAGMENT_COLOR_MATERIAL_SGIX */
/*      GL_FRAGMENT_COLOR_MATERIAL_FACE_SGIX */
/*      GL_FRAGMENT_COLOR_MATERIAL_PARAMETER_SGIX */
/*      GL_MAX_FRAGMENT_LIGHTS_SGIX */
/*      GL_MAX_ACTIVE_LIGHTS_SGIX */
/*      GL_LIGHT_ENV_MODE_SGIX */
/*      GL_FRAGMENT_LIGHT_MODEL_LOCAL_VIEWER_SGIX */
/*      GL_FRAGMENT_LIGHT_MODEL_TWO_SIDE_SGIX */
/*      GL_FRAGMENT_LIGHT_MODEL_AMBIENT_SGIX */
/*      GL_FRAGMENT_LIGHT_MODEL_NORMAL_INTERPOLATION_SGIX */
/*      GL_FRAGMENT_LIGHT0_SGIX */
/*      GL_FRAMEZOOM_SGIX */
/*      GL_FRAMEZOOM_FACTOR_SGIX */
/*      GL_MAX_FRAMEZOOM_FACTOR_SGIX */
/*      GL_INSTRUMENT_MEASUREMENTS_SGIX */
/*      GL_INTERLACE_SGIX */
/*      GL_IR_INSTRUMENT1_SGIX */
/*      GL_PIXEL_TEX_GEN_SGIX */
/*      GL_PIXEL_TEX_GEN_MODE_SGIX */
/*      GL_PIXEL_TILE_BEST_ALIGNMENT_SGIX */
/*      GL_PIXEL_TILE_CACHE_INCREMENT_SGIX */
/*      GL_PIXEL_TILE_WIDTH_SGIX */
/*      GL_PIXEL_TILE_HEIGHT_SGIX */
/*      GL_PIXEL_TILE_GRID_WIDTH_SGIX */
/*      GL_PIXEL_TILE_GRID_HEIGHT_SGIX */
/*      GL_PIXEL_TILE_GRID_DEPTH_SGIX */
/*      GL_PIXEL_TILE_CACHE_SIZE_SGIX */
/*      GL_DEFORMATIONS_MASK_SGIX */
/*      GL_REFERENCE_PLANE_EQUATION_SGIX */
/*      GL_REFERENCE_PLANE_SGIX */
/*      GL_SCALEBIAS_HINT_SGIX */
/*      GL_SPRITE_SGIX */
/*      GL_SPRITE_MODE_SGIX */
/*      GL_SPRITE_AXIS_SGIX */
/*      GL_SPRITE_TRANSLATION_SGIX */
/*      GL_PACK_SUBSAMPLE_RATE_SGIX */
/*      GL_UNPACK_SUBSAMPLE_RATE_SGIX */
/*      GL_PACK_RESAMPLE_SGIX */
/*      GL_UNPACK_RESAMPLE_SGIX */
/*      GL_POST_TEXTURE_FILTER_BIAS_RANGE_SGIX */
/*      GL_POST_TEXTURE_FILTER_SCALE_RANGE_SGIX */
/*      GL_VERTEX_PRECLIP_SGIX */
/*      GL_VERTEX_PRECLIP_HINT_SGIX */
/*      GL_COLOR_MATRIX_SGI */
/*      GL_COLOR_MATRIX_STACK_DEPTH_SGI */
/*      GL_MAX_COLOR_MATRIX_STACK_DEPTH_SGI */
/*      GL_POST_COLOR_MATRIX_RED_SCALE_SGI */
/*      GL_POST_COLOR_MATRIX_GREEN_SCALE_SGI */
/*      GL_POST_COLOR_MATRIX_BLUE_SCALE_SGI */
/*      GL_POST_COLOR_MATRIX_ALPHA_SCALE_SGI */
/*      GL_POST_COLOR_MATRIX_RED_BIAS_SGI */
/*      GL_POST_COLOR_MATRIX_GREEN_BIAS_SGI */
/*      GL_POST_COLOR_MATRIX_BLUE_BIAS_SGI */
/*      GL_POST_COLOR_MATRIX_ALPHA_BIAS_SGI */
/*      GL_COLOR_TABLE_SGI */
/*      GL_POST_CONVOLUTION_COLOR_TABLE_SGI */
/*      GL_POST_COLOR_MATRIX_COLOR_TABLE_SGI */
/*      GL_TEXTURE_COLOR_TABLE_SGI */

/* GetTextureParameter */
/*      GL_TEXTURE_MAG_FILTER */
/*      GL_TEXTURE_MIN_FILTER */
/*      GL_TEXTURE_WRAP_S */
/*      GL_TEXTURE_WRAP_T */
#define GL_TEXTURE_WIDTH                    0x1000
#define GL_TEXTURE_HEIGHT                   0x1001
#define GL_TEXTURE_INTERNAL_FORMAT          0x1003
#define GL_TEXTURE_COMPONENTS               0x1003
#define GL_TEXTURE_BORDER_COLOR             0x1004
#define GL_TEXTURE_BORDER                   0x1005
#define GL_TEXTURE_RED_SIZE                 0x805C
#define GL_TEXTURE_GREEN_SIZE               0x805D
#define GL_TEXTURE_BLUE_SIZE                0x805E
#define GL_TEXTURE_ALPHA_SIZE               0x805F
#define GL_TEXTURE_LUMINANCE_SIZE           0x8060
#define GL_TEXTURE_INTENSITY_SIZE           0x8061
#define GL_TEXTURE_PRIORITY                 0x8066
#define GL_TEXTURE_RESIDENT                 0x8067
/*      GL_TEXTURE_DEPTH_EXT */
/*      GL_TEXTURE_WRAP_R_EXT */
/*      GL_DETAIL_TEXTURE_LEVEL_SGIS */
/*      GL_DETAIL_TEXTURE_MODE_SGIS */
/*      GL_DETAIL_TEXTURE_FUNC_POINTS_SGIS */
/*      GL_GENERATE_MIPMAP_SGIS */
/*      GL_SHARPEN_TEXTURE_FUNC_POINTS_SGIS */
/*      GL_TEXTURE_FILTER4_SIZE_SGIS */
/*      GL_TEXTURE_MIN_LOD_SGIS */
/*      GL_TEXTURE_MAX_LOD_SGIS */
/*      GL_TEXTURE_BASE_LEVEL_SGIS */
/*      GL_TEXTURE_MAX_LEVEL_SGIS */
/*      GL_DUAL_TEXTURE_SELECT_SGIS */
/*      GL_QUAD_TEXTURE_SELECT_SGIS */
/*      GL_TEXTURE_4DSIZE_SGIS */
/*      GL_TEXTURE_WRAP_Q_SGIS */
/*      GL_TEXTURE_CLIPMAP_CENTER_SGIX */
/*      GL_TEXTURE_CLIPMAP_FRAME_SGIX */
/*      GL_TEXTURE_CLIPMAP_OFFSET_SGIX */
/*      GL_TEXTURE_CLIPMAP_VIRTUAL_DEPTH_SGIX */
/*      GL_TEXTURE_CLIPMAP_LOD_OFFSET_SGIX */
/*      GL_TEXTURE_CLIPMAP_DEPTH_SGIX */
/*      GL_TEXTURE_COMPARE_SGIX */
/*      GL_TEXTURE_COMPARE_OPERATOR_SGIX */
/*      GL_TEXTURE_LEQUAL_R_SGIX */
/*      GL_TEXTURE_GEQUAL_R_SGIX */
/*      GL_SHADOW_AMBIENT_SGIX */
/*      GL_TEXTURE_MAX_CLAMP_S_SGIX */
/*      GL_TEXTURE_MAX_CLAMP_T_SGIX */
/*      GL_TEXTURE_MAX_CLAMP_R_SGIX */
/*      GL_TEXTURE_LOD_BIAS_S_SGIX */
/*      GL_TEXTURE_LOD_BIAS_T_SGIX */
/*      GL_TEXTURE_LOD_BIAS_R_SGIX */
/*      GL_POST_TEXTURE_FILTER_BIAS_SGIX */
/*      GL_POST_TEXTURE_FILTER_SCALE_SGIX */

/* HintMode */
#define GL_DONT_CARE                        0x1100
#define GL_FASTEST                          0x1101
#define GL_NICEST                           0x1102

/* HintTarget */
/*      GL_PERSPECTIVE_CORRECTION_HINT */
/*      GL_POINT_SMOOTH_HINT */
/*      GL_LINE_SMOOTH_HINT */
/*      GL_POLYGON_SMOOTH_HINT */
/*      GL_FOG_HINT */
/*      GL_PACK_CMYK_HINT_EXT */
/*      GL_UNPACK_CMYK_HINT_EXT */
/*      GL_GENERATE_MIPMAP_HINT_SGIS */
/*      GL_CONVOLUTION_HINT_SGIX */
/*      GL_SCALEBIAS_HINT_SGIX */
/*      GL_TEXTURE_MULTI_BUFFER_HINT_SGIX */
/*      GL_VERTEX_PRECLIP_HINT_SGIX */

/* HistogramTargetEXT */
/*      GL_HISTOGRAM_EXT */
/*      GL_PROXY_HISTOGRAM_EXT */

/* IndexPointerType */
/*      GL_SHORT */
/*      GL_INT */
/*      GL_FLOAT */
/*      GL_DOUBLE */

/* LightEnvModeSGIX */
/*      GL_REPLACE */
/*      GL_MODULATE */
/*      GL_ADD */

/* LightEnvParameterSGIX */
/*      GL_LIGHT_ENV_MODE_SGIX */

/* LightModelColorControl */
/*      GL_SINGLE_COLOR */
/*      GL_SEPARATE_SPECULAR_COLOR */

/* LightModelParameter */
/*      GL_LIGHT_MODEL_AMBIENT */
/*      GL_LIGHT_MODEL_LOCAL_VIEWER */
/*      GL_LIGHT_MODEL_TWO_SIDE */
/*      GL_LIGHT_MODEL_COLOR_CONTROL */

/* LightParameter */
#define GL_AMBIENT                          0x1200
#define GL_DIFFUSE                          0x1201
#define GL_SPECULAR                         0x1202
#define GL_POSITION                         0x1203
#define GL_SPOT_DIRECTION                   0x1204
#define GL_SPOT_EXPONENT                    0x1205
#define GL_SPOT_CUTOFF                      0x1206
#define GL_CONSTANT_ATTENUATION             0x1207
#define GL_LINEAR_ATTENUATION               0x1208
#define GL_QUADRATIC_ATTENUATION            0x1209

/* ListMode */
#define GL_COMPILE                          0x1300
#define GL_COMPILE_AND_EXECUTE              0x1301

/* DataType */
#define GL_BYTE                             0x1400
#define GL_UNSIGNED_BYTE                    0x1401
#define GL_SHORT                            0x1402
#define GL_UNSIGNED_SHORT                   0x1403
#define GL_INT                              0x1404
#define GL_UNSIGNED_INT                     0x1405
#define GL_FLOAT                            0x1406
#define GL_2_BYTES                          0x1407
#define GL_3_BYTES                          0x1408
#define GL_4_BYTES                          0x1409
#define GL_DOUBLE                           0x140A
#define GL_DOUBLE_EXT                       0x140A

/* ListNameType */
/*      GL_BYTE */
/*      GL_UNSIGNED_BYTE */
/*      GL_SHORT */
/*      GL_UNSIGNED_SHORT */
/*      GL_INT */
/*      GL_UNSIGNED_INT */
/*      GL_FLOAT */
/*      GL_2_BYTES */
/*      GL_3_BYTES */
/*      GL_4_BYTES */

/* ListParameterName */
/*      GL_LIST_PRIORITY_SGIX */

/* LogicOp */
#define GL_CLEAR                            0x1500
#define GL_AND                              0x1501
#define GL_AND_REVERSE                      0x1502
#define GL_COPY                             0x1503
#define GL_AND_INVERTED                     0x1504
#define GL_NOOP                             0x1505
#define GL_XOR                              0x1506
#define GL_OR                               0x1507
#define GL_NOR                              0x1508
#define GL_EQUIV                            0x1509
#define GL_INVERT                           0x150A
#define GL_OR_REVERSE                       0x150B
#define GL_COPY_INVERTED                    0x150C
#define GL_OR_INVERTED                      0x150D
#define GL_NAND                             0x150E
#define GL_SET                              0x150F

/* MapTarget */
/*      GL_MAP1_COLOR_4 */
/*      GL_MAP1_INDEX */
/*      GL_MAP1_NORMAL */
/*      GL_MAP1_TEXTURE_COORD_1 */
/*      GL_MAP1_TEXTURE_COORD_2 */
/*      GL_MAP1_TEXTURE_COORD_3 */
/*      GL_MAP1_TEXTURE_COORD_4 */
/*      GL_MAP1_VERTEX_3 */
/*      GL_MAP1_VERTEX_4 */
/*      GL_MAP2_COLOR_4 */
/*      GL_MAP2_INDEX */
/*      GL_MAP2_NORMAL */
/*      GL_MAP2_TEXTURE_COORD_1 */
/*      GL_MAP2_TEXTURE_COORD_2 */
/*      GL_MAP2_TEXTURE_COORD_3 */
/*      GL_MAP2_TEXTURE_COORD_4 */
/*      GL_MAP2_VERTEX_3 */
/*      GL_MAP2_VERTEX_4 */
/*      GL_GEOMETRY_DEFORMATION_SGIX */
/*      GL_TEXTURE_DEFORMATION_SGIX */

/* MaterialFace */
/*      GL_FRONT */
/*      GL_BACK */
/*      GL_FRONT_AND_BACK */

/* MaterialParameter */
#define GL_EMISSION                         0x1600
#define GL_SHININESS                        0x1601
#define GL_AMBIENT_AND_DIFFUSE              0x1602
#define GL_COLOR_INDEXES                    0x1603
/*      GL_AMBIENT */
/*      GL_DIFFUSE */
/*      GL_SPECULAR */

/* MatrixMode */
#define GL_MODELVIEW                        0x1700
#define GL_PROJECTION                       0x1701
#define GL_TEXTURE                          0x1702

/* MeshMode1 */
/*      GL_POINT */
/*      GL_LINE */

/* MeshMode2 */
/*      GL_POINT */
/*      GL_LINE */
/*      GL_FILL */

/* MinmaxTargetEXT */
/*      GL_MINMAX_EXT */

/* NormalPointerType */
/*      GL_BYTE */
/*      GL_SHORT */
/*      GL_INT */
/*      GL_FLOAT */
/*      GL_DOUBLE */

/* PixelCopyType */
#define GL_COLOR                            0x1800
#define GL_DEPTH                            0x1801
#define GL_STENCIL                          0x1802

/* PixelFormat */
#define GL_COLOR_INDEX                      0x1900
#define GL_STENCIL_INDEX                    0x1901
#define GL_DEPTH_COMPONENT                  0x1902
#define GL_RED                              0x1903
#define GL_GREEN                            0x1904
#define GL_BLUE                             0x1905
#define GL_ALPHA                            0x1906
#define GL_RGB                              0x1907
#define GL_RGBA                             0x1908
#define GL_LUMINANCE                        0x1909
#define GL_LUMINANCE_ALPHA                  0x190A
/*      GL_ABGR_EXT */
/*      GL_CMYK_EXT */
/*      GL_CMYKA_EXT */
/*      GL_R5_G6_B5_ICC_SGIX */
/*      GL_R5_G6_B5_A8_ICC_SGIX */
/*      GL_ALPHA16_ICC_SGIX */
/*      GL_LUMINANCE16_ICC_SGIX */
/*      GL_LUMINANCE16_ALPHA8_ICC_SGIX */
/*      GL_YCRCB_422_SGIX */
/*      GL_YCRCB_444_SGIX */

/* PixelMap */
/*      GL_PIXEL_MAP_I_TO_I */
/*      GL_PIXEL_MAP_S_TO_S */
/*      GL_PIXEL_MAP_I_TO_R */
/*      GL_PIXEL_MAP_I_TO_G */
/*      GL_PIXEL_MAP_I_TO_B */
/*      GL_PIXEL_MAP_I_TO_A */
/*      GL_PIXEL_MAP_R_TO_R */
/*      GL_PIXEL_MAP_G_TO_G */
/*      GL_PIXEL_MAP_B_TO_B */
/*      GL_PIXEL_MAP_A_TO_A */

/* PixelStoreParameter */
/*      GL_UNPACK_SWAP_BYTES */
/*      GL_UNPACK_LSB_FIRST */
/*      GL_UNPACK_ROW_LENGTH */
/*      GL_UNPACK_SKIP_ROWS */
/*      GL_UNPACK_SKIP_PIXELS */
/*      GL_UNPACK_ALIGNMENT */
/*      GL_PACK_SWAP_BYTES */
/*      GL_PACK_LSB_FIRST */
/*      GL_PACK_ROW_LENGTH */
/*      GL_PACK_SKIP_ROWS */
/*      GL_PACK_SKIP_PIXELS */
/*      GL_PACK_ALIGNMENT */
/*      GL_PACK_SKIP_IMAGES_EXT */
/*      GL_PACK_IMAGE_HEIGHT_EXT */
/*      GL_UNPACK_SKIP_IMAGES_EXT */
/*      GL_UNPACK_IMAGE_HEIGHT_EXT */
/*      GL_PACK_SKIP_VOLUMES_SGIS */
/*      GL_PACK_IMAGE_DEPTH_SGIS */
/*      GL_UNPACK_SKIP_VOLUMES_SGIS */
/*      GL_UNPACK_IMAGE_DEPTH_SGIS */
/*      GL_PIXEL_TILE_WIDTH_SGIX */
/*      GL_PIXEL_TILE_HEIGHT_SGIX */
/*      GL_PIXEL_TILE_GRID_WIDTH_SGIX */
/*      GL_PIXEL_TILE_GRID_HEIGHT_SGIX */
/*      GL_PIXEL_TILE_GRID_DEPTH_SGIX */
/*      GL_PIXEL_TILE_CACHE_SIZE_SGIX */
/*      GL_PACK_SUBSAMPLE_RATE_SGIX */
/*      GL_UNPACK_SUBSAMPLE_RATE_SGIX */
/*      GL_PACK_RESAMPLE_SGIX */
/*      GL_UNPACK_RESAMPLE_SGIX */

/* PixelStoreResampleMode */
/*      GL_RESAMPLE_REPLICATE_SGIX */
/*      GL_RESAMPLE_ZERO_FILL_SGIX */
/*      GL_RESAMPLE_DECIMATE_SGIX */

/* PixelStoreSubsampleRate */
/*      GL_PIXEL_SUBSAMPLE_4444_SGIX */
/*      GL_PIXEL_SUBSAMPLE_2424_SGIX */
/*      GL_PIXEL_SUBSAMPLE_4242_SGIX */

/* PixelTexGenMode */
/*      GL_NONE */
/*      GL_RGB */
/*      GL_RGBA */
/*      GL_LUMINANCE */
/*      GL_LUMINANCE_ALPHA */
/*      GL_PIXEL_TEX_GEN_ALPHA_REPLACE_SGIX */
/*      GL_PIXEL_TEX_GEN_ALPHA_NO_REPLACE_SGIX */
/*      GL_PIXEL_TEX_GEN_ALPHA_MS_SGIX */
/*      GL_PIXEL_TEX_GEN_ALPHA_LS_SGIX */

/* PixelTexGenParameterNameSGIS */
/*      GL_PIXEL_FRAGMENT_RGB_SOURCE_SGIS */
/*      GL_PIXEL_FRAGMENT_ALPHA_SOURCE_SGIS */

/* PixelTransferParameter */
/*      GL_MAP_COLOR */
/*      GL_MAP_STENCIL */
/*      GL_INDEX_SHIFT */
/*      GL_INDEX_OFFSET */
/*      GL_RED_SCALE */
/*      GL_RED_BIAS */
/*      GL_GREEN_SCALE */
/*      GL_GREEN_BIAS */
/*      GL_BLUE_SCALE */
/*      GL_BLUE_BIAS */
/*      GL_ALPHA_SCALE */
/*      GL_ALPHA_BIAS */
/*      GL_DEPTH_SCALE */
/*      GL_DEPTH_BIAS */
/*      GL_POST_CONVOLUTION_RED_SCALE_EXT */
/*      GL_POST_CONVOLUTION_GREEN_SCALE_EXT */
/*      GL_POST_CONVOLUTION_BLUE_SCALE_EXT */
/*      GL_POST_CONVOLUTION_ALPHA_SCALE_EXT */
/*      GL_POST_CONVOLUTION_RED_BIAS_EXT */
/*      GL_POST_CONVOLUTION_GREEN_BIAS_EXT */
/*      GL_POST_CONVOLUTION_BLUE_BIAS_EXT */
/*      GL_POST_CONVOLUTION_ALPHA_BIAS_EXT */
/*      GL_POST_COLOR_MATRIX_RED_SCALE_SGI */
/*      GL_POST_COLOR_MATRIX_GREEN_SCALE_SGI */
/*      GL_POST_COLOR_MATRIX_BLUE_SCALE_SGI */
/*      GL_POST_COLOR_MATRIX_ALPHA_SCALE_SGI */
/*      GL_POST_COLOR_MATRIX_RED_BIAS_SGI */
/*      GL_POST_COLOR_MATRIX_GREEN_BIAS_SGI */
/*      GL_POST_COLOR_MATRIX_BLUE_BIAS_SGI */
/*      GL_POST_COLOR_MATRIX_ALPHA_BIAS_SGI */

/* PixelType */
#define GL_BITMAP                           0x1A00
/*      GL_BYTE */
/*      GL_UNSIGNED_BYTE */
/*      GL_SHORT */
/*      GL_UNSIGNED_SHORT */
/*      GL_INT */
/*      GL_UNSIGNED_INT */
/*      GL_FLOAT */
/*      GL_UNSIGNED_BYTE_3_3_2_EXT */
/*      GL_UNSIGNED_SHORT_4_4_4_4_EXT */
/*      GL_UNSIGNED_SHORT_5_5_5_1_EXT */
/*      GL_UNSIGNED_INT_8_8_8_8_EXT */
/*      GL_UNSIGNED_INT_10_10_10_2_EXT */

/* PointParameterNameSGIS */
/*      GL_POINT_SIZE_MIN_SGIS */
/*      GL_POINT_SIZE_MAX_SGIS */
/*      GL_POINT_FADE_THRESHOLD_SIZE_SGIS */
/*      GL_DISTANCE_ATTENUATION_SGIS */

/* PolygonMode */
#define GL_POINT                            0x1B00
#define GL_LINE                             0x1B01
#define GL_FILL                             0x1B02

/* ReadBufferMode */
/*      GL_FRONT_LEFT */
/*      GL_FRONT_RIGHT */
/*      GL_BACK_LEFT */
/*      GL_BACK_RIGHT */
/*      GL_FRONT */
/*      GL_BACK */
/*      GL_LEFT */
/*      GL_RIGHT */
/*      GL_AUX0 */
/*      GL_AUX1 */
/*      GL_AUX2 */
/*      GL_AUX3 */

/* RenderingMode */
#define GL_RENDER                           0x1C00
#define GL_FEEDBACK                         0x1C01
#define GL_SELECT                           0x1C02

/* SamplePatternPatternSGIS */
/*      GL_1PASS_SGIS */
/*      GL_2PASS_0_SGIS */
/*      GL_2PASS_1_SGIS */
/*      GL_4PASS_0_SGIS */
/*      GL_4PASS_1_SGIS */
/*      GL_4PASS_2_SGIS */
/*      GL_4PASS_3_SGIS */

/* SeparableTargetEXT */
/*      GL_SEPARABLE_2D_EXT */

/* ShadingModel */
#define GL_FLAT                             0x1D00
#define GL_SMOOTH                           0x1D01

/* StencilFunction */
/*      GL_NEVER */
/*      GL_LESS */
/*      GL_EQUAL */
/*      GL_LEQUAL */
/*      GL_GREATER */
/*      GL_NOTEQUAL */
/*      GL_GEQUAL */
/*      GL_ALWAYS */

/* StencilOp */
/*      GL_ZERO */
#define GL_KEEP                             0x1E00
#define GL_REPLACE                          0x1E01
#define GL_INCR                             0x1E02
#define GL_DECR                             0x1E03
/*      GL_INVERT */

/* StringName */
#define GL_VENDOR                           0x1F00
#define GL_RENDERER                         0x1F01
#define GL_VERSION                          0x1F02
#define GL_EXTENSIONS                       0x1F03

/* TexCoordPointerType */
/*      GL_SHORT */
/*      GL_INT */
/*      GL_FLOAT */
/*      GL_DOUBLE */

/* TextureCoordName */
#define GL_S                                0x2000
#define GL_T                                0x2001
#define GL_R                                0x2002
#define GL_Q                                0x2003

/* TextureEnvMode */
#define GL_MODULATE                         0x2100
#define GL_DECAL                            0x2101
/*      GL_BLEND */
/*      GL_REPLACE_EXT */
/*      GL_ADD */
/*      GL_TEXTURE_ENV_BIAS_SGIX */

/* TextureEnvParameter */
#define GL_TEXTURE_ENV_MODE                 0x2200
#define GL_TEXTURE_ENV_COLOR                0x2201

/* TextureEnvTarget */
#define GL_TEXTURE_ENV                      0x2300

/* TextureFilterFuncSGIS */
/*      GL_FILTER4_SGIS */

/* TextureGenMode */
#define GL_EYE_LINEAR                       0x2400
#define GL_OBJECT_LINEAR                    0x2401
#define GL_SPHERE_MAP                       0x2402
/*      GL_EYE_DISTANCE_TO_POINT_SGIS */
/*      GL_OBJECT_DISTANCE_TO_POINT_SGIS */
/*      GL_EYE_DISTANCE_TO_LINE_SGIS */
/*      GL_OBJECT_DISTANCE_TO_LINE_SGIS */

/* TextureGenParameter */
#define GL_TEXTURE_GEN_MODE                 0x2500
#define GL_OBJECT_PLANE                     0x2501
#define GL_EYE_PLANE                        0x2502
/*      GL_EYE_POINT_SGIS */
/*      GL_OBJECT_POINT_SGIS */
/*      GL_EYE_LINE_SGIS */
/*      GL_OBJECT_LINE_SGIS */

/* TextureMagFilter */
#define GL_NEAREST                          0x2600
#define GL_LINEAR                           0x2601
/*      GL_LINEAR_DETAIL_SGIS */
/*      GL_LINEAR_DETAIL_ALPHA_SGIS */
/*      GL_LINEAR_DETAIL_COLOR_SGIS */
/*      GL_LINEAR_SHARPEN_SGIS */
/*      GL_LINEAR_SHARPEN_ALPHA_SGIS */
/*      GL_LINEAR_SHARPEN_COLOR_SGIS */
/*      GL_FILTER4_SGIS */
/*      GL_PIXEL_TEX_GEN_Q_CEILING_SGIX */
/*      GL_PIXEL_TEX_GEN_Q_ROUND_SGIX */
/*      GL_PIXEL_TEX_GEN_Q_FLOOR_SGIX */

/* TextureMinFilter */
/*      GL_NEAREST */
/*      GL_LINEAR */
#define GL_NEAREST_MIPMAP_NEAREST           0x2700
#define GL_LINEAR_MIPMAP_NEAREST            0x2701
#define GL_NEAREST_MIPMAP_LINEAR            0x2702
#define GL_LINEAR_MIPMAP_LINEAR             0x2703
/*      GL_FILTER4_SGIS */
/*      GL_LINEAR_CLIPMAP_LINEAR_SGIX */
/*      GL_NEAREST_CLIPMAP_NEAREST_SGIX */
/*      GL_NEAREST_CLIPMAP_LINEAR_SGIX */
/*      GL_LINEAR_CLIPMAP_NEAREST_SGIX */
/*      GL_PIXEL_TEX_GEN_Q_CEILING_SGIX */
/*      GL_PIXEL_TEX_GEN_Q_ROUND_SGIX */
/*      GL_PIXEL_TEX_GEN_Q_FLOOR_SGIX */

/* TextureParameterName */
#define GL_TEXTURE_MAG_FILTER               0x2800
#define GL_TEXTURE_MIN_FILTER               0x2801
#define GL_TEXTURE_WRAP_S                   0x2802
#define GL_TEXTURE_WRAP_T                   0x2803
/*      GL_TEXTURE_BORDER_COLOR */
/*      GL_TEXTURE_PRIORITY */
/*      GL_TEXTURE_WRAP_R_EXT */
/*      GL_DETAIL_TEXTURE_LEVEL_SGIS */
/*      GL_DETAIL_TEXTURE_MODE_SGIS */
/*      GL_GENERATE_MIPMAP_SGIS */
/*      GL_DUAL_TEXTURE_SELECT_SGIS */
/*      GL_QUAD_TEXTURE_SELECT_SGIS */
/*      GL_TEXTURE_WRAP_Q_SGIS */
/*      GL_TEXTURE_CLIPMAP_CENTER_SGIX */
/*      GL_TEXTURE_CLIPMAP_FRAME_SGIX */
/*      GL_TEXTURE_CLIPMAP_OFFSET_SGIX */
/*      GL_TEXTURE_CLIPMAP_VIRTUAL_DEPTH_SGIX */
/*      GL_TEXTURE_CLIPMAP_LOD_OFFSET_SGIX */
/*      GL_TEXTURE_CLIPMAP_DEPTH_SGIX */
/*      GL_TEXTURE_COMPARE_SGIX */
/*      GL_TEXTURE_COMPARE_OPERATOR_SGIX */
/*      GL_SHADOW_AMBIENT_SGIX */
/*      GL_TEXTURE_MAX_CLAMP_S_SGIX */
/*      GL_TEXTURE_MAX_CLAMP_T_SGIX */
/*      GL_TEXTURE_MAX_CLAMP_R_SGIX */
/*      GL_TEXTURE_LOD_BIAS_S_SGIX */
/*      GL_TEXTURE_LOD_BIAS_T_SGIX */
/*      GL_TEXTURE_LOD_BIAS_R_SGIX */
/*      GL_POST_TEXTURE_FILTER_BIAS_SGIX */
/*      GL_POST_TEXTURE_FILTER_SCALE_SGIX */

/* TextureTarget */
/*      GL_TEXTURE_1D */
/*      GL_TEXTURE_2D */
#define GL_PROXY_TEXTURE_1D                 0x8063
#define GL_PROXY_TEXTURE_2D                 0x8064
/*      GL_TEXTURE_3D_EXT */
/*      GL_PROXY_TEXTURE_3D_EXT */
/*      GL_DETAIL_TEXTURE_2D_SGIS */
/*      GL_TEXTURE_4D_SGIS */
/*      GL_PROXY_TEXTURE_4D_SGIS */
/*      GL_TEXTURE_MIN_LOD_SGIS */
/*      GL_TEXTURE_MAX_LOD_SGIS */
/*      GL_TEXTURE_BASE_LEVEL_SGIS */
/*      GL_TEXTURE_MAX_LEVEL_SGIS */

/* TextureWrapMode */
#define GL_CLAMP                            0x2900
#define GL_REPEAT                           0x2901
/*      GL_CLAMP_TO_BORDER_SGIS */
/*      GL_CLAMP_TO_EDGE_SGIS */

/* PixelInternalFormat */
#define GL_R3_G3_B2                         0x2A10
#define GL_ALPHA4                           0x803B
#define GL_ALPHA8                           0x803C
#define GL_ALPHA12                          0x803D
#define GL_ALPHA16                          0x803E
#define GL_LUMINANCE4                       0x803F
#define GL_LUMINANCE8                       0x8040
#define GL_LUMINANCE12                      0x8041
#define GL_LUMINANCE16                      0x8042
#define GL_LUMINANCE4_ALPHA4                0x8043
#define GL_LUMINANCE6_ALPHA2                0x8044
#define GL_LUMINANCE8_ALPHA8                0x8045
#define GL_LUMINANCE12_ALPHA4               0x8046
#define GL_LUMINANCE12_ALPHA12              0x8047
#define GL_LUMINANCE16_ALPHA16              0x8048
#define GL_INTENSITY                        0x8049
#define GL_INTENSITY4                       0x804A
#define GL_INTENSITY8                       0x804B
#define GL_INTENSITY12                      0x804C
#define GL_INTENSITY16                      0x804D
#define GL_RGB4                             0x804F
#define GL_RGB5                             0x8050
#define GL_RGB8                             0x8051
#define GL_RGB10                            0x8052
#define GL_RGB12                            0x8053
#define GL_RGB16                            0x8054
#define GL_RGBA2                            0x8055
#define GL_RGBA4                            0x8056
#define GL_RGB5_A1                          0x8057
#define GL_RGBA8                            0x8058
#define GL_RGB10_A2                         0x8059
#define GL_RGBA12                           0x805A
#define GL_RGBA16                           0x805B
/*      GL_RGB2_EXT */
/*      GL_DUAL_ALPHA4_SGIS */
/*      GL_DUAL_ALPHA8_SGIS */
/*      GL_DUAL_ALPHA12_SGIS */
/*      GL_DUAL_ALPHA16_SGIS */
/*      GL_DUAL_LUMINANCE4_SGIS */
/*      GL_DUAL_LUMINANCE8_SGIS */
/*      GL_DUAL_LUMINANCE12_SGIS */
/*      GL_DUAL_LUMINANCE16_SGIS */
/*      GL_DUAL_INTENSITY4_SGIS */
/*      GL_DUAL_INTENSITY8_SGIS */
/*      GL_DUAL_INTENSITY12_SGIS */
/*      GL_DUAL_INTENSITY16_SGIS */
/*      GL_DUAL_LUMINANCE_ALPHA4_SGIS */
/*      GL_DUAL_LUMINANCE_ALPHA8_SGIS */
/*      GL_QUAD_ALPHA4_SGIS */
/*      GL_QUAD_ALPHA8_SGIS */
/*      GL_QUAD_LUMINANCE4_SGIS */
/*      GL_QUAD_LUMINANCE8_SGIS */
/*      GL_QUAD_INTENSITY4_SGIS */
/*      GL_QUAD_INTENSITY8_SGIS */
/*      GL_DEPTH_COMPONENT16_SGIX */
/*      GL_DEPTH_COMPONENT24_SGIX */
/*      GL_DEPTH_COMPONENT32_SGIX */
/*      GL_RGB_ICC_SGIX */
/*      GL_RGBA_ICC_SGIX */
/*      GL_ALPHA_ICC_SGIX */
/*      GL_LUMINANCE_ICC_SGIX */
/*      GL_INTENSITY_ICC_SGIX */
/*      GL_LUMINANCE_ALPHA_ICC_SGIX */
/*      GL_R5_G6_B5_ICC_SGIX */
/*      GL_R5_G6_B5_A8_ICC_SGIX */
/*      GL_ALPHA16_ICC_SGIX */
/*      GL_LUMINANCE16_ICC_SGIX */
/*      GL_INTENSITY16_ICC_SGIX */
/*      GL_LUMINANCE16_ALPHA8_ICC_SGIX */

/* InterleavedArrayFormat */
#define GL_V2F                              0x2A20
#define GL_V3F                              0x2A21
#define GL_C4UB_V2F                         0x2A22
#define GL_C4UB_V3F                         0x2A23
#define GL_C3F_V3F                          0x2A24
#define GL_N3F_V3F                          0x2A25
#define GL_C4F_N3F_V3F                      0x2A26
#define GL_T2F_V3F                          0x2A27
#define GL_T4F_V4F                          0x2A28
#define GL_T2F_C4UB_V3F                     0x2A29
#define GL_T2F_C3F_V3F                      0x2A2A
#define GL_T2F_N3F_V3F                      0x2A2B
#define GL_T2F_C4F_N3F_V3F                  0x2A2C
#define GL_T4F_C4F_N3F_V4F                  0x2A2D

/* VertexPointerType */
/*      GL_SHORT */
/*      GL_INT */
/*      GL_FLOAT */
/*      GL_DOUBLE */

/* ClipPlaneName */
#define GL_CLIP_PLANE0                      0x3000
#define GL_CLIP_PLANE1                      0x3001
#define GL_CLIP_PLANE2                      0x3002
#define GL_CLIP_PLANE3                      0x3003
#define GL_CLIP_PLANE4                      0x3004
#define GL_CLIP_PLANE5                      0x3005

/* LightName */
#define GL_LIGHT0                           0x4000
#define GL_LIGHT1                           0x4001
#define GL_LIGHT2                           0x4002
#define GL_LIGHT3                           0x4003
#define GL_LIGHT4                           0x4004
#define GL_LIGHT5                           0x4005
#define GL_LIGHT6                           0x4006
#define GL_LIGHT7                           0x4007
/*      GL_FRAGMENT_LIGHT0_SGIX */
/*      GL_FRAGMENT_LIGHT1_SGIX */
/*      GL_FRAGMENT_LIGHT2_SGIX */
/*      GL_FRAGMENT_LIGHT3_SGIX */
/*      GL_FRAGMENT_LIGHT4_SGIX */
/*      GL_FRAGMENT_LIGHT5_SGIX */
/*      GL_FRAGMENT_LIGHT6_SGIX */
/*      GL_FRAGMENT_LIGHT7_SGIX */

/* VERSION_1_2 */
#define GL_UNSIGNED_BYTE_3_3_2              0x8032
#define GL_UNSIGNED_SHORT_4_4_4_4           0x8033
#define GL_UNSIGNED_SHORT_5_5_5_1           0x8034
#define GL_UNSIGNED_INT_8_8_8_8             0x8035
#define GL_UNSIGNED_INT_10_10_10_2          0x8036
#define GL_RESCALE_NORMAL                   0x803A
#define GL_PACK_SKIP_IMAGES                 0x806B
#define GL_PACK_IMAGE_HEIGHT                0x806C
#define GL_UNPACK_SKIP_IMAGES               0x806D
#define GL_UNPACK_IMAGE_HEIGHT              0x806E
#define GL_TEXTURE_3D                       0x806F
#define GL_PROXY_TEXTURE_3D                 0x8070
#define GL_TEXTURE_DEPTH                    0x8071
#define GL_TEXTURE_WRAP_R                   0x8072
#define GL_MAX_3D_TEXTURE_SIZE              0x8073
#define GL_UNSIGNED_BYTE_2_3_3_REV          0x8362
#define GL_UNSIGNED_SHORT_5_6_5             0x8363
#define GL_UNSIGNED_SHORT_5_6_5_REV         0x8364
#define GL_UNSIGNED_SHORT_4_4_4_4_REV       0x8365
#define GL_UNSIGNED_SHORT_1_5_5_5_REV       0x8366
#define GL_UNSIGNED_INT_8_8_8_8_REV         0x8367
#define GL_UNSIGNED_INT_2_10_10_10_REV      0x8368
#define GL_BGR                              0x80E0
#define GL_BGRA                             0x80E1
#define GL_MAX_ELEMENTS_VERTICES            0x80E8
#define GL_MAX_ELEMENTS_INDICES             0x80E9
#define GL_CLAMP_TO_EDGE                    0x812F
#define GL_TEXTURE_MIN_LOD                  0x813A
#define GL_TEXTURE_MAX_LOD                  0x813B
#define GL_TEXTURE_BASE_LEVEL               0x813C
#define GL_TEXTURE_MAX_LEVEL                0x813D
#define GL_LIGHT_MODEL_COLOR_CONTROL        0x81F8
#define GL_SINGLE_COLOR                     0x81F9
#define GL_SEPARATE_SPECULAR_COLOR          0x81FA
#define GL_SMOOTH_POINT_SIZE_RANGE          0x0B12
#define GL_SMOOTH_POINT_SIZE_GRANULARITY    0x0B13
#define GL_SMOOTH_LINE_WIDTH_RANGE          0x0B22
#define GL_SMOOTH_LINE_WIDTH_GRANULARITY    0x0B23
#define GL_ALIASED_POINT_SIZE_RANGE         0x846D
#define GL_ALIASED_LINE_WIDTH_RANGE         0x846E

/* ARB_imaging */
#define GL_CONSTANT_COLOR                   0x8001
#define GL_ONE_MINUS_CONSTANT_COLOR         0x8002
#define GL_CONSTANT_ALPHA                   0x8003
#define GL_ONE_MINUS_CONSTANT_ALPHA         0x8004
#define GL_BLEND_COLOR                      0x8005
#define GL_FUNC_ADD                         0x8006
#define GL_MIN                              0x8007
#define GL_MAX                              0x8008
#define GL_BLEND_EQUATION                   0x8009
#define GL_FUNC_SUBTRACT                    0x800A
#define GL_FUNC_REVERSE_SUBTRACT            0x800B
#define GL_CONVOLUTION_1D                   0x8010
#define GL_CONVOLUTION_2D                   0x8011
#define GL_SEPARABLE_2D                     0x8012
#define GL_CONVOLUTION_BORDER_MODE          0x8013
#define GL_CONVOLUTION_FILTER_SCALE         0x8014
#define GL_CONVOLUTION_FILTER_BIAS          0x8015
#define GL_REDUCE                           0x8016
#define GL_CONVOLUTION_FORMAT               0x8017
#define GL_CONVOLUTION_WIDTH                0x8018
#define GL_CONVOLUTION_HEIGHT               0x8019
#define GL_MAX_CONVOLUTION_WIDTH            0x801A
#define GL_MAX_CONVOLUTION_HEIGHT           0x801B
#define GL_POST_CONVOLUTION_RED_SCALE       0x801C
#define GL_POST_CONVOLUTION_GREEN_SCALE     0x801D
#define GL_POST_CONVOLUTION_BLUE_SCALE      0x801E
#define GL_POST_CONVOLUTION_ALPHA_SCALE     0x801F
#define GL_POST_CONVOLUTION_RED_BIAS        0x8020
#define GL_POST_CONVOLUTION_GREEN_BIAS      0x8021
#define GL_POST_CONVOLUTION_BLUE_BIAS       0x8022
#define GL_POST_CONVOLUTION_ALPHA_BIAS      0x8023
#define GL_HISTOGRAM                        0x8024
#define GL_PROXY_HISTOGRAM                  0x8025
#define GL_HISTOGRAM_WIDTH                  0x8026
#define GL_HISTOGRAM_FORMAT                 0x8027
#define GL_HISTOGRAM_RED_SIZE               0x8028
#define GL_HISTOGRAM_GREEN_SIZE             0x8029
#define GL_HISTOGRAM_BLUE_SIZE              0x802A
#define GL_HISTOGRAM_ALPHA_SIZE             0x802B
#define GL_HISTOGRAM_LUMINANCE_SIZE         0x802C
#define GL_HISTOGRAM_SINK                   0x802D
#define GL_MINMAX                           0x802E
#define GL_MINMAX_FORMAT                    0x802F
#define GL_MINMAX_SINK                      0x8030
#define GL_TABLE_TOO_LARGE                  0x8031
#define GL_COLOR_MATRIX                     0x80B1
#define GL_COLOR_MATRIX_STACK_DEPTH         0x80B2
#define GL_MAX_COLOR_MATRIX_STACK_DEPTH     0x80B3
#define GL_POST_COLOR_MATRIX_RED_SCALE      0x80B4
#define GL_POST_COLOR_MATRIX_GREEN_SCALE    0x80B5
#define GL_POST_COLOR_MATRIX_BLUE_SCALE     0x80B6
#define GL_POST_COLOR_MATRIX_ALPHA_SCALE    0x80B7
#define GL_POST_COLOR_MATRIX_RED_BIAS       0x80B8
#define GL_POST_COLOR_MATRIX_GREEN_BIAS     0x80B9
#define GL_POST_COLOR_MATRIX_BLUE_BIAS      0x80BA
#define GL_POST_COLOR_MATRIX_ALPHA_BIAS     0x80BB
#define GL_COLOR_TABLE                      0x80D0
#define GL_POST_CONVOLUTION_COLOR_TABLE     0x80D1
#define GL_POST_COLOR_MATRIX_COLOR_TABLE    0x80D2
#define GL_PROXY_COLOR_TABLE                0x80D3
#define GL_PROXY_POST_CONVOLUTION_COLOR_TABLE 0x80D4
#define GL_PROXY_POST_COLOR_MATRIX_COLOR_TABLE 0x80D5
#define GL_COLOR_TABLE_SCALE                0x80D6
#define GL_COLOR_TABLE_BIAS                 0x80D7
#define GL_COLOR_TABLE_FORMAT               0x80D8
#define GL_COLOR_TABLE_WIDTH                0x80D9
#define GL_COLOR_TABLE_RED_SIZE             0x80DA
#define GL_COLOR_TABLE_GREEN_SIZE           0x80DB
#define GL_COLOR_TABLE_BLUE_SIZE            0x80DC
#define GL_COLOR_TABLE_ALPHA_SIZE           0x80DD
#define GL_COLOR_TABLE_LUMINANCE_SIZE       0x80DE
#define GL_COLOR_TABLE_INTENSITY_SIZE       0x80DF
#define GL_IGNORE_BORDER                    0x8150
#define GL_CONSTANT_BORDER                  0x8151
#define GL_WRAP_BORDER                      0x8152
#define GL_REPLICATE_BORDER                 0x8153
#define GL_CONVOLUTION_BORDER_COLOR         0x8154

/* VERSION_1_3 */
#define GL_TEXTURE0                         0x84C0
#define GL_TEXTURE1                         0x84C1
#define GL_TEXTURE2                         0x84C2
#define GL_TEXTURE3                         0x84C3
#define GL_TEXTURE4                         0x84C4
#define GL_TEXTURE5                         0x84C5
#define GL_TEXTURE6                         0x84C6
#define GL_TEXTURE7                         0x84C7
#define GL_TEXTURE8                         0x84C8
#define GL_TEXTURE9                         0x84C9
#define GL_TEXTURE10                        0x84CA
#define GL_TEXTURE11                        0x84CB
#define GL_TEXTURE12                        0x84CC
#define GL_TEXTURE13                        0x84CD
#define GL_TEXTURE14                        0x84CE
#define GL_TEXTURE15                        0x84CF
#define GL_TEXTURE16                        0x84D0
#define GL_TEXTURE17                        0x84D1
#define GL_TEXTURE18                        0x84D2
#define GL_TEXTURE19                        0x84D3
#define GL_TEXTURE20                        0x84D4
#define GL_TEXTURE21                        0x84D5
#define GL_TEXTURE22                        0x84D6
#define GL_TEXTURE23                        0x84D7
#define GL_TEXTURE24                        0x84D8
#define GL_TEXTURE25                        0x84D9
#define GL_TEXTURE26                        0x84DA
#define GL_TEXTURE27                        0x84DB
#define GL_TEXTURE28                        0x84DC
#define GL_TEXTURE29                        0x84DD
#define GL_TEXTURE30                        0x84DE
#define GL_TEXTURE31                        0x84DF
#define GL_ACTIVE_TEXTURE                   0x84E0
#define GL_CLIENT_ACTIVE_TEXTURE            0x84E1
#define GL_MAX_TEXTURE_UNITS                0x84E2
#define GL_TRANSPOSE_MODELVIEW_MATRIX       0x84E3
#define GL_TRANSPOSE_PROJECTION_MATRIX      0x84E4
#define GL_TRANSPOSE_TEXTURE_MATRIX         0x84E5
#define GL_TRANSPOSE_COLOR_MATRIX           0x84E6
#define GL_MULTISAMPLE                      0x809D
#define GL_SAMPLE_ALPHA_TO_COVERAGE         0x809E
#define GL_SAMPLE_ALPHA_TO_ONE              0x809F
#define GL_SAMPLE_COVERAGE                  0x80A0
#define GL_SAMPLE_BUFFERS                   0x80A8
#define GL_SAMPLES                          0x80A9
#define GL_SAMPLE_COVERAGE_VALUE            0x80AA
#define GL_SAMPLE_COVERAGE_INVERT           0x80AB
#define GL_MULTISAMPLE_BIT                  0x20000000
#define GL_NORMAL_MAP                       0x8511
#define GL_REFLECTION_MAP                   0x8512
#define GL_TEXTURE_CUBE_MAP                 0x8513
#define GL_TEXTURE_BINDING_CUBE_MAP         0x8514
#define GL_TEXTURE_CUBE_MAP_POSITIVE_X      0x8515
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_X      0x8516
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Y      0x8517
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Y      0x8518
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Z      0x8519
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Z      0x851A
#define GL_PROXY_TEXTURE_CUBE_MAP           0x851B
#define GL_MAX_CUBE_MAP_TEXTURE_SIZE        0x851C
#define GL_COMPRESSED_ALPHA                 0x84E9
#define GL_COMPRESSED_LUMINANCE             0x84EA
#define GL_COMPRESSED_LUMINANCE_ALPHA       0x84EB
#define GL_COMPRESSED_INTENSITY             0x84EC
#define GL_COMPRESSED_RGB                   0x84ED
#define GL_COMPRESSED_RGBA                  0x84EE
#define GL_TEXTURE_COMPRESSION_HINT         0x84EF
#define GL_TEXTURE_COMPRESSED_IMAGE_SIZE    0x86A0
#define GL_TEXTURE_COMPRESSED               0x86A1
#define GL_NUM_COMPRESSED_TEXTURE_FORMATS   0x86A2
#define GL_COMPRESSED_TEXTURE_FORMATS       0x86A3
#define GL_CLAMP_TO_BORDER                  0x812D
#define GL_CLAMP_TO_BORDER_SGIS             0x812D
#define GL_COMBINE                          0x8570
#define GL_COMBINE_RGB                      0x8571
#define GL_COMBINE_ALPHA                    0x8572
#define GL_SOURCE0_RGB                      0x8580
#define GL_SOURCE1_RGB                      0x8581
#define GL_SOURCE2_RGB                      0x8582
#define GL_SOURCE0_ALPHA                    0x8588
#define GL_SOURCE1_ALPHA                    0x8589
#define GL_SOURCE2_ALPHA                    0x858A
#define GL_OPERAND0_RGB                     0x8590
#define GL_OPERAND1_RGB                     0x8591
#define GL_OPERAND2_RGB                     0x8592
#define GL_OPERAND0_ALPHA                   0x8598
#define GL_OPERAND1_ALPHA                   0x8599
#define GL_OPERAND2_ALPHA                   0x859A
#define GL_RGB_SCALE                        0x8573
#define GL_ADD_SIGNED                       0x8574
#define GL_INTERPOLATE                      0x8575
#define GL_SUBTRACT                         0x84E7
#define GL_CONSTANT                         0x8576
#define GL_PRIMARY_COLOR                    0x8577
#define GL_PREVIOUS                         0x8578
#define GL_DOT3_RGB                         0x86AE
#define GL_DOT3_RGBA                        0x86AF

/* VERSION_1_4 */
#define GL_BLEND_DST_RGB                    0x80C8
#define GL_BLEND_SRC_RGB                    0x80C9
#define GL_BLEND_DST_ALPHA                  0x80CA
#define GL_BLEND_SRC_ALPHA                  0x80CB
#define GL_POINT_SIZE_MIN                   0x8126
#define GL_POINT_SIZE_MAX                   0x8127
#define GL_POINT_FADE_THRESHOLD_SIZE        0x8128
#define GL_POINT_DISTANCE_ATTENUATION       0x8129
#define GL_GENERATE_MIPMAP                  0x8191
#define GL_GENERATE_MIPMAP_HINT             0x8192
#define GL_DEPTH_COMPONENT16                0x81A5
#define GL_DEPTH_COMPONENT24                0x81A6
#define GL_DEPTH_COMPONENT32                0x81A7
#define GL_MIRRORED_REPEAT                  0x8370
#define GL_FOG_COORDINATE_SOURCE            0x8450
#define GL_FOG_COORDINATE                   0x8451
#define GL_FRAGMENT_DEPTH                   0x8452
#define GL_CURRENT_FOG_COORDINATE           0x8453
#define GL_FOG_COORDINATE_ARRAY_TYPE        0x8454
#define GL_FOG_COORDINATE_ARRAY_STRIDE      0x8455
#define GL_FOG_COORDINATE_ARRAY_POINTER     0x8456
#define GL_FOG_COORDINATE_ARRAY             0x8457
#define GL_COLOR_SUM                        0x8458
#define GL_CURRENT_SECONDARY_COLOR          0x8459
#define GL_SECONDARY_COLOR_ARRAY_SIZE       0x845A
#define GL_SECONDARY_COLOR_ARRAY_TYPE       0x845B
#define GL_SECONDARY_COLOR_ARRAY_STRIDE     0x845C
#define GL_SECONDARY_COLOR_ARRAY_POINTER    0x845D
#define GL_SECONDARY_COLOR_ARRAY            0x845E
#define GL_MAX_TEXTURE_LOD_BIAS             0x84FD
#define GL_TEXTURE_FILTER_CONTROL           0x8500
#define GL_TEXTURE_LOD_BIAS                 0x8501
#define GL_INCR_WRAP                        0x8507
#define GL_DECR_WRAP                        0x8508
#define GL_TEXTURE_DEPTH_SIZE               0x884A
#define GL_DEPTH_TEXTURE_MODE               0x884B
#define GL_TEXTURE_COMPARE_MODE             0x884C
#define GL_TEXTURE_COMPARE_FUNC             0x884D
#define GL_COMPARE_R_TO_TEXTURE             0x884E

/* EXT_abgr */
#define GL_ABGR_EXT                         0x8000

/* EXT_blend_color */
#define GL_CONSTANT_COLOR_EXT               0x8001
#define GL_ONE_MINUS_CONSTANT_COLOR_EXT     0x8002
#define GL_CONSTANT_ALPHA_EXT               0x8003
#define GL_ONE_MINUS_CONSTANT_ALPHA_EXT     0x8004
#define GL_BLEND_COLOR_EXT                  0x8005

/* EXT_blend_minmax */
#define GL_FUNC_ADD_EXT                     0x8006
#define GL_MIN_EXT                          0x8007
#define GL_MAX_EXT                          0x8008
#define GL_BLEND_EQUATION_EXT               0x8009

/* EXT_blend_subtract */
#define GL_FUNC_SUBTRACT_EXT                0x800A
#define GL_FUNC_REVERSE_SUBTRACT_EXT        0x800B

/* EXT_cmyka */
#define GL_CMYK_EXT                         0x800C
#define GL_CMYKA_EXT                        0x800D
#define GL_PACK_CMYK_HINT_EXT               0x800E
#define GL_UNPACK_CMYK_HINT_EXT             0x800F

/* EXT_convolution */
#define GL_CONVOLUTION_1D_EXT               0x8010
#define GL_CONVOLUTION_2D_EXT               0x8011
#define GL_SEPARABLE_2D_EXT                 0x8012
#define GL_CONVOLUTION_BORDER_MODE_EXT      0x8013
#define GL_CONVOLUTION_FILTER_SCALE_EXT     0x8014
#define GL_CONVOLUTION_FILTER_BIAS_EXT      0x8015
#define GL_REDUCE_EXT                       0x8016
#define GL_CONVOLUTION_FORMAT_EXT           0x8017
#define GL_CONVOLUTION_WIDTH_EXT            0x8018
#define GL_CONVOLUTION_HEIGHT_EXT           0x8019
#define GL_MAX_CONVOLUTION_WIDTH_EXT        0x801A
#define GL_MAX_CONVOLUTION_HEIGHT_EXT       0x801B
#define GL_POST_CONVOLUTION_RED_SCALE_EXT   0x801C
#define GL_POST_CONVOLUTION_GREEN_SCALE_EXT 0x801D
#define GL_POST_CONVOLUTION_BLUE_SCALE_EXT  0x801E
#define GL_POST_CONVOLUTION_ALPHA_SCALE_EXT 0x801F
#define GL_POST_CONVOLUTION_RED_BIAS_EXT    0x8020
#define GL_POST_CONVOLUTION_GREEN_BIAS_EXT  0x8021
#define GL_POST_CONVOLUTION_BLUE_BIAS_EXT   0x8022
#define GL_POST_CONVOLUTION_ALPHA_BIAS_EXT  0x8023

/* EXT_histogram */
#define GL_HISTOGRAM_EXT                    0x8024
#define GL_PROXY_HISTOGRAM_EXT              0x8025
#define GL_HISTOGRAM_WIDTH_EXT              0x8026
#define GL_HISTOGRAM_FORMAT_EXT             0x8027
#define GL_HISTOGRAM_RED_SIZE_EXT           0x8028
#define GL_HISTOGRAM_GREEN_SIZE_EXT         0x8029
#define GL_HISTOGRAM_BLUE_SIZE_EXT          0x802A
#define GL_HISTOGRAM_ALPHA_SIZE_EXT         0x802B
#define GL_HISTOGRAM_LUMINANCE_SIZE_EXT     0x802C
#define GL_HISTOGRAM_SINK_EXT               0x802D
#define GL_MINMAX_EXT                       0x802E
#define GL_MINMAX_FORMAT_EXT                0x802F
#define GL_MINMAX_SINK_EXT                  0x8030
#define GL_TABLE_TOO_LARGE_EXT              0x8031

/* EXT_packed_pixels */
#define GL_UNSIGNED_BYTE_3_3_2_EXT          0x8032
#define GL_UNSIGNED_SHORT_4_4_4_4_EXT       0x8033
#define GL_UNSIGNED_SHORT_5_5_5_1_EXT       0x8034
#define GL_UNSIGNED_INT_8_8_8_8_EXT         0x8035
#define GL_UNSIGNED_INT_10_10_10_2_EXT      0x8036
#define GL_UNSIGNED_BYTE_2_3_3_REV_EXT      0x8362
#define GL_UNSIGNED_SHORT_5_6_5_EXT         0x8363
#define GL_UNSIGNED_SHORT_5_6_5_REV_EXT     0x8364
#define GL_UNSIGNED_SHORT_4_4_4_4_REV_EXT   0x8365
#define GL_UNSIGNED_SHORT_1_5_5_5_REV_EXT   0x8366
#define GL_UNSIGNED_INT_8_8_8_8_REV_EXT     0x8367
#define GL_UNSIGNED_INT_2_10_10_10_REV_EXT  0x8368

/* EXT_polygon_offset */
#define GL_POLYGON_OFFSET_EXT               0x8037
#define GL_POLYGON_OFFSET_FACTOR_EXT        0x8038
#define GL_POLYGON_OFFSET_BIAS_EXT          0x8039

/* EXT_rescale_normal */
#define GL_RESCALE_NORMAL_EXT               0x803A

/* EXT_texture */
#define GL_ALPHA4_EXT                       0x803B
#define GL_ALPHA8_EXT                       0x803C
#define GL_ALPHA12_EXT                      0x803D
#define GL_ALPHA16_EXT                      0x803E
#define GL_LUMINANCE4_EXT                   0x803F
#define GL_LUMINANCE8_EXT                   0x8040
#define GL_LUMINANCE12_EXT                  0x8041
#define GL_LUMINANCE16_EXT                  0x8042
#define GL_LUMINANCE4_ALPHA4_EXT            0x8043
#define GL_LUMINANCE6_ALPHA2_EXT            0x8044
#define GL_LUMINANCE8_ALPHA8_EXT            0x8045
#define GL_LUMINANCE12_ALPHA4_EXT           0x8046
#define GL_LUMINANCE12_ALPHA12_EXT          0x8047
#define GL_LUMINANCE16_ALPHA16_EXT          0x8048
#define GL_INTENSITY_EXT                    0x8049
#define GL_INTENSITY4_EXT                   0x804A
#define GL_INTENSITY8_EXT                   0x804B
#define GL_INTENSITY12_EXT                  0x804C
#define GL_INTENSITY16_EXT                  0x804D
#define GL_RGB2_EXT                         0x804E
#define GL_RGB4_EXT                         0x804F
#define GL_RGB5_EXT                         0x8050
#define GL_RGB8_EXT                         0x8051
#define GL_RGB10_EXT                        0x8052
#define GL_RGB12_EXT                        0x8053
#define GL_RGB16_EXT                        0x8054
#define GL_RGBA2_EXT                        0x8055
#define GL_RGBA4_EXT                        0x8056
#define GL_RGB5_A1_EXT                      0x8057
#define GL_RGBA8_EXT                        0x8058
#define GL_RGB10_A2_EXT                     0x8059
#define GL_RGBA12_EXT                       0x805A
#define GL_RGBA16_EXT                       0x805B
#define GL_TEXTURE_RED_SIZE_EXT             0x805C
#define GL_TEXTURE_GREEN_SIZE_EXT           0x805D
#define GL_TEXTURE_BLUE_SIZE_EXT            0x805E
#define GL_TEXTURE_ALPHA_SIZE_EXT           0x805F
#define GL_TEXTURE_LUMINANCE_SIZE_EXT       0x8060
#define GL_TEXTURE_INTENSITY_SIZE_EXT       0x8061
#define GL_REPLACE_EXT                      0x8062
#define GL_PROXY_TEXTURE_1D_EXT             0x8063
#define GL_PROXY_TEXTURE_2D_EXT             0x8064
#define GL_TEXTURE_TOO_LARGE_EXT            0x8065

/* EXT_texture_object */
#define GL_TEXTURE_PRIORITY_EXT             0x8066
#define GL_TEXTURE_RESIDENT_EXT             0x8067
#define GL_TEXTURE_1D_BINDING_EXT           0x8068
#define GL_TEXTURE_2D_BINDING_EXT           0x8069
#define GL_TEXTURE_3D_BINDING_EXT           0x806A

/* EXT_texture3D */
#define GL_PACK_SKIP_IMAGES_EXT             0x806B
#define GL_PACK_IMAGE_HEIGHT_EXT            0x806C
#define GL_UNPACK_SKIP_IMAGES_EXT           0x806D
#define GL_UNPACK_IMAGE_HEIGHT_EXT          0x806E
#define GL_TEXTURE_3D_EXT                   0x806F
#define GL_PROXY_TEXTURE_3D_EXT             0x8070
#define GL_TEXTURE_DEPTH_EXT                0x8071
#define GL_TEXTURE_WRAP_R_EXT               0x8072
#define GL_MAX_3D_TEXTURE_SIZE_EXT          0x8073

/* EXT_vertex_array */
#define GL_VERTEX_ARRAY_EXT                 0x8074
#define GL_NORMAL_ARRAY_EXT                 0x8075
#define GL_COLOR_ARRAY_EXT                  0x8076
#define GL_INDEX_ARRAY_EXT                  0x8077
#define GL_TEXTURE_COORD_ARRAY_EXT          0x8078
#define GL_EDGE_FLAG_ARRAY_EXT              0x8079
#define GL_VERTEX_ARRAY_SIZE_EXT            0x807A
#define GL_VERTEX_ARRAY_TYPE_EXT            0x807B
#define GL_VERTEX_ARRAY_STRIDE_EXT          0x807C
#define GL_VERTEX_ARRAY_COUNT_EXT           0x807D
#define GL_NORMAL_ARRAY_TYPE_EXT            0x807E
#define GL_NORMAL_ARRAY_STRIDE_EXT          0x807F
#define GL_NORMAL_ARRAY_COUNT_EXT           0x8080
#define GL_COLOR_ARRAY_SIZE_EXT             0x8081
#define GL_COLOR_ARRAY_TYPE_EXT             0x8082
#define GL_COLOR_ARRAY_STRIDE_EXT           0x8083
#define GL_COLOR_ARRAY_COUNT_EXT            0x8084
#define GL_INDEX_ARRAY_TYPE_EXT             0x8085
#define GL_INDEX_ARRAY_STRIDE_EXT           0x8086
#define GL_INDEX_ARRAY_COUNT_EXT            0x8087
#define GL_TEXTURE_COORD_ARRAY_SIZE_EXT     0x8088
#define GL_TEXTURE_COORD_ARRAY_TYPE_EXT     0x8089
#define GL_TEXTURE_COORD_ARRAY_STRIDE_EXT   0x808A
#define GL_TEXTURE_COORD_ARRAY_COUNT_EXT    0x808B
#define GL_EDGE_FLAG_ARRAY_STRIDE_EXT       0x808C
#define GL_EDGE_FLAG_ARRAY_COUNT_EXT        0x808D
#define GL_VERTEX_ARRAY_POINTER_EXT         0x808E
#define GL_NORMAL_ARRAY_POINTER_EXT         0x808F
#define GL_COLOR_ARRAY_POINTER_EXT          0x8090
#define GL_INDEX_ARRAY_POINTER_EXT          0x8091
#define GL_TEXTURE_COORD_ARRAY_POINTER_EXT  0x8092
#define GL_EDGE_FLAG_ARRAY_POINTER_EXT      0x8093

/* SGIX_interlace */
#define GL_INTERLACE_SGIX                   0x8094

/* SGIS_detail_texture */
#define GL_DETAIL_TEXTURE_2D_SGIS           0x8095
#define GL_DETAIL_TEXTURE_2D_BINDING_SGIS   0x8096
#define GL_LINEAR_DETAIL_SGIS               0x8097
#define GL_LINEAR_DETAIL_ALPHA_SGIS         0x8098
#define GL_LINEAR_DETAIL_COLOR_SGIS         0x8099
#define GL_DETAIL_TEXTURE_LEVEL_SGIS        0x809A
#define GL_DETAIL_TEXTURE_MODE_SGIS         0x809B
#define GL_DETAIL_TEXTURE_FUNC_POINTS_SGIS  0x809C

/* SGIS_multisample */
#define GL_MULTISAMPLE_SGIS                 0x809D
#define GL_SAMPLE_ALPHA_TO_MASK_SGIS        0x809E
#define GL_SAMPLE_ALPHA_TO_ONE_SGIS         0x809F
#define GL_SAMPLE_MASK_SGIS                 0x80A0
#define GL_1PASS_SGIS                       0x80A1
#define GL_2PASS_0_SGIS                     0x80A2
#define GL_2PASS_1_SGIS                     0x80A3
#define GL_4PASS_0_SGIS                     0x80A4
#define GL_4PASS_1_SGIS                     0x80A5
#define GL_4PASS_2_SGIS                     0x80A6
#define GL_4PASS_3_SGIS                     0x80A7
#define GL_SAMPLE_BUFFERS_SGIS              0x80A8
#define GL_SAMPLES_SGIS                     0x80A9
#define GL_SAMPLE_MASK_VALUE_SGIS           0x80AA
#define GL_SAMPLE_MASK_INVERT_SGIS          0x80AB
#define GL_SAMPLE_PATTERN_SGIS              0x80AC

/* SGIS_sharpen_texture */
#define GL_LINEAR_SHARPEN_SGIS              0x80AD
#define GL_LINEAR_SHARPEN_ALPHA_SGIS        0x80AE
#define GL_LINEAR_SHARPEN_COLOR_SGIS        0x80AF
#define GL_SHARPEN_TEXTURE_FUNC_POINTS_SGIS 0x80B0

/* SGI_color_matrix */
#define GL_COLOR_MATRIX_SGI                 0x80B1
#define GL_COLOR_MATRIX_STACK_DEPTH_SGI     0x80B2
#define GL_MAX_COLOR_MATRIX_STACK_DEPTH_SGI 0x80B3
#define GL_POST_COLOR_MATRIX_RED_SCALE_SGI  0x80B4
#define GL_POST_COLOR_MATRIX_GREEN_SCALE_SGI 0x80B5
#define GL_POST_COLOR_MATRIX_BLUE_SCALE_SGI 0x80B6
#define GL_POST_COLOR_MATRIX_ALPHA_SCALE_SGI 0x80B7
#define GL_POST_COLOR_MATRIX_RED_BIAS_SGI   0x80B8
#define GL_POST_COLOR_MATRIX_GREEN_BIAS_SGI 0x80B9
#define GL_POST_COLOR_MATRIX_BLUE_BIAS_SGI  0x80BA
#define GL_POST_COLOR_MATRIX_ALPHA_BIAS_SGI 0x80BB

/* SGI_texture_color_table */
#define GL_TEXTURE_COLOR_TABLE_SGI          0x80BC
#define GL_PROXY_TEXTURE_COLOR_TABLE_SGI    0x80BD

/* SGIX_texture_add_env */
#define GL_TEXTURE_ENV_BIAS_SGIX            0x80BE

/* SGIX_shadow_ambient */
#define GL_SHADOW_AMBIENT_SGIX              0x80BF

/* SGI_color_table */
#define GL_COLOR_TABLE_SGI                  0x80D0
#define GL_POST_CONVOLUTION_COLOR_TABLE_SGI 0x80D1
#define GL_POST_COLOR_MATRIX_COLOR_TABLE_SGI 0x80D2
#define GL_PROXY_COLOR_TABLE_SGI            0x80D3
#define GL_PROXY_POST_CONVOLUTION_COLOR_TABLE_SGI 0x80D4
#define GL_PROXY_POST_COLOR_MATRIX_COLOR_TABLE_SGI 0x80D5
#define GL_COLOR_TABLE_SCALE_SGI            0x80D6
#define GL_COLOR_TABLE_BIAS_SGI             0x80D7
#define GL_COLOR_TABLE_FORMAT_SGI           0x80D8
#define GL_COLOR_TABLE_WIDTH_SGI            0x80D9
#define GL_COLOR_TABLE_RED_SIZE_SGI         0x80DA
#define GL_COLOR_TABLE_GREEN_SIZE_SGI       0x80DB
#define GL_COLOR_TABLE_BLUE_SIZE_SGI        0x80DC
#define GL_COLOR_TABLE_ALPHA_SIZE_SGI       0x80DD
#define GL_COLOR_TABLE_LUMINANCE_SIZE_SGI   0x80DE
#define GL_COLOR_TABLE_INTENSITY_SIZE_SGI   0x80DF

/* SGIS_texture_select */
#define GL_DUAL_ALPHA4_SGIS                 0x8110
#define GL_DUAL_ALPHA8_SGIS                 0x8111
#define GL_DUAL_ALPHA12_SGIS                0x8112
#define GL_DUAL_ALPHA16_SGIS                0x8113
#define GL_DUAL_LUMINANCE4_SGIS             0x8114
#define GL_DUAL_LUMINANCE8_SGIS             0x8115
#define GL_DUAL_LUMINANCE12_SGIS            0x8116
#define GL_DUAL_LUMINANCE16_SGIS            0x8117
#define GL_DUAL_INTENSITY4_SGIS             0x8118
#define GL_DUAL_INTENSITY8_SGIS             0x8119
#define GL_DUAL_INTENSITY12_SGIS            0x811A
#define GL_DUAL_INTENSITY16_SGIS            0x811B
#define GL_DUAL_LUMINANCE_ALPHA4_SGIS       0x811C
#define GL_DUAL_LUMINANCE_ALPHA8_SGIS       0x811D
#define GL_QUAD_ALPHA4_SGIS                 0x811E
#define GL_QUAD_ALPHA8_SGIS                 0x811F
#define GL_QUAD_LUMINANCE4_SGIS             0x8120
#define GL_QUAD_LUMINANCE8_SGIS             0x8121
#define GL_QUAD_INTENSITY4_SGIS             0x8122
#define GL_QUAD_INTENSITY8_SGIS             0x8123
#define GL_DUAL_TEXTURE_SELECT_SGIS         0x8124
#define GL_QUAD_TEXTURE_SELECT_SGIS         0x8125

/* EXT_point_parameters */
#define GL_POINT_SIZE_MIN_EXT               0x8126
#define GL_POINT_SIZE_MAX_EXT               0x8127
#define GL_POINT_FADE_THRESHOLD_SIZE_EXT    0x8128
#define GL_DISTANCE_ATTENUATION_EXT         0x8129

/* SGIS_point_parameters */
#define GL_POINT_SIZE_MIN_SGIS              0x8126
#define GL_POINT_SIZE_MAX_SGIS              0x8127
#define GL_POINT_FADE_THRESHOLD_SIZE_SGIS   0x8128
#define GL_DISTANCE_ATTENUATION_SGIS        0x8129

/* SGIS_fog_function */
#define GL_FOG_FUNC_SGIS                    0x812A
#define GL_FOG_FUNC_POINTS_SGIS             0x812B
#define GL_MAX_FOG_FUNC_POINTS_SGIS         0x812C

/* SGIS_texture_border_clamp */

/* SGIX_texture_multi_buffer */
#define GL_TEXTURE_MULTI_BUFFER_HINT_SGIX   0x812E

/* SGIS_texture_edge_clamp */
#define GL_CLAMP_TO_EDGE_SGIS               0x812F

/* SGIS_texture4D */
#define GL_PACK_SKIP_VOLUMES_SGIS           0x8130
#define GL_PACK_IMAGE_DEPTH_SGIS            0x8131
#define GL_UNPACK_SKIP_VOLUMES_SGIS         0x8132
#define GL_UNPACK_IMAGE_DEPTH_SGIS          0x8133
#define GL_TEXTURE_4D_SGIS                  0x8134
#define GL_PROXY_TEXTURE_4D_SGIS            0x8135
#define GL_TEXTURE_4DSIZE_SGIS              0x8136
#define GL_TEXTURE_WRAP_Q_SGIS              0x8137
#define GL_MAX_4D_TEXTURE_SIZE_SGIS         0x8138
#define GL_TEXTURE_4D_BINDING_SGIS          0x814F

/* SGIX_pixel_texture */
#define GL_PIXEL_TEX_GEN_SGIX               0x8139
#define GL_PIXEL_TEX_GEN_MODE_SGIX          0x832B

/* SGIS_texture_lod */
#define GL_TEXTURE_MIN_LOD_SGIS             0x813A
#define GL_TEXTURE_MAX_LOD_SGIS             0x813B
#define GL_TEXTURE_BASE_LEVEL_SGIS          0x813C
#define GL_TEXTURE_MAX_LEVEL_SGIS           0x813D

/* SGIX_pixel_tiles */
#define GL_PIXEL_TILE_BEST_ALIGNMENT_SGIX   0x813E
#define GL_PIXEL_TILE_CACHE_INCREMENT_SGIX  0x813F
#define GL_PIXEL_TILE_WIDTH_SGIX            0x8140
#define GL_PIXEL_TILE_HEIGHT_SGIX           0x8141
#define GL_PIXEL_TILE_GRID_WIDTH_SGIX       0x8142
#define GL_PIXEL_TILE_GRID_HEIGHT_SGIX      0x8143
#define GL_PIXEL_TILE_GRID_DEPTH_SGIX       0x8144
#define GL_PIXEL_TILE_CACHE_SIZE_SGIX       0x8145

/* SGIS_texture_filter4 */
#define GL_FILTER4_SGIS                     0x8146
#define GL_TEXTURE_FILTER4_SIZE_SGIS        0x8147

/* SGIX_sprite */
#define GL_SPRITE_SGIX                      0x8148
#define GL_SPRITE_MODE_SGIX                 0x8149
#define GL_SPRITE_AXIS_SGIX                 0x814A
#define GL_SPRITE_TRANSLATION_SGIX          0x814B
#define GL_SPRITE_AXIAL_SGIX                0x814C
#define GL_SPRITE_OBJECT_ALIGNED_SGIX       0x814D
#define GL_SPRITE_EYE_ALIGNED_SGIX          0x814E

/* SGIX_clipmap */
#define GL_LINEAR_CLIPMAP_LINEAR_SGIX       0x8170
#define GL_TEXTURE_CLIPMAP_CENTER_SGIX      0x8171
#define GL_TEXTURE_CLIPMAP_FRAME_SGIX       0x8172
#define GL_TEXTURE_CLIPMAP_OFFSET_SGIX      0x8173
#define GL_TEXTURE_CLIPMAP_VIRTUAL_DEPTH_SGIX 0x8174
#define GL_TEXTURE_CLIPMAP_LOD_OFFSET_SGIX  0x8175
#define GL_TEXTURE_CLIPMAP_DEPTH_SGIX       0x8176
#define GL_MAX_CLIPMAP_DEPTH_SGIX           0x8177
#define GL_MAX_CLIPMAP_VIRTUAL_DEPTH_SGIX   0x8178
#define GL_NEAREST_CLIPMAP_NEAREST_SGIX     0x844D
#define GL_NEAREST_CLIPMAP_LINEAR_SGIX      0x844E
#define GL_LINEAR_CLIPMAP_NEAREST_SGIX      0x844F

/* SGIX_texture_scale_bias */
#define GL_POST_TEXTURE_FILTER_BIAS_SGIX    0x8179
#define GL_POST_TEXTURE_FILTER_SCALE_SGIX   0x817A
#define GL_POST_TEXTURE_FILTER_BIAS_RANGE_SGIX 0x817B
#define GL_POST_TEXTURE_FILTER_SCALE_RANGE_SGIX 0x817C

/* SGIX_reference_plane */
#define GL_REFERENCE_PLANE_SGIX             0x817D
#define GL_REFERENCE_PLANE_EQUATION_SGIX    0x817E

/* SGIX_ir_instrument1 */
#define GL_IR_INSTRUMENT1_SGIX              0x817F

/* SGIX_instruments */
#define GL_INSTRUMENT_BUFFER_POINTER_SGIX   0x8180
#define GL_INSTRUMENT_MEASUREMENTS_SGIX     0x8181

/* SGIX_list_priority */
#define GL_LIST_PRIORITY_SGIX               0x8182

/* SGIX_calligraphic_fragment */
#define GL_CALLIGRAPHIC_FRAGMENT_SGIX       0x8183

/* SGIX_impact_pixel_texture */
#define GL_PIXEL_TEX_GEN_Q_CEILING_SGIX     0x8184
#define GL_PIXEL_TEX_GEN_Q_ROUND_SGIX       0x8185
#define GL_PIXEL_TEX_GEN_Q_FLOOR_SGIX       0x8186
#define GL_PIXEL_TEX_GEN_ALPHA_REPLACE_SGIX 0x8187
#define GL_PIXEL_TEX_GEN_ALPHA_NO_REPLACE_SGIX 0x8188
#define GL_PIXEL_TEX_GEN_ALPHA_LS_SGIX      0x8189
#define GL_PIXEL_TEX_GEN_ALPHA_MS_SGIX      0x818A

/* SGIX_framezoom */
#define GL_FRAMEZOOM_SGIX                   0x818B
#define GL_FRAMEZOOM_FACTOR_SGIX            0x818C
#define GL_MAX_FRAMEZOOM_FACTOR_SGIX        0x818D

/* SGIX_texture_lod_bias */
#define GL_TEXTURE_LOD_BIAS_S_SGIX          0x818E
#define GL_TEXTURE_LOD_BIAS_T_SGIX          0x818F
#define GL_TEXTURE_LOD_BIAS_R_SGIX          0x8190

/* SGIS_generate_mipmap */
#define GL_GENERATE_MIPMAP_SGIS             0x8191
#define GL_GENERATE_MIPMAP_HINT_SGIS        0x8192

/* SGIX_polynomial_ffd */
#define GL_GEOMETRY_DEFORMATION_SGIX        0x8194
#define GL_TEXTURE_DEFORMATION_SGIX         0x8195
#define GL_DEFORMATIONS_MASK_SGIX           0x8196
#define GL_MAX_DEFORMATION_ORDER_SGIX       0x8197

/* SGIX_fog_offset */
#define GL_FOG_OFFSET_SGIX                  0x8198
#define GL_FOG_OFFSET_VALUE_SGIX            0x8199

/* SGIX_shadow */
#define GL_TEXTURE_COMPARE_SGIX             0x819A
#define GL_TEXTURE_COMPARE_OPERATOR_SGIX    0x819B
#define GL_TEXTURE_LEQUAL_R_SGIX            0x819C
#define GL_TEXTURE_GEQUAL_R_SGIX            0x819D

/* SGIX_depth_texture */
#define GL_DEPTH_COMPONENT16_SGIX           0x81A5
#define GL_DEPTH_COMPONENT24_SGIX           0x81A6
#define GL_DEPTH_COMPONENT32_SGIX           0x81A7

/* SGIX_ycrcb */
#define GL_YCRCB_422_SGIX                   0x81BB
#define GL_YCRCB_444_SGIX                   0x81BC

/* SGIS_texture_color_mask */
#define GL_TEXTURE_COLOR_WRITEMASK_SGIS     0x81EF

/* SGIS_point_line_texgen */
#define GL_EYE_DISTANCE_TO_POINT_SGIS       0x81F0
#define GL_OBJECT_DISTANCE_TO_POINT_SGIS    0x81F1
#define GL_EYE_DISTANCE_TO_LINE_SGIS        0x81F2
#define GL_OBJECT_DISTANCE_TO_LINE_SGIS     0x81F3
#define GL_EYE_POINT_SGIS                   0x81F4
#define GL_OBJECT_POINT_SGIS                0x81F5
#define GL_EYE_LINE_SGIS                    0x81F6
#define GL_OBJECT_LINE_SGIS                 0x81F7

/* EXT_shared_texture_palette */
#define GL_SHARED_TEXTURE_PALETTE_EXT       0x81FB

/* SGIX_convolution_accuracy */
#define GL_CONVOLUTION_HINT_SGIX            0x8316

/* SGIX_blend_alpha_minmax */
#define GL_ALPHA_MIN_SGIX                   0x8320
#define GL_ALPHA_MAX_SGIX                   0x8321

/* SGIX_scalebias_hint */
#define GL_SCALEBIAS_HINT_SGIX              0x8322

/* SGIX_async */
#define GL_ASYNC_MARKER_SGIX                0x8329

/* SGIX_async_histogram */
#define GL_ASYNC_HISTOGRAM_SGIX             0x832C
#define GL_MAX_ASYNC_HISTOGRAM_SGIX         0x832D

/* SGIS_pixel_texture */
#define GL_PIXEL_TEXTURE_SGIS               0x8353
#define GL_PIXEL_FRAGMENT_RGB_SOURCE_SGIS   0x8354
#define GL_PIXEL_FRAGMENT_ALPHA_SOURCE_SGIS 0x8355
#define GL_PIXEL_GROUP_COLOR_SGIS           0x8356

/* SGIX_async_pixel */
#define GL_ASYNC_TEX_IMAGE_SGIX             0x835C
#define GL_ASYNC_DRAW_PIXELS_SGIX           0x835D
#define GL_ASYNC_READ_PIXELS_SGIX           0x835E
#define GL_MAX_ASYNC_TEX_IMAGE_SGIX         0x835F
#define GL_MAX_ASYNC_DRAW_PIXELS_SGIX       0x8360
#define GL_MAX_ASYNC_READ_PIXELS_SGIX       0x8361

/* SGIX_texture_coordinate_clamp */
#define GL_TEXTURE_MAX_CLAMP_S_SGIX         0x8369
#define GL_TEXTURE_MAX_CLAMP_T_SGIX         0x836A
#define GL_TEXTURE_MAX_CLAMP_R_SGIX         0x836B

/* SGIX_vertex_preclip */
#define GL_VERTEX_PRECLIP_SGIX              0x83EE
#define GL_VERTEX_PRECLIP_HINT_SGIX         0x83EF

/* SGIX_fragment_lighting */
#define GL_FRAGMENT_LIGHTING_SGIX           0x8400
#define GL_FRAGMENT_COLOR_MATERIAL_SGIX     0x8401
#define GL_FRAGMENT_COLOR_MATERIAL_FACE_SGIX 0x8402
#define GL_FRAGMENT_COLOR_MATERIAL_PARAMETER_SGIX 0x8403
#define GL_MAX_FRAGMENT_LIGHTS_SGIX         0x8404
#define GL_MAX_ACTIVE_LIGHTS_SGIX           0x8405
#define GL_CURRENT_RASTER_NORMAL_SGIX       0x8406
#define GL_LIGHT_ENV_MODE_SGIX              0x8407
#define GL_FRAGMENT_LIGHT_MODEL_LOCAL_VIEWER_SGIX 0x8408
#define GL_FRAGMENT_LIGHT_MODEL_TWO_SIDE_SGIX 0x8409
#define GL_FRAGMENT_LIGHT_MODEL_AMBIENT_SGIX 0x840A
#define GL_FRAGMENT_LIGHT_MODEL_NORMAL_INTERPOLATION_SGIX 0x840B
#define GL_FRAGMENT_LIGHT0_SGIX             0x840C
#define GL_FRAGMENT_LIGHT1_SGIX             0x840D
#define GL_FRAGMENT_LIGHT2_SGIX             0x840E
#define GL_FRAGMENT_LIGHT3_SGIX             0x840F
#define GL_FRAGMENT_LIGHT4_SGIX             0x8410
#define GL_FRAGMENT_LIGHT5_SGIX             0x8411
#define GL_FRAGMENT_LIGHT6_SGIX             0x8412
#define GL_FRAGMENT_LIGHT7_SGIX             0x8413

/* SGIX_resample */
#define GL_PACK_RESAMPLE_SGIX               0x842C
#define GL_UNPACK_RESAMPLE_SGIX             0x842D
#define GL_RESAMPLE_REPLICATE_SGIX          0x842E
#define GL_RESAMPLE_ZERO_FILL_SGIX          0x842F
#define GL_RESAMPLE_DECIMATE_SGIX           0x8430

/* SGIX_icc_texture */
#define GL_RGB_ICC_SGIX                     0x8460
#define GL_RGBA_ICC_SGIX                    0x8461
#define GL_ALPHA_ICC_SGIX                   0x8462
#define GL_LUMINANCE_ICC_SGIX               0x8463
#define GL_INTENSITY_ICC_SGIX               0x8464
#define GL_LUMINANCE_ALPHA_ICC_SGIX         0x8465
#define GL_R5_G6_B5_ICC_SGIX                0x8466
#define GL_R5_G6_B5_A8_ICC_SGIX             0x8467
#define GL_ALPHA16_ICC_SGIX                 0x8468
#define GL_LUMINANCE16_ICC_SGIX             0x8469
#define GL_INTENSITY16_ICC_SGIX             0x846A
#define GL_LUMINANCE16_ALPHA8_ICC_SGIX      0x846B

/* SGIX_subsample */
#define GL_PACK_SUBSAMPLE_RATE_SGIX         0x85A0
#define GL_UNPACK_SUBSAMPLE_RATE_SGIX       0x85A1
#define GL_PIXEL_SUBSAMPLE_4444_SGIX        0x85A2
#define GL_PIXEL_SUBSAMPLE_2424_SGIX        0x85A3
#define GL_PIXEL_SUBSAMPLE_4242_SGIX        0x85A4

/* ARB_multitexture */
#define GL_TEXTURE0_ARB                     0x84C0
#define GL_TEXTURE1_ARB                     0x84C1
#define GL_TEXTURE2_ARB                     0x84C2
#define GL_TEXTURE3_ARB                     0x84C3
#define GL_TEXTURE4_ARB                     0x84C4
#define GL_TEXTURE5_ARB                     0x84C5
#define GL_TEXTURE6_ARB                     0x84C6
#define GL_TEXTURE7_ARB                     0x84C7
#define GL_TEXTURE8_ARB                     0x84C8
#define GL_TEXTURE9_ARB                     0x84C9
#define GL_TEXTURE10_ARB                    0x84CA
#define GL_TEXTURE11_ARB                    0x84CB
#define GL_TEXTURE12_ARB                    0x84CC
#define GL_TEXTURE13_ARB                    0x84CD
#define GL_TEXTURE14_ARB                    0x84CE
#define GL_TEXTURE15_ARB                    0x84CF
#define GL_TEXTURE16_ARB                    0x84D0
#define GL_TEXTURE17_ARB                    0x84D1
#define GL_TEXTURE18_ARB                    0x84D2
#define GL_TEXTURE19_ARB                    0x84D3
#define GL_TEXTURE20_ARB                    0x84D4
#define GL_TEXTURE21_ARB                    0x84D5
#define GL_TEXTURE22_ARB                    0x84D6
#define GL_TEXTURE23_ARB                    0x84D7
#define GL_TEXTURE24_ARB                    0x84D8
#define GL_TEXTURE25_ARB                    0x84D9
#define GL_TEXTURE26_ARB                    0x84DA
#define GL_TEXTURE27_ARB                    0x84DB
#define GL_TEXTURE28_ARB                    0x84DC
#define GL_TEXTURE29_ARB                    0x84DD
#define GL_TEXTURE30_ARB                    0x84DE
#define GL_TEXTURE31_ARB                    0x84DF
#define GL_ACTIVE_TEXTURE_ARB               0x84E0
#define GL_CLIENT_ACTIVE_TEXTURE_ARB        0x84E1
#define GL_MAX_TEXTURE_UNITS_ARB            0x84E2

/* ARB_transpose_matrix */
#define GL_TRANSPOSE_MODELVIEW_MATRIX_ARB   0x84E3
#define GL_TRANSPOSE_PROJECTION_MATRIX_ARB  0x84E4
#define GL_TRANSPOSE_TEXTURE_MATRIX_ARB     0x84E5
#define GL_TRANSPOSE_COLOR_MATRIX_ARB       0x84E6

/* ARB_multisample */
#define GL_MULTISAMPLE_ARB                  0x809D
#define GL_SAMPLE_ALPHA_TO_COVERAGE_ARB     0x809E
#define GL_SAMPLE_ALPHA_TO_ONE_ARB          0x809F
#define GL_SAMPLE_COVERAGE_ARB              0x80A0
#define GL_SAMPLE_BUFFERS_ARB               0x80A8
#define GL_SAMPLES_ARB                      0x80A9
#define GL_SAMPLE_COVERAGE_VALUE_ARB        0x80AA
#define GL_SAMPLE_COVERAGE_INVERT_ARB       0x80AB
#define GL_MULTISAMPLE_BIT_ARB              0x20000000

/* ARB_texture_env_add */

/* ARB_texture_cube_map */
#define GL_NORMAL_MAP_ARB                   0x8511
#define GL_REFLECTION_MAP_ARB               0x8512
#define GL_TEXTURE_CUBE_MAP_ARB             0x8513
#define GL_TEXTURE_BINDING_CUBE_MAP_ARB     0x8514
#define GL_TEXTURE_CUBE_MAP_POSITIVE_X_ARB  0x8515
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_X_ARB  0x8516
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Y_ARB  0x8517
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_ARB  0x8518
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Z_ARB  0x8519
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_ARB  0x851A
#define GL_PROXY_TEXTURE_CUBE_MAP_ARB       0x851B
#define GL_MAX_CUBE_MAP_TEXTURE_SIZE_ARB    0x851C

/* ARB_texture_compression */
#define GL_COMPRESSED_ALPHA_ARB             0x84E9
#define GL_COMPRESSED_LUMINANCE_ARB         0x84EA
#define GL_COMPRESSED_LUMINANCE_ALPHA_ARB   0x84EB
#define GL_COMPRESSED_INTENSITY_ARB         0x84EC
#define GL_COMPRESSED_RGB_ARB               0x84ED
#define GL_COMPRESSED_RGBA_ARB              0x84EE
#define GL_TEXTURE_COMPRESSION_HINT_ARB     0x84EF
#define GL_TEXTURE_COMPRESSED_IMAGE_SIZE_ARB 0x86A0
#define GL_TEXTURE_COMPRESSED_ARB           0x86A1
#define GL_NUM_COMPRESSED_TEXTURE_FORMATS_ARB 0x86A2
#define GL_COMPRESSED_TEXTURE_FORMATS_ARB   0x86A3

/* ARB_texture_border_clamp */
#define GL_CLAMP_TO_BORDER_ARB              0x812D

/* ARB_point_parameters */
#define GL_POINT_SIZE_MIN_ARB               0x8126
#define GL_POINT_SIZE_MAX_ARB               0x8127
#define GL_POINT_FADE_THRESHOLD_SIZE_ARB    0x8128
#define GL_POINT_DISTANCE_ATTENUATION_ARB   0x8129

/* ARB_vertex_blend */
#define GL_MAX_VERTEX_UNITS_ARB             0x86A4
#define GL_ACTIVE_VERTEX_UNITS_ARB          0x86A5
#define GL_WEIGHT_SUM_UNITY_ARB             0x86A6
#define GL_VERTEX_BLEND_ARB                 0x86A7
#define GL_CURRENT_WEIGHT_ARB               0x86A8
#define GL_WEIGHT_ARRAY_TYPE_ARB            0x86A9
#define GL_WEIGHT_ARRAY_STRIDE_ARB          0x86AA
#define GL_WEIGHT_ARRAY_SIZE_ARB            0x86AB
#define GL_WEIGHT_ARRAY_POINTER_ARB         0x86AC
#define GL_WEIGHT_ARRAY_ARB                 0x86AD
#define GL_MODELVIEW0_ARB                   0x1700
#define GL_MODELVIEW1_ARB                   0x850A
#define GL_MODELVIEW2_ARB                   0x8722
#define GL_MODELVIEW3_ARB                   0x8723
#define GL_MODELVIEW4_ARB                   0x8724
#define GL_MODELVIEW5_ARB                   0x8725
#define GL_MODELVIEW6_ARB                   0x8726
#define GL_MODELVIEW7_ARB                   0x8727
#define GL_MODELVIEW8_ARB                   0x8728
#define GL_MODELVIEW9_ARB                   0x8729
#define GL_MODELVIEW10_ARB                  0x872A
#define GL_MODELVIEW11_ARB                  0x872B
#define GL_MODELVIEW12_ARB                  0x872C
#define GL_MODELVIEW13_ARB                  0x872D
#define GL_MODELVIEW14_ARB                  0x872E
#define GL_MODELVIEW15_ARB                  0x872F
#define GL_MODELVIEW16_ARB                  0x8730
#define GL_MODELVIEW17_ARB                  0x8731
#define GL_MODELVIEW18_ARB                  0x8732
#define GL_MODELVIEW19_ARB                  0x8733
#define GL_MODELVIEW20_ARB                  0x8734
#define GL_MODELVIEW21_ARB                  0x8735
#define GL_MODELVIEW22_ARB                  0x8736
#define GL_MODELVIEW23_ARB                  0x8737
#define GL_MODELVIEW24_ARB                  0x8738
#define GL_MODELVIEW25_ARB                  0x8739
#define GL_MODELVIEW26_ARB                  0x873A
#define GL_MODELVIEW27_ARB                  0x873B
#define GL_MODELVIEW28_ARB                  0x873C
#define GL_MODELVIEW29_ARB                  0x873D
#define GL_MODELVIEW30_ARB                  0x873E
#define GL_MODELVIEW31_ARB                  0x873F

/* ARB_texture_env_combine */
#define GL_COMBINE_ARB                      0x8570
#define GL_COMBINE_RGB_ARB                  0x8571
#define GL_COMBINE_ALPHA_ARB                0x8572
#define GL_SOURCE0_RGB_ARB                  0x8580
#define GL_SOURCE1_RGB_ARB                  0x8581
#define GL_SOURCE2_RGB_ARB                  0x8582
#define GL_SOURCE0_ALPHA_ARB                0x8588
#define GL_SOURCE1_ALPHA_ARB                0x8589
#define GL_SOURCE2_ALPHA_ARB                0x858A
#define GL_OPERAND0_RGB_ARB                 0x8590
#define GL_OPERAND1_RGB_ARB                 0x8591
#define GL_OPERAND2_RGB_ARB                 0x8592
#define GL_OPERAND0_ALPHA_ARB               0x8598
#define GL_OPERAND1_ALPHA_ARB               0x8599
#define GL_OPERAND2_ALPHA_ARB               0x859A
#define GL_RGB_SCALE_ARB                    0x8573
#define GL_ADD_SIGNED_ARB                   0x8574
#define GL_INTERPOLATE_ARB                  0x8575
#define GL_SUBTRACT_ARB                     0x84E7
#define GL_CONSTANT_ARB                     0x8576
#define GL_PRIMARY_COLOR_ARB                0x8577
#define GL_PREVIOUS_ARB                     0x8578

/* ARB_texture_env_crossbar */

/* ARB_texture_env_dot3 */
#define GL_DOT3_RGB_ARB                     0x86AE
#define GL_DOT3_RGBA_ARB                    0x86AF

/* ARB_depth_texture */
#define GL_DEPTH_COMPONENT16_ARB            0x81A5
#define GL_DEPTH_COMPONENT24_ARB            0x81A6
#define GL_DEPTH_COMPONENT32_ARB            0x81A7
#define GL_TEXTURE_DEPTH_SIZE_ARB           0x884A
#define GL_DEPTH_TEXTURE_MODE_ARB           0x884B

/* ARB_shadow */
#define GL_TEXTURE_COMPARE_MODE_ARB         0x884C
#define GL_TEXTURE_COMPARE_FUNC_ARB         0x884D
#define GL_COMPARE_R_TO_TEXTURE_ARB         0x884E

/* ARB_shadow_ambient */
#define GL_TEXTURE_COMPARE_FAIL_VALUE_ARB   0x80BF

/* ARB_window_pos */

/* ARB_vertex_program */
#define GL_COLOR_SUM_ARB                    0x8458
#define GL_VERTEX_PROGRAM_ARB               0x8620
#define GL_VERTEX_ATTRIB_ARRAY_ENABLED_ARB  0x8622
#define GL_VERTEX_ATTRIB_ARRAY_SIZE_ARB     0x8623
#define GL_VERTEX_ATTRIB_ARRAY_STRIDE_ARB   0x8624
#define GL_VERTEX_ATTRIB_ARRAY_TYPE_ARB     0x8625
#define GL_CURRENT_VERTEX_ATTRIB_ARB        0x8626
#define GL_PROGRAM_LENGTH_ARB               0x8627
#define GL_PROGRAM_STRING_ARB               0x8628
#define GL_MAX_PROGRAM_MATRIX_STACK_DEPTH_ARB 0x862E
#define GL_MAX_PROGRAM_MATRICES_ARB         0x862F
#define GL_CURRENT_MATRIX_STACK_DEPTH_ARB   0x8640
#define GL_CURRENT_MATRIX_ARB               0x8641
#define GL_VERTEX_PROGRAM_POINT_SIZE_ARB    0x8642
#define GL_VERTEX_PROGRAM_TWO_SIDE_ARB      0x8643
#define GL_VERTEX_ATTRIB_ARRAY_POINTER_ARB  0x8645
#define GL_PROGRAM_ERROR_POSITION_ARB       0x864B
#define GL_PROGRAM_BINDING_ARB              0x8677
#define GL_MAX_VERTEX_ATTRIBS_ARB           0x8869
#define GL_VERTEX_ATTRIB_ARRAY_NORMALIZED_ARB 0x886A
#define GL_PROGRAM_ERROR_STRING_ARB         0x8874
#define GL_PROGRAM_FORMAT_ASCII_ARB         0x8875
#define GL_PROGRAM_FORMAT_ARB               0x8876
#define GL_PROGRAM_INSTRUCTIONS_ARB         0x88A0
#define GL_MAX_PROGRAM_INSTRUCTIONS_ARB     0x88A1
#define GL_PROGRAM_NATIVE_INSTRUCTIONS_ARB  0x88A2
#define GL_MAX_PROGRAM_NATIVE_INSTRUCTIONS_ARB 0x88A3
#define GL_PROGRAM_TEMPORARIES_ARB          0x88A4
#define GL_MAX_PROGRAM_TEMPORARIES_ARB      0x88A5
#define GL_PROGRAM_NATIVE_TEMPORARIES_ARB   0x88A6
#define GL_MAX_PROGRAM_NATIVE_TEMPORARIES_ARB 0x88A7
#define GL_PROGRAM_PARAMETERS_ARB           0x88A8
#define GL_MAX_PROGRAM_PARAMETERS_ARB       0x88A9
#define GL_PROGRAM_NATIVE_PARAMETERS_ARB    0x88AA
#define GL_MAX_PROGRAM_NATIVE_PARAMETERS_ARB 0x88AB
#define GL_PROGRAM_ATTRIBS_ARB              0x88AC
#define GL_MAX_PROGRAM_ATTRIBS_ARB          0x88AD
#define GL_PROGRAM_NATIVE_ATTRIBS_ARB       0x88AE
#define GL_MAX_PROGRAM_NATIVE_ATTRIBS_ARB   0x88AF
#define GL_PROGRAM_ADDRESS_REGISTERS_ARB    0x88B0
#define GL_MAX_PROGRAM_ADDRESS_REGISTERS_ARB 0x88B1
#define GL_PROGRAM_NATIVE_ADDRESS_REGISTERS_ARB 0x88B2
#define GL_MAX_PROGRAM_NATIVE_ADDRESS_REGISTERS_ARB 0x88B3
#define GL_MAX_PROGRAM_LOCAL_PARAMETERS_ARB 0x88B4
#define GL_MAX_PROGRAM_ENV_PARAMETERS_ARB   0x88B5
#define GL_PROGRAM_UNDER_NATIVE_LIMITS_ARB  0x88B6
#define GL_TRANSPOSE_CURRENT_MATRIX_ARB     0x88B7
#define GL_MATRIX0_ARB                      0x88C0
#define GL_MATRIX1_ARB                      0x88C1
#define GL_MATRIX2_ARB                      0x88C2
#define GL_MATRIX3_ARB                      0x88C3
#define GL_MATRIX4_ARB                      0x88C4
#define GL_MATRIX5_ARB                      0x88C5
#define GL_MATRIX6_ARB                      0x88C6
#define GL_MATRIX7_ARB                      0x88C7
#define GL_MATRIX8_ARB                      0x88C8
#define GL_MATRIX9_ARB                      0x88C9
#define GL_MATRIX10_ARB                     0x88CA
#define GL_MATRIX11_ARB                     0x88CB
#define GL_MATRIX12_ARB                     0x88CC
#define GL_MATRIX13_ARB                     0x88CD
#define GL_MATRIX14_ARB                     0x88CE
#define GL_MATRIX15_ARB                     0x88CF
#define GL_MATRIX16_ARB                     0x88D0
#define GL_MATRIX17_ARB                     0x88D1
#define GL_MATRIX18_ARB                     0x88D2
#define GL_MATRIX19_ARB                     0x88D3
#define GL_MATRIX20_ARB                     0x88D4
#define GL_MATRIX21_ARB                     0x88D5
#define GL_MATRIX22_ARB                     0x88D6
#define GL_MATRIX23_ARB                     0x88D7
#define GL_MATRIX24_ARB                     0x88D8
#define GL_MATRIX25_ARB                     0x88D9
#define GL_MATRIX26_ARB                     0x88DA
#define GL_MATRIX27_ARB                     0x88DB
#define GL_MATRIX28_ARB                     0x88DC
#define GL_MATRIX29_ARB                     0x88DD
#define GL_MATRIX30_ARB                     0x88DE
#define GL_MATRIX31_ARB                     0x88DF

/* ARB_fragment_program */
#define GL_FRAGMENT_PROGRAM_ARB             0x8804
#define GL_PROGRAM_ALU_INSTRUCTIONS_ARB     0x8805
#define GL_PROGRAM_TEX_INSTRUCTIONS_ARB     0x8806
#define GL_PROGRAM_TEX_INDIRECTIONS_ARB     0x8807
#define GL_PROGRAM_NATIVE_ALU_INSTRUCTIONS_ARB 0x8808
#define GL_PROGRAM_NATIVE_TEX_INSTRUCTIONS_ARB 0x8809
#define GL_PROGRAM_NATIVE_TEX_INDIRECTIONS_ARB 0x880A
#define GL_MAX_PROGRAM_ALU_INSTRUCTIONS_ARB 0x880B
#define GL_MAX_PROGRAM_TEX_INSTRUCTIONS_ARB 0x880C
#define GL_MAX_PROGRAM_TEX_INDIRECTIONS_ARB 0x880D
#define GL_MAX_PROGRAM_NATIVE_ALU_INSTRUCTIONS_ARB 0x880E
#define GL_MAX_PROGRAM_NATIVE_TEX_INSTRUCTIONS_ARB 0x880F
#define GL_MAX_PROGRAM_NATIVE_TEX_INDIRECTIONS_ARB 0x8810
#define GL_MAX_TEXTURE_COORDS_ARB           0x8871
#define GL_MAX_TEXTURE_IMAGE_UNITS_ARB      0x8872

/* EXT_texture_cube_map */
#define GL_NORMAL_MAP_EXT                   0x8511
#define GL_REFLECTION_MAP_EXT               0x8512
#define GL_TEXTURE_CUBE_MAP_EXT             0x8513
#define GL_TEXTURE_BINDING_CUBE_MAP_EXT     0x8514
#define GL_TEXTURE_CUBE_MAP_POSITIVE_X_EXT  0x8515
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_X_EXT  0x8516
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Y_EXT  0x8517
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_EXT  0x8518
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Z_EXT  0x8519
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_EXT  0x851A
#define GL_PROXY_TEXTURE_CUBE_MAP_EXT       0x851B
#define GL_MAX_CUBE_MAP_TEXTURE_SIZE_EXT    0x851C

/* EXT_texture_edge_clamp */
#define GL_CLAMP_TO_EDGE_EXT                0x812F

/* EXT_clip_volume_hint */
#define GL_CLIP_VOLUME_CLIPPING_HINT_EXT    0x80F0

/* EXT_compiled_vertex_array */
#define GL_ARRAY_ELEMENT_LOCK_FIRST_EXT     0x81A8
#define GL_ARRAY_ELEMENT_LOCK_COUNT_EXT     0x81A9

/* EXT_draw_range_elements */
#define GL_MAX_ELEMENTS_VERTICES_EXT        0x80E8
#define GL_MAX_ELEMENTS_INDICES_EXT         0x80E9

/* EXT_bgra */
#define GL_BGR_EXT                          0x80E0
#define GL_BGRA_EXT                         0x80E1

/* HP_occlusion_test */
#define GL_OCCLUSION_TEST_HP                0x8165
#define GL_OCCLUSION_TEST_RESULT_HP         0x8166

/* EXT_separate_specular_color */
#define GL_LIGHT_MODEL_COLOR_CONTROL_EXT    0x81F8
#define GL_SINGLE_COLOR_EXT                 0x81F9
#define GL_SEPARATE_SPECULAR_COLOR_EXT      0x81FA

/* EXT_secondary_color */
#define GL_COLOR_SUM_EXT                    0x8458
#define GL_CURRENT_SECONDARY_COLOR_EXT      0x8459
#define GL_SECONDARY_COLOR_ARRAY_SIZE_EXT   0x845A
#define GL_SECONDARY_COLOR_ARRAY_TYPE_EXT   0x845B
#define GL_SECONDARY_COLOR_ARRAY_STRIDE_EXT 0x845C
#define GL_SECONDARY_COLOR_ARRAY_POINTER_EXT 0x845D
#define GL_SECONDARY_COLOR_ARRAY_EXT        0x845E

/* EXT_multi_draw_arrays */

/* EXT_fog_coord */
#define GL_FOG_COORDINATE_SOURCE_EXT        0x8450
#define GL_FOG_COORDINATE_EXT               0x8451
#define GL_FRAGMENT_DEPTH_EXT               0x8452
#define GL_CURRENT_FOG_COORDINATE_EXT       0x8453
#define GL_FOG_COORDINATE_ARRAY_TYPE_EXT    0x8454
#define GL_FOG_COORDINATE_ARRAY_STRIDE_EXT  0x8455
#define GL_FOG_COORDINATE_ARRAY_POINTER_EXT 0x8456
#define GL_FOG_COORDINATE_ARRAY_EXT         0x8457

/* EXT_texture_env_combine */
#define GL_COMBINE_EXT                      0x8570
#define GL_COMBINE_RGB_EXT                  0x8571
#define GL_COMBINE_ALPHA_EXT                0x8572
#define GL_RGB_SCALE_EXT                    0x8573
#define GL_ADD_SIGNED_EXT                   0x8574
#define GL_INTERPOLATE_EXT                  0x8575
#define GL_CONSTANT_EXT                     0x8576
#define GL_PRIMARY_COLOR_EXT                0x8577
#define GL_PREVIOUS_EXT                     0x8578
#define GL_SOURCE0_RGB_EXT                  0x8580
#define GL_SOURCE1_RGB_EXT                  0x8581
#define GL_SOURCE2_RGB_EXT                  0x8582
#define GL_SOURCE0_ALPHA_EXT                0x8588
#define GL_SOURCE1_ALPHA_EXT                0x8589
#define GL_SOURCE2_ALPHA_EXT                0x858A
#define GL_OPERAND0_RGB_EXT                 0x8590
#define GL_OPERAND1_RGB_EXT                 0x8591
#define GL_OPERAND2_RGB_EXT                 0x8592
#define GL_OPERAND0_ALPHA_EXT               0x8598
#define GL_OPERAND1_ALPHA_EXT               0x8599
#define GL_OPERAND2_ALPHA_EXT               0x859A

/* EXT_blend_func_separate */
#define GL_BLEND_DST_RGB_EXT                0x80C8
#define GL_BLEND_SRC_RGB_EXT                0x80C9
#define GL_BLEND_DST_ALPHA_EXT              0x80CA
#define GL_BLEND_SRC_ALPHA_EXT              0x80CB

/* INGR_interlace_read */
#define GL_INTERLACE_READ_INGR              0x8568

/* EXT_stencil_wrap */
#define GL_INCR_WRAP_EXT                    0x8507
#define GL_DECR_WRAP_EXT                    0x8508

/* NV_texgen_reflection */
#define GL_NORMAL_MAP_NV                    0x8511
#define GL_REFLECTION_MAP_NV                0x8512

/* EXT_texgen_reflection */

/* EXT_texture_env_add */

/* EXT_texture_lod_bias */
#define GL_MAX_TEXTURE_LOD_BIAS_EXT         0x84FD
#define GL_TEXTURE_FILTER_CONTROL_EXT       0x8500
#define GL_TEXTURE_LOD_BIAS_EXT             0x8501

/* EXT_texture_filter_anisotropic */
#define GL_TEXTURE_MAX_ANISOTROPY_EXT       0x84FE
#define GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT   0x84FF

/* NV_blend_square */

/* EXT_texture_compression_s3tc */
#define GL_COMPRESSED_RGB_S3TC_DXT1_EXT     0x83F0
#define GL_COMPRESSED_RGBA_S3TC_DXT1_EXT    0x83F1
#define GL_COMPRESSED_RGBA_S3TC_DXT3_EXT    0x83F2
#define GL_COMPRESSED_RGBA_S3TC_DXT5_EXT    0x83F3

/* EXT_texture_env_dot3 */
#define GL_DOT3_RGB_EXT                     0x8740
#define GL_DOT3_RGBA_EXT                    0x8741

/* ATI_texture_mirror_once */
#define GL_MIRROR_CLAMP_ATI                 0x8742
#define GL_MIRROR_CLAMP_TO_EDGE_ATI         0x8743

/* ATI_envmap_bumpmap */
#define GL_BUMP_ROT_MATRIX_ATI              0x8775
#define GL_BUMP_ROT_MATRIX_SIZE_ATI         0x8776
#define GL_BUMP_NUM_TEX_UNITS_ATI           0x8777
#define GL_BUMP_TEX_UNITS_ATI               0x8778
#define GL_DUDV_ATI                         0x8779
#define GL_DU8DV8_ATI                       0x877A
#define GL_BUMP_ENVMAP_ATI                  0x877B
#define GL_BUMP_TARGET_ATI                  0x877C

/* ATI_fragment_shader */
#define GL_FRAGMENT_SHADER_ATI              0x8920
#define GL_REG_0_ATI                        0x8921
#define GL_REG_1_ATI                        0x8922
#define GL_REG_2_ATI                        0x8923
#define GL_REG_3_ATI                        0x8924
#define GL_REG_4_ATI                        0x8925
#define GL_REG_5_ATI                        0x8926
#define GL_REG_6_ATI                        0x8927
#define GL_REG_7_ATI                        0x8928
#define GL_REG_8_ATI                        0x8929
#define GL_REG_9_ATI                        0x892A
#define GL_REG_10_ATI                       0x892B
#define GL_REG_11_ATI                       0x892C
#define GL_REG_12_ATI                       0x892D
#define GL_REG_13_ATI                       0x892E
#define GL_REG_14_ATI                       0x892F
#define GL_REG_15_ATI                       0x8930
#define GL_REG_16_ATI                       0x8931
#define GL_REG_17_ATI                       0x8932
#define GL_REG_18_ATI                       0x8933
#define GL_REG_19_ATI                       0x8934
#define GL_REG_20_ATI                       0x8935
#define GL_REG_21_ATI                       0x8936
#define GL_REG_22_ATI                       0x8937
#define GL_REG_23_ATI                       0x8938
#define GL_REG_24_ATI                       0x8939
#define GL_REG_25_ATI                       0x893A
#define GL_REG_26_ATI                       0x893B
#define GL_REG_27_ATI                       0x893C
#define GL_REG_28_ATI                       0x893D
#define GL_REG_29_ATI                       0x893E
#define GL_REG_30_ATI                       0x893F
#define GL_REG_31_ATI                       0x8940
#define GL_CON_0_ATI                        0x8941
#define GL_CON_1_ATI                        0x8942
#define GL_CON_2_ATI                        0x8943
#define GL_CON_3_ATI                        0x8944
#define GL_CON_4_ATI                        0x8945
#define GL_CON_5_ATI                        0x8946
#define GL_CON_6_ATI                        0x8947
#define GL_CON_7_ATI                        0x8948
#define GL_CON_8_ATI                        0x8949
#define GL_CON_9_ATI                        0x894A
#define GL_CON_10_ATI                       0x894B
#define GL_CON_11_ATI                       0x894C
#define GL_CON_12_ATI                       0x894D
#define GL_CON_13_ATI                       0x894E
#define GL_CON_14_ATI                       0x894F
#define GL_CON_15_ATI                       0x8950
#define GL_CON_16_ATI                       0x8951
#define GL_CON_17_ATI                       0x8952
#define GL_CON_18_ATI                       0x8953
#define GL_CON_19_ATI                       0x8954
#define GL_CON_20_ATI                       0x8955
#define GL_CON_21_ATI                       0x8956
#define GL_CON_22_ATI                       0x8957
#define GL_CON_23_ATI                       0x8958
#define GL_CON_24_ATI                       0x8959
#define GL_CON_25_ATI                       0x895A
#define GL_CON_26_ATI                       0x895B
#define GL_CON_27_ATI                       0x895C
#define GL_CON_28_ATI                       0x895D
#define GL_CON_29_ATI                       0x895E
#define GL_CON_30_ATI                       0x895F
#define GL_CON_31_ATI                       0x8960
#define GL_MOV_ATI                          0x8961
#define GL_ADD_ATI                          0x8963
#define GL_MUL_ATI                          0x8964
#define GL_SUB_ATI                          0x8965
#define GL_DOT3_ATI                         0x8966
#define GL_DOT4_ATI                         0x8967
#define GL_MAD_ATI                          0x8968
#define GL_LERP_ATI                         0x8969
#define GL_CND_ATI                          0x896A
#define GL_CND0_ATI                         0x896B
#define GL_DOT2_ADD_ATI                     0x896C
#define GL_SECONDARY_INTERPOLATOR_ATI       0x896D
#define GL_NUM_FRAGMENT_REGISTERS_ATI       0x896E
#define GL_NUM_FRAGMENT_CONSTANTS_ATI       0x896F
#define GL_NUM_PASSES_ATI                   0x8970
#define GL_NUM_INSTRUCTIONS_PER_PASS_ATI    0x8971
#define GL_NUM_INSTRUCTIONS_TOTAL_ATI       0x8972
#define GL_NUM_INPUT_INTERPOLATOR_COMPONENTS_ATI 0x8973
#define GL_NUM_LOOPBACK_COMPONENTS_ATI      0x8974
#define GL_COLOR_ALPHA_PAIRING_ATI          0x8975
#define GL_SWIZZLE_STR_ATI                  0x8976
#define GL_SWIZZLE_STQ_ATI                  0x8977
#define GL_SWIZZLE_STR_DR_ATI               0x8978
#define GL_SWIZZLE_STQ_DQ_ATI               0x8979
#define GL_SWIZZLE_STRQ_ATI                 0x897A
#define GL_SWIZZLE_STRQ_DQ_ATI              0x897B
#define GL_RED_BIT_ATI                      0x00000001
#define GL_GREEN_BIT_ATI                    0x00000002
#define GL_BLUE_BIT_ATI                     0x00000004
#define GL_2X_BIT_ATI                       0x00000001
#define GL_4X_BIT_ATI                       0x00000002
#define GL_8X_BIT_ATI                       0x00000004
#define GL_HALF_BIT_ATI                     0x00000008
#define GL_QUARTER_BIT_ATI                  0x00000010
#define GL_EIGHTH_BIT_ATI                   0x00000020
#define GL_SATURATE_BIT_ATI                 0x00000040
#define GL_COMP_BIT_ATI                     0x00000002
#define GL_NEGATE_BIT_ATI                   0x00000004
#define GL_BIAS_BIT_ATI                     0x00000008

/* ATI_pn_triangles */
#define GL_PN_TRIANGLES_ATI                 0x87F0
#define GL_MAX_PN_TRIANGLES_TESSELATION_LEVEL_ATI 0x87F1
#define GL_PN_TRIANGLES_POINT_MODE_ATI      0x87F2
#define GL_PN_TRIANGLES_NORMAL_MODE_ATI     0x87F3
#define GL_PN_TRIANGLES_TESSELATION_LEVEL_ATI 0x87F4
#define GL_PN_TRIANGLES_POINT_MODE_LINEAR_ATI 0x87F5
#define GL_PN_TRIANGLES_POINT_MODE_CUBIC_ATI 0x87F6
#define GL_PN_TRIANGLES_NORMAL_MODE_LINEAR_ATI 0x87F7
#define GL_PN_TRIANGLES_NORMAL_MODE_QUADRATIC_ATI 0x87F8

/* ATI_vertex_array_object */
#define GL_STATIC_ATI                       0x8760
#define GL_DYNAMIC_ATI                      0x8761
#define GL_PRESERVE_ATI                     0x8762
#define GL_DISCARD_ATI                      0x8763
#define GL_OBJECT_BUFFER_SIZE_ATI           0x8764
#define GL_OBJECT_BUFFER_USAGE_ATI          0x8765
#define GL_ARRAY_OBJECT_BUFFER_ATI          0x8766
#define GL_ARRAY_OBJECT_OFFSET_ATI          0x8767

/* EXT_vertex_shader */
#define GL_VERTEX_SHADER_EXT                0x8780
#define GL_VERTEX_SHADER_BINDING_EXT        0x8781
#define GL_OP_INDEX_EXT                     0x8782
#define GL_OP_NEGATE_EXT                    0x8783
#define GL_OP_DOT3_EXT                      0x8784
#define GL_OP_DOT4_EXT                      0x8785
#define GL_OP_MUL_EXT                       0x8786
#define GL_OP_ADD_EXT                       0x8787
#define GL_OP_MADD_EXT                      0x8788
#define GL_OP_FRAC_EXT                      0x8789
#define GL_OP_MAX_EXT                       0x878A
#define GL_OP_MIN_EXT                       0x878B
#define GL_OP_SET_GE_EXT                    0x878C
#define GL_OP_SET_LT_EXT                    0x878D
#define GL_OP_CLAMP_EXT                     0x878E
#define GL_OP_FLOOR_EXT                     0x878F
#define GL_OP_ROUND_EXT                     0x8790
#define GL_OP_EXP_BASE_2_EXT                0x8791
#define GL_OP_LOG_BASE_2_EXT                0x8792
#define GL_OP_POWER_EXT                     0x8793
#define GL_OP_RECIP_EXT                     0x8794
#define GL_OP_RECIP_SQRT_EXT                0x8795
#define GL_OP_SUB_EXT                       0x8796
#define GL_OP_CROSS_PRODUCT_EXT             0x8797
#define GL_OP_MULTIPLY_MATRIX_EXT           0x8798
#define GL_OP_MOV_EXT                       0x8799
#define GL_OUTPUT_VERTEX_EXT                0x879A
#define GL_OUTPUT_COLOR0_EXT                0x879B
#define GL_OUTPUT_COLOR1_EXT                0x879C
#define GL_OUTPUT_TEXTURE_COORD0_EXT        0x879D
#define GL_OUTPUT_TEXTURE_COORD1_EXT        0x879E
#define GL_OUTPUT_TEXTURE_COORD2_EXT        0x879F
#define GL_OUTPUT_TEXTURE_COORD3_EXT        0x87A0
#define GL_OUTPUT_TEXTURE_COORD4_EXT        0x87A1
#define GL_OUTPUT_TEXTURE_COORD5_EXT        0x87A2
#define GL_OUTPUT_TEXTURE_COORD6_EXT        0x87A3
#define GL_OUTPUT_TEXTURE_COORD7_EXT        0x87A4
#define GL_OUTPUT_TEXTURE_COORD8_EXT        0x87A5
#define GL_OUTPUT_TEXTURE_COORD9_EXT        0x87A6
#define GL_OUTPUT_TEXTURE_COORD10_EXT       0x87A7
#define GL_OUTPUT_TEXTURE_COORD11_EXT       0x87A8
#define GL_OUTPUT_TEXTURE_COORD12_EXT       0x87A9
#define GL_OUTPUT_TEXTURE_COORD13_EXT       0x87AA
#define GL_OUTPUT_TEXTURE_COORD14_EXT       0x87AB
#define GL_OUTPUT_TEXTURE_COORD15_EXT       0x87AC
#define GL_OUTPUT_TEXTURE_COORD16_EXT       0x87AD
#define GL_OUTPUT_TEXTURE_COORD17_EXT       0x87AE
#define GL_OUTPUT_TEXTURE_COORD18_EXT       0x87AF
#define GL_OUTPUT_TEXTURE_COORD19_EXT       0x87B0
#define GL_OUTPUT_TEXTURE_COORD20_EXT       0x87B1
#define GL_OUTPUT_TEXTURE_COORD21_EXT       0x87B2
#define GL_OUTPUT_TEXTURE_COORD22_EXT       0x87B3
#define GL_OUTPUT_TEXTURE_COORD23_EXT       0x87B4
#define GL_OUTPUT_TEXTURE_COORD24_EXT       0x87B5
#define GL_OUTPUT_TEXTURE_COORD25_EXT       0x87B6
#define GL_OUTPUT_TEXTURE_COORD26_EXT       0x87B7
#define GL_OUTPUT_TEXTURE_COORD27_EXT       0x87B8
#define GL_OUTPUT_TEXTURE_COORD28_EXT       0x87B9
#define GL_OUTPUT_TEXTURE_COORD29_EXT       0x87BA
#define GL_OUTPUT_TEXTURE_COORD30_EXT       0x87BB
#define GL_OUTPUT_TEXTURE_COORD31_EXT       0x87BC
#define GL_OUTPUT_FOG_EXT                   0x87BD
#define GL_SCALAR_EXT                       0x87BE
#define GL_VECTOR_EXT                       0x87BF
#define GL_MATRIX_EXT                       0x87C0
#define GL_VARIANT_EXT                      0x87C1
#define GL_INVARIANT_EXT                    0x87C2
#define GL_LOCAL_CONSTANT_EXT               0x87C3
#define GL_LOCAL_EXT                        0x87C4
#define GL_MAX_VERTEX_SHADER_INSTRUCTIONS_EXT 0x87C5
#define GL_MAX_VERTEX_SHADER_VARIANTS_EXT   0x87C6
#define GL_MAX_VERTEX_SHADER_INVARIANTS_EXT 0x87C7
#define GL_MAX_VERTEX_SHADER_LOCAL_CONSTANTS_EXT 0x87C8
#define GL_MAX_VERTEX_SHADER_LOCALS_EXT     0x87C9
#define GL_MAX_OPTIMIZED_VERTEX_SHADER_INSTRUCTIONS_EXT 0x87CA
#define GL_MAX_OPTIMIZED_VERTEX_SHADER_VARIANTS_EXT 0x87CB
#define GL_MAX_OPTIMIZED_VERTEX_SHADER_LOCAL_CONSTANTS_EXT 0x87CC
#define GL_MAX_OPTIMIZED_VERTEX_SHADER_INVARIANTS_EXT 0x87CD
#define GL_MAX_OPTIMIZED_VERTEX_SHADER_LOCALS_EXT 0x87CE
#define GL_VERTEX_SHADER_INSTRUCTIONS_EXT   0x87CF
#define GL_VERTEX_SHADER_VARIANTS_EXT       0x87D0
#define GL_VERTEX_SHADER_INVARIANTS_EXT     0x87D1
#define GL_VERTEX_SHADER_LOCAL_CONSTANTS_EXT 0x87D2
#define GL_VERTEX_SHADER_LOCALS_EXT         0x87D3
#define GL_VERTEX_SHADER_OPTIMIZED_EXT      0x87D4
#define GL_X_EXT                            0x87D5
#define GL_Y_EXT                            0x87D6
#define GL_Z_EXT                            0x87D7
#define GL_W_EXT                            0x87D8
#define GL_NEGATIVE_X_EXT                   0x87D9
#define GL_NEGATIVE_Y_EXT                   0x87DA
#define GL_NEGATIVE_Z_EXT                   0x87DB
#define GL_NEGATIVE_W_EXT                   0x87DC
#define GL_ZERO_EXT                         0x87DD
#define GL_ONE_EXT                          0x87DE
#define GL_NEGATIVE_ONE_EXT                 0x87DF
#define GL_NORMALIZED_RANGE_EXT             0x87E0
#define GL_FULL_RANGE_EXT                   0x87E1
#define GL_CURRENT_VERTEX_EXT               0x87E2
#define GL_MVP_MATRIX_EXT                   0x87E3
#define GL_VARIANT_VALUE_EXT                0x87E4
#define GL_VARIANT_DATATYPE_EXT             0x87E5
#define GL_VARIANT_ARRAY_STRIDE_EXT         0x87E6
#define GL_VARIANT_ARRAY_TYPE_EXT           0x87E7
#define GL_VARIANT_ARRAY_EXT                0x87E8
#define GL_VARIANT_ARRAY_POINTER_EXT        0x87E9
#define GL_INVARIANT_VALUE_EXT              0x87EA
#define GL_INVARIANT_DATATYPE_EXT           0x87EB
#define GL_LOCAL_CONSTANT_VALUE_EXT         0x87EC
#define GL_LOCAL_CONSTANT_DATATYPE_EXT      0x87ED

/* ATI_vertex_streams */
#define GL_MAX_VERTEX_STREAMS_ATI           0x876B
#define GL_VERTEX_STREAM0_ATI               0x876C
#define GL_VERTEX_STREAM1_ATI               0x876D
#define GL_VERTEX_STREAM2_ATI               0x876E
#define GL_VERTEX_STREAM3_ATI               0x876F
#define GL_VERTEX_STREAM4_ATI               0x8770
#define GL_VERTEX_STREAM5_ATI               0x8771
#define GL_VERTEX_STREAM6_ATI               0x8772
#define GL_VERTEX_STREAM7_ATI               0x8773
#define GL_VERTEX_SOURCE_ATI                0x8774

/* ATI_element_array */
#define GL_ELEMENT_ARRAY_ATI                0x8768
#define GL_ELEMENT_ARRAY_TYPE_ATI           0x8769
#define GL_ELEMENT_ARRAY_POINTER_ATI        0x876A

/* NV_occlusion_query */
#define GL_PIXEL_COUNTER_BITS_NV            0x8864
#define GL_CURRENT_OCCLUSION_QUERY_ID_NV    0x8865
#define GL_PIXEL_COUNT_NV                   0x8866
#define GL_PIXEL_COUNT_AVAILABLE_NV         0x8867

/* S3_s3tc */
#define GL_RGB_S3TC                         0x83A0
#define GL_RGB4_S3TC                        0x83A1
#define GL_RGBA_S3TC                        0x83A2
#define GL_RGBA4_S3TC                       0x83A3

/* ATI_draw_buffers */
#define GL_MAX_DRAW_BUFFERS_ATI             0x8824
#define GL_DRAW_BUFFER0_ATI                 0x8825
#define GL_DRAW_BUFFER1_ATI                 0x8826
#define GL_DRAW_BUFFER2_ATI                 0x8827
#define GL_DRAW_BUFFER3_ATI                 0x8828
#define GL_DRAW_BUFFER4_ATI                 0x8829
#define GL_DRAW_BUFFER5_ATI                 0x882A
#define GL_DRAW_BUFFER6_ATI                 0x882B
#define GL_DRAW_BUFFER7_ATI                 0x882C
#define GL_DRAW_BUFFER8_ATI                 0x882D
#define GL_DRAW_BUFFER9_ATI                 0x882E
#define GL_DRAW_BUFFER10_ATI                0x882F
#define GL_DRAW_BUFFER11_ATI                0x8830
#define GL_DRAW_BUFFER12_ATI                0x8831
#define GL_DRAW_BUFFER13_ATI                0x8832
#define GL_DRAW_BUFFER14_ATI                0x8833
#define GL_DRAW_BUFFER15_ATI                0x8834

/* ATI_map_object_buffer */

/* ATI_separate_stencil */
#define GL_STENCIL_BACK_FUNC_ATI            0x8800
#define GL_STENCIL_BACK_FAIL_ATI            0x8801
#define GL_STENCIL_BACK_PASS_DEPTH_FAIL_ATI 0x8802
#define GL_STENCIL_BACK_PASS_DEPTH_PASS_ATI 0x8803

/* ATI_vertex_attrib_array_object */

/*************************************************************/


#if defined(_LANGUAGE_C) || defined(__cplusplus)

extern void glAccum (GLenum op, GLfloat value);
extern void glActiveTexture (GLenum texture);
extern void glActiveTextureARB (GLenum texture);
extern void glAlphaFragmentOp1ATI (GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod);
extern void glAlphaFragmentOp2ATI (GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod);
extern void glAlphaFragmentOp3ATI (GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod);
extern void glAlphaFunc (GLenum func, GLclampf ref);
extern GLboolean glAreTexturesResident (GLsizei n, const GLuint *textures, GLboolean *residences);
extern GLboolean glAreTexturesResidentEXT (GLsizei n, const GLuint *textures, GLboolean *residences);
extern void glArrayElement (GLint i);
extern void glArrayElementEXT (GLint i);
extern void glArrayObjectATI (GLenum array, GLint size, GLenum type, GLsizei stride, GLuint buffer, GLuint offset);
extern void glAsyncMarkerSGIX (GLuint marker);
extern void glBegin (GLenum mode);
extern void glBeginFragmentShaderATI (void);
extern void glBeginOcclusionQueryNV (GLuint id);
extern void glBeginVertexShaderEXT (void);
extern void glBindFragmentShaderATI (GLuint id);
extern GLuint glBindLightParameterEXT (GLenum light, GLenum value);
extern GLuint glBindMaterialParameterEXT (GLenum face, GLenum value);
extern GLuint glBindParameterEXT (GLenum value);
extern void glBindProgramARB (GLenum target, GLuint program);
extern GLuint glBindTexGenParameterEXT (GLenum unit, GLenum coord, GLenum value);
extern void glBindTexture (GLenum target, GLuint texture);
extern void glBindTextureEXT (GLenum target, GLuint texture);
extern GLuint glBindTextureUnitParameterEXT (GLenum unit, GLenum value);
extern void glBindVertexShaderEXT (GLuint id);
extern void glBitmap (GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte *bitmap);
extern void glBlendColor (GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
extern void glBlendColorEXT (GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
extern void glBlendEquation (GLenum mode);
extern void glBlendEquationEXT (GLenum mode);
extern void glBlendFunc (GLenum sfactor, GLenum dfactor);
extern void glBlendFuncSeparate (GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
extern void glBlendFuncSeparateEXT (GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
extern void glCallList (GLuint list);
extern void glCallLists (GLsizei n, GLenum type, const GLvoid *lists);
extern void glClear (GLbitfield mask);
extern void glClearAccum (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
extern void glClearColor (GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
extern void glClearDepth (GLclampd depth);
extern void glClearIndex (GLfloat c);
extern void glClearStencil (GLint s);
extern void glClientActiveTexture (GLenum texture);
extern void glClientActiveTextureARB (GLenum texture);
extern void glClientActiveVertexStreamATI (GLenum stream);
extern void glClipPlane (GLenum plane, const GLdouble *equation);
extern void glColor3b (GLbyte red, GLbyte green, GLbyte blue);
extern void glColor3bv (const GLbyte *v);
extern void glColor3d (GLdouble red, GLdouble green, GLdouble blue);
extern void glColor3dv (const GLdouble *v);
extern void glColor3f (GLfloat red, GLfloat green, GLfloat blue);
extern void glColor3fv (const GLfloat *v);
extern void glColor3i (GLint red, GLint green, GLint blue);
extern void glColor3iv (const GLint *v);
extern void glColor3s (GLshort red, GLshort green, GLshort blue);
extern void glColor3sv (const GLshort *v);
extern void glColor3ub (GLubyte red, GLubyte green, GLubyte blue);
extern void glColor3ubv (const GLubyte *v);
extern void glColor3ui (GLuint red, GLuint green, GLuint blue);
extern void glColor3uiv (const GLuint *v);
extern void glColor3us (GLushort red, GLushort green, GLushort blue);
extern void glColor3usv (const GLushort *v);
extern void glColor4b (GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha);
extern void glColor4bv (const GLbyte *v);
extern void glColor4d (GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha);
extern void glColor4dv (const GLdouble *v);
extern void glColor4f (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
extern void glColor4fv (const GLfloat *v);
extern void glColor4i (GLint red, GLint green, GLint blue, GLint alpha);
extern void glColor4iv (const GLint *v);
extern void glColor4s (GLshort red, GLshort green, GLshort blue, GLshort alpha);
extern void glColor4sv (const GLshort *v);
extern void glColor4ub (GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha);
extern void glColor4ubv (const GLubyte *v);
extern void glColor4ui (GLuint red, GLuint green, GLuint blue, GLuint alpha);
extern void glColor4uiv (const GLuint *v);
extern void glColor4us (GLushort red, GLushort green, GLushort blue, GLushort alpha);
extern void glColor4usv (const GLushort *v);
extern void glColorFragmentOp1ATI (GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod);
extern void glColorFragmentOp2ATI (GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod);
extern void glColorFragmentOp3ATI (GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod);
extern void glColorMask (GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
extern void glColorMaterial (GLenum face, GLenum mode);
extern void glColorPointer (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
extern void glColorPointerEXT (GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer);
extern void glColorSubTable (GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const GLvoid *data);
extern void glColorTable (GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *table);
extern void glColorTableParameterfv (GLenum target, GLenum pname, const GLfloat *params);
extern void glColorTableParameterfvSGI (GLenum target, GLenum pname, const GLfloat *params);
extern void glColorTableParameteriv (GLenum target, GLenum pname, const GLint *params);
extern void glColorTableParameterivSGI (GLenum target, GLenum pname, const GLint *params);
extern void glColorTableSGI (GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *table);
extern void glCompressedTexImage1D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid *data);
extern void glCompressedTexImage1DARB (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid *data);
extern void glCompressedTexImage2D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *data);
extern void glCompressedTexImage2DARB (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *data);
extern void glCompressedTexImage3D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid *data);
extern void glCompressedTexImage3DARB (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid *data);
extern void glCompressedTexSubImage1D (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid *data);
extern void glCompressedTexSubImage1DARB (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid *data);
extern void glCompressedTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid *data);
extern void glCompressedTexSubImage2DARB (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid *data);
extern void glCompressedTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid *data);
extern void glCompressedTexSubImage3DARB (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid *data);
extern void glConvolutionFilter1D (GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *image);
extern void glConvolutionFilter1DEXT (GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *image);
extern void glConvolutionFilter2D (GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *image);
extern void glConvolutionFilter2DEXT (GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *image);
extern void glConvolutionParameterf (GLenum target, GLenum pname, GLfloat params);
extern void glConvolutionParameterfEXT (GLenum target, GLenum pname, GLfloat params);
extern void glConvolutionParameterfv (GLenum target, GLenum pname, const GLfloat *params);
extern void glConvolutionParameterfvEXT (GLenum target, GLenum pname, const GLfloat *params);
extern void glConvolutionParameteri (GLenum target, GLenum pname, GLint params);
extern void glConvolutionParameteriEXT (GLenum target, GLenum pname, GLint params);
extern void glConvolutionParameteriv (GLenum target, GLenum pname, const GLint *params);
extern void glConvolutionParameterivEXT (GLenum target, GLenum pname, const GLint *params);
extern void glCopyColorSubTable (GLenum target, GLsizei start, GLint x, GLint y, GLsizei width);
extern void glCopyColorTable (GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width);
extern void glCopyColorTableSGI (GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width);
extern void glCopyConvolutionFilter1D (GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width);
extern void glCopyConvolutionFilter1DEXT (GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width);
extern void glCopyConvolutionFilter2D (GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height);
extern void glCopyConvolutionFilter2DEXT (GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height);
extern void glCopyPixels (GLint x, GLint y, GLsizei width, GLsizei height, GLenum type);
extern void glCopyTexImage1D (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
extern void glCopyTexImage1DEXT (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
extern void glCopyTexImage2D (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
extern void glCopyTexImage2DEXT (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
extern void glCopyTexSubImage1D (GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
extern void glCopyTexSubImage1DEXT (GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
extern void glCopyTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
extern void glCopyTexSubImage2DEXT (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
extern void glCopyTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
extern void glCopyTexSubImage3DEXT (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
extern void glCullFace (GLenum mode);
extern void glDeformSGIX (GLbitfield mask);
extern void glDeformationMap3dSGIX (GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, GLdouble w1, GLdouble w2, GLint wstride, GLint worder, const GLdouble *points);
extern void glDeformationMap3fSGIX (GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, GLfloat w1, GLfloat w2, GLint wstride, GLint worder, const GLfloat *points);
extern void glDeleteAsyncMarkersSGIX (GLuint marker, GLsizei range);
extern void glDeleteFragmentShaderATI (GLuint id);
extern void glDeleteLists (GLuint list, GLsizei range);
extern void glDeleteObjectBufferATI (GLuint buffer);
extern void glDeleteOcclusionQueriesNV (GLsizei n, const GLuint *ids);
extern void glDeleteProgramsARB (GLsizei n, const GLuint *programs);
extern void glDeleteTextures (GLsizei n, const GLuint *textures);
extern void glDeleteTexturesEXT (GLsizei n, const GLuint *textures);
extern void glDeleteVertexShaderEXT (GLuint id);
extern void glDepthFunc (GLenum func);
extern void glDepthMask (GLboolean flag);
extern void glDepthRange (GLclampd near, GLclampd far);
extern void glDetailTexFuncSGIS (GLenum target, GLsizei n, const GLfloat *points);
extern void glDisable (GLenum cap);
extern void glDisableClientState (GLenum array);
extern void glDisableVariantClientStateEXT (GLuint id);
extern void glDisableVertexAttribArrayARB (GLuint index);
extern void glDrawArrays (GLenum mode, GLint first, GLsizei count);
extern void glDrawArraysEXT (GLenum mode, GLint first, GLsizei count);
extern void glDrawBuffer (GLenum mode);
extern void glDrawBuffersATI (GLsizei n, const GLenum *bufs);
extern void glDrawElementArrayATI (GLenum mode, GLsizei count);
extern void glDrawElements (GLenum mode, GLsizei count, GLenum type, const GLvoid *indices);
extern void glDrawPixels (GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels);
extern void glDrawRangeElementArrayATI (GLenum mode, GLuint start, GLuint end, GLsizei count);
extern void glDrawRangeElements (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid *indices);
extern void glEdgeFlag (GLboolean flag);
extern void glEdgeFlagPointer (GLsizei stride, const GLboolean *pointer);
extern void glEdgeFlagPointerEXT (GLsizei stride, GLsizei count, const GLboolean *pointer);
extern void glEdgeFlagv (const GLboolean *flag);
extern void glElementPointerATI (GLenum type, const GLvoid *pointer);
extern void glEnable (GLenum cap);
extern void glEnableClientState (GLenum array);
extern void glEnableVariantClientStateEXT (GLuint id);
extern void glEnableVertexAttribArrayARB (GLuint index);
extern void glEnd (void);
extern void glEndFragmentShaderATI (void);
extern void glEndList (void);
extern void glEndOcclusionQueryNV (void);
extern void glEndVertexShaderEXT (void);
extern void glEvalCoord1d (GLdouble u);
extern void glEvalCoord1dv (const GLdouble *u);
extern void glEvalCoord1f (GLfloat u);
extern void glEvalCoord1fv (const GLfloat *u);
extern void glEvalCoord2d (GLdouble u, GLdouble v);
extern void glEvalCoord2dv (const GLdouble *u);
extern void glEvalCoord2f (GLfloat u, GLfloat v);
extern void glEvalCoord2fv (const GLfloat *u);
extern void glEvalMesh1 (GLenum mode, GLint i1, GLint i2);
extern void glEvalMesh2 (GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2);
extern void glEvalPoint1 (GLint i);
extern void glEvalPoint2 (GLint i, GLint j);
extern void glExtractComponentEXT (GLuint res, GLuint src, GLuint num);
extern void glFeedbackBuffer (GLsizei size, GLenum type, GLfloat *buffer);
extern void glFinish (void);
extern GLint glFinishAsyncSGIX (GLuint *markerp);
extern void glFlush (void);
extern void glFlushRasterSGIX (void);
extern void glFogCoordPointer (GLenum type, GLsizei stride, const GLvoid *pointer);
extern void glFogCoordPointerEXT (GLenum type, GLsizei stride, const GLvoid *pointer);
extern void glFogCoordd (GLdouble coord);
extern void glFogCoorddEXT (GLdouble coord);
extern void glFogCoorddv (const GLdouble *coord);
extern void glFogCoorddvEXT (const GLdouble *coord);
extern void glFogCoordf (GLfloat coord);
extern void glFogCoordfEXT (GLfloat coord);
extern void glFogCoordfv (const GLfloat *coord);
extern void glFogCoordfvEXT (const GLfloat *coord);
extern void glFogFuncSGIS (GLsizei n, const GLfloat *points);
extern void glFogf (GLenum pname, GLfloat param);
extern void glFogfv (GLenum pname, const GLfloat *params);
extern void glFogi (GLenum pname, GLint param);
extern void glFogiv (GLenum pname, const GLint *params);
extern void glFragmentColorMaterialSGIX (GLenum face, GLenum mode);
extern void glFragmentLightModelfSGIX (GLenum pname, GLfloat param);
extern void glFragmentLightModelfvSGIX (GLenum pname, const GLfloat *params);
extern void glFragmentLightModeliSGIX (GLenum pname, GLint param);
extern void glFragmentLightModelivSGIX (GLenum pname, const GLint *params);
extern void glFragmentLightfSGIX (GLenum light, GLenum pname, GLfloat param);
extern void glFragmentLightfvSGIX (GLenum light, GLenum pname, const GLfloat *params);
extern void glFragmentLightiSGIX (GLenum light, GLenum pname, GLint param);
extern void glFragmentLightivSGIX (GLenum light, GLenum pname, const GLint *params);
extern void glFragmentMaterialfSGIX (GLenum face, GLenum pname, GLfloat param);
extern void glFragmentMaterialfvSGIX (GLenum face, GLenum pname, const GLfloat *params);
extern void glFragmentMaterialiSGIX (GLenum face, GLenum pname, GLint param);
extern void glFragmentMaterialivSGIX (GLenum face, GLenum pname, const GLint *params);
extern void glFrameZoomSGIX (GLint factor);
extern void glFrontFace (GLenum mode);
extern void glFrustum (GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble near, GLdouble far);
extern GLuint glGenAsyncMarkersSGIX (GLsizei range);
extern GLuint glGenFragmentShadersATI (GLuint range);
extern GLuint glGenLists (GLsizei range);
extern void glGenOcclusionQueriesNV (GLsizei n, GLuint *ids);
extern void glGenProgramsARB (GLsizei n, GLuint *programs);
extern GLuint glGenSymbolsEXT (GLenum datatype, GLenum storagetype, GLenum range, GLuint components);
extern void glGenTextures (GLsizei n, GLuint *textures);
extern void glGenTexturesEXT (GLsizei n, GLuint *textures);
extern GLuint glGenVertexShadersEXT (GLuint range);
extern void glGetArrayObjectfvATI (GLenum array, GLenum pname, GLfloat *params);
extern void glGetArrayObjectivATI (GLenum array, GLenum pname, GLint *params);
extern void glGetBooleanv (GLenum pname, GLboolean *params);
extern void glGetClipPlane (GLenum plane, GLdouble *equation);
extern void glGetColorTable (GLenum target, GLenum format, GLenum type, GLvoid *table);
extern void glGetColorTableParameterfv (GLenum target, GLenum pname, GLfloat *params);
extern void glGetColorTableParameterfvSGI (GLenum target, GLenum pname, GLfloat *params);
extern void glGetColorTableParameteriv (GLenum target, GLenum pname, GLint *params);
extern void glGetColorTableParameterivSGI (GLenum target, GLenum pname, GLint *params);
extern void glGetColorTableSGI (GLenum target, GLenum format, GLenum type, GLvoid *table);
extern void glGetCompressedTexImage (GLenum target, GLint level, GLvoid *img);
extern void glGetCompressedTexImageARB (GLenum target, GLint level, GLvoid *img);
extern void glGetConvolutionFilter (GLenum target, GLenum format, GLenum type, GLvoid *image);
extern void glGetConvolutionFilterEXT (GLenum target, GLenum format, GLenum type, GLvoid *image);
extern void glGetConvolutionParameterfv (GLenum target, GLenum pname, GLfloat *params);
extern void glGetConvolutionParameterfvEXT (GLenum target, GLenum pname, GLfloat *params);
extern void glGetConvolutionParameteriv (GLenum target, GLenum pname, GLint *params);
extern void glGetConvolutionParameterivEXT (GLenum target, GLenum pname, GLint *params);
extern void glGetDetailTexFuncSGIS (GLenum target, GLfloat *points);
extern void glGetDoublev (GLenum pname, GLdouble *params);
extern GLenum glGetError (void);
extern void glGetFloatv (GLenum pname, GLfloat *params);
extern void glGetFogFuncSGIS (const GLfloat *points);
extern void glGetFragmentLightfvSGIX (GLenum light, GLenum pname, GLfloat *params);
extern void glGetFragmentLightivSGIX (GLenum light, GLenum pname, GLint *params);
extern void glGetFragmentMaterialfvSGIX (GLenum face, GLenum pname, GLfloat *params);
extern void glGetFragmentMaterialivSGIX (GLenum face, GLenum pname, GLint *params);
extern void glGetHistogram (GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid *values);
extern void glGetHistogramEXT (GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid *values);
extern void glGetHistogramParameterfv (GLenum target, GLenum pname, GLfloat *params);
extern void glGetHistogramParameterfvEXT (GLenum target, GLenum pname, GLfloat *params);
extern void glGetHistogramParameteriv (GLenum target, GLenum pname, GLint *params);
extern void glGetHistogramParameterivEXT (GLenum target, GLenum pname, GLint *params);
extern GLint glGetInstrumentsSGIX (void);
extern void glGetIntegerv (GLenum pname, GLint *params);
extern void glGetInvariantBooleanvEXT (GLuint id, GLenum value, GLboolean *data);
extern void glGetInvariantFloatvEXT (GLuint id, GLenum value, GLfloat *data);
extern void glGetInvariantIntegervEXT (GLuint id, GLenum value, GLint *data);
extern void glGetLightfv (GLenum light, GLenum pname, GLfloat *params);
extern void glGetLightiv (GLenum light, GLenum pname, GLint *params);
extern void glGetListParameterfvSGIX (GLuint list, GLenum pname, GLfloat *params);
extern void glGetListParameterivSGIX (GLuint list, GLenum pname, GLint *params);
extern void glGetLocalConstantBooleanvEXT (GLuint id, GLenum value, GLboolean *data);
extern void glGetLocalConstantFloatvEXT (GLuint id, GLenum value, GLfloat *data);
extern void glGetLocalConstantIntegervEXT (GLuint id, GLenum value, GLint *data);
extern void glGetMapdv (GLenum target, GLenum query, GLdouble *v);
extern void glGetMapfv (GLenum target, GLenum query, GLfloat *v);
extern void glGetMapiv (GLenum target, GLenum query, GLint *v);
extern void glGetMaterialfv (GLenum face, GLenum pname, GLfloat *params);
extern void glGetMaterialiv (GLenum face, GLenum pname, GLint *params);
extern void glGetMinmax (GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid *values);
extern void glGetMinmaxEXT (GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid *values);
extern void glGetMinmaxParameterfv (GLenum target, GLenum pname, GLfloat *params);
extern void glGetMinmaxParameterfvEXT (GLenum target, GLenum pname, GLfloat *params);
extern void glGetMinmaxParameteriv (GLenum target, GLenum pname, GLint *params);
extern void glGetMinmaxParameterivEXT (GLenum target, GLenum pname, GLint *params);
extern void glGetObjectBufferfvATI (GLuint buffer, GLenum pname, GLfloat *params);
extern void glGetObjectBufferivATI (GLuint buffer, GLenum pname, GLint *params);
extern void glGetOcclusionQueryivNV (GLuint id, GLenum pname, GLint *params);
extern void glGetOcclusionQueryuivNV (GLuint id, GLenum pname, GLuint *params);
extern void glGetPixelMapfv (GLenum map, GLfloat *values);
extern void glGetPixelMapuiv (GLenum map, GLuint *values);
extern void glGetPixelMapusv (GLenum map, GLushort *values);
extern void glGetPixelTexGenParameterfvSGIS (GLenum pname, GLfloat *params);
extern void glGetPixelTexGenParameterivSGIS (GLenum pname, GLint *params);
extern void glGetPointerv (GLenum pname, GLvoid* *params);
extern void glGetPointervEXT (GLenum pname, GLvoid* *params);
extern void glGetPolygonStipple (GLubyte *mask);
extern void glGetProgramEnvParameterdvARB (GLenum target, GLuint index, GLdouble *params);
extern void glGetProgramEnvParameterfvARB (GLenum target, GLuint index, GLfloat *params);
extern void glGetProgramLocalParameterdvARB (GLenum target, GLuint index, GLdouble *params);
extern void glGetProgramLocalParameterfvARB (GLenum target, GLuint index, GLfloat *params);
extern void glGetProgramStringARB (GLenum target, GLenum pname, GLvoid *string);
extern void glGetProgramivARB (GLenum target, GLenum pname, GLint *params);
extern void glGetSeparableFilter (GLenum target, GLenum format, GLenum type, GLvoid *row, GLvoid *column, GLvoid *span);
extern void glGetSeparableFilterEXT (GLenum target, GLenum format, GLenum type, GLvoid *row, GLvoid *column, GLvoid *span);
extern void glGetSharpenTexFuncSGIS (GLenum target, GLfloat *points);
extern const GLubyte * glGetString (GLenum name);
extern void glGetTexBumpParameterfvATI (GLenum pname, GLfloat *param);
extern void glGetTexBumpParameterivATI (GLenum pname, GLint *param);
extern void glGetTexEnvfv (GLenum target, GLenum pname, GLfloat *params);
extern void glGetTexEnviv (GLenum target, GLenum pname, GLint *params);
extern void glGetTexFilterFuncSGIS (GLenum target, GLenum filter, GLfloat *weights);
extern void glGetTexGendv (GLenum coord, GLenum pname, GLdouble *params);
extern void glGetTexGenfv (GLenum coord, GLenum pname, GLfloat *params);
extern void glGetTexGeniv (GLenum coord, GLenum pname, GLint *params);
extern void glGetTexImage (GLenum target, GLint level, GLenum format, GLenum type, GLvoid *pixels);
extern void glGetTexLevelParameterfv (GLenum target, GLint level, GLenum pname, GLfloat *params);
extern void glGetTexLevelParameteriv (GLenum target, GLint level, GLenum pname, GLint *params);
extern void glGetTexParameterfv (GLenum target, GLenum pname, GLfloat *params);
extern void glGetTexParameteriv (GLenum target, GLenum pname, GLint *params);
extern void glGetVariantArrayObjectfvATI (GLuint id, GLenum pname, GLfloat *params);
extern void glGetVariantArrayObjectivATI (GLuint id, GLenum pname, GLint *params);
extern void glGetVariantBooleanvEXT (GLuint id, GLenum value, GLboolean *data);
extern void glGetVariantFloatvEXT (GLuint id, GLenum value, GLfloat *data);
extern void glGetVariantIntegervEXT (GLuint id, GLenum value, GLint *data);
extern void glGetVariantPointervEXT (GLuint id, GLenum value, GLvoid* *data);
extern void glGetVertexAttribArrayObjectfvATI (GLuint index, GLenum pname, GLfloat *params);
extern void glGetVertexAttribArrayObjectivATI (GLuint index, GLenum pname, GLint *params);
extern void glGetVertexAttribPointervARB (GLuint index, GLenum pname, GLvoid* *pointer);
extern void glGetVertexAttribdvARB (GLuint index, GLenum pname, GLdouble *params);
extern void glGetVertexAttribfvARB (GLuint index, GLenum pname, GLfloat *params);
extern void glGetVertexAttribivARB (GLuint index, GLenum pname, GLint *params);
extern void glHint (GLenum target, GLenum mode);
extern void glHistogram (GLenum target, GLsizei width, GLenum internalformat, GLboolean sink);
extern void glHistogramEXT (GLenum target, GLsizei width, GLenum internalformat, GLboolean sink);
extern void glIndexMask (GLuint mask);
extern void glIndexPointer (GLenum type, GLsizei stride, const GLvoid *pointer);
extern void glIndexPointerEXT (GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer);
extern void glIndexd (GLdouble c);
extern void glIndexdv (const GLdouble *c);
extern void glIndexf (GLfloat c);
extern void glIndexfv (const GLfloat *c);
extern void glIndexi (GLint c);
extern void glIndexiv (const GLint *c);
extern void glIndexs (GLshort c);
extern void glIndexsv (const GLshort *c);
extern void glIndexub (GLubyte c);
extern void glIndexubv (const GLubyte *c);
extern void glInitNames (void);
extern void glInsertComponentEXT (GLuint res, GLuint src, GLuint num);
extern void glInstrumentsBufferSGIX (GLsizei size, GLint *buffer);
extern void glInterleavedArrays (GLenum format, GLsizei stride, const GLvoid *pointer);
extern GLboolean glIsAsyncMarkerSGIX (GLuint marker);
extern GLboolean glIsEnabled (GLenum cap);
extern GLboolean glIsList (GLuint list);
extern GLboolean glIsObjectBufferATI (GLuint buffer);
extern GLboolean glIsOcclusionQueryNV (GLuint id);
extern GLboolean glIsProgramARB (GLuint program);
extern GLboolean glIsTexture (GLuint texture);
extern GLboolean glIsTextureEXT (GLuint texture);
extern GLboolean glIsVariantEnabledEXT (GLuint id, GLenum cap);
extern void glLightEnviSGIX (GLenum pname, GLint param);
extern void glLightModelf (GLenum pname, GLfloat param);
extern void glLightModelfv (GLenum pname, const GLfloat *params);
extern void glLightModeli (GLenum pname, GLint param);
extern void glLightModeliv (GLenum pname, const GLint *params);
extern void glLightf (GLenum light, GLenum pname, GLfloat param);
extern void glLightfv (GLenum light, GLenum pname, const GLfloat *params);
extern void glLighti (GLenum light, GLenum pname, GLint param);
extern void glLightiv (GLenum light, GLenum pname, const GLint *params);
extern void glLineStipple (GLint factor, GLushort pattern);
extern void glLineWidth (GLfloat width);
extern void glListBase (GLuint base);
extern void glListParameterfSGIX (GLuint list, GLenum pname, GLfloat param);
extern void glListParameterfvSGIX (GLuint list, GLenum pname, const GLfloat *params);
extern void glListParameteriSGIX (GLuint list, GLenum pname, GLint param);
extern void glListParameterivSGIX (GLuint list, GLenum pname, const GLint *params);
extern void glLoadIdentity (void);
extern void glLoadIdentityDeformationMapSGIX (GLbitfield mask);
extern void glLoadMatrixd (const GLdouble *m);
extern void glLoadMatrixf (const GLfloat *m);
extern void glLoadName (GLuint name);
extern void glLoadTransposeMatrixd (const GLdouble *m);
extern void glLoadTransposeMatrixdARB (const GLdouble *m);
extern void glLoadTransposeMatrixf (const GLfloat *m);
extern void glLoadTransposeMatrixfARB (const GLfloat *m);
extern void glLockArraysEXT (GLint first, GLsizei count);
extern void glLogicOp (GLenum opcode);
extern void glMap1d (GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble *points);
extern void glMap1f (GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat *points);
extern void glMap2d (GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble *points);
extern void glMap2f (GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat *points);
extern void glMapGrid1d (GLint un, GLdouble u1, GLdouble u2);
extern void glMapGrid1f (GLint un, GLfloat u1, GLfloat u2);
extern void glMapGrid2d (GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2);
extern void glMapGrid2f (GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2);
extern GLvoid* glMapObjectBufferATI (GLuint buffer);
extern void glMaterialf (GLenum face, GLenum pname, GLfloat param);
extern void glMaterialfv (GLenum face, GLenum pname, const GLfloat *params);
extern void glMateriali (GLenum face, GLenum pname, GLint param);
extern void glMaterialiv (GLenum face, GLenum pname, const GLint *params);
extern void glMatrixMode (GLenum mode);
extern void glMinmax (GLenum target, GLenum internalformat, GLboolean sink);
extern void glMinmaxEXT (GLenum target, GLenum internalformat, GLboolean sink);
extern void glMultMatrixd (const GLdouble *m);
extern void glMultMatrixf (const GLfloat *m);
extern void glMultTransposeMatrixd (const GLdouble *m);
extern void glMultTransposeMatrixdARB (const GLdouble *m);
extern void glMultTransposeMatrixf (const GLfloat *m);
extern void glMultTransposeMatrixfARB (const GLfloat *m);
extern void glMultiDrawArrays (GLenum mode, GLint *first, GLsizei *count, GLsizei primcount);
extern void glMultiDrawArraysEXT (GLenum mode, GLint *first, GLsizei *count, GLsizei primcount);
extern void glMultiDrawElements (GLenum mode, const GLsizei *count, GLenum type, const GLvoid* *indices, GLsizei primcount);
extern void glMultiDrawElementsEXT (GLenum mode, const GLsizei *count, GLenum type, const GLvoid* *indices, GLsizei primcount);
extern void glMultiTexCoord1d (GLenum target, GLdouble s);
extern void glMultiTexCoord1dARB (GLenum target, GLdouble s);
extern void glMultiTexCoord1dv (GLenum target, const GLdouble *v);
extern void glMultiTexCoord1dvARB (GLenum target, const GLdouble *v);
extern void glMultiTexCoord1f (GLenum target, GLfloat s);
extern void glMultiTexCoord1fARB (GLenum target, GLfloat s);
extern void glMultiTexCoord1fv (GLenum target, const GLfloat *v);
extern void glMultiTexCoord1fvARB (GLenum target, const GLfloat *v);
extern void glMultiTexCoord1i (GLenum target, GLint s);
extern void glMultiTexCoord1iARB (GLenum target, GLint s);
extern void glMultiTexCoord1iv (GLenum target, const GLint *v);
extern void glMultiTexCoord1ivARB (GLenum target, const GLint *v);
extern void glMultiTexCoord1s (GLenum target, GLshort s);
extern void glMultiTexCoord1sARB (GLenum target, GLshort s);
extern void glMultiTexCoord1sv (GLenum target, const GLshort *v);
extern void glMultiTexCoord1svARB (GLenum target, const GLshort *v);
extern void glMultiTexCoord2d (GLenum target, GLdouble s, GLdouble t);
extern void glMultiTexCoord2dARB (GLenum target, GLdouble s, GLdouble t);
extern void glMultiTexCoord2dv (GLenum target, const GLdouble *v);
extern void glMultiTexCoord2dvARB (GLenum target, const GLdouble *v);
extern void glMultiTexCoord2f (GLenum target, GLfloat s, GLfloat t);
extern void glMultiTexCoord2fARB (GLenum target, GLfloat s, GLfloat t);
extern void glMultiTexCoord2fv (GLenum target, const GLfloat *v);
extern void glMultiTexCoord2fvARB (GLenum target, const GLfloat *v);
extern void glMultiTexCoord2i (GLenum target, GLint s, GLint t);
extern void glMultiTexCoord2iARB (GLenum target, GLint s, GLint t);
extern void glMultiTexCoord2iv (GLenum target, const GLint *v);
extern void glMultiTexCoord2ivARB (GLenum target, const GLint *v);
extern void glMultiTexCoord2s (GLenum target, GLshort s, GLshort t);
extern void glMultiTexCoord2sARB (GLenum target, GLshort s, GLshort t);
extern void glMultiTexCoord2sv (GLenum target, const GLshort *v);
extern void glMultiTexCoord2svARB (GLenum target, const GLshort *v);
extern void glMultiTexCoord3d (GLenum target, GLdouble s, GLdouble t, GLdouble r);
extern void glMultiTexCoord3dARB (GLenum target, GLdouble s, GLdouble t, GLdouble r);
extern void glMultiTexCoord3dv (GLenum target, const GLdouble *v);
extern void glMultiTexCoord3dvARB (GLenum target, const GLdouble *v);
extern void glMultiTexCoord3f (GLenum target, GLfloat s, GLfloat t, GLfloat r);
extern void glMultiTexCoord3fARB (GLenum target, GLfloat s, GLfloat t, GLfloat r);
extern void glMultiTexCoord3fv (GLenum target, const GLfloat *v);
extern void glMultiTexCoord3fvARB (GLenum target, const GLfloat *v);
extern void glMultiTexCoord3i (GLenum target, GLint s, GLint t, GLint r);
extern void glMultiTexCoord3iARB (GLenum target, GLint s, GLint t, GLint r);
extern void glMultiTexCoord3iv (GLenum target, const GLint *v);
extern void glMultiTexCoord3ivARB (GLenum target, const GLint *v);
extern void glMultiTexCoord3s (GLenum target, GLshort s, GLshort t, GLshort r);
extern void glMultiTexCoord3sARB (GLenum target, GLshort s, GLshort t, GLshort r);
extern void glMultiTexCoord3sv (GLenum target, const GLshort *v);
extern void glMultiTexCoord3svARB (GLenum target, const GLshort *v);
extern void glMultiTexCoord4d (GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q);
extern void glMultiTexCoord4dARB (GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q);
extern void glMultiTexCoord4dv (GLenum target, const GLdouble *v);
extern void glMultiTexCoord4dvARB (GLenum target, const GLdouble *v);
extern void glMultiTexCoord4f (GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q);
extern void glMultiTexCoord4fARB (GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q);
extern void glMultiTexCoord4fv (GLenum target, const GLfloat *v);
extern void glMultiTexCoord4fvARB (GLenum target, const GLfloat *v);
extern void glMultiTexCoord4i (GLenum target, GLint s, GLint t, GLint r, GLint q);
extern void glMultiTexCoord4iARB (GLenum target, GLint s, GLint t, GLint r, GLint q);
extern void glMultiTexCoord4iv (GLenum target, const GLint *v);
extern void glMultiTexCoord4ivARB (GLenum target, const GLint *v);
extern void glMultiTexCoord4s (GLenum target, GLshort s, GLshort t, GLshort r, GLshort q);
extern void glMultiTexCoord4sARB (GLenum target, GLshort s, GLshort t, GLshort r, GLshort q);
extern void glMultiTexCoord4sv (GLenum target, const GLshort *v);
extern void glMultiTexCoord4svARB (GLenum target, const GLshort *v);
extern void glNewList (GLuint list, GLenum mode);
extern GLuint glNewObjectBufferATI (GLsizei size, const GLvoid *pointer, GLenum usage);
extern void glNormal3b (GLbyte nx, GLbyte ny, GLbyte nz);
extern void glNormal3bv (const GLbyte *v);
extern void glNormal3d (GLdouble nx, GLdouble ny, GLdouble nz);
extern void glNormal3dv (const GLdouble *v);
extern void glNormal3f (GLfloat nx, GLfloat ny, GLfloat nz);
extern void glNormal3fv (const GLfloat *v);
extern void glNormal3i (GLint nx, GLint ny, GLint nz);
extern void glNormal3iv (const GLint *v);
extern void glNormal3s (GLshort nx, GLshort ny, GLshort nz);
extern void glNormal3sv (const GLshort *v);
extern void glNormalPointer (GLenum type, GLsizei stride, const GLvoid *pointer);
extern void glNormalPointerEXT (GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer);
extern void glNormalStream3bATI (GLenum stream, GLbyte nx, GLbyte ny, GLbyte nz);
extern void glNormalStream3bvATI (GLenum stream, const GLbyte *coords);
extern void glNormalStream3dATI (GLenum stream, GLdouble nx, GLdouble ny, GLdouble nz);
extern void glNormalStream3dvATI (GLenum stream, const GLdouble *coords);
extern void glNormalStream3fATI (GLenum stream, GLfloat nx, GLfloat ny, GLfloat nz);
extern void glNormalStream3fvATI (GLenum stream, const GLfloat *coords);
extern void glNormalStream3iATI (GLenum stream, GLint nx, GLint ny, GLint nz);
extern void glNormalStream3ivATI (GLenum stream, const GLint *coords);
extern void glNormalStream3sATI (GLenum stream, GLshort nx, GLshort ny, GLshort nz);
extern void glNormalStream3svATI (GLenum stream, const GLshort *coords);
extern void glOrtho (GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble near, GLdouble far);
extern void glPNTrianglesfATI (GLenum pname, GLfloat param);
extern void glPNTrianglesiATI (GLenum pname, GLint param);
extern void glPassTexCoordATI (GLuint dst, GLuint coord, GLenum swizzle);
extern void glPassThrough (GLfloat token);
extern void glPixelMapfv (GLenum map, GLint mapsize, const GLfloat *values);
extern void glPixelMapuiv (GLenum map, GLint mapsize, const GLuint *values);
extern void glPixelMapusv (GLenum map, GLint mapsize, const GLushort *values);
extern void glPixelStoref (GLenum pname, GLfloat param);
extern void glPixelStorei (GLenum pname, GLint param);
extern void glPixelTexGenParameterfSGIS (GLenum pname, GLfloat param);
extern void glPixelTexGenParameterfvSGIS (GLenum pname, const GLfloat *params);
extern void glPixelTexGenParameteriSGIS (GLenum pname, GLint param);
extern void glPixelTexGenParameterivSGIS (GLenum pname, const GLint *params);
extern void glPixelTexGenSGIX (GLenum mode);
extern void glPixelTransferf (GLenum pname, GLfloat param);
extern void glPixelTransferi (GLenum pname, GLint param);
extern void glPixelZoom (GLfloat xfactor, GLfloat yfactor);
extern void glPointParameterf (GLenum pname, GLfloat param);
extern void glPointParameterfARB (GLenum pname, GLfloat param);
extern void glPointParameterfEXT (GLenum pname, GLfloat param);
extern void glPointParameterfSGIS (GLenum pname, GLfloat param);
extern void glPointParameterfv (GLenum pname, const GLfloat *params);
extern void glPointParameterfvARB (GLenum pname, const GLfloat *params);
extern void glPointParameterfvEXT (GLenum pname, const GLfloat *params);
extern void glPointParameterfvSGIS (GLenum pname, const GLfloat *params);
extern void glPointParameteri (GLenum pname, GLint param);
extern void glPointParameteriv (GLenum pname, const GLint *params);
extern void glPointSize (GLfloat size);
extern GLint glPollAsyncSGIX (GLuint *markerp);
extern GLint glPollInstrumentsSGIX (GLint *marker_p);
extern void glPolygonMode (GLenum face, GLenum mode);
extern void glPolygonOffset (GLfloat factor, GLfloat units);
extern void glPolygonOffsetEXT (GLfloat factor, GLfloat bias);
extern void glPolygonStipple (const GLubyte *mask);
extern void glPopAttrib (void);
extern void glPopClientAttrib (void);
extern void glPopMatrix (void);
extern void glPopName (void);
extern void glPrioritizeTextures (GLsizei n, const GLuint *textures, const GLclampf *priorities);
extern void glPrioritizeTexturesEXT (GLsizei n, const GLuint *textures, const GLclampf *priorities);
extern void glProgramEnvParameter4dARB (GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
extern void glProgramEnvParameter4dvARB (GLenum target, GLuint index, const GLdouble *params);
extern void glProgramEnvParameter4fARB (GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
extern void glProgramEnvParameter4fvARB (GLenum target, GLuint index, const GLfloat *params);
extern void glProgramLocalParameter4dARB (GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
extern void glProgramLocalParameter4dvARB (GLenum target, GLuint index, const GLdouble *params);
extern void glProgramLocalParameter4fARB (GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
extern void glProgramLocalParameter4fvARB (GLenum target, GLuint index, const GLfloat *params);
extern void glProgramStringARB (GLenum target, GLenum format, GLsizei len, const GLvoid *string);
extern void glPushAttrib (GLbitfield mask);
extern void glPushClientAttrib (GLbitfield mask);
extern void glPushMatrix (void);
extern void glPushName (GLuint name);
extern void glRasterPos2d (GLdouble x, GLdouble y);
extern void glRasterPos2dv (const GLdouble *v);
extern void glRasterPos2f (GLfloat x, GLfloat y);
extern void glRasterPos2fv (const GLfloat *v);
extern void glRasterPos2i (GLint x, GLint y);
extern void glRasterPos2iv (const GLint *v);
extern void glRasterPos2s (GLshort x, GLshort y);
extern void glRasterPos2sv (const GLshort *v);
extern void glRasterPos3d (GLdouble x, GLdouble y, GLdouble z);
extern void glRasterPos3dv (const GLdouble *v);
extern void glRasterPos3f (GLfloat x, GLfloat y, GLfloat z);
extern void glRasterPos3fv (const GLfloat *v);
extern void glRasterPos3i (GLint x, GLint y, GLint z);
extern void glRasterPos3iv (const GLint *v);
extern void glRasterPos3s (GLshort x, GLshort y, GLshort z);
extern void glRasterPos3sv (const GLshort *v);
extern void glRasterPos4d (GLdouble x, GLdouble y, GLdouble z, GLdouble w);
extern void glRasterPos4dv (const GLdouble *v);
extern void glRasterPos4f (GLfloat x, GLfloat y, GLfloat z, GLfloat w);
extern void glRasterPos4fv (const GLfloat *v);
extern void glRasterPos4i (GLint x, GLint y, GLint z, GLint w);
extern void glRasterPos4iv (const GLint *v);
extern void glRasterPos4s (GLshort x, GLshort y, GLshort z, GLshort w);
extern void glRasterPos4sv (const GLshort *v);
extern void glReadBuffer (GLenum mode);
extern void glReadInstrumentsSGIX (GLint marker);
extern void glReadPixels (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid *pixels);
extern void glRectd (GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2);
extern void glRectdv (const GLdouble *v1, const GLdouble *v2);
extern void glRectf (GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2);
extern void glRectfv (const GLfloat *v1, const GLfloat *v2);
extern void glRecti (GLint x1, GLint y1, GLint x2, GLint y2);
extern void glRectiv (const GLint *v1, const GLint *v2);
extern void glRects (GLshort x1, GLshort y1, GLshort x2, GLshort y2);
extern void glRectsv (const GLshort *v1, const GLshort *v2);
extern void glReferencePlaneSGIX (const GLdouble *equation);
extern GLint glRenderMode (GLenum mode);
extern void glResetHistogram (GLenum target);
extern void glResetHistogramEXT (GLenum target);
extern void glResetMinmax (GLenum target);
extern void glResetMinmaxEXT (GLenum target);
extern void glRotated (GLdouble angle, GLdouble x, GLdouble y, GLdouble z);
extern void glRotatef (GLfloat angle, GLfloat x, GLfloat y, GLfloat z);
extern void glSampleCoverage (GLclampf value, GLboolean invert);
extern void glSampleCoverageARB (GLclampf value, GLboolean invert);
extern void glSampleMapATI (GLuint dst, GLuint interp, GLenum swizzle);
extern void glSampleMaskSGIS (GLclampf value, GLboolean invert);
extern void glSamplePatternSGIS (GLenum pattern);
extern void glScaled (GLdouble x, GLdouble y, GLdouble z);
extern void glScalef (GLfloat x, GLfloat y, GLfloat z);
extern void glScissor (GLint x, GLint y, GLsizei width, GLsizei height);
extern void glSecondaryColor3b (GLbyte red, GLbyte green, GLbyte blue);
extern void glSecondaryColor3bEXT (GLbyte red, GLbyte green, GLbyte blue);
extern void glSecondaryColor3bv (const GLbyte *v);
extern void glSecondaryColor3bvEXT (const GLbyte *v);
extern void glSecondaryColor3d (GLdouble red, GLdouble green, GLdouble blue);
extern void glSecondaryColor3dEXT (GLdouble red, GLdouble green, GLdouble blue);
extern void glSecondaryColor3dv (const GLdouble *v);
extern void glSecondaryColor3dvEXT (const GLdouble *v);
extern void glSecondaryColor3f (GLfloat red, GLfloat green, GLfloat blue);
extern void glSecondaryColor3fEXT (GLfloat red, GLfloat green, GLfloat blue);
extern void glSecondaryColor3fv (const GLfloat *v);
extern void glSecondaryColor3fvEXT (const GLfloat *v);
extern void glSecondaryColor3i (GLint red, GLint green, GLint blue);
extern void glSecondaryColor3iEXT (GLint red, GLint green, GLint blue);
extern void glSecondaryColor3iv (const GLint *v);
extern void glSecondaryColor3ivEXT (const GLint *v);
extern void glSecondaryColor3s (GLshort red, GLshort green, GLshort blue);
extern void glSecondaryColor3sEXT (GLshort red, GLshort green, GLshort blue);
extern void glSecondaryColor3sv (const GLshort *v);
extern void glSecondaryColor3svEXT (const GLshort *v);
extern void glSecondaryColor3ub (GLubyte red, GLubyte green, GLubyte blue);
extern void glSecondaryColor3ubEXT (GLubyte red, GLubyte green, GLubyte blue);
extern void glSecondaryColor3ubv (const GLubyte *v);
extern void glSecondaryColor3ubvEXT (const GLubyte *v);
extern void glSecondaryColor3ui (GLuint red, GLuint green, GLuint blue);
extern void glSecondaryColor3uiEXT (GLuint red, GLuint green, GLuint blue);
extern void glSecondaryColor3uiv (const GLuint *v);
extern void glSecondaryColor3uivEXT (const GLuint *v);
extern void glSecondaryColor3us (GLushort red, GLushort green, GLushort blue);
extern void glSecondaryColor3usEXT (GLushort red, GLushort green, GLushort blue);
extern void glSecondaryColor3usv (const GLushort *v);
extern void glSecondaryColor3usvEXT (const GLushort *v);
extern void glSecondaryColorPointer (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
extern void glSecondaryColorPointerEXT (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
extern void glSelectBuffer (GLsizei size, GLuint *buffer);
extern void glSeparableFilter2D (GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *row, const GLvoid *column);
extern void glSeparableFilter2DEXT (GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *row, const GLvoid *column);
extern void glSetFragmentShaderConstantATI (GLuint dst, const GLfloat *value);
extern void glSetInvariantEXT (GLuint id, GLenum type, const GLvoid *addr);
extern void glSetLocalConstantEXT (GLuint id, GLenum type, const GLvoid *addr);
extern void glShadeModel (GLenum mode);
extern void glShaderOp1EXT (GLenum op, GLuint res, GLuint arg1);
extern void glShaderOp2EXT (GLenum op, GLuint res, GLuint arg1, GLuint arg2);
extern void glShaderOp3EXT (GLenum op, GLuint res, GLuint arg1, GLuint arg2, GLuint arg3);
extern void glSharpenTexFuncSGIS (GLenum target, GLsizei n, const GLfloat *points);
extern void glSpriteParameterfSGIX (GLenum pname, GLfloat param);
extern void glSpriteParameterfvSGIX (GLenum pname, const GLfloat *params);
extern void glSpriteParameteriSGIX (GLenum pname, GLint param);
extern void glSpriteParameterivSGIX (GLenum pname, const GLint *params);
extern void glStartInstrumentsSGIX (void);
extern void glStencilFunc (GLenum func, GLint ref, GLuint mask);
extern void glStencilFuncSeparateATI (GLenum frontfunc, GLenum backfunc, GLint ref, GLuint mask);
extern void glStencilMask (GLuint mask);
extern void glStencilOp (GLenum fail, GLenum zfail, GLenum zpass);
extern void glStencilOpSeparateATI (GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass);
extern void glStopInstrumentsSGIX (GLint marker);
extern void glSwizzleEXT (GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW);
extern void glTagSampleBufferSGIX (void);
extern void glTexBumpParameterfvATI (GLenum pname, const GLfloat *param);
extern void glTexBumpParameterivATI (GLenum pname, const GLint *param);
extern void glTexCoord1d (GLdouble s);
extern void glTexCoord1dv (const GLdouble *v);
extern void glTexCoord1f (GLfloat s);
extern void glTexCoord1fv (const GLfloat *v);
extern void glTexCoord1i (GLint s);
extern void glTexCoord1iv (const GLint *v);
extern void glTexCoord1s (GLshort s);
extern void glTexCoord1sv (const GLshort *v);
extern void glTexCoord2d (GLdouble s, GLdouble t);
extern void glTexCoord2dv (const GLdouble *v);
extern void glTexCoord2f (GLfloat s, GLfloat t);
extern void glTexCoord2fv (const GLfloat *v);
extern void glTexCoord2i (GLint s, GLint t);
extern void glTexCoord2iv (const GLint *v);
extern void glTexCoord2s (GLshort s, GLshort t);
extern void glTexCoord2sv (const GLshort *v);
extern void glTexCoord3d (GLdouble s, GLdouble t, GLdouble r);
extern void glTexCoord3dv (const GLdouble *v);
extern void glTexCoord3f (GLfloat s, GLfloat t, GLfloat r);
extern void glTexCoord3fv (const GLfloat *v);
extern void glTexCoord3i (GLint s, GLint t, GLint r);
extern void glTexCoord3iv (const GLint *v);
extern void glTexCoord3s (GLshort s, GLshort t, GLshort r);
extern void glTexCoord3sv (const GLshort *v);
extern void glTexCoord4d (GLdouble s, GLdouble t, GLdouble r, GLdouble q);
extern void glTexCoord4dv (const GLdouble *v);
extern void glTexCoord4f (GLfloat s, GLfloat t, GLfloat r, GLfloat q);
extern void glTexCoord4fv (const GLfloat *v);
extern void glTexCoord4i (GLint s, GLint t, GLint r, GLint q);
extern void glTexCoord4iv (const GLint *v);
extern void glTexCoord4s (GLshort s, GLshort t, GLshort r, GLshort q);
extern void glTexCoord4sv (const GLshort *v);
extern void glTexCoordPointer (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
extern void glTexCoordPointerEXT (GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer);
extern void glTexEnvf (GLenum target, GLenum pname, GLfloat param);
extern void glTexEnvfv (GLenum target, GLenum pname, const GLfloat *params);
extern void glTexEnvi (GLenum target, GLenum pname, GLint param);
extern void glTexEnviv (GLenum target, GLenum pname, const GLint *params);
extern void glTexFilterFuncSGIS (GLenum target, GLenum filter, GLsizei n, const GLfloat *weights);
extern void glTexGend (GLenum coord, GLenum pname, GLdouble param);
extern void glTexGendv (GLenum coord, GLenum pname, const GLdouble *params);
extern void glTexGenf (GLenum coord, GLenum pname, GLfloat param);
extern void glTexGenfv (GLenum coord, GLenum pname, const GLfloat *params);
extern void glTexGeni (GLenum coord, GLenum pname, GLint param);
extern void glTexGeniv (GLenum coord, GLenum pname, const GLint *params);
extern void glTexImage1D (GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid *pixels);
extern void glTexImage2D (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid *pixels);
extern void glTexImage3D (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid *pixels);
extern void glTexImage3DEXT (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid *pixels);
extern void glTexImage4DSGIS (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLsizei size4d, GLint border, GLenum format, GLenum type, const GLvoid *pixels);
extern void glTexParameterf (GLenum target, GLenum pname, GLfloat param);
extern void glTexParameterfv (GLenum target, GLenum pname, const GLfloat *params);
extern void glTexParameteri (GLenum target, GLenum pname, GLint param);
extern void glTexParameteriv (GLenum target, GLenum pname, const GLint *params);
extern void glTexSubImage1D (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid *pixels);
extern void glTexSubImage1DEXT (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid *pixels);
extern void glTexSubImage2D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels);
extern void glTexSubImage2DEXT (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels);
extern void glTexSubImage3D (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid *pixels);
extern void glTexSubImage3DEXT (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid *pixels);
extern void glTexSubImage4DSGIS (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint woffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei size4d, GLenum format, GLenum type, const GLvoid *pixels);
extern void glTextureColorMaskSGIS (GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
extern void glTranslated (GLdouble x, GLdouble y, GLdouble z);
extern void glTranslatef (GLfloat x, GLfloat y, GLfloat z);
extern void glUnlockArraysEXT (void);
extern void glUnmapObjectBufferATI (GLuint buffer);
extern void glUpdateObjectBufferATI (GLuint buffer, GLuint offset, GLsizei size, const GLvoid *pointer, GLenum preserve);
extern void glVariantArrayObjectATI (GLuint id, GLenum type, GLsizei stride, GLuint buffer, GLuint offset);
extern void glVariantPointerEXT (GLuint id, GLenum type, GLuint stride, const GLvoid *addr);
extern void glVariantbvEXT (GLuint id, const GLbyte *addr);
extern void glVariantdvEXT (GLuint id, const GLdouble *addr);
extern void glVariantfvEXT (GLuint id, const GLfloat *addr);
extern void glVariantivEXT (GLuint id, const GLint *addr);
extern void glVariantsvEXT (GLuint id, const GLshort *addr);
extern void glVariantubvEXT (GLuint id, const GLubyte *addr);
extern void glVariantuivEXT (GLuint id, const GLuint *addr);
extern void glVariantusvEXT (GLuint id, const GLushort *addr);
extern void glVertex2d (GLdouble x, GLdouble y);
extern void glVertex2dv (const GLdouble *v);
extern void glVertex2f (GLfloat x, GLfloat y);
extern void glVertex2fv (const GLfloat *v);
extern void glVertex2i (GLint x, GLint y);
extern void glVertex2iv (const GLint *v);
extern void glVertex2s (GLshort x, GLshort y);
extern void glVertex2sv (const GLshort *v);
extern void glVertex3d (GLdouble x, GLdouble y, GLdouble z);
extern void glVertex3dv (const GLdouble *v);
extern void glVertex3f (GLfloat x, GLfloat y, GLfloat z);
extern void glVertex3fv (const GLfloat *v);
extern void glVertex3i (GLint x, GLint y, GLint z);
extern void glVertex3iv (const GLint *v);
extern void glVertex3s (GLshort x, GLshort y, GLshort z);
extern void glVertex3sv (const GLshort *v);
extern void glVertex4d (GLdouble x, GLdouble y, GLdouble z, GLdouble w);
extern void glVertex4dv (const GLdouble *v);
extern void glVertex4f (GLfloat x, GLfloat y, GLfloat z, GLfloat w);
extern void glVertex4fv (const GLfloat *v);
extern void glVertex4i (GLint x, GLint y, GLint z, GLint w);
extern void glVertex4iv (const GLint *v);
extern void glVertex4s (GLshort x, GLshort y, GLshort z, GLshort w);
extern void glVertex4sv (const GLshort *v);
extern void glVertexAttrib1dARB (GLuint index, GLdouble x);
extern void glVertexAttrib1dvARB (GLuint index, const GLdouble *v);
extern void glVertexAttrib1fARB (GLuint index, GLfloat x);
extern void glVertexAttrib1fvARB (GLuint index, const GLfloat *v);
extern void glVertexAttrib1sARB (GLuint index, GLshort x);
extern void glVertexAttrib1svARB (GLuint index, const GLshort *v);
extern void glVertexAttrib2dARB (GLuint index, GLdouble x, GLdouble y);
extern void glVertexAttrib2dvARB (GLuint index, const GLdouble *v);
extern void glVertexAttrib2fARB (GLuint index, GLfloat x, GLfloat y);
extern void glVertexAttrib2fvARB (GLuint index, const GLfloat *v);
extern void glVertexAttrib2sARB (GLuint index, GLshort x, GLshort y);
extern void glVertexAttrib2svARB (GLuint index, const GLshort *v);
extern void glVertexAttrib3dARB (GLuint index, GLdouble x, GLdouble y, GLdouble z);
extern void glVertexAttrib3dvARB (GLuint index, const GLdouble *v);
extern void glVertexAttrib3fARB (GLuint index, GLfloat x, GLfloat y, GLfloat z);
extern void glVertexAttrib3fvARB (GLuint index, const GLfloat *v);
extern void glVertexAttrib3sARB (GLuint index, GLshort x, GLshort y, GLshort z);
extern void glVertexAttrib3svARB (GLuint index, const GLshort *v);
extern void glVertexAttrib4NbvARB (GLuint index, const GLbyte *v);
extern void glVertexAttrib4NivARB (GLuint index, const GLint *v);
extern void glVertexAttrib4NsvARB (GLuint index, const GLshort *v);
extern void glVertexAttrib4NubARB (GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w);
extern void glVertexAttrib4NubvARB (GLuint index, const GLubyte *v);
extern void glVertexAttrib4NuivARB (GLuint index, const GLuint *v);
extern void glVertexAttrib4NusvARB (GLuint index, const GLushort *v);
extern void glVertexAttrib4bvARB (GLuint index, const GLbyte *v);
extern void glVertexAttrib4dARB (GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
extern void glVertexAttrib4dvARB (GLuint index, const GLdouble *v);
extern void glVertexAttrib4fARB (GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
extern void glVertexAttrib4fvARB (GLuint index, const GLfloat *v);
extern void glVertexAttrib4ivARB (GLuint index, const GLint *v);
extern void glVertexAttrib4sARB (GLuint index, GLshort x, GLshort y, GLshort z, GLshort w);
extern void glVertexAttrib4svARB (GLuint index, const GLshort *v);
extern void glVertexAttrib4ubvARB (GLuint index, const GLubyte *v);
extern void glVertexAttrib4uivARB (GLuint index, const GLuint *v);
extern void glVertexAttrib4usvARB (GLuint index, const GLushort *v);
extern void glVertexAttribArrayObjectATI (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, GLuint buffer, GLuint offset);
extern void glVertexAttribPointerARB (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid *pointer);
extern void glVertexBlendARB (GLint count);
extern void glVertexBlendEnvfATI (GLenum pname, GLfloat param);
extern void glVertexBlendEnviATI (GLenum pname, GLint param);
extern void glVertexPointer (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
extern void glVertexPointerEXT (GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid *pointer);
extern void glVertexStream2dATI (GLenum stream, GLdouble x, GLdouble y);
extern void glVertexStream2dvATI (GLenum stream, const GLdouble *coords);
extern void glVertexStream2fATI (GLenum stream, GLfloat x, GLfloat y);
extern void glVertexStream2fvATI (GLenum stream, const GLfloat *coords);
extern void glVertexStream2iATI (GLenum stream, GLint x, GLint y);
extern void glVertexStream2ivATI (GLenum stream, const GLint *coords);
extern void glVertexStream2sATI (GLenum stream, GLshort x, GLshort y);
extern void glVertexStream2svATI (GLenum stream, const GLshort *coords);
extern void glVertexStream3dATI (GLenum stream, GLdouble x, GLdouble y, GLdouble z);
extern void glVertexStream3dvATI (GLenum stream, const GLdouble *coords);
extern void glVertexStream3fATI (GLenum stream, GLfloat x, GLfloat y, GLfloat z);
extern void glVertexStream3fvATI (GLenum stream, const GLfloat *coords);
extern void glVertexStream3iATI (GLenum stream, GLint x, GLint y, GLint z);
extern void glVertexStream3ivATI (GLenum stream, const GLint *coords);
extern void glVertexStream3sATI (GLenum stream, GLshort x, GLshort y, GLshort z);
extern void glVertexStream3svATI (GLenum stream, const GLshort *coords);
extern void glVertexStream4dATI (GLenum stream, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
extern void glVertexStream4dvATI (GLenum stream, const GLdouble *coords);
extern void glVertexStream4fATI (GLenum stream, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
extern void glVertexStream4fvATI (GLenum stream, const GLfloat *coords);
extern void glVertexStream4iATI (GLenum stream, GLint x, GLint y, GLint z, GLint w);
extern void glVertexStream4ivATI (GLenum stream, const GLint *coords);
extern void glVertexStream4sATI (GLenum stream, GLshort x, GLshort y, GLshort z, GLshort w);
extern void glVertexStream4svATI (GLenum stream, const GLshort *coords);
extern void glViewport (GLint x, GLint y, GLsizei width, GLsizei height);
extern void glWeightPointerARB (GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
extern void glWeightbvARB (GLint size, const GLbyte *weights);
extern void glWeightdvARB (GLint size, const GLdouble *weights);
extern void glWeightfvARB (GLint size, const GLfloat *weights);
extern void glWeightivARB (GLint size, const GLint *weights);
extern void glWeightsvARB (GLint size, const GLshort *weights);
extern void glWeightubvARB (GLint size, const GLubyte *weights);
extern void glWeightuivARB (GLint size, const GLuint *weights);
extern void glWeightusvARB (GLint size, const GLushort *weights);
extern void glWindowPos2d (GLdouble x, GLdouble y);
extern void glWindowPos2dARB (GLdouble x, GLdouble y);
extern void glWindowPos2dv (const GLdouble *v);
extern void glWindowPos2dvARB (const GLdouble *v);
extern void glWindowPos2f (GLfloat x, GLfloat y);
extern void glWindowPos2fARB (GLfloat x, GLfloat y);
extern void glWindowPos2fv (const GLfloat *v);
extern void glWindowPos2fvARB (const GLfloat *v);
extern void glWindowPos2i (GLint x, GLint y);
extern void glWindowPos2iARB (GLint x, GLint y);
extern void glWindowPos2iv (const GLint *v);
extern void glWindowPos2ivARB (const GLint *v);
extern void glWindowPos2s (GLshort x, GLshort y);
extern void glWindowPos2sARB (GLshort x, GLshort y);
extern void glWindowPos2sv (const GLshort *v);
extern void glWindowPos2svARB (const GLshort *v);
extern void glWindowPos3d (GLdouble x, GLdouble y, GLdouble z);
extern void glWindowPos3dARB (GLdouble x, GLdouble y, GLdouble z);
extern void glWindowPos3dv (const GLdouble *v);
extern void glWindowPos3dvARB (const GLdouble *v);
extern void glWindowPos3f (GLfloat x, GLfloat y, GLfloat z);
extern void glWindowPos3fARB (GLfloat x, GLfloat y, GLfloat z);
extern void glWindowPos3fv (const GLfloat *v);
extern void glWindowPos3fvARB (const GLfloat *v);
extern void glWindowPos3i (GLint x, GLint y, GLint z);
extern void glWindowPos3iARB (GLint x, GLint y, GLint z);
extern void glWindowPos3iv (const GLint *v);
extern void glWindowPos3ivARB (const GLint *v);
extern void glWindowPos3s (GLshort x, GLshort y, GLshort z);
extern void glWindowPos3sARB (GLshort x, GLshort y, GLshort z);
extern void glWindowPos3sv (const GLshort *v);
extern void glWindowPos3svARB (const GLshort *v);
extern void glWriteMaskEXT (GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW);

#endif /*defined(_LANGUAGE_C) || defined(__cplusplus)*/

#ifdef __GL_FUTURE
#include "GL/glfuture.h"
#endif /*__GL_FUTURE*/

#ifdef __cplusplus
}
#endif

#endif /* __gl_h_ */
