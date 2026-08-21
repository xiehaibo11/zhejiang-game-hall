
/* void cocos2d::volumeRampMulti<4, 6, float, float, float, int, int>(float*, unsigned long, float
   const*, int*, float*, float const*, int*, int) */

void cocos2d::volumeRampMulti<4,6,float,float,float,int,int>
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
  float fVar9;
  float fVar10;
  
  fVar9 = *param_5;
  if (param_4 == (int *)0x0) {
    do {
      param_2 = param_2 - 1;
      *param_1 = *param_3 * fVar9;
                    /* try { // try from 00a8c40c to 00b8c413 has its CatchHandler @ 00a8c7dc */
      param_1[1] = param_3[1] * *param_5;
                    /* try { // try from 00a8c41c to 00b8c42b has its CatchHandler @ 00a8c764 */
      param_1[2] = param_3[2] * *param_5;
      param_1[3] = param_3[3] * *param_5;
      param_1[4] = param_3[4] * *param_5;
      pfVar1 = param_3 + 5;
      param_3 = param_3 + 6;
      param_1[5] = *pfVar1 * *param_5;
      param_1 = param_1 + 6;
      fVar9 = *param_6 + *param_5;
      *param_5 = fVar9;
    } while (param_2 != 0);
  }
  else {
                    /* catch() { ... } // from try @ 00a8c03c with catch @ 00a8c1bc */
                    /* catch() { ... } // from try @ 00a8c030 with catch @ 00a8c1c0 */
                    /* catch() { ... } // from try @ 00a8c010 with catch @ 00a8c1c4 */
                    /* catch() { ... } // from try @ 00a8c048 with catch @ 00a8c1d4 */
    do {
      fVar10 = *param_3;
      if (fVar10 <= -16.0) {
        iVar3 = -0x80000000;
      }
      else if (16.0 <= fVar10) {
        iVar3 = 0x7fffffff;
      }
      else {
        fVar2 = 0.5;
        if (fVar10 * 1.3421773e+08 <= 0.0) {
          fVar2 = -0.5;
        }
        iVar3 = (int)(fVar2 + fVar10 * 1.3421773e+08);
      }
      *param_1 = fVar10 * fVar9;
      fVar9 = param_3[1];
      if (fVar9 <= -16.0) {
        iVar4 = -0x80000000;
      }
      else {
                    /* try { // try from 00a8c22c to 00b8c287 has its CatchHandler @ 00a8c22c
                       catch() { ... } // from try @ 00a8c22c with catch @ 00a8c22c
                       catch() { ... } // from try @ 00a8c4d0 with catch @ 00a8c22c
                       catch() { ... } // from try @ 00a8c640 with catch @ 00a8c22c */
        if (16.0 <= fVar9) {
          iVar4 = 0x7fffffff;
        }
        else {
          fVar10 = 0.5;
          if (fVar9 * 1.3421773e+08 <= 0.0) {
            fVar10 = -0.5;
          }
          iVar4 = (int)(fVar10 + fVar9 * 1.3421773e+08);
        }
      }
      param_1[1] = fVar9 * *param_5;
      fVar9 = param_3[2];
      if (fVar9 <= -16.0) {
        iVar5 = -0x80000000;
      }
      else if (16.0 <= fVar9) {
        iVar5 = 0x7fffffff;
      }
      else {
                    /* try { // try from 00a8c288 to 00b8c29f has its CatchHandler @ 00a8c814 */
        fVar10 = 0.5;
        if (fVar9 * 1.3421773e+08 <= 0.0) {
          fVar10 = -0.5;
        }
        iVar5 = (int)(fVar10 + fVar9 * 1.3421773e+08);
      }
                    /* try { // try from 00a8c2a8 to 00b8c2b3 has its CatchHandler @ 00a8c810 */
      param_1[2] = fVar9 * *param_5;
      fVar9 = param_3[3];
                    /* try { // try from 00a8c2b4 to 00b8c2bf has its CatchHandler @ 00a8c80c */
                    /* try { // try from 00a8c2c0 to 00b8c2c7 has its CatchHandler @ 00a8c824 */
      if (fVar9 <= -16.0) {
        iVar6 = -0x80000000;
      }
      else if (16.0 <= fVar9) {
        iVar6 = 0x7fffffff;
      }
      else {
        fVar10 = 0.5;
        if (fVar9 * 1.3421773e+08 <= 0.0) {
          fVar10 = -0.5;
        }
        iVar6 = (int)(fVar10 + fVar9 * 1.3421773e+08);
      }
                    /* try { // try from 00a8c2f4 to 00b8c2fb has its CatchHandler @ 00a8c7f4 */
      param_1[3] = fVar9 * *param_5;
      fVar9 = param_3[4];
      if (fVar9 <= -16.0) {
        iVar7 = -0x80000000;
      }
      else if (16.0 <= fVar9) {
        iVar7 = 0x7fffffff;
      }
      else {
                    /* try { // try from 00a8c318 to 00b8c31f has its CatchHandler @ 00a8c7a0 */
                    /* try { // try from 00a8c324 to 00b8c33b has its CatchHandler @ 00a8c72c */
        fVar10 = 0.5;
        if (fVar9 * 1.3421773e+08 <= 0.0) {
          fVar10 = -0.5;
        }
        iVar7 = (int)(fVar10 + fVar9 * 1.3421773e+08);
      }
                    /* try { // try from 00a8c344 to 00b8c34b has its CatchHandler @ 00a8c70c */
      param_1[4] = fVar9 * *param_5;
      fVar9 = param_3[5];
                    /* try { // try from 00a8c34c to 00b8c357 has its CatchHandler @ 00a8c714 */
                    /* try { // try from 00a8c358 to 00b8c367 has its CatchHandler @ 00a8c708 */
      if (fVar9 <= -16.0) {
        iVar8 = -0x80000000;
      }
      else if (16.0 <= fVar9) {
        iVar8 = 0x7fffffff;
      }
      else {
                    /* try { // try from 00a8c36c to 00b8c377 has its CatchHandler @ 00a8c700 */
        fVar10 = 0.5;
        if (fVar9 * 1.3421773e+08 <= 0.0) {
          fVar10 = -0.5;
        }
                    /* try { // try from 00a8c378 to 00b8c387 has its CatchHandler @ 00a8c6e8 */
        iVar8 = (int)(fVar10 + fVar9 * 1.3421773e+08);
      }
                    /* try { // try from 00a8c38c to 00b8c397 has its CatchHandler @ 00a8c6d8 */
      param_1[5] = fVar9 * *param_5;
                    /* try { // try from 00a8c39c to 00b8c3a3 has its CatchHandler @ 00a8c6c8 */
      fVar9 = *param_6 + *param_5;
      *param_5 = fVar9;
                    /* try { // try from 00a8c3b8 to 00b8c3c3 has its CatchHandler @ 00a8c6b8 */
                    /* try { // try from 00a8c3c8 to 00b8c3cf has its CatchHandler @ 00a8c6a8 */
      *param_4 = *param_4 +
                 (*param_7 >> 0x10) * ((iVar8 + iVar7 + iVar6 + iVar5 + iVar4 + iVar3) / 6 >> 0xc);
      param_2 = param_2 - 1;
      param_3 = param_3 + 6;
      param_1 = param_1 + 6;
      *param_7 = *param_7 + param_8;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

