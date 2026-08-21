
/* void cocos2d::volumeRampMulti<1, 7, float, float, float, int, int>(float*, unsigned long, float
   const*, int*, float*, float const*, int*, int) */

void cocos2d::volumeRampMulti<1,7,float,float,float,int,int>
               (float *param_1,ulong param_2,float *param_3,int *param_4,float *param_5,
               float *param_6,int *param_7,int param_8)

{
  float fVar1;
  int iVar2;
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
      *param_1 = *param_1 + *param_3 * *param_5;
      *param_5 = *param_6 + *param_5;
      param_1[1] = param_1[1] + *param_3 * param_5[1];
                    /* try { // try from 00a85df8 to 00b85e3b has its CatchHandler @ 00a85e6c */
      param_5[1] = param_6[1] + param_5[1];
      param_1[2] = param_1[2] + *param_3 * param_5[2];
      param_5[2] = param_6[2] + param_5[2];
      param_1[3] = param_1[3] + *param_3 * param_5[3];
                    /* try { // try from 00a85e3c to 00b85f27 has its CatchHandler @ 00a85b50 */
      param_5[3] = param_6[3] + param_5[3];
      param_1[4] = param_1[4] + *param_3 * param_5[4];
                    /* catch() { ... } // from try @ 00a85bd8 with catch @ 00a85e64 */
                    /* catch() { ... } // from try @ 00a85bcc with catch @ 00a85e68 */
      param_5[4] = param_6[4] + param_5[4];
                    /* catch() { ... } // from try @ 00a85c34 with catch @ 00a85e6c
                       catch() { ... } // from try @ 00a85df8 with catch @ 00a85e6c */
      param_1[5] = param_1[5] + *param_3 * param_5[5];
      param_5[5] = param_6[5] + param_5[5];
      param_1[6] = param_1[6] + *param_3 * param_5[6];
      param_1 = param_1 + 7;
      param_5[6] = param_6[6] + param_5[6];
      param_3 = param_3 + 1;
    } while (param_2 != 0);
  }
  else {
    do {
      fVar9 = *param_3;
      if (fVar9 <= -16.0) {
                    /* catch() { ... } // from try @ 00a85998 with catch @ 00a85af8 */
        iVar2 = -0x80000000;
      }
      else if (16.0 <= fVar9) {
        iVar2 = 0x7fffffff;
      }
      else {
                    /* catch() { ... } // from try @ 00a8598c with catch @ 00a85ae0 */
                    /* catch() { ... } // from try @ 00a85980 with catch @ 00a85ae4 */
                    /* catch() { ... } // from try @ 00a85960 with catch @ 00a85ae8 */
        fVar1 = 0.5;
        if (fVar9 * 1.3421773e+08 <= 0.0) {
          fVar1 = -0.5;
        }
        iVar2 = (int)(fVar1 + fVar9 * 1.3421773e+08);
      }
      *param_1 = fVar9 * *param_5 + *param_1;
      *param_5 = *param_6 + *param_5;
      fVar9 = *param_3;
      if (fVar9 <= -16.0) {
        iVar3 = -0x80000000;
      }
      else if (16.0 <= fVar9) {
        iVar3 = 0x7fffffff;
      }
      else {
        fVar1 = 0.5;
        if (fVar9 * 1.3421773e+08 <= 0.0) {
          fVar1 = -0.5;
        }
        iVar3 = (int)(fVar1 + fVar9 * 1.3421773e+08);
                    /* try { // try from 00a85b50 to 00b85bab has its CatchHandler @ 00a85b50
                       catch() { ... } // from try @ 00a85b50 with catch @ 00a85b50
                       catch() { ... } // from try @ 00a85e3c with catch @ 00a85b50 */
      }
      param_1[1] = fVar9 * param_5[1] + param_1[1];
      param_5[1] = param_6[1] + param_5[1];
      fVar9 = *param_3;
      if (fVar9 <= -16.0) {
        iVar4 = -0x80000000;
      }
      else if (16.0 <= fVar9) {
        iVar4 = 0x7fffffff;
      }
      else {
        fVar1 = 0.5;
        if (fVar9 * 1.3421773e+08 <= 0.0) {
          fVar1 = -0.5;
        }
                    /* try { // try from 00a85bac to 00b85bc3 has its CatchHandler @ 00a85ec0 */
        iVar4 = (int)(fVar1 + fVar9 * 1.3421773e+08);
      }
                    /* try { // try from 00a85bcc to 00b85bd7 has its CatchHandler @ 00a85e68 */
      param_1[2] = fVar9 * param_5[2] + param_1[2];
                    /* try { // try from 00a85bd8 to 00b85be3 has its CatchHandler @ 00a85e64 */
      param_5[2] = param_6[2] + param_5[2];
                    /* try { // try from 00a85be4 to 00b85c17 has its CatchHandler @ 00a85ed0 */
      fVar9 = *param_3;
      if (fVar9 <= -16.0) {
        iVar5 = -0x80000000;
      }
      else if (16.0 <= fVar9) {
        iVar5 = 0x7fffffff;
      }
      else {
        fVar1 = 0.5;
        if (fVar9 * 1.3421773e+08 <= 0.0) {
          fVar1 = -0.5;
        }
        iVar5 = (int)(fVar1 + fVar9 * 1.3421773e+08);
      }
      param_1[3] = fVar9 * param_5[3] + param_1[3];
                    /* try { // try from 00a85c34 to 00b85c9f has its CatchHandler @ 00a85e6c */
      param_5[3] = param_6[3] + param_5[3];
      fVar9 = *param_3;
      if (fVar9 <= -16.0) {
        iVar6 = -0x80000000;
      }
      else if (16.0 <= fVar9) {
        iVar6 = 0x7fffffff;
      }
      else {
        fVar1 = 0.5;
        if (fVar9 * 1.3421773e+08 <= 0.0) {
          fVar1 = -0.5;
        }
        iVar6 = (int)(fVar1 + fVar9 * 1.3421773e+08);
      }
      param_1[4] = fVar9 * param_5[4] + param_1[4];
      param_5[4] = param_6[4] + param_5[4];
      fVar9 = *param_3;
      if (fVar9 <= -16.0) {
        iVar7 = -0x80000000;
      }
      else if (16.0 <= fVar9) {
                    /* try { // try from 00a85cdc to 00b85d7f has its CatchHandler @ 00a85ed0 */
        iVar7 = 0x7fffffff;
      }
      else {
        fVar1 = 0.5;
        if (fVar9 * 1.3421773e+08 <= 0.0) {
          fVar1 = -0.5;
        }
        iVar7 = (int)(fVar1 + fVar9 * 1.3421773e+08);
      }
      param_1[5] = fVar9 * param_5[5] + param_1[5];
      param_5[5] = param_6[5] + param_5[5];
      fVar9 = *param_3;
      if (fVar9 <= -16.0) {
        iVar8 = -0x80000000;
      }
      else if (16.0 <= fVar9) {
        iVar8 = 0x7fffffff;
      }
      else {
        fVar1 = 0.5;
        if (fVar9 * 1.3421773e+08 <= 0.0) {
          fVar1 = -0.5;
        }
        iVar8 = (int)(fVar1 + fVar9 * 1.3421773e+08);
      }
      param_1[6] = fVar9 * param_5[6] + param_1[6];
      param_5[6] = param_6[6] + param_5[6];
      *param_4 = *param_4 +
                 (*param_7 >> 0x10) *
                 ((iVar8 + iVar7 + iVar6 + iVar5 + iVar4 + iVar3 + iVar2) / 7 >> 0xc);
      param_3 = param_3 + 1;
      param_2 = param_2 - 1;
      param_1 = param_1 + 7;
      *param_7 = *param_7 + param_8;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
                    /* catch() { ... } // from try @ 00a85bac with catch @ 00a85ec0 */
  return;
}

