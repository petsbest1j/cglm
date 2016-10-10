/*
 * Copyright (c), Recep Aslantas.
 *
 * MIT License (MIT), http://opensource.org/licenses/MIT
 * Full license can be found in the LICENSE file
 */

/*!
 * Most of functions in this header are optimized manually with SIMD
 * if available. You dont need to call/incude SIMD headers manually
 */

#ifndef cglm_mat_h
#define cglm_mat_h

#include "cglm.h"
#include "cglm-mat-simd-sse2.h"
#include "cglm-mat-simd-avx.h"
#include <assert.h>

#define GLM_MAT4_IDENTITY_INIT  {{1.0f, 0.0f, 0.0f, 0.0f},                    \
                                 {0.0f, 1.0f, 0.0f, 0.0f},                    \
                                 {0.0f, 0.0f, 1.0f, 0.0f},                    \
                                 {0.0f, 0.0f, 0.0f, 1.0f}}

/* for C only */
#define GLM_MAT4_IDENTITY (mat4)GLM_MAT4_IDENTITY_INIT

/*!
 * @brief copy all members of [mat] to [dest]
 *
 * matrix may not be aligned, u stands for unaligned, this may be useful when
 * copying a matrix from external source e.g. asset importer...
 *
 * @param[in]  mat  source
 * @param[out] dest destination
 */
CGLM_INLINE
void
glm_mat4_udup(mat4 mat, mat4 dest) {
  glm__memcpy(float, dest, mat, sizeof(mat4));
}

/*!
 * @brief copy all members of [mat] to [dest]
 *
 * @param[in]  mat  source
 * @param[out] dest destination
 */
CGLM_INLINE
void
glm_mat4_dup(mat4 mat, mat4 dest) {
#ifdef __AVX__
  _mm256_store_ps(dest[0], _mm256_load_ps(mat[0]));
  _mm256_store_ps(dest[2], _mm256_load_ps(mat[2]));
#elif defined( __SSE__ ) || defined( __SSE2__ )
  _mm_store_ps(dest[0], _mm_load_ps(mat[0]));
  _mm_store_ps(dest[1], _mm_load_ps(mat[1]));
  _mm_store_ps(dest[2], _mm_load_ps(mat[2]));
  _mm_store_ps(dest[3], _mm_load_ps(mat[3]));
#else
  glm_mat4_udup(mat, dest);
#endif
}

/*!
 * @brief copy top-left of mat4 to mat3
 *
 * @param[in]  mat  source
 * @param[out] dest destination
 */
CGLM_INLINE
void
glm_mat4_pick3(mat4 mat, mat3 dest) {
#if defined( __SSE__ ) || defined( __SSE2__ )
  glm_mat4_pick3_sse2(mat, dest);
#else
  dest[0][0] = mat[0][0];
  dest[0][1] = mat[0][1];
  dest[0][2] = mat[0][2];

  dest[1][0] = mat[1][0];
  dest[1][1] = mat[1][1];
  dest[1][2] = mat[1][2];

  dest[2][0] = mat[2][0];
  dest[2][1] = mat[2][1];
  dest[2][2] = mat[2][2];
#endif
}

/*!
 * @brief multiply m1 and m2 to dest
 *
 * m1, m2 and dest matrices can be same matrix, it is possible to write this:
 *
 * @code
 * mat4 m = GLM_MAT4_IDENTITY_INIT;
 * glm_mat4_mul(m, m, m);
 * @endcode
 *
 * @param[in]  m1   left matrix
 * @param[in]  m2   right matrix
 * @param[out] dest destination matrix
 */
CGLM_INLINE
void
glm_mat4_mul(mat4 m1, mat4 m2, mat4 dest) {
#ifdef __AVX__
  glm_mat4_mul_avx(m1, m2, dest);
#elif defined( __SSE__ ) || defined( __SSE2__ )
  glm_mat4_mul_sse2(m1, m2, dest);
#else
  float a00, a01, a02, a03,    b00, b01, b02, b03,
        a10, a11, a12, a13,    b10, b11, b12, b13,
        a20, a21, a22, a23,    b20, b21, b22, b23,
        a30, a31, a32, a33,    b30, b31, b32, b33;

  a00 = m1[0][0], a01 = m1[0][1], a02 = m1[0][2], a03 = m1[0][3],
  a10 = m1[1][0], a11 = m1[1][1], a12 = m1[1][2], a13 = m1[1][3],
  a20 = m1[2][0], a21 = m1[2][1], a22 = m1[2][2], a23 = m1[2][3],
  a30 = m1[3][0], a31 = m1[3][1], a32 = m1[3][2], a33 = m1[3][3];

  b00 = m2[0][0], b01 = m2[0][1], b02 = m2[0][2], b03 = m2[0][3],
  b10 = m2[1][0], b11 = m2[1][1], b12 = m2[1][2], b13 = m2[1][3],
  b20 = m2[2][0], b21 = m2[2][1], b22 = m2[2][2], b23 = m2[2][3],
  b30 = m2[3][0], b31 = m2[3][1], b32 = m2[3][2], b33 = m2[3][3];

  dest[0][0] = a00 * b00 + a10 * b01 + a20 * b02 + a30 * b03;
  dest[0][1] = a01 * b00 + a11 * b01 + a21 * b02 + a31 * b03;
  dest[0][2] = a02 * b00 + a12 * b01 + a22 * b02 + a32 * b03;
  dest[0][3] = a03 * b00 + a13 * b01 + a23 * b02 + a33 * b03;
  dest[1][0] = a00 * b10 + a10 * b11 + a20 * b12 + a30 * b13;
  dest[1][1] = a01 * b10 + a11 * b11 + a21 * b12 + a31 * b13;
  dest[1][2] = a02 * b10 + a12 * b11 + a22 * b12 + a32 * b13;
  dest[1][3] = a03 * b10 + a13 * b11 + a23 * b12 + a33 * b13;
  dest[2][0] = a00 * b20 + a10 * b21 + a20 * b22 + a30 * b23;
  dest[2][1] = a01 * b20 + a11 * b21 + a21 * b22 + a31 * b23;
  dest[2][2] = a02 * b20 + a12 * b21 + a22 * b22 + a32 * b23;
  dest[2][3] = a03 * b20 + a13 * b21 + a23 * b22 + a33 * b23;
  dest[3][0] = a00 * b30 + a10 * b31 + a20 * b32 + a30 * b33;
  dest[3][1] = a01 * b30 + a11 * b31 + a21 * b32 + a31 * b33;
  dest[3][2] = a02 * b30 + a12 * b31 + a22 * b32 + a32 * b33;
  dest[3][3] = a03 * b30 + a13 * b31 + a23 * b32 + a33 * b33;
#endif
}

/*!
 * @brief mupliply N mat4 matrices and store result in dest
 *
 * this function lets you multiply multiple (more than two or more...) matrices
 * <br><br>multiplication will be done in loop, this may reduce instructions
 * size but if <b>len</b> is too small then compiler may unroll whole loop,
 * usage:
 * @code
 * mat m1, m2, m3, m4, res;
 *
 * glm_mat4_mulN((mat4 *[]){&m1, &m2, &m3, &m4}, 4, res);
 * @endcode
 *
 * @warning matrices parameter is pointer array not mat4 array!
 *
 * @param[in]  matrices mat4 * array
 * @param[in]  len      matrices count
 * @param[out] dest     result
 */
CGLM_INLINE
void
glm_mat4_mulN(mat4 * __restrict matrices[], int len, mat4 dest) {
  int i;

  assert(len > 1 && "there must be least 2 matrices to go!");

  glm_mat4_mul(*matrices[0],
               *matrices[1],
               dest);

  for (i = 2; i < len; i++)
    glm_mat4_mul(dest,
                 *matrices[i],
                 dest);
}

/*!
 * @brief multiply mat4 with vec4 (column vector) and store in dest vector
 *
 * @param[in]  m    mat4 (left)
 * @param[in]  v    vec4 (right, column vector)
 * @param[out] dest vec4 (result, column vector)
 */
CGLM_INLINE
void
glm_mat4_mulv(mat4 m, vec4 v, vec4 dest) {
  dest[0] = m[0][0] * v[0] + m[1][0] * v[1] + m[2][0] * v[2] + m[3][0] * v[3];
  dest[1] = m[0][1] * v[0] + m[1][1] * v[1] + m[2][1] * v[2] + m[3][1] * v[3];
  dest[2] = m[0][2] * v[0] + m[1][2] * v[1] + m[2][2] * v[2] + m[3][2] * v[3];
  dest[3] = m[0][3] * v[0] + m[1][3] * v[1] + m[2][3] * v[2] + m[3][3] * v[3];
}

/*!
 * @brief transpose mat4 and store in dest
 *
 * source matrix will not be transposed unless dest is m
 *
 * @param m[in]     matrix
 * @param dest[out] result
 */
CGLM_INLINE
void
glm_mat4_transpose_to(mat4 m, mat4 dest) {
#if defined( __SSE__ ) || defined( __SSE2__ )
  glm_mat4_transp_sse2(m, dest);
#else
  dest[0][0] = m[0][0]; dest[1][0] = m[0][1];
  dest[0][1] = m[1][0]; dest[1][1] = m[1][1];
  dest[0][2] = m[2][0]; dest[1][2] = m[2][1];
  dest[0][3] = m[3][0]; dest[1][3] = m[3][1];
  dest[2][0] = m[0][2]; dest[3][0] = m[0][3];
  dest[2][1] = m[1][2]; dest[3][1] = m[1][3];
  dest[2][2] = m[2][2]; dest[3][2] = m[2][3];
  dest[2][3] = m[3][2]; dest[3][3] = m[3][3];
#endif
}

/*!
 * @brief tranpose mat4 and store result in same matrix
 *
 * @param[in, out] m source and dest
 */
CGLM_INLINE
void
glm_mat4_transpose(mat4 m) {
#if defined( __SSE__ ) || defined( __SSE2__ )
  glm_mat4_transp_sse2(m, m);
#else
  mat4 d;

  glm_mat4_transpose_to(m, d);

  glm__memcpy(float, m, d, sizeof(mat4));
#endif
}

/*!
 * @brief scale (multiply with scalar) matrix without simd optimization
 *
 * multiply matrix with scalar
 *
 * @param[in, out] m matrix
 * @param[in]      s scalar
 */
CGLM_INLINE
void
glm_mat4_scale_p(mat4 m, float s) {
  m[0][0] *= s; m[0][1] *= s; m[0][2] *= s; m[0][3] *= s;
  m[1][0] *= s; m[1][1] *= s; m[1][2] *= s; m[1][3] *= s;
  m[2][0] *= s; m[2][1] *= s; m[2][2] *= s; m[2][3] *= s;
  m[3][0] *= s; m[3][1] *= s; m[3][2] *= s; m[3][3] *= s;
}

/*!
 * @brief scale (multiply with scalar) matrix
 *
 * multiply matrix with scalar
 *
 * @param[in, out] m matrix
 * @param[in]      s scalar
 */
CGLM_INLINE
void
glm_mat4_scale(mat4 m, float s) {
#if defined( __SSE__ ) || defined( __SSE2__ )
  glm_mat4_scale_sse2(m, s);
#else
  glm_mat4_scale_p(m, s);
#endif
}

/*!
 * @brief mat4 determinant
 *
 * @param[in] mat matrix
 *
 * @return determinant
 */
CGLM_INLINE
float
glm_mat4_det(mat4 mat) {
#if defined( __SSE__ ) || defined( __SSE2__ )
  return glm_mat4_det_sse2(mat);
#else
  /* [square] det(A) = det(At) */
  float t[6];
  float a, b, c, d,
        e, f, g, h,
        i, j, k, l,
        m, n, o, p;

  a = mat[0][0], b = mat[0][1], c = mat[0][2], d = mat[0][3],
  e = mat[1][0], f = mat[1][1], g = mat[1][2], h = mat[1][3],
  i = mat[2][0], j = mat[2][1], k = mat[2][2], l = mat[2][3],
  m = mat[3][0], n = mat[3][1], o = mat[3][2], p = mat[3][3];

  t[0] = k * p - o * l;
  t[1] = j * p - n * l;
  t[2] = j * o - n * k;
  t[3] = i * p - m * l;
  t[4] = i * o - m * k;
  t[5] = i * n - m * j;

  return a * (f * t[0] - g * t[1] + h * t[2])
       - b * (e * t[0] - g * t[3] + h * t[4])
       + c * (e * t[1] - f * t[3] + h * t[5])
       - d * (e * t[2] - f * t[4] + g * t[5]);
#endif
}

/*!
 * @brief inverse mat4 and store in dest
 *
 * @todo this function could return existence of inverse (BOOL)
 *
 * @param[in]  mat  matrix
 * @param[out] dest inverse matrix
 */
CGLM_INLINE
void
glm_mat4_inv(mat4 mat, mat4 dest) {
#if defined( __SSE__ ) || defined( __SSE2__ )
  glm_mat4_inv_sse2(mat, dest);
#else
  float t[6];
  float det;
  float a, b, c, d,
        e, f, g, h,
        i, j, k, l,
        m, n, o, p;

  a = mat[0][0], b = mat[0][1], c = mat[0][2], d = mat[0][3],
  e = mat[1][0], f = mat[1][1], g = mat[1][2], h = mat[1][3],
  i = mat[2][0], j = mat[2][1], k = mat[2][2], l = mat[2][3],
  m = mat[3][0], n = mat[3][1], o = mat[3][2], p = mat[3][3];

  t[0] = k * p - o * l; t[1] = j * p - n * l; t[2] = j * o - n * k;
  t[3] = i * p - m * l; t[4] = i * o - m * k; t[5] = i * n - m * j;

  dest[0][0] =  f * t[0] - g * t[1] + h * t[2];
  dest[1][0] =-(e * t[0] - g * t[3] + h * t[4]);
  dest[2][0] =  e * t[1] - f * t[3] + h * t[5];
  dest[3][0] =-(e * t[2] - f * t[4] + g * t[5]);

  dest[0][1] =-(b * t[0] - c * t[1] + d * t[2]);
  dest[1][1] =  a * t[0] - c * t[3] + d * t[4];
  dest[2][1] =-(a * t[1] - b * t[3] + d * t[5]);
  dest[3][1] =  a * t[2] - b * t[4] + c * t[5];

  t[0] = g * p - o * h; t[1] = f * p - n * h; t[2] = f * o - n * g;
  t[3] = e * p - m * h; t[4] = e * o - m * g; t[5] = e * n - m * f;

  dest[0][2] =  b * t[0] - c * t[1] + d * t[2];
  dest[1][2] =-(a * t[0] - c * t[3] + d * t[4]);
  dest[2][2] =  a * t[1] - b * t[3] + d * t[5];
  dest[3][2] =-(a * t[2] - b * t[4] + c * t[5]);

  t[0] = g * l - k * h; t[1] = f * l - j * h; t[2] = f * k - j * g;
  t[3] = e * l - i * h; t[4] = e * k - i * g; t[5] = e * j - i * f;

  dest[0][3] =-(b * t[0] - c * t[1] + d * t[2]);
  dest[1][3] =  a * t[0] - c * t[3] + d * t[4];
  dest[2][3] =-(a * t[1] - b * t[3] + d * t[5]);
  dest[3][3] =  a * t[2] - b * t[4] + c * t[5];

  det = 1.0f / (a * dest[0][0] + b * dest[1][0]
              + c * dest[2][0] + d * dest[3][0]);

  glm_mat4_scale_p(dest, det);
#endif
}

#endif /* cglm_mat_h */
