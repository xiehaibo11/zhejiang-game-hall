
/* void cocos2d::volumeRampMulti<4, 7, float, float, float, int, int>(float*, unsigned long, float
   const*, int*, float*, float const*, int*, int) */

void cocos2d::volumeRampMulti<4,7,float,float,float,int,int>
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
                    /* catch() { ... } // from try @ 00a8c36c with catch @ 00a8c700 */
      param_2 = param_2 - 1;
                    /* catch() { ... } // from try @ 00a8c358 with catch @ 00a8c708 */
                    /* catch() { ... } // from try @ 00a8c344 with catch @ 00a8c70c */
      *param_1 = *param_3 * fVar10;
                    /* catch() { ... } // from try @ 00a8c34c with catch @ 00a8c714 */
      param_1[1] = param_3[1] * *param_5;
                    /* catch() { ... } // from try @ 00a8c324 with catch @ 00a8c72c */
      param_1[2] = param_3[2] * *param_5;
                    /* catch() { ... } // from try @ 00a8c630 with catch @ 00a8c730 */
      param_1[3] = param_3[3] * *param_5;
      param_1[4] = param_3[4] * *param_5;
      param_1[5] = param_3[5] * *param_5;
      pfVar1 = param_3 + 6;
                    /* catch() { ... } // from try @ 00a8c41c with catch @ 00a8c764 */
      param_3 = param_3 + 7;
      param_1[6] = *pfVar1 * *param_5;
      param_1 = param_1 + 7;
      fVar10 = *param_6 + *param_5;
      *param_5 = fVar10;
    } while (param_2 != 0);
  }
  else {
                    /* try { // try from 00a8c47c to 00b8c4cf has its CatchHandler @ 00a8c824 */
    do {
      fVar11 = *param_3;
      if (fVar11 <= -16.0) {
        iVar3 = -0x80000000;
      }
      else if (16.0 <= fVar11) {
                    /* try { // try from 00a8c4d0 to 00b8c60b has its CatchHandler @ 00a8c22c */
        iVar3 = 0x7fffffff;
      }
      else {
        fVar2 = 0.5;
        if (fVar11 * 1.3421773e+08 <= 0.0) {
          fVar2 = -0.5;
        }
        iVar3 = (int)(fVar2 + fVar11 * 1.3421773e+08);
      }
      *param_1 = fVar11 * fVar10;
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
      param_1[1] = fVar10 * *param_5;
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
      param_1[2] = fVar10 * *param_5;
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
      param_1[3] = fVar10 * *param_5;
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
      param_1[4] = fVar10 * *param_5;
      fVar10 = param_3[5];
                    /* try { // try from 00a8c60c to 00b8c62f has its CatchHandler @ 00a8c7a0 */
      if (fVar10 <= -16.0) {
                    /* try { // try from 00a8c640 to 00b8c87b has its CatchHandler @ 00a8c22c */
        iVar8 = -0x80000000;
      }
      else if (16.0 <= fVar10) {
        iVar8 = 0x7fffffff;
      }
      else {
                    /* try { // try from 00a8c630 to 00b8c63f has its CatchHandler @ 00a8c730 */
        fVar11 = 0.5;
        if (fVar10 * 1.3421773e+08 <= 0.0) {
          fVar11 = -0.5;
        }
        iVar8 = (int)(fVar11 + fVar10 * 1.3421773e+08);
      }
      param_1[5] = fVar10 * *param_5;
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
      }
      param_1[6] = fVar10 * *param_5;
                    /* catch() { ... } // from try @ 00a8c3c8 with catch @ 00a8c6a8 */
      fVar10 = *param_6 + *param_5;
                    /* catch() { ... } // from try @ 00a8c3b8 with catch @ 00a8c6b8 */
      *param_5 = fVar10;
                    /* catch() { ... } // from try @ 00a8c39c with catch @ 00a8c6c8 */
                    /* catch() { ... } // from try @ 00a8c38c with catch @ 00a8c6d8 */
      *param_4 = *param_4 +
                 (*param_7 >> 0x10) *
                 ((iVar9 + iVar8 + iVar7 + iVar6 + iVar5 + iVar4 + iVar3) / 7 >> 0xc);
      param_2 = param_2 - 1;
                    /* catch() { ... } // from try @ 00a8c378 with catch @ 00a8c6e8 */
      param_3 = param_3 + 7;
      param_1 = param_1 + 7;
      *param_7 = *param_7 + param_8;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

