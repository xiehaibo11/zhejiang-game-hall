
/* void cocos2d::volumeRampMulti<4, 8, float, float, float, int, int>(float*, unsigned long, float
   const*, int*, float*, float const*, int*, int) */

void cocos2d::volumeRampMulti<4,8,float,float,float,int,int>
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
  int iVar10;
  float fVar11;
  float fVar12;
  
  fVar11 = *param_5;
  if (param_4 == (int *)0x0) {
    do {
                    /* catch() { ... } // from try @ 00a8c8f0 with catch @ 00a8ca5c */
                    /* catch() { ... } // from try @ 00a8c8d0 with catch @ 00a8ca60 */
      param_2 = param_2 - 1;
      *param_1 = *param_3 * fVar11;
                    /* catch() { ... } // from try @ 00a8c908 with catch @ 00a8ca70 */
      param_1[1] = param_3[1] * *param_5;
      param_1[2] = param_3[2] * *param_5;
      param_1[3] = param_3[3] * *param_5;
      param_1[4] = param_3[4] * *param_5;
      param_1[5] = param_3[5] * *param_5;
                    /* try { // try from 00a8cac8 to 00b8cb1f has its CatchHandler @ 00a8cac8
                       catch() { ... } // from try @ 00a8cac8 with catch @ 00a8cac8
                       catch() { ... } // from try @ 00a8d034 with catch @ 00a8cac8 */
      param_1[6] = param_3[6] * *param_5;
      pfVar1 = param_3 + 7;
      param_3 = param_3 + 8;
      param_1[7] = *pfVar1 * *param_5;
      param_1 = param_1 + 8;
      fVar11 = *param_6 + *param_5;
      *param_5 = fVar11;
    } while (param_2 != 0);
  }
  else {
                    /* catch() { ... } // from try @ 00a8c318 with catch @ 00a8c7a0
                       catch() { ... } // from try @ 00a8c60c with catch @ 00a8c7a0 */
    do {
      fVar12 = *param_3;
      if (fVar12 <= -16.0) {
        iVar3 = -0x80000000;
      }
      else if (16.0 <= fVar12) {
        iVar3 = 0x7fffffff;
      }
      else {
        fVar2 = 0.5;
        if (fVar12 * 1.3421773e+08 <= 0.0) {
          fVar2 = -0.5;
        }
        iVar3 = (int)(fVar2 + fVar12 * 1.3421773e+08);
                    /* catch() { ... } // from try @ 00a8c40c with catch @ 00a8c7dc */
      }
      *param_1 = fVar12 * fVar11;
                    /* catch() { ... } // from try @ 00a8c2f4 with catch @ 00a8c7f4 */
      fVar11 = param_3[1];
      if (fVar11 <= -16.0) {
        iVar4 = -0x80000000;
      }
      else if (16.0 <= fVar11) {
        iVar4 = 0x7fffffff;
      }
      else {
                    /* catch() { ... } // from try @ 00a8c2b4 with catch @ 00a8c80c */
                    /* catch() { ... } // from try @ 00a8c2a8 with catch @ 00a8c810 */
                    /* catch() { ... } // from try @ 00a8c288 with catch @ 00a8c814 */
        fVar12 = 0.5;
        if (fVar11 * 1.3421773e+08 <= 0.0) {
          fVar12 = -0.5;
        }
        iVar4 = (int)(fVar12 + fVar11 * 1.3421773e+08);
                    /* catch() { ... } // from try @ 00a8c2c0 with catch @ 00a8c824
                       catch() { ... } // from try @ 00a8c47c with catch @ 00a8c824 */
      }
      param_1[1] = fVar11 * *param_5;
      fVar11 = param_3[2];
      if (fVar11 <= -16.0) {
        iVar5 = -0x80000000;
      }
      else if (16.0 <= fVar11) {
                    /* try { // try from 00a8c87c to 00b8c8cf has its CatchHandler @ 00a8c87c
                       catch() { ... } // from try @ 00a8c87c with catch @ 00a8c87c
                       catch() { ... } // from try @ 00a8c9e4 with catch @ 00a8c87c */
        iVar5 = 0x7fffffff;
      }
      else {
        fVar12 = 0.5;
        if (fVar11 * 1.3421773e+08 <= 0.0) {
          fVar12 = -0.5;
        }
        iVar5 = (int)(fVar12 + fVar11 * 1.3421773e+08);
      }
      param_1[2] = fVar11 * *param_5;
      fVar11 = param_3[3];
      if (fVar11 <= -16.0) {
        iVar6 = -0x80000000;
      }
      else if (16.0 <= fVar11) {
        iVar6 = 0x7fffffff;
      }
      else {
        fVar12 = 0.5;
        if (fVar11 * 1.3421773e+08 <= 0.0) {
          fVar12 = -0.5;
        }
        iVar6 = (int)(fVar12 + fVar11 * 1.3421773e+08);
      }
                    /* try { // try from 00a8c8d0 to 00b8c8e7 has its CatchHandler @ 00a8ca60 */
      param_1[3] = fVar11 * *param_5;
      fVar11 = param_3[4];
      if (fVar11 <= -16.0) {
        iVar7 = -0x80000000;
      }
      else if (16.0 <= fVar11) {
        iVar7 = 0x7fffffff;
      }
      else {
                    /* try { // try from 00a8c8f0 to 00b8c8fb has its CatchHandler @ 00a8ca5c */
                    /* try { // try from 00a8c8fc to 00b8c907 has its CatchHandler @ 00a8ca58 */
        fVar12 = 0.5;
        if (fVar11 * 1.3421773e+08 <= 0.0) {
          fVar12 = -0.5;
        }
        iVar7 = (int)(fVar12 + fVar11 * 1.3421773e+08);
                    /* try { // try from 00a8c908 to 00b8c9e3 has its CatchHandler @ 00a8ca70 */
      }
      param_1[4] = fVar11 * *param_5;
      fVar11 = param_3[5];
      if (fVar11 <= -16.0) {
        iVar8 = -0x80000000;
      }
      else if (16.0 <= fVar11) {
        iVar8 = 0x7fffffff;
      }
      else {
        fVar12 = 0.5;
        if (fVar11 * 1.3421773e+08 <= 0.0) {
          fVar12 = -0.5;
        }
        iVar8 = (int)(fVar12 + fVar11 * 1.3421773e+08);
      }
      param_1[5] = fVar11 * *param_5;
      fVar11 = param_3[6];
      if (fVar11 <= -16.0) {
        iVar9 = -0x80000000;
      }
      else if (16.0 <= fVar11) {
        iVar9 = 0x7fffffff;
      }
      else {
        fVar12 = 0.5;
        if (fVar11 * 1.3421773e+08 <= 0.0) {
          fVar12 = -0.5;
        }
        iVar9 = (int)(fVar12 + fVar11 * 1.3421773e+08);
      }
      param_1[6] = fVar11 * *param_5;
      fVar11 = param_3[7];
      if (fVar11 <= -16.0) {
        iVar10 = -0x80000000;
      }
      else if (16.0 <= fVar11) {
        iVar10 = 0x7fffffff;
      }
      else {
        fVar12 = 0.5;
        if (fVar11 * 1.3421773e+08 <= 0.0) {
          fVar12 = -0.5;
        }
                    /* try { // try from 00a8c9e4 to 00b8cac7 has its CatchHandler @ 00a8c87c */
        iVar10 = (int)(fVar12 + fVar11 * 1.3421773e+08);
      }
      param_1[7] = fVar11 * *param_5;
      iVar10 = iVar10 + iVar9 + iVar8 + iVar7 + iVar6 + iVar5 + iVar4 + iVar3;
      fVar11 = *param_6 + *param_5;
      *param_5 = fVar11;
      iVar3 = iVar10 + 7;
      if (-1 < iVar10) {
        iVar3 = iVar10;
      }
      *param_4 = *param_4 + (*param_7 >> 0x10) * (iVar3 >> 0xf);
      param_3 = param_3 + 8;
      param_2 = param_2 - 1;
      param_1 = param_1 + 8;
      *param_7 = *param_7 + param_8;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

