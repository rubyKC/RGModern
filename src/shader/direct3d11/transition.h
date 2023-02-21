// Copyright (c) 2022 Xiaomi Guo
// Modern Ruby Game Engine (RGM) is licensed under Mulan PSL v2.
// You can use this software according to the terms and conditions of the Mulan
// PSL v2. You may obtain a copy of Mulan PSL v2 at:
//          http://license.coscl.org.cn/MulanPSL2
// THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY
// KIND, EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO
// NON-INFRINGEMENT, MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE. See the
// Mulan PSL v2 for more details.

#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 10.1
//
//
// Buffer Definitions:
//
// cbuffer $Globals
// {
//
//   float4 k;                          // Offset:    0 Size:    16
//
// }
//
//
// Resource Bindings:
//
// Name                                 Type  Format         Dim      HLSL Bind  Count
// ------------------------------ ---------- ------- ----------- -------------- ------
// samplerState                      sampler      NA          NA             s0      1
// shaderTexture                     texture  float4          2d             t0      1
// $Globals                          cbuffer      NA          NA            cb0      1
//
//
//
// Input signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// SV_POSITION              0   xyzw        0      POS   float
// TEXCOORD                 0   xy          1     NONE   float   xy
//
//
// Output signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// SV_TARGET                0   xyzw        0   TARGET   float   xyzw
//
ps_5_0
dcl_globalFlags refactoringAllowed
dcl_constantbuffer CB0[1], immediateIndexed
dcl_sampler s0, mode_default
dcl_resource_texture2d(float, float, float, float) t0
dcl_input_ps linear v1.xy
dcl_output o0.xyzw
dcl_temps 2
eq r0.x, cb0[0].x, l(0.000000)
sample_indexable(texture2d)(float, float, float, float) r0.yzw, v1.xyxx, t0.wxyz, s0
lt r1.x, r0.y, cb0[0].y
movc r1.x, r1.x, l(0), l(1.000000)
add r1.y, r0.y, -cb0[0].z
mov o0.xyz, r0.yzwy
mul r0.y, r1.y, cb0[0].w
movc o0.w, r0.x, r1.x, r0.y
ret
// Approximately 9 instruction slots used
#endif

extern constexpr unsigned char rgm_shader_transition_data[] = {
    68,  88,  66,  67,  75,  179, 17,  177, 101, 120, 255, 139, 86,  228, 144,
    138, 226, 221, 216, 114, 1,   0,   0,   0,   44,  4,   0,   0,   5,   0,
    0,   0,   52,  0,   0,   0,   148, 1,   0,   0,   236, 1,   0,   0,   32,
    2,   0,   0,   144, 3,   0,   0,   82,  68,  69,  70,  88,  1,   0,   0,
    1,   0,   0,   0,   192, 0,   0,   0,   3,   0,   0,   0,   60,  0,   0,
    0,   0,   5,   255, 255, 0,   129, 0,   0,   48,  1,   0,   0,   82,  68,
    49,  49,  60,  0,   0,   0,   24,  0,   0,   0,   32,  0,   0,   0,   40,
    0,   0,   0,   36,  0,   0,   0,   12,  0,   0,   0,   0,   0,   0,   0,
    156, 0,   0,   0,   3,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   0,   0,   0,   0,   0,
    0,   0,   169, 0,   0,   0,   2,   0,   0,   0,   5,   0,   0,   0,   4,
    0,   0,   0,   255, 255, 255, 255, 0,   0,   0,   0,   1,   0,   0,   0,
    12,  0,   0,   0,   183, 0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   0,
    0,   0,   0,   0,   0,   0,   115, 97,  109, 112, 108, 101, 114, 83,  116,
    97,  116, 101, 0,   115, 104, 97,  100, 101, 114, 84,  101, 120, 116, 117,
    114, 101, 0,   36,  71,  108, 111, 98,  97,  108, 115, 0,   183, 0,   0,
    0,   1,   0,   0,   0,   216, 0,   0,   0,   16,  0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   1,   0,   0,   0,   0,   0,   0,   16,
    0,   0,   0,   2,   0,   0,   0,   12,  1,   0,   0,   0,   0,   0,   0,
    255, 255, 255, 255, 0,   0,   0,   0,   255, 255, 255, 255, 0,   0,   0,
    0,   107, 0,   102, 108, 111, 97,  116, 52,  0,   171, 171, 171, 1,   0,
    3,   0,   1,   0,   4,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    2,   1,   0,   0,   77,  105, 99,  114, 111, 115, 111, 102, 116, 32,  40,
    82,  41,  32,  72,  76,  83,  76,  32,  83,  104, 97,  100, 101, 114, 32,
    67,  111, 109, 112, 105, 108, 101, 114, 32,  49,  48,  46,  49,  0,   73,
    83,  71,  78,  80,  0,   0,   0,   2,   0,   0,   0,   8,   0,   0,   0,
    56,  0,   0,   0,   0,   0,   0,   0,   1,   0,   0,   0,   3,   0,   0,
    0,   0,   0,   0,   0,   15,  0,   0,   0,   68,  0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   3,   0,   0,   0,   1,   0,   0,   0,   3,
    3,   0,   0,   83,  86,  95,  80,  79,  83,  73,  84,  73,  79,  78,  0,
    84,  69,  88,  67,  79,  79,  82,  68,  0,   171, 171, 171, 79,  83,  71,
    78,  44,  0,   0,   0,   1,   0,   0,   0,   8,   0,   0,   0,   32,  0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,   0,   0,   0,   0,
    0,   0,   0,   15,  0,   0,   0,   83,  86,  95,  84,  65,  82,  71,  69,
    84,  0,   171, 171, 83,  72,  69,  88,  104, 1,   0,   0,   80,  0,   0,
    0,   90,  0,   0,   0,   106, 8,   0,   1,   89,  0,   0,   4,   70,  142,
    32,  0,   0,   0,   0,   0,   1,   0,   0,   0,   90,  0,   0,   3,   0,
    96,  16,  0,   0,   0,   0,   0,   88,  24,  0,   4,   0,   112, 16,  0,
    0,   0,   0,   0,   85,  85,  0,   0,   98,  16,  0,   3,   50,  16,  16,
    0,   1,   0,   0,   0,   101, 0,   0,   3,   242, 32,  16,  0,   0,   0,
    0,   0,   104, 0,   0,   2,   2,   0,   0,   0,   24,  0,   0,   8,   18,
    0,   16,  0,   0,   0,   0,   0,   10,  128, 32,  0,   0,   0,   0,   0,
    0,   0,   0,   0,   1,   64,  0,   0,   0,   0,   0,   0,   69,  0,   0,
    139, 194, 0,   0,   128, 67,  85,  21,  0,   226, 0,   16,  0,   0,   0,
    0,   0,   70,  16,  16,  0,   1,   0,   0,   0,   54,  121, 16,  0,   0,
    0,   0,   0,   0,   96,  16,  0,   0,   0,   0,   0,   49,  0,   0,   8,
    18,  0,   16,  0,   1,   0,   0,   0,   26,  0,   16,  0,   0,   0,   0,
    0,   26,  128, 32,  0,   0,   0,   0,   0,   0,   0,   0,   0,   55,  0,
    0,   9,   18,  0,   16,  0,   1,   0,   0,   0,   10,  0,   16,  0,   1,
    0,   0,   0,   1,   64,  0,   0,   0,   0,   0,   0,   1,   64,  0,   0,
    0,   0,   128, 63,  0,   0,   0,   9,   34,  0,   16,  0,   1,   0,   0,
    0,   26,  0,   16,  0,   0,   0,   0,   0,   42,  128, 32,  128, 65,  0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   54,  0,   0,   5,   114,
    32,  16,  0,   0,   0,   0,   0,   150, 7,   16,  0,   0,   0,   0,   0,
    56,  0,   0,   8,   34,  0,   16,  0,   0,   0,   0,   0,   26,  0,   16,
    0,   1,   0,   0,   0,   58,  128, 32,  0,   0,   0,   0,   0,   0,   0,
    0,   0,   55,  0,   0,   9,   130, 32,  16,  0,   0,   0,   0,   0,   10,
    0,   16,  0,   0,   0,   0,   0,   10,  0,   16,  0,   1,   0,   0,   0,
    26,  0,   16,  0,   0,   0,   0,   0,   62,  0,   0,   1,   83,  84,  65,
    84,  148, 0,   0,   0,   9,   0,   0,   0,   2,   0,   0,   0,   0,   0,
    0,   0,   2,   0,   0,   0,   4,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   1,   0,   0,   0,   2,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0};
