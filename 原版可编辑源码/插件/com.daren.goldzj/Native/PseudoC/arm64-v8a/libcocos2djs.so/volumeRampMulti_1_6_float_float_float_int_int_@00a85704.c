
/* void cocos2d::volumeRampMulti<1, 6, float, float, float, int, int>(float*, unsigned long, float
   const*, int*, float*, float const*, int*, int) */

void cocos2d::volumeRampMulti<1,6,float,float,float,int,int>
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
  float fVar8;
  
  if (param_4 == (int *)0x0) {
    do {
      param_2 = param_2 - 1;
      *param_1 = *param_1 + *param_3 * *param_5;
      *param_5 = *param_6 + *param_5;
      param_1[1] = param_1[1] + *param_3 * param_5[1];
      param_5[1] = param_6[1] + param_5[1];
      param_1[2] = param_1[2] + *param_3 * param_5[2];
      param_5[2] = param_6[2] + param_5[2];
      param_1[3] = param_1[3] + *param_3 * param_5[3];
      param_5[3] = param_6[3] + param_5[3];
      param_1[4] = param_1[4] + *param_3 * param_5[4];
      param_5[4] = param_6[4] + param_5[4];
                    /* try { // try from 00a85a6c to 00b85b4f has its CatchHandler @ 00a8590c */
      param_1[5] = param_1[5] + *param_3 * param_5[5];
      param_1 = param_1 + 6;
      param_5[5] = param_6[5] + param_5[5];
      param_3 = param_3 + 1;
    } while (param_2 != 0);
  }
  else {
    do {
      fVar8 = *param_3;
      if (fVar8 <= -16.0) {
        iVar2 = -0x80000000;
      }
      else if (16.0 <= fVar8) {
        iVar2 = 0x7fffffff;
      }
      else {
        fVar1 = 0.5;
        if (fVar8 * 1.3421773e+08 <= 0.0) {
          fVar1 = -0.5;
        }
        iVar2 = (int)(fVar1 + fVar8 * 1.3421773e+08);
      }
      *param_1 = fVar8 * *param_5 + *param_1;
      *param_5 = *param_6 + *param_5;
      fVar8 = *param_3;
      if (fVar8 <= -16.0) {
        iVar3 = -0x80000000;
      }
      else if (16.0 <= fVar8) {
        iVar3 = 0x7fffffff;
      }
      else {
        fVar1 = 0.5;
        if (fVar8 * 1.3421773e+08 <= 0.0) {
          fVar1 = -0.5;
        }
        iVar3 = (int)(fVar1 + fVar8 * 1.3421773e+08);
      }
      param_1[1] = fVar8 * param_5[1] + param_1[1];
      param_5[1] = param_6[1] + param_5[1];
      fVar8 = *param_3;
      if (fVar8 <= -16.0) {
        iVar4 = -0x80000000;
      }
      else if (16.0 <= fVar8) {
        iVar4 = 0x7fffffff;
      }
      else {
        fVar1 = 0.5;
        if (fVar8 * 1.3421773e+08 <= 0.0) {
          fVar1 = -0.5;
        }
        iVar4 = (int)(fVar1 + fVar8 * 1.3421773e+08);
      }
                    /* try { // try from 00a85828 to 00b8590b has its CatchHandler @ 00a8565c */
      param_1[2] = fVar8 * param_5[2] + param_1[2];
      param_5[2] = param_6[2] + param_5[2];
      fVar8 = *param_3;
      if (fVar8 <= -16.0) {
        iVar5 = -0x80000000;
      }
      else if (16.0 <= fVar8) {
        iVar5 = 0x7fffffff;
      }
      else {
        fVar1 = 0.5;
        if (fVar8 * 1.3421773e+08 <= 0.0) {
          fVar1 = -0.5;
        }
        iVar5 = (int)(fVar1 + fVar8 * 1.3421773e+08);
      }
      param_1[3] = fVar8 * param_5[3] + param_1[3];
                    /* catch() { ... } // from try @ 00a856dc with catch @ 00a8589c */
                    /* catch() { ... } // from try @ 00a856d0 with catch @ 00a858a0 */
                    /* catch() { ... } // from try @ 00a856b0 with catch @ 00a858a4 */
      param_5[3] = param_6[3] + param_5[3];
      fVar8 = *param_3;
      if (fVar8 <= -16.0) {
        iVar6 = -0x80000000;
      }
      else {
                    /* catch() { ... } // from try @ 00a856e8 with catch @ 00a858b4 */
        if (16.0 <= fVar8) {
          iVar6 = 0x7fffffff;
        }
        else {
          fVar1 = 0.5;
          if (fVar8 * 1.3421773e+08 <= 0.0) {
            fVar1 = -0.5;
          }
          iVar6 = (int)(fVar1 + fVar8 * 1.3421773e+08);
        }
      }
      param_1[4] = fVar8 * param_5[4] + param_1[4];
      param_5[4] = param_6[4] + param_5[4];
      fVar8 = *param_3;
                    /* try { // try from 00a8590c to 00b8595f has its CatchHandler @ 00a8590c
                       catch() { ... } // from try @ 00a8590c with catch @ 00a8590c
                       catch() { ... } // from try @ 00a85a6c with catch @ 00a8590c */
      if (fVar8 <= -16.0) {
        iVar7 = -0x80000000;
      }
      else if (16.0 <= fVar8) {
        iVar7 = 0x7fffffff;
      }
      else {
        fVar1 = 0.5;
        if (fVar8 * 1.3421773e+08 <= 0.0) {
          fVar1 = -0.5;
        }
        iVar7 = (int)(fVar1 + fVar8 * 1.3421773e+08);
      }
      param_1[5] = fVar8 * param_5[5] + param_1[5];
                    /* try { // try from 00a85960 to 00b85977 has its CatchHandler @ 00a85ae8 */
      param_5[5] = param_6[5] + param_5[5];
                    /* try { // try from 00a85980 to 00b8598b has its CatchHandler @ 00a85ae4 */
      param_3 = param_3 + 1;
                    /* try { // try from 00a8598c to 00b85997 has its CatchHandler @ 00a85ae0 */
      *param_4 = *param_4 +
                 (*param_7 >> 0x10) * ((iVar7 + iVar6 + iVar5 + iVar4 + iVar3 + iVar2) / 6 >> 0xc);
                    /* try { // try from 00a85998 to 00b85a6b has its CatchHandler @ 00a85af8 */
      param_2 = param_2 - 1;
      param_1 = param_1 + 6;
      *param_7 = *param_7 + param_8;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

