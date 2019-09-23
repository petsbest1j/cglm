/*
 * Copyright (c), Recep Aslantas.
 *
 * MIT License (MIT), http://opensource.org/licenses/MIT
 * Full license can be found in the LICENSE file
 */

#ifndef tests_h
#define tests_h

#include "include/common.h"

/*
 * To register a test:
 *   1. use TEST_DECLARE() to forward declare test
 *   2. use TEST_ENTRY() to add test to list
 */

/* mat4 */
TEST_DECLARE(glm_mat4_ucopy)
TEST_DECLARE(glm_mat4_copy)
TEST_DECLARE(glm_mat4_identity)
TEST_DECLARE(glm_mat4_identity_array)
TEST_DECLARE(glm_mat4_zero)
TEST_DECLARE(glm_mat4_pick3)
TEST_DECLARE(glm_mat4_pick3t)
TEST_DECLARE(glm_mat4_ins3)
TEST_DECLARE(glm_mat4_mul)
TEST_DECLARE(glm_mat4_mulN)
TEST_DECLARE(glm_mat4_mulv)
TEST_DECLARE(glm_mat4_mulv3)
TEST_DECLARE(glm_mat4_trace)
TEST_DECLARE(glm_mat4_trace3)
TEST_DECLARE(glm_mat4_quat)
TEST_DECLARE(glm_mat4_transpose_to)
TEST_DECLARE(glm_mat4_transpose)
TEST_DECLARE(glm_mat4_scale_p)
TEST_DECLARE(glm_mat4_scale)
TEST_DECLARE(glm_mat4_det)
TEST_DECLARE(glm_mat4_inv)
TEST_DECLARE(glm_mat4_inv_fast)
TEST_DECLARE(glm_mat4_inv_precise)
TEST_DECLARE(glm_mat4_swap_col)
TEST_DECLARE(glm_mat4_swap_row)
TEST_DECLARE(glm_mat4_rmc)

TEST_DECLARE(glmc_mat4_ucopy)
TEST_DECLARE(glmc_mat4_copy)
TEST_DECLARE(glmc_mat4_identity)
TEST_DECLARE(glmc_mat4_identity_array)
TEST_DECLARE(glmc_mat4_zero)
TEST_DECLARE(glmc_mat4_pick3)
TEST_DECLARE(glmc_mat4_pick3t)
TEST_DECLARE(glmc_mat4_ins3)
TEST_DECLARE(glmc_mat4_mul)
TEST_DECLARE(glmc_mat4_mulN)
TEST_DECLARE(glmc_mat4_mulv)
TEST_DECLARE(glmc_mat4_mulv3)
TEST_DECLARE(glmc_mat4_trace)
TEST_DECLARE(glmc_mat4_trace3)
TEST_DECLARE(glmc_mat4_quat)
TEST_DECLARE(glmc_mat4_transpose_to)
TEST_DECLARE(glmc_mat4_transpose)
TEST_DECLARE(glmc_mat4_scale_p)
TEST_DECLARE(glmc_mat4_scale)
TEST_DECLARE(glmc_mat4_det)
TEST_DECLARE(glmc_mat4_inv)
TEST_DECLARE(glmc_mat4_inv_fast)
TEST_DECLARE(glmc_mat4_swap_col)
TEST_DECLARE(glmc_mat4_swap_row)
TEST_DECLARE(glmc_mat4_rmc)

TEST_DECLARE(affine)

/* mat3 */
TEST_DECLARE(glm_mat3_copy)
TEST_DECLARE(glm_mat3_identity)
TEST_DECLARE(glm_mat3_identity_array)
TEST_DECLARE(glm_mat3_zero)
TEST_DECLARE(glm_mat3_mul)
TEST_DECLARE(glm_mat3_mulv)
TEST_DECLARE(glm_mat3_trace)
TEST_DECLARE(glm_mat3_quat)
TEST_DECLARE(glm_mat3_transpose_to)
TEST_DECLARE(glm_mat3_transpose)
TEST_DECLARE(glm_mat3_scale)
TEST_DECLARE(glm_mat3_det)
TEST_DECLARE(glm_mat3_inv)
TEST_DECLARE(glm_mat3_swap_col)
TEST_DECLARE(glm_mat3_swap_row)
TEST_DECLARE(glm_mat3_rmc)

TEST_DECLARE(glmc_mat3_copy)
TEST_DECLARE(glmc_mat3_identity)
TEST_DECLARE(glmc_mat3_identity_array)
TEST_DECLARE(glmc_mat3_zero)
TEST_DECLARE(glmc_mat3_mul)
TEST_DECLARE(glmc_mat3_mulv)
TEST_DECLARE(glmc_mat3_trace)
TEST_DECLARE(glmc_mat3_quat)
TEST_DECLARE(glmc_mat3_transpose_to)
TEST_DECLARE(glmc_mat3_transpose)
TEST_DECLARE(glmc_mat3_scale)
TEST_DECLARE(glmc_mat3_det)
TEST_DECLARE(glmc_mat3_inv)
TEST_DECLARE(glmc_mat3_swap_col)
TEST_DECLARE(glmc_mat3_swap_row)
TEST_DECLARE(glmc_mat3_rmc)

/* camera */
TEST_DECLARE(camera_lookat)
TEST_DECLARE(camera_decomp)

/* project */
TEST_DECLARE(glm_unprojecti)
TEST_DECLARE(glm_unproject)
TEST_DECLARE(glm_project)

TEST_DECLARE(glmc_unprojecti)
TEST_DECLARE(glmc_unproject)
TEST_DECLARE(glmc_project)

/* utils */
TEST_DECLARE(clamp)

/* euler */
TEST_DECLARE(euler)

/* quat */
TEST_DECLARE(quat)

/* bezier */
TEST_DECLARE(bezier)

/* vec3 */
TEST_DECLARE(MACRO_GLM_VEC3_ONE_INIT)
TEST_DECLARE(MACRO_GLM_VEC3_ZERO_INIT)
TEST_DECLARE(MACRO_GLM_VEC3_ONE)
TEST_DECLARE(MACRO_GLM_VEC3_ZERO)
TEST_DECLARE(MACRO_GLM_YUP)
TEST_DECLARE(MACRO_GLM_ZUP)
TEST_DECLARE(MACRO_GLM_XUP)
TEST_DECLARE(MACRO_GLM_SHUFFLE3)
TEST_DECLARE(MACRO_GLM_XXX)
TEST_DECLARE(MACRO_GLM_YYY)
TEST_DECLARE(MACRO_GLM_ZZZ)
TEST_DECLARE(MACRO_GLM_ZYX)

TEST_DECLARE(MACRO_glm_vec3_dup)
TEST_DECLARE(MACRO_glm_vec3_flipsign)
TEST_DECLARE(MACRO_glm_vec3_flipsign_to)
TEST_DECLARE(MACRO_glm_vec3_inv)
TEST_DECLARE(MACRO_glm_vec3_inv_to)
TEST_DECLARE(MACRO_glm_vec3_mulv)

TEST_DECLARE(glm_vec3)
TEST_DECLARE(glm_vec3_copy)
TEST_DECLARE(glm_vec3_zero)
TEST_DECLARE(glm_vec3_one)
TEST_DECLARE(glm_vec3_dot)
TEST_DECLARE(glm_dot)
TEST_DECLARE(glm_vec3_norm2)
TEST_DECLARE(glm_vec3_norm)
TEST_DECLARE(glm_vec3_norm_one)
TEST_DECLARE(glm_vec3_norm_inf)
TEST_DECLARE(glm_vec3_add)
TEST_DECLARE(glm_vec3_adds)
TEST_DECLARE(glm_vec3_sub)
TEST_DECLARE(glm_vec3_subs)
TEST_DECLARE(glm_vec3_mul)
TEST_DECLARE(glm_vec3_scale)
TEST_DECLARE(glm_vec3_scale_as)
TEST_DECLARE(glm_vec3_div)
TEST_DECLARE(glm_vec3_divs)
TEST_DECLARE(glm_vec3_addadd)
TEST_DECLARE(glm_vec3_subadd)
TEST_DECLARE(glm_vec3_muladd)
TEST_DECLARE(glm_vec3_muladds)
TEST_DECLARE(glm_vec3_maxadd)
TEST_DECLARE(glm_vec3_minadd)
TEST_DECLARE(glm_vec3_negate_to)
TEST_DECLARE(glm_vec3_negate)
TEST_DECLARE(glm_vec3_normalize)
TEST_DECLARE(glm_vec3_normalize_to)
TEST_DECLARE(glm_normalize)
TEST_DECLARE(glm_normalize_to)
TEST_DECLARE(glm_vec3_cross)
TEST_DECLARE(glm_vec3_crossn)
TEST_DECLARE(glm_cross)
TEST_DECLARE(glm_vec3_angle)
TEST_DECLARE(glm_vec3_rotate)
TEST_DECLARE(glm_vec3_rotate_m4)
TEST_DECLARE(glm_vec3_rotate_m3)
TEST_DECLARE(glm_vec3_proj)
TEST_DECLARE(glm_vec3_center)
TEST_DECLARE(glm_vec3_distance2)
TEST_DECLARE(glm_vec3_distance)
TEST_DECLARE(glm_vec3_maxv)
TEST_DECLARE(glm_vec3_minv)
TEST_DECLARE(glm_vec3_ortho)
TEST_DECLARE(glm_vec3_clamp)
TEST_DECLARE(glm_vec3_mix)
TEST_DECLARE(glm_vec3_mixc)
TEST_DECLARE(glm_vec3_step_uni)
TEST_DECLARE(glm_vec3_step)
TEST_DECLARE(glm_vec3_smoothstep_uni)
TEST_DECLARE(glm_vec3_smoothstep)
TEST_DECLARE(glm_vec3_smoothinterp)
TEST_DECLARE(glm_vec3_smoothinterpc)
TEST_DECLARE(glm_vec3_swizzle)
TEST_DECLARE(glm_vec3_broadcast)
TEST_DECLARE(glm_vec3_fill)
TEST_DECLARE(glm_vec3_eq)
TEST_DECLARE(glm_vec3_eq_eps)
TEST_DECLARE(glm_vec3_eq_all)
TEST_DECLARE(glm_vec3_eqv)
TEST_DECLARE(glm_vec3_eqv_eps)
TEST_DECLARE(glm_vec3_max)
TEST_DECLARE(glm_vec3_min)
TEST_DECLARE(glm_vec3_isnan)
TEST_DECLARE(glm_vec3_isinf)
TEST_DECLARE(glm_vec3_isvalid)
TEST_DECLARE(glm_vec3_sign)
TEST_DECLARE(glm_vec3_abs)
TEST_DECLARE(glm_vec3_fract)
TEST_DECLARE(glm_vec3_hadd)
TEST_DECLARE(glm_vec3_sqrt)

TEST_DECLARE(glmc_vec3)
TEST_DECLARE(glmc_vec3_copy)
TEST_DECLARE(glmc_vec3_zero)
TEST_DECLARE(glmc_vec3_one)
TEST_DECLARE(glmc_vec3_dot)
TEST_DECLARE(glmc_vec3_norm2)
TEST_DECLARE(glmc_vec3_norm)
TEST_DECLARE(glmc_vec3_norm_one)
TEST_DECLARE(glmc_vec3_norm_inf)
TEST_DECLARE(glmc_vec3_add)
TEST_DECLARE(glmc_vec3_adds)
TEST_DECLARE(glmc_vec3_sub)
TEST_DECLARE(glmc_vec3_subs)
TEST_DECLARE(glmc_vec3_mul)
TEST_DECLARE(glmc_vec3_scale)
TEST_DECLARE(glmc_vec3_scale_as)
TEST_DECLARE(glmc_vec3_div)
TEST_DECLARE(glmc_vec3_divs)
TEST_DECLARE(glmc_vec3_addadd)
TEST_DECLARE(glmc_vec3_subadd)
TEST_DECLARE(glmc_vec3_muladd)
TEST_DECLARE(glmc_vec3_muladds)
TEST_DECLARE(glmc_vec3_maxadd)
TEST_DECLARE(glmc_vec3_minadd)
TEST_DECLARE(glmc_vec3_negate_to)
TEST_DECLARE(glmc_vec3_negate)
TEST_DECLARE(glmc_vec3_normalize)
TEST_DECLARE(glmc_vec3_normalize_to)
TEST_DECLARE(glmc_vec3_cross)
TEST_DECLARE(glmc_vec3_crossn)
TEST_DECLARE(glmc_vec3_angle)
TEST_DECLARE(glmc_vec3_rotate)
TEST_DECLARE(glmc_vec3_rotate_m4)
TEST_DECLARE(glmc_vec3_rotate_m3)
TEST_DECLARE(glmc_vec3_proj)
TEST_DECLARE(glmc_vec3_center)
TEST_DECLARE(glmc_vec3_distance2)
TEST_DECLARE(glmc_vec3_distance)
TEST_DECLARE(glmc_vec3_maxv)
TEST_DECLARE(glmc_vec3_minv)
TEST_DECLARE(glmc_vec3_ortho)
TEST_DECLARE(glmc_vec3_clamp)
TEST_DECLARE(glmc_vec3_mix)
TEST_DECLARE(glmc_vec3_mixc)
TEST_DECLARE(glmc_vec3_step_uni)
TEST_DECLARE(glmc_vec3_step)
TEST_DECLARE(glmc_vec3_smoothstep_uni)
TEST_DECLARE(glmc_vec3_smoothstep)
TEST_DECLARE(glmc_vec3_smoothinterp)
TEST_DECLARE(glmc_vec3_smoothinterpc)
TEST_DECLARE(glmc_vec3_swizzle)

TEST_DECLARE(glmc_vec3_broadcast)
TEST_DECLARE(glmc_vec3_fill)
TEST_DECLARE(glmc_vec3_eq)
TEST_DECLARE(glmc_vec3_eq_eps)
TEST_DECLARE(glmc_vec3_eq_all)
TEST_DECLARE(glmc_vec3_eqv)
TEST_DECLARE(glmc_vec3_eqv_eps)
TEST_DECLARE(glmc_vec3_max)
TEST_DECLARE(glmc_vec3_min)
TEST_DECLARE(glmc_vec3_isnan)
TEST_DECLARE(glmc_vec3_isinf)
TEST_DECLARE(glmc_vec3_isvalid)
TEST_DECLARE(glmc_vec3_sign)
TEST_DECLARE(glmc_vec3_abs)
TEST_DECLARE(glmc_vec3_fract)
TEST_DECLARE(glmc_vec3_hadd)
TEST_DECLARE(glmc_vec3_sqrt)

/* vec4 */
TEST_DECLARE(vec4)

/*****************************************************************************/

TEST_LIST {
  /* mat4 */
  TEST_ENTRY(glm_mat4_ucopy)
  TEST_ENTRY(glm_mat4_copy)
  TEST_ENTRY(glm_mat4_identity)
  TEST_ENTRY(glm_mat4_identity_array)
  TEST_ENTRY(glm_mat4_zero)
  TEST_ENTRY(glm_mat4_pick3)
  TEST_ENTRY(glm_mat4_pick3t)
  TEST_ENTRY(glm_mat4_ins3)
  TEST_ENTRY(glm_mat4_mul)
  TEST_ENTRY(glm_mat4_mulN)
  TEST_ENTRY(glm_mat4_mulv)
  TEST_ENTRY(glm_mat4_mulv3)
  TEST_ENTRY(glm_mat4_trace)
  TEST_ENTRY(glm_mat4_trace3)
  TEST_ENTRY(glm_mat4_quat)
  TEST_ENTRY(glm_mat4_transpose_to)
  TEST_ENTRY(glm_mat4_transpose)
  TEST_ENTRY(glm_mat4_scale_p)
  TEST_ENTRY(glm_mat4_scale)
  TEST_ENTRY(glm_mat4_det)
  TEST_ENTRY(glm_mat4_inv)
  TEST_ENTRY(glm_mat4_inv_fast)
  TEST_ENTRY(glm_mat4_inv_precise)
  TEST_ENTRY(glm_mat4_swap_col)
  TEST_ENTRY(glm_mat4_swap_row)
  TEST_ENTRY(glm_mat4_rmc)
  
  TEST_ENTRY(glmc_mat4_ucopy)
  TEST_ENTRY(glmc_mat4_copy)
  TEST_ENTRY(glmc_mat4_identity)
  TEST_ENTRY(glmc_mat4_identity_array)
  TEST_ENTRY(glmc_mat4_zero)
  TEST_ENTRY(glmc_mat4_pick3)
  TEST_ENTRY(glmc_mat4_pick3t)
  TEST_ENTRY(glmc_mat4_ins3)
  TEST_ENTRY(glmc_mat4_mul)
  TEST_ENTRY(glmc_mat4_mulN)
  TEST_ENTRY(glmc_mat4_mulv)
  TEST_ENTRY(glmc_mat4_mulv3)
  TEST_ENTRY(glmc_mat4_trace)
  TEST_ENTRY(glmc_mat4_trace3)
  TEST_ENTRY(glmc_mat4_quat)
  TEST_ENTRY(glmc_mat4_transpose_to)
  TEST_ENTRY(glmc_mat4_transpose)
  TEST_ENTRY(glmc_mat4_scale_p)
  TEST_ENTRY(glmc_mat4_scale)
  TEST_ENTRY(glmc_mat4_det)
  TEST_ENTRY(glmc_mat4_inv)
  TEST_ENTRY(glmc_mat4_inv_fast)
  TEST_ENTRY(glmc_mat4_swap_col)
  TEST_ENTRY(glmc_mat4_swap_row)
  TEST_ENTRY(glmc_mat4_rmc)
  
  TEST_ENTRY(affine)
  
  /* mat3 */
  TEST_ENTRY(glm_mat3_copy)
  TEST_ENTRY(glm_mat3_identity)
  TEST_ENTRY(glm_mat3_identity_array)
  TEST_ENTRY(glm_mat3_zero)
  TEST_ENTRY(glm_mat3_mul)
  TEST_ENTRY(glm_mat3_mulv)
  TEST_ENTRY(glm_mat3_trace)
  TEST_ENTRY(glm_mat3_quat)
  TEST_ENTRY(glm_mat3_transpose_to)
  TEST_ENTRY(glm_mat3_transpose)
  TEST_ENTRY(glm_mat3_scale)
  TEST_ENTRY(glm_mat3_det)
  TEST_ENTRY(glm_mat3_inv)
  TEST_ENTRY(glm_mat3_swap_col)
  TEST_ENTRY(glm_mat3_swap_row)
  TEST_ENTRY(glm_mat3_rmc)

  TEST_ENTRY(glmc_mat3_copy)
  TEST_ENTRY(glmc_mat3_identity)
  TEST_ENTRY(glmc_mat3_identity_array)
  TEST_ENTRY(glmc_mat3_zero)
  TEST_ENTRY(glmc_mat3_mul)
  TEST_ENTRY(glmc_mat3_mulv)
  TEST_ENTRY(glmc_mat3_trace)
  TEST_ENTRY(glmc_mat3_quat)
  TEST_ENTRY(glmc_mat3_transpose_to)
  TEST_ENTRY(glmc_mat3_transpose)
  TEST_ENTRY(glmc_mat3_scale)
  TEST_ENTRY(glmc_mat3_det)
  TEST_ENTRY(glmc_mat3_inv)
  TEST_ENTRY(glmc_mat3_swap_col)
  TEST_ENTRY(glmc_mat3_swap_row)
  TEST_ENTRY(glmc_mat3_rmc)
  
  /* camera */
  TEST_ENTRY(camera_lookat)
  TEST_ENTRY(camera_decomp)
  
  /* project */
  TEST_ENTRY(glm_unprojecti)
  TEST_ENTRY(glm_unproject)
  TEST_ENTRY(glm_project)
  
  TEST_ENTRY(glmc_unprojecti)
  TEST_ENTRY(glmc_unproject)
  TEST_ENTRY(glmc_project)
  
  /* utils */
  TEST_ENTRY(clamp)
  
  /* euler */
  TEST_ENTRY(euler)
  
  /* quat */
  TEST_ENTRY(quat)
  
  /* bezier */
  TEST_ENTRY(bezier)

  /* vec3 */

  /* Macros */

  TEST_ENTRY(MACRO_GLM_VEC3_ONE_INIT)
  TEST_ENTRY(MACRO_GLM_VEC3_ZERO_INIT)
  TEST_ENTRY(MACRO_GLM_VEC3_ONE)
  TEST_ENTRY(MACRO_GLM_VEC3_ZERO)
  TEST_ENTRY(MACRO_GLM_YUP)
  TEST_ENTRY(MACRO_GLM_ZUP)
  TEST_ENTRY(MACRO_GLM_XUP)
  TEST_ENTRY(MACRO_GLM_SHUFFLE3)
  TEST_ENTRY(MACRO_GLM_XXX)
  TEST_ENTRY(MACRO_GLM_YYY)
  TEST_ENTRY(MACRO_GLM_ZZZ)
  TEST_ENTRY(MACRO_GLM_ZYX)

  TEST_ENTRY(MACRO_glm_vec3_dup)
  TEST_ENTRY(MACRO_glm_vec3_flipsign)
  TEST_ENTRY(MACRO_glm_vec3_flipsign_to)
  TEST_ENTRY(MACRO_glm_vec3_inv)
  TEST_ENTRY(MACRO_glm_vec3_inv_to)
  TEST_ENTRY(MACRO_glm_vec3_mulv)

  TEST_ENTRY(glm_vec3)
  TEST_ENTRY(glm_vec3_copy)
  TEST_ENTRY(glm_vec3_zero)
  TEST_ENTRY(glm_vec3_one)
  TEST_ENTRY(glm_vec3_dot)
  TEST_ENTRY(glm_dot)
  TEST_ENTRY(glm_vec3_norm2)
  TEST_ENTRY(glm_vec3_norm)
  TEST_ENTRY(glm_vec3_norm_one)
  TEST_ENTRY(glm_vec3_norm_inf)
  TEST_ENTRY(glm_vec3_add)
  TEST_ENTRY(glm_vec3_adds)
  TEST_ENTRY(glm_vec3_sub)
  TEST_ENTRY(glm_vec3_subs)
  TEST_ENTRY(glm_vec3_mul)
  TEST_ENTRY(glm_vec3_scale)
  TEST_ENTRY(glm_vec3_scale_as)
  TEST_ENTRY(glm_vec3_div)
  TEST_ENTRY(glm_vec3_divs)
  TEST_ENTRY(glm_vec3_addadd)
  TEST_ENTRY(glm_vec3_subadd)
  TEST_ENTRY(glm_vec3_muladd)
  TEST_ENTRY(glm_vec3_muladds)
  TEST_ENTRY(glm_vec3_maxadd)
  TEST_ENTRY(glm_vec3_minadd)
  TEST_ENTRY(glm_vec3_negate_to)
  TEST_ENTRY(glm_vec3_negate)
  TEST_ENTRY(glm_vec3_normalize)
  TEST_ENTRY(glm_vec3_normalize_to)
  TEST_ENTRY(glm_normalize)
  TEST_ENTRY(glm_normalize_to)
  TEST_ENTRY(glm_vec3_cross)
  TEST_ENTRY(glm_vec3_crossn)
  TEST_ENTRY(glm_cross)
  TEST_ENTRY(glm_vec3_angle)
  TEST_ENTRY(glm_vec3_rotate)
  TEST_ENTRY(glm_vec3_rotate_m4)
  TEST_ENTRY(glm_vec3_rotate_m3)
  TEST_ENTRY(glm_vec3_proj)
  TEST_ENTRY(glm_vec3_center)
  TEST_ENTRY(glmc_vec3_distance2)
  TEST_ENTRY(glmc_vec3_distance)
  TEST_ENTRY(glm_vec3_maxv)
  TEST_ENTRY(glm_vec3_minv)
  TEST_ENTRY(glm_vec3_ortho)
  TEST_ENTRY(glm_vec3_clamp)
  TEST_ENTRY(glm_vec3_mix)
  TEST_ENTRY(glm_vec3_mixc)
  TEST_ENTRY(glm_vec3_step_uni)
  TEST_ENTRY(glm_vec3_step)
  TEST_ENTRY(glm_vec3_smoothstep_uni)
  TEST_ENTRY(glm_vec3_smoothstep)
  TEST_ENTRY(glm_vec3_smoothinterp)
  TEST_ENTRY(glm_vec3_smoothinterpc)
  TEST_ENTRY(glm_vec3_swizzle)
  TEST_ENTRY(glm_vec3_broadcast)
  TEST_ENTRY(glm_vec3_fill)
  TEST_ENTRY(glm_vec3_eq)
  TEST_ENTRY(glm_vec3_eq_eps)
  TEST_ENTRY(glm_vec3_eq_all)
  TEST_ENTRY(glm_vec3_eqv)
  TEST_ENTRY(glm_vec3_eqv_eps)
  TEST_ENTRY(glm_vec3_max)
  TEST_ENTRY(glm_vec3_min)
  TEST_ENTRY(glm_vec3_isnan)
  TEST_ENTRY(glm_vec3_isinf)
  TEST_ENTRY(glm_vec3_isvalid)
  TEST_ENTRY(glm_vec3_sign)
  TEST_ENTRY(glm_vec3_abs)
  TEST_ENTRY(glm_vec3_fract)
  TEST_ENTRY(glm_vec3_hadd)
  TEST_ENTRY(glm_vec3_sqrt)

  TEST_ENTRY(glmc_vec3)
  TEST_ENTRY(glmc_vec3_copy)
  TEST_ENTRY(glmc_vec3_zero)
  TEST_ENTRY(glmc_vec3_one)
  TEST_ENTRY(glmc_vec3_dot)
  TEST_ENTRY(glmc_vec3_norm2)
  TEST_ENTRY(glmc_vec3_norm)
  TEST_ENTRY(glmc_vec3_norm_one)
  TEST_ENTRY(glmc_vec3_norm_inf)
  TEST_ENTRY(glmc_vec3_add)
  TEST_ENTRY(glmc_vec3_adds)
  TEST_ENTRY(glmc_vec3_sub)
  TEST_ENTRY(glmc_vec3_subs)
  TEST_ENTRY(glmc_vec3_mul)
  TEST_ENTRY(glmc_vec3_scale)
  TEST_ENTRY(glmc_vec3_scale_as)
  TEST_ENTRY(glmc_vec3_div)
  TEST_ENTRY(glmc_vec3_divs)
  TEST_ENTRY(glmc_vec3_addadd)
  TEST_ENTRY(glmc_vec3_subadd)
  TEST_ENTRY(glmc_vec3_muladd)
  TEST_ENTRY(glmc_vec3_muladds)
  TEST_ENTRY(glmc_vec3_maxadd)
  TEST_ENTRY(glmc_vec3_minadd)
  TEST_ENTRY(glmc_vec3_negate_to)
  TEST_ENTRY(glmc_vec3_negate)
  TEST_ENTRY(glmc_vec3_normalize)
  TEST_ENTRY(glmc_vec3_normalize_to)
  TEST_ENTRY(glmc_vec3_cross)
  TEST_ENTRY(glmc_vec3_crossn)
  TEST_ENTRY(glmc_vec3_angle)
  TEST_ENTRY(glmc_vec3_rotate)
  TEST_ENTRY(glmc_vec3_rotate_m4)
  TEST_ENTRY(glmc_vec3_rotate_m3)
  TEST_ENTRY(glmc_vec3_proj)
  TEST_ENTRY(glmc_vec3_center)
  TEST_ENTRY(glmc_vec3_distance2)
  TEST_ENTRY(glmc_vec3_distance)
  TEST_ENTRY(glmc_vec3_maxv)
  TEST_ENTRY(glmc_vec3_minv)
  TEST_ENTRY(glmc_vec3_ortho)
  TEST_ENTRY(glmc_vec3_clamp)
  TEST_ENTRY(glmc_vec3_mix)
  TEST_ENTRY(glmc_vec3_mixc)
  TEST_ENTRY(glmc_vec3_step_uni)
  TEST_ENTRY(glmc_vec3_step)
  TEST_ENTRY(glmc_vec3_smoothstep_uni)
  TEST_ENTRY(glmc_vec3_smoothstep)
  TEST_ENTRY(glmc_vec3_smoothinterp)
  TEST_ENTRY(glmc_vec3_smoothinterpc)
  TEST_ENTRY(glmc_vec3_swizzle)
  TEST_ENTRY(glmc_vec3_broadcast)
  TEST_ENTRY(glmc_vec3_fill)
  TEST_ENTRY(glmc_vec3_eq)
  TEST_ENTRY(glmc_vec3_eq_eps)
  TEST_ENTRY(glmc_vec3_eq_all)
  TEST_ENTRY(glmc_vec3_eqv)
  TEST_ENTRY(glmc_vec3_eqv_eps)
  TEST_ENTRY(glmc_vec3_max)
  TEST_ENTRY(glmc_vec3_min)
  TEST_ENTRY(glmc_vec3_isnan)
  TEST_ENTRY(glmc_vec3_isinf)
  TEST_ENTRY(glmc_vec3_isvalid)
  TEST_ENTRY(glmc_vec3_sign)
  TEST_ENTRY(glmc_vec3_abs)
  TEST_ENTRY(glmc_vec3_fract)
  TEST_ENTRY(glmc_vec3_hadd)
  TEST_ENTRY(glmc_vec3_sqrt)

  /* vec4 */
  TEST_ENTRY(vec4)
};

#endif /* tests_h */
