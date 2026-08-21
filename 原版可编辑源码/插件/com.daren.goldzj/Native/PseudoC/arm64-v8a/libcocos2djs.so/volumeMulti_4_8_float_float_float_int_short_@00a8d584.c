
/* void cocos2d::volumeMulti<4, 8, float, float, float, int, short>(float*, unsigned long, float
   const*, int*, float const*, short) */

void cocos2d::volumeMulti<4,8,float,float,float,int,short>
               (float *param_1,ulong param_2,float *param_3,int *param_4,float *param_5,
               short param_6)

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
  
  if (param_4 == (int *)0x0) {
    do {
                    /* catch() { ... } // from try @ 00a8d6d0 with catch @ 00a8d830 */
                    /* catch() { ... } // from try @ 00a8d6c4 with catch @ 00a8d834 */
                    /* catch() { ... } // from try @ 00a8d6a4 with catch @ 00a8d838 */
      param_2 = param_2 - 1;
      *param_1 = *param_3 * *param_5;
                    /* catch() { ... } // from try @ 00a8d6dc with catch @ 00a8d848 */
      param_1[1] = param_3[1] * *param_5;
      param_1[2] = param_3[2] * *param_5;
      param_1[3] = param_3[3] * *param_5;
      param_1[4] = param_3[4] * *param_5;
      param_1[5] = param_3[5] * *param_5;
                    /* try { // try from 00a8d8a0 to 00b8d8f7 has its CatchHandler @ 00a8d8a0
                       catch() { ... } // from try @ 00a8d8a0 with catch @ 00a8d8a0
                       catch() { ... } // from try @ 00a8da6c with catch @ 00a8d8a0 */
      param_1[6] = param_3[6] * *param_5;
      pfVar1 = param_3 + 7;
      param_3 = param_3 + 8;
      param_1[7] = *pfVar1 * *param_5;
      param_1 = param_1 + 8;
    } while (param_2 != 0);
  }
  else {
    do {
      fVar11 = *param_3;
      if (fVar11 <= -16.0) {
        iVar3 = -0x80000000;
      }
      else if (16.0 <= fVar11) {
                    /* catch() { ... } // from try @ 00a8d480 with catch @ 00a8d5e0 */
        iVar3 = 0x7fffffff;
      }
      else {
        fVar2 = 0.5;
        if (fVar11 * 1.3421773e+08 <= 0.0) {
          fVar2 = -0.5;
        }
        iVar3 = (int)(fVar2 + fVar11 * 1.3421773e+08);
      }
                    /* catch() { ... } // from try @ 00a8d474 with catch @ 00a8d5e4 */
                    /* catch() { ... } // from try @ 00a8d454 with catch @ 00a8d5e8 */
      *param_1 = fVar11 * *param_5;
      fVar11 = param_3[1];
                    /* catch() { ... } // from try @ 00a8d48c with catch @ 00a8d5f8 */
      if (fVar11 <= -16.0) {
        iVar4 = -0x80000000;
      }
      else if (16.0 <= fVar11) {
        iVar4 = 0x7fffffff;
      }
      else {
        fVar2 = 0.5;
        if (fVar11 * 1.3421773e+08 <= 0.0) {
          fVar2 = -0.5;
        }
        iVar4 = (int)(fVar2 + fVar11 * 1.3421773e+08);
      }
      param_1[1] = fVar11 * *param_5;
      fVar11 = param_3[2];
      if (fVar11 <= -16.0) {
        iVar5 = -0x80000000;
      }
      else if (16.0 <= fVar11) {
        iVar5 = 0x7fffffff;
      }
      else {
                    /* try { // try from 00a8d650 to 00b8d6a3 has its CatchHandler @ 00a8d650
                       catch() { ... } // from try @ 00a8d650 with catch @ 00a8d650
                       catch() { ... } // from try @ 00a8d7bc with catch @ 00a8d650 */
        fVar2 = 0.5;
        if (fVar11 * 1.3421773e+08 <= 0.0) {
          fVar2 = -0.5;
        }
        iVar5 = (int)(fVar2 + fVar11 * 1.3421773e+08);
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
                    /* try { // try from 00a8d6a4 to 00b8d6bb has its CatchHandler @ 00a8d838 */
        fVar2 = 0.5;
        if (fVar11 * 1.3421773e+08 <= 0.0) {
          fVar2 = -0.5;
        }
        iVar6 = (int)(fVar2 + fVar11 * 1.3421773e+08);
      }
                    /* try { // try from 00a8d6c4 to 00b8d6cf has its CatchHandler @ 00a8d834 */
      param_1[3] = fVar11 * *param_5;
      fVar11 = param_3[4];
                    /* try { // try from 00a8d6d0 to 00b8d6db has its CatchHandler @ 00a8d830 */
                    /* try { // try from 00a8d6dc to 00b8d7bb has its CatchHandler @ 00a8d848 */
      if (fVar11 <= -16.0) {
        iVar7 = -0x80000000;
      }
      else if (16.0 <= fVar11) {
        iVar7 = 0x7fffffff;
      }
      else {
        fVar2 = 0.5;
        if (fVar11 * 1.3421773e+08 <= 0.0) {
          fVar2 = -0.5;
        }
        iVar7 = (int)(fVar2 + fVar11 * 1.3421773e+08);
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
        fVar2 = 0.5;
        if (fVar11 * 1.3421773e+08 <= 0.0) {
          fVar2 = -0.5;
        }
        iVar8 = (int)(fVar2 + fVar11 * 1.3421773e+08);
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
        fVar2 = 0.5;
        if (fVar11 * 1.3421773e+08 <= 0.0) {
          fVar2 = -0.5;
        }
        iVar9 = (int)(fVar2 + fVar11 * 1.3421773e+08);
      }
      param_1[6] = fVar11 * *param_5;
      fVar11 = param_3[7];
                    /* try { // try from 00a8d7bc to 00b8d89f has its CatchHandler @ 00a8d650 */
      if (fVar11 <= -16.0) {
        iVar10 = -0x80000000;
      }
      else if (16.0 <= fVar11) {
        iVar10 = 0x7fffffff;
      }
      else {
        fVar2 = 0.5;
        if (fVar11 * 1.3421773e+08 <= 0.0) {
          fVar2 = -0.5;
        }
        iVar10 = (int)(fVar2 + fVar11 * 1.3421773e+08);
      }
      param_1[7] = fVar11 * *param_5;
      iVar10 = iVar10 + iVar9 + iVar8 + iVar7 + iVar6 + iVar5 + iVar4 + iVar3;
      iVar3 = iVar10 + 7;
      if (-1 < iVar10) {
        iVar3 = iVar10;
      }
      param_3 = param_3 + 8;
      param_2 = param_2 - 1;
      *param_4 = *param_4 + (iVar3 >> 0xf) * (int)param_6;
      param_1 = param_1 + 8;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

