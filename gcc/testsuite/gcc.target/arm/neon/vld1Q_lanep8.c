/* APPLE LOCAL file v7 merge */
/* Test the `vld1Q_lanep8' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0 -mfpu=neon -mfloat-abi=softfp" } */

#include "arm_neon.h"

void test_vld1Q_lanep8 (void)
{
  poly8x16_t out_poly8x16_t;
  poly8x16_t arg1_poly8x16_t;

  out_poly8x16_t = vld1q_lane_p8 (0, arg1_poly8x16_t, 1);
}

/* { dg-final { scan-assembler "vld1\.8\[ 	\]+((\\\{\[dD\]\[0-9\]+\\\[\[0-9\]+\\\]\\\})|(\[dD\]\[0-9\]+\\\[\[0-9\]+\\\])), \\\[\[rR\]\[0-9\]+\\\]!?\(\[ 	\]+@\[a-zA-Z0-9 \]+\)?\n" } } */
/* { dg-final { cleanup-saved-temps } } */