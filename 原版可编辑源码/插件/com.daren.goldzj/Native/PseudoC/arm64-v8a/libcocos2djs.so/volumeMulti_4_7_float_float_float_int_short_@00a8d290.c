
/* void cocos2d::volumeMulti<4, 7, float, float, float, int, short>(float*, unsigned long, float
   const*, int*, float const*, short) */

void cocos2d::volumeMulti<4,7,float,float,float,int,short>
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
  float fVar10;
  
  if (param_4 == (int *)0x0) {
    do {
      param_2 = param_2 - 1;
      *param_1 = *param_3 * *param_5;
      param_1[1] = param_3[1] * *param_5;
      param_1[2] = param_3[2] * *param_5;
      param_1[3] = param_3[3] * *param_5;
      param_1[4] = param_3[4] * *param_5;
      param_1[5] = param_3[5] * *param_5;
      pfVar1 = param_3 + 6;
                    /* try { // try from 00a8d56c to 00b8d64f has its CatchHandler @ 00a8d400 */
      param_3 = param_3 + 7;
      param_1[6] = *pfVar1 * *param_5;
      param_1 = param_1 + 7;
    } while (param_2 != 0);
  }
  else {
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
      *param_1 = fVar10 * *param_5;
      fVar10 = param_3[1];
      if (fVar10 <= -16.0) {
        iVar4 = -0x80000000;
      }
      else if (16.0 <= fVar10) {
        iVar4 = 0x7fffffff;
      }
      else {
                    /* try { // try from 00a8d31c to 00b8d3ff has its CatchHandler @ 00a8d150 */
        fVar2 = 0.5;
        if (fVar10 * 1.3421773e+08 <= 0.0) {
          fVar2 = -0.5;
        }
        iVar4 = (int)(fVar2 + fVar10 * 1.3421773e+08);
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
        fVar2 = 0.5;
        if (fVar10 * 1.3421773e+08 <= 0.0) {
          fVar2 = -0.5;
        }
        iVar5 = (int)(fVar2 + fVar10 * 1.3421773e+08);
      }
                    /* catch() { ... } // from try @ 00a8d1d0 with catch @ 00a8d390 */
      param_1[2] = fVar10 * *param_5;
                    /* catch() { ... } // from try @ 00a8d1c4 with catch @ 00a8d394 */
      fVar10 = param_3[3];
                    /* catch() { ... } // from try @ 00a8d1a4 with catch @ 00a8d398 */
      if (fVar10 <= -16.0) {
        iVar6 = -0x80000000;
      }
      else {
                    /* catch() { ... } // from try @ 00a8d1dc with catch @ 00a8d3a8 */
        if (16.0 <= fVar10) {
          iVar6 = 0x7fffffff;
        }
        else {
          fVar2 = 0.5;
          if (fVar10 * 1.3421773e+08 <= 0.0) {
            fVar2 = -0.5;
          }
          iVar6 = (int)(fVar2 + fVar10 * 1.3421773e+08);
        }
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
                    /* try { // try from 00a8d400 to 00b8d453 has its CatchHandler @ 00a8d400
                       catch() { ... } // from try @ 00a8d400 with catch @ 00a8d400
                       catch() { ... } // from try @ 00a8d56c with catch @ 00a8d400 */
        fVar2 = 0.5;
        if (fVar10 * 1.3421773e+08 <= 0.0) {
          fVar2 = -0.5;
        }
        iVar7 = (int)(fVar2 + fVar10 * 1.3421773e+08);
      }
      param_1[4] = fVar10 * *param_5;
      fVar10 = param_3[5];
      if (fVar10 <= -16.0) {
        iVar8 = -0x80000000;
      }
      else if (16.0 <= fVar10) {
        iVar8 = 0x7fffffff;
      }
      else {
                    /* try { // try from 00a8d454 to 00b8d46b has its CatchHandler @ 00a8d5e8 */
        fVar2 = 0.5;
        if (fVar10 * 1.3421773e+08 <= 0.0) {
          fVar2 = -0.5;
        }
        iVar8 = (int)(fVar2 + fVar10 * 1.3421773e+08);
      }
                    /* try { // try from 00a8d474 to 00b8d47f has its CatchHandler @ 00a8d5e4 */
      param_1[5] = fVar10 * *param_5;
      fVar10 = param_3[6];
                    /* try { // try from 00a8d480 to 00b8d48b has its CatchHandler @ 00a8d5e0 */
      if (fVar10 <= -16.0) {
        iVar9 = -0x80000000;
      }
      else {
                    /* try { // try from 00a8d48c to 00b8d56b has its CatchHandler @ 00a8d5f8 */
        if (16.0 <= fVar10) {
          iVar9 = 0x7fffffff;
        }
        else {
          fVar2 = 0.5;
          if (fVar10 * 1.3421773e+08 <= 0.0) {
            fVar2 = -0.5;
          }
          iVar9 = (int)(fVar2 + fVar10 * 1.3421773e+08);
        }
      }
      param_1[6] = fVar10 * *param_5;
      param_2 = param_2 - 1;
      param_3 = param_3 + 7;
      *param_4 = *param_4 +
                 ((iVar9 + iVar8 + iVar7 + iVar6 + iVar5 + iVar4 + iVar3) / 7 >> 0xc) * (int)param_6
      ;
      param_1 = param_1 + 7;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

