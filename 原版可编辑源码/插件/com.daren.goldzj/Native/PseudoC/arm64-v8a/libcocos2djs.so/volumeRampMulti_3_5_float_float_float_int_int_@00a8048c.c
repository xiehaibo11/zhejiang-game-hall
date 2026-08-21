
/* void cocos2d::volumeRampMulti<3, 5, float, float, float, int, int>(float*, unsigned long, float
   const*, int*, float*, float const*, int*, int) */

void cocos2d::volumeRampMulti<3,5,float,float,float,int,int>
               (float *param_1,ulong param_2,float *param_3,int *param_4,float *param_5,
               float *param_6,int *param_7,int param_8)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  
                    /* try { // try from 00a8048c to 00b804df has its CatchHandler @ 00a8048c
                       catch() { ... } // from try @ 00a8048c with catch @ 00a8048c
                       catch() { ... } // from try @ 00a80654 with catch @ 00a8048c */
  fVar8 = *param_5;
  if (param_4 == (int *)0x0) {
    do {
      param_2 = param_2 - 1;
      *param_1 = *param_1 + *param_3 * fVar8;
                    /* catch() { ... } // from try @ 00a8050c with catch @ 00a806c8 */
                    /* catch() { ... } // from try @ 00a80500 with catch @ 00a806cc */
                    /* catch() { ... } // from try @ 00a804e0 with catch @ 00a806d0 */
      param_1[1] = param_1[1] + param_3[1] * *param_5;
                    /* catch() { ... } // from try @ 00a80518 with catch @ 00a806e0 */
      param_1[2] = param_1[2] + param_3[2] * *param_5;
      param_1[3] = param_1[3] + param_3[3] * *param_5;
      pfVar1 = param_3 + 4;
      param_3 = param_3 + 5;
      param_1[4] = param_1[4] + *pfVar1 * *param_5;
      param_1 = param_1 + 5;
      fVar8 = *param_6 + *param_5;
      *param_5 = fVar8;
    } while (param_2 != 0);
  }
  else {
    do {
      fVar9 = *param_3;
      if (fVar9 <= -16.0) {
        iVar3 = -0x80000000;
      }
      else if (16.0 <= fVar9) {
        iVar3 = 0x7fffffff;
      }
      else {
        fVar2 = 0.5;
        if (fVar9 * 1.3421773e+08 <= 0.0) {
          fVar2 = -0.5;
        }
        iVar3 = (int)(fVar2 + fVar9 * 1.3421773e+08);
                    /* try { // try from 00a804e0 to 00b804f7 has its CatchHandler @ 00a806d0 */
      }
      *param_1 = fVar9 * fVar8 + *param_1;
                    /* try { // try from 00a80500 to 00b8050b has its CatchHandler @ 00a806cc */
      fVar8 = param_3[1];
                    /* try { // try from 00a8050c to 00b80517 has its CatchHandler @ 00a806c8 */
      if (fVar8 <= -16.0) {
        iVar4 = -0x80000000;
      }
      else if (16.0 <= fVar8) {
        iVar4 = 0x7fffffff;
      }
      else {
                    /* try { // try from 00a80518 to 00b80653 has its CatchHandler @ 00a806e0 */
        fVar9 = 0.5;
        if (fVar8 * 1.3421773e+08 <= 0.0) {
          fVar9 = -0.5;
        }
        iVar4 = (int)(fVar9 + fVar8 * 1.3421773e+08);
      }
      param_1[1] = fVar8 * *param_5 + param_1[1];
      fVar8 = param_3[2];
      if (fVar8 <= -16.0) {
        iVar5 = -0x80000000;
      }
      else if (16.0 <= fVar8) {
        iVar5 = 0x7fffffff;
      }
      else {
        fVar9 = 0.5;
        if (fVar8 * 1.3421773e+08 <= 0.0) {
          fVar9 = -0.5;
        }
        iVar5 = (int)(fVar9 + fVar8 * 1.3421773e+08);
      }
      param_1[2] = fVar8 * *param_5 + param_1[2];
      fVar8 = param_3[3];
      if (fVar8 <= -16.0) {
        iVar6 = -0x80000000;
      }
      else if (16.0 <= fVar8) {
        iVar6 = 0x7fffffff;
      }
      else {
        fVar9 = 0.5;
        if (fVar8 * 1.3421773e+08 <= 0.0) {
          fVar9 = -0.5;
        }
        iVar6 = (int)(fVar9 + fVar8 * 1.3421773e+08);
      }
      param_1[3] = fVar8 * *param_5 + param_1[3];
      fVar8 = param_3[4];
      if (fVar8 <= -16.0) {
        iVar7 = -0x80000000;
      }
      else if (16.0 <= fVar8) {
        iVar7 = 0x7fffffff;
      }
      else {
        fVar9 = 0.5;
        if (fVar8 * 1.3421773e+08 <= 0.0) {
          fVar9 = -0.5;
        }
        iVar7 = (int)(fVar9 + fVar8 * 1.3421773e+08);
      }
      param_1[4] = fVar8 * *param_5 + param_1[4];
                    /* try { // try from 00a80654 to 00b80737 has its CatchHandler @ 00a8048c */
      fVar8 = *param_6 + *param_5;
      *param_5 = fVar8;
      param_2 = param_2 - 1;
      *param_4 = *param_4 +
                 (*param_7 >> 0x10) * ((iVar7 + iVar6 + iVar5 + iVar4 + iVar3) / 5 >> 0xc);
      param_3 = param_3 + 5;
      param_1 = param_1 + 5;
      *param_7 = *param_7 + param_8;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

