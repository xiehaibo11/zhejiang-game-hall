
/* void cocos2d::volumeMulti<3, 6, float, float, float, int, short>(float*, unsigned long, float
   const*, int*, float const*, short) */

void cocos2d::volumeMulti<3,6,float,float,float,int,short>
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
      *param_1 = *param_1 + *param_3 * *param_5;
      param_1[1] = param_1[1] + param_3[1] * *param_5;
      param_1[2] = param_1[2] + param_3[2] * *param_5;
                    /* try { // try from 00a821c4 to 00b821db has its CatchHandler @ 00a825d4 */
      param_1[3] = param_1[3] + param_3[3] * *param_5;
      param_1[4] = param_1[4] + param_3[4] * *param_5;
      pfVar1 = param_3 + 5;
                    /* try { // try from 00a821e4 to 00b821ef has its CatchHandler @ 00a825d0 */
      param_3 = param_3 + 6;
                    /* try { // try from 00a821f0 to 00b821fb has its CatchHandler @ 00a825cc */
      param_1[5] = param_1[5] + *pfVar1 * *param_5;
      param_1 = param_1 + 6;
                    /* try { // try from 00a821fc to 00b82213 has its CatchHandler @ 00a825e4 */
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
      }
      *param_1 = fVar9 * *param_5 + *param_1;
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
      param_1[1] = fVar9 * *param_5 + param_1[1];
      fVar9 = param_3[2];
                    /* try { // try from 00a81ff4 to 00b82003 has its CatchHandler @ 00a820c0 */
      if (fVar9 <= -16.0) {
        iVar5 = -0x80000000;
      }
      else if (16.0 <= fVar9) {
        iVar5 = 0x7fffffff;
      }
      else {
                    /* try { // try from 00a82004 to 00b82167 has its CatchHandler @ 00a81c94 */
        fVar2 = 0.5;
        if (fVar9 * 1.3421773e+08 <= 0.0) {
          fVar2 = -0.5;
        }
        iVar5 = (int)(fVar2 + fVar9 * 1.3421773e+08);
      }
                    /* catch() { ... } // from try @ 00a81e28 with catch @ 00a82038 */
      param_1[2] = fVar9 * *param_5 + param_1[2];
      fVar9 = param_3[3];
                    /* catch() { ... } // from try @ 00a81e18 with catch @ 00a82048 */
      if (fVar9 <= -16.0) {
        iVar6 = -0x80000000;
      }
      else if (16.0 <= fVar9) {
                    /* catch() { ... } // from try @ 00a81dd8 with catch @ 00a82078 */
        iVar6 = 0x7fffffff;
      }
      else {
                    /* catch() { ... } // from try @ 00a81dfc with catch @ 00a82058 */
        fVar2 = 0.5;
        if (fVar9 * 1.3421773e+08 <= 0.0) {
          fVar2 = -0.5;
        }
                    /* catch() { ... } // from try @ 00a81dec with catch @ 00a82068 */
        iVar6 = (int)(fVar2 + fVar9 * 1.3421773e+08);
      }
      param_1[3] = fVar9 * *param_5 + param_1[3];
                    /* catch() { ... } // from try @ 00a81dcc with catch @ 00a82090 */
      fVar9 = param_3[4];
                    /* catch() { ... } // from try @ 00a81db8 with catch @ 00a82098 */
                    /* catch() { ... } // from try @ 00a81d90 with catch @ 00a8209c */
      if (fVar9 <= -16.0) {
        iVar7 = -0x80000000;
      }
      else {
                    /* catch() { ... } // from try @ 00a81d74 with catch @ 00a820a4 */
        if (16.0 <= fVar9) {
          iVar7 = 0x7fffffff;
        }
        else {
                    /* catch() { ... } // from try @ 00a81d98 with catch @ 00a820a8 */
          fVar2 = 0.5;
          if (fVar9 * 1.3421773e+08 <= 0.0) {
            fVar2 = -0.5;
          }
          iVar7 = (int)(fVar2 + fVar9 * 1.3421773e+08);
                    /* catch() { ... } // from try @ 00a81d68 with catch @ 00a820c0
                       catch() { ... } // from try @ 00a81ff4 with catch @ 00a820c0 */
        }
      }
      param_1[4] = fVar9 * *param_5 + param_1[4];
      fVar9 = param_3[5];
      if (fVar9 <= -16.0) {
        iVar8 = -0x80000000;
      }
      else {
                    /* catch() { ... } // from try @ 00a81d1c with catch @ 00a820f8 */
        if (16.0 <= fVar9) {
          iVar8 = 0x7fffffff;
        }
        else {
                    /* catch() { ... } // from try @ 00a81d10 with catch @ 00a820fc */
                    /* catch() { ... } // from try @ 00a81cf0 with catch @ 00a82100 */
          fVar2 = 0.5;
          if (fVar9 * 1.3421773e+08 <= 0.0) {
            fVar2 = -0.5;
          }
                    /* catch() { ... } // from try @ 00a81d28 with catch @ 00a82110
                       catch() { ... } // from try @ 00a81e60 with catch @ 00a82110 */
          iVar8 = (int)(fVar2 + fVar9 * 1.3421773e+08);
        }
      }
      param_1[5] = fVar9 * *param_5 + param_1[5];
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

