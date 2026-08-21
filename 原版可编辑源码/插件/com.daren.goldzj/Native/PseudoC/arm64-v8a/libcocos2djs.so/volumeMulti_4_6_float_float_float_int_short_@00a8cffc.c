
/* void cocos2d::volumeMulti<4, 6, float, float, float, int, short>(float*, unsigned long, float
   const*, int*, float const*, short) */

void cocos2d::volumeMulti<4,6,float,float,float,int,short>
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
  float fVar9;
  
  if (param_4 == (int *)0x0) {
    do {
      param_2 = param_2 - 1;
      *param_1 = *param_3 * *param_5;
      param_1[1] = param_3[1] * *param_5;
      param_1[2] = param_3[2] * *param_5;
      param_1[3] = param_3[3] * *param_5;
      param_1[4] = param_3[4] * *param_5;
      pfVar1 = param_3 + 5;
      param_3 = param_3 + 6;
      param_1[5] = *pfVar1 * *param_5;
      param_1 = param_1 + 6;
    } while (param_2 != 0);
  }
  else {
    do {
      fVar9 = *param_3;
      if (fVar9 <= -16.0) {
        iVar3 = -0x80000000;
      }
      else {
                    /* try { // try from 00a8d034 to 00b8d14f has its CatchHandler @ 00a8cac8 */
        if (16.0 <= fVar9) {
          iVar3 = 0x7fffffff;
        }
        else {
          fVar2 = 0.5;
          if (fVar9 * 1.3421773e+08 <= 0.0) {
            fVar2 = -0.5;
          }
          iVar3 = (int)(fVar2 + fVar9 * 1.3421773e+08);
        }
      }
      *param_1 = fVar9 * *param_5;
      fVar9 = param_3[1];
      if (fVar9 <= -16.0) {
        iVar4 = -0x80000000;
      }
      else if (16.0 <= fVar9) {
        iVar4 = 0x7fffffff;
      }
      else {
        fVar2 = 0.5;
        if (fVar9 * 1.3421773e+08 <= 0.0) {
          fVar2 = -0.5;
        }
        iVar4 = (int)(fVar2 + fVar9 * 1.3421773e+08);
      }
                    /* catch() { ... } // from try @ 00a8cf20 with catch @ 00a8d0ac
                       catch() { ... } // from try @ 00a8cf9c with catch @ 00a8d0ac */
                    /* catch() { ... } // from try @ 00a8cc78 with catch @ 00a8d0b0 */
      param_1[1] = fVar9 * *param_5;
                    /* catch() { ... } // from try @ 00a8cd8c with catch @ 00a8d0b4 */
      fVar9 = param_3[2];
                    /* catch() { ... } // from try @ 00a8cbac with catch @ 00a8d0b8 */
                    /* catch() { ... } // from try @ 00a8cba0 with catch @ 00a8d0bc
                       catch() { ... } // from try @ 00a8ce24 with catch @ 00a8d0bc */
                    /* catch() { ... } // from try @ 00a8cd64 with catch @ 00a8d0c0
                       catch() { ... } // from try @ 00a8ce6c with catch @ 00a8d0c0 */
                    /* catch() { ... } // from try @ 00a8cc34 with catch @ 00a8d0c4
                       catch() { ... } // from try @ 00a8ceb4 with catch @ 00a8d0c4 */
      if (fVar9 <= -16.0) {
        iVar5 = -0x80000000;
      }
      else {
                    /* catch() { ... } // from try @ 00a8cb4c with catch @ 00a8d0c8 */
                    /* catch() { ... } // from try @ 00a8cb40 with catch @ 00a8d0cc */
        if (16.0 <= fVar9) {
          iVar5 = 0x7fffffff;
        }
        else {
                    /* catch() { ... } // from try @ 00a8ccf8 with catch @ 00a8d0d0
                       catch() { ... } // from try @ 00a8cf54 with catch @ 00a8d0d0 */
          fVar2 = 0.5;
          if (fVar9 * 1.3421773e+08 <= 0.0) {
            fVar2 = -0.5;
          }
          iVar5 = (int)(fVar2 + fVar9 * 1.3421773e+08);
                    /* catch() { ... } // from try @ 00a8cb20 with catch @ 00a8d0e8 */
        }
      }
                    /* catch() { ... } // from try @ 00a8cb58 with catch @ 00a8d0f8
                       catch() { ... } // from try @ 00a8ce04 with catch @ 00a8d0f8
                       catch() { ... } // from try @ 00a8cff8 with catch @ 00a8d0f8 */
      param_1[2] = fVar9 * *param_5;
      fVar9 = param_3[3];
      if (fVar9 <= -16.0) {
        iVar6 = -0x80000000;
      }
      else if (16.0 <= fVar9) {
        iVar6 = 0x7fffffff;
      }
      else {
        fVar2 = 0.5;
        if (fVar9 * 1.3421773e+08 <= 0.0) {
          fVar2 = -0.5;
        }
        iVar6 = (int)(fVar2 + fVar9 * 1.3421773e+08);
      }
      param_1[3] = fVar9 * *param_5;
      fVar9 = param_3[4];
                    /* try { // try from 00a8d150 to 00b8d1a3 has its CatchHandler @ 00a8d150
                       catch() { ... } // from try @ 00a8d150 with catch @ 00a8d150
                       catch() { ... } // from try @ 00a8d31c with catch @ 00a8d150 */
      if (fVar9 <= -16.0) {
        iVar7 = -0x80000000;
      }
      else if (16.0 <= fVar9) {
        iVar7 = 0x7fffffff;
      }
      else {
        fVar2 = 0.5;
        if (fVar9 * 1.3421773e+08 <= 0.0) {
          fVar2 = -0.5;
        }
        iVar7 = (int)(fVar2 + fVar9 * 1.3421773e+08);
      }
      param_1[4] = fVar9 * *param_5;
      fVar9 = param_3[5];
                    /* try { // try from 00a8d1a4 to 00b8d1bb has its CatchHandler @ 00a8d398 */
      if (fVar9 <= -16.0) {
                    /* try { // try from 00a8d1d0 to 00b8d1db has its CatchHandler @ 00a8d390 */
        iVar8 = -0x80000000;
      }
      else if (16.0 <= fVar9) {
        iVar8 = 0x7fffffff;
      }
      else {
        fVar2 = 0.5;
        if (fVar9 * 1.3421773e+08 <= 0.0) {
          fVar2 = -0.5;
        }
                    /* try { // try from 00a8d1c4 to 00b8d1cf has its CatchHandler @ 00a8d394 */
        iVar8 = (int)(fVar2 + fVar9 * 1.3421773e+08);
      }
                    /* try { // try from 00a8d1dc to 00b8d31b has its CatchHandler @ 00a8d3a8 */
      param_1[5] = fVar9 * *param_5;
      param_2 = param_2 - 1;
      param_3 = param_3 + 6;
      *param_4 = *param_4 +
                 ((iVar8 + iVar7 + iVar6 + iVar5 + iVar4 + iVar3) / 6 >> 0xc) * (int)param_6;
      param_1 = param_1 + 6;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

