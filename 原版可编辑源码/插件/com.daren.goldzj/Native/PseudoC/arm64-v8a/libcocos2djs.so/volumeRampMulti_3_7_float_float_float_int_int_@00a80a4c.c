
/* void cocos2d::volumeRampMulti<3, 7, float, float, float, int, int>(float*, unsigned long, float
   const*, int*, float*, float const*, int*, int) */

void cocos2d::volumeRampMulti<3,7,float,float,float,int,int>
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
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  
  fVar10 = *param_5;
  if (param_4 == (int *)0x0) {
    do {
                    /* try { // try from 00a80d14 to 00b80d1f has its CatchHandler @ 00a80ed4 */
      param_2 = param_2 - 1;
                    /* try { // try from 00a80d20 to 00b80e5f has its CatchHandler @ 00a80eec */
      *param_1 = *param_1 + *param_3 * fVar10;
      param_1[1] = param_1[1] + param_3[1] * *param_5;
      param_1[2] = param_1[2] + param_3[2] * *param_5;
      param_1[3] = param_1[3] + param_3[3] * *param_5;
      param_1[4] = param_1[4] + param_3[4] * *param_5;
      param_1[5] = param_1[5] + param_3[5] * *param_5;
      pfVar1 = param_3 + 6;
      param_3 = param_3 + 7;
      param_1[6] = param_1[6] + *pfVar1 * *param_5;
      param_1 = param_1 + 7;
      fVar10 = *param_6 + *param_5;
      *param_5 = fVar10;
    } while (param_2 != 0);
  }
  else {
                    /* try { // try from 00a80a64 to 00b80a6f has its CatchHandler @ 00a80c28 */
                    /* try { // try from 00a80a70 to 00b80a7b has its CatchHandler @ 00a80c24 */
    do {
      fVar11 = *param_3;
                    /* try { // try from 00a80a7c to 00b80bab has its CatchHandler @ 00a80c3c */
      if (fVar11 <= -16.0) {
        iVar3 = -0x80000000;
      }
      else if (16.0 <= fVar11) {
        iVar3 = 0x7fffffff;
      }
      else {
        fVar2 = 0.5;
        if (fVar11 * 1.3421773e+08 <= 0.0) {
          fVar2 = -0.5;
        }
        iVar3 = (int)(fVar2 + fVar11 * 1.3421773e+08);
      }
      *param_1 = fVar11 * fVar10 + *param_1;
      fVar10 = param_3[1];
      if (fVar10 <= -16.0) {
        iVar4 = -0x80000000;
      }
      else if (16.0 <= fVar10) {
        iVar4 = 0x7fffffff;
      }
      else {
        fVar11 = 0.5;
        if (fVar10 * 1.3421773e+08 <= 0.0) {
          fVar11 = -0.5;
        }
        iVar4 = (int)(fVar11 + fVar10 * 1.3421773e+08);
      }
      param_1[1] = fVar10 * *param_5 + param_1[1];
      fVar10 = param_3[2];
      if (fVar10 <= -16.0) {
        iVar5 = -0x80000000;
      }
      else if (16.0 <= fVar10) {
        iVar5 = 0x7fffffff;
      }
      else {
        fVar11 = 0.5;
        if (fVar10 * 1.3421773e+08 <= 0.0) {
          fVar11 = -0.5;
        }
        iVar5 = (int)(fVar11 + fVar10 * 1.3421773e+08);
      }
      param_1[2] = fVar10 * *param_5 + param_1[2];
      fVar10 = param_3[3];
      if (fVar10 <= -16.0) {
        iVar6 = -0x80000000;
      }
      else if (16.0 <= fVar10) {
        iVar6 = 0x7fffffff;
      }
      else {
        fVar11 = 0.5;
        if (fVar10 * 1.3421773e+08 <= 0.0) {
          fVar11 = -0.5;
        }
        iVar6 = (int)(fVar11 + fVar10 * 1.3421773e+08);
      }
                    /* try { // try from 00a80bac to 00b80c93 has its CatchHandler @ 00a809ec */
      param_1[3] = fVar10 * *param_5 + param_1[3];
      fVar10 = param_3[4];
      if (fVar10 <= -16.0) {
        iVar7 = -0x80000000;
      }
      else if (16.0 <= fVar10) {
        iVar7 = 0x7fffffff;
      }
      else {
        fVar11 = 0.5;
        if (fVar10 * 1.3421773e+08 <= 0.0) {
          fVar11 = -0.5;
        }
        iVar7 = (int)(fVar11 + fVar10 * 1.3421773e+08);
      }
      param_1[4] = fVar10 * *param_5 + param_1[4];
      fVar10 = param_3[5];
      if (fVar10 <= -16.0) {
        iVar8 = -0x80000000;
      }
      else {
                    /* catch() { ... } // from try @ 00a80a70 with catch @ 00a80c24 */
        if (16.0 <= fVar10) {
          iVar8 = 0x7fffffff;
        }
        else {
                    /* catch() { ... } // from try @ 00a80a64 with catch @ 00a80c28 */
                    /* catch() { ... } // from try @ 00a80a44 with catch @ 00a80c2c */
          fVar11 = 0.5;
          if (fVar10 * 1.3421773e+08 <= 0.0) {
            fVar11 = -0.5;
          }
                    /* catch() { ... } // from try @ 00a80a7c with catch @ 00a80c3c */
          iVar8 = (int)(fVar11 + fVar10 * 1.3421773e+08);
        }
      }
      param_1[5] = fVar10 * *param_5 + param_1[5];
      fVar10 = param_3[6];
      if (fVar10 <= -16.0) {
        iVar9 = -0x80000000;
      }
      else if (16.0 <= fVar10) {
        iVar9 = 0x7fffffff;
      }
      else {
        fVar11 = 0.5;
        if (fVar10 * 1.3421773e+08 <= 0.0) {
          fVar11 = -0.5;
        }
        iVar9 = (int)(fVar11 + fVar10 * 1.3421773e+08);
                    /* try { // try from 00a80c94 to 00b80ce7 has its CatchHandler @ 00a80c94
                       catch() { ... } // from try @ 00a80c94 with catch @ 00a80c94
                       catch() { ... } // from try @ 00a80e60 with catch @ 00a80c94 */
      }
      param_1[6] = fVar10 * *param_5 + param_1[6];
      fVar10 = *param_6 + *param_5;
      *param_5 = fVar10;
                    /* try { // try from 00a80ce8 to 00b80cff has its CatchHandler @ 00a80edc */
      *param_4 = *param_4 +
                 (*param_7 >> 0x10) *
                 ((iVar9 + iVar8 + iVar7 + iVar6 + iVar5 + iVar4 + iVar3) / 7 >> 0xc);
      param_2 = param_2 - 1;
      param_3 = param_3 + 7;
      param_1 = param_1 + 7;
                    /* try { // try from 00a80d08 to 00b80d13 has its CatchHandler @ 00a80ed8 */
      *param_7 = *param_7 + param_8;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

