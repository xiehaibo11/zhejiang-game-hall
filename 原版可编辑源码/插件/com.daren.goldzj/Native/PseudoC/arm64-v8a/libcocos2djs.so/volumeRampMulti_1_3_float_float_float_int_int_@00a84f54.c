
/* void cocos2d::volumeRampMulti<1, 3, float, float, float, int, int>(float*, unsigned long, float
   const*, int*, float*, float const*, int*, int) */

void cocos2d::volumeRampMulti<1,3,float,float,float,int,int>
               (float *param_1,ulong param_2,float *param_3,int *param_4,float *param_5,
               float *param_6,int *param_7,int param_8)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  if (param_4 == (int *)0x0) {
    do {
      param_2 = param_2 - 1;
      *param_1 = *param_1 + *param_3 * *param_5;
                    /* try { // try from 00a85108 to 00b8515b has its CatchHandler @ 00a85108
                       catch() { ... } // from try @ 00a85108 with catch @ 00a85108
                       catch() { ... } // from try @ 00a85268 with catch @ 00a85108 */
      *param_5 = *param_6 + *param_5;
      param_1[1] = param_1[1] + *param_3 * param_5[1];
      param_5[1] = param_6[1] + param_5[1];
      param_1[2] = param_1[2] + *param_3 * param_5[2];
      param_1 = param_1 + 3;
      param_5[2] = param_6[2] + param_5[2];
      param_3 = param_3 + 1;
                    /* try { // try from 00a8515c to 00b85173 has its CatchHandler @ 00a852e4 */
    } while (param_2 != 0);
  }
  else {
    do {
      fVar5 = *param_3;
      if (fVar5 <= -16.0) {
        iVar2 = -0x80000000;
      }
      else if (16.0 <= fVar5) {
        iVar2 = 0x7fffffff;
      }
      else {
        fVar1 = 0.5;
        if (fVar5 * 1.3421773e+08 <= 0.0) {
          fVar1 = -0.5;
        }
        iVar2 = (int)(fVar1 + fVar5 * 1.3421773e+08);
      }
      *param_1 = fVar5 * *param_5 + *param_1;
      *param_5 = *param_6 + *param_5;
      fVar5 = *param_3;
      if (fVar5 <= -16.0) {
        iVar3 = -0x80000000;
      }
      else if (16.0 <= fVar5) {
        iVar3 = 0x7fffffff;
      }
      else {
        fVar1 = 0.5;
        if (fVar5 * 1.3421773e+08 <= 0.0) {
          fVar1 = -0.5;
        }
        iVar3 = (int)(fVar1 + fVar5 * 1.3421773e+08);
      }
      param_1[1] = fVar5 * param_5[1] + param_1[1];
                    /* try { // try from 00a8502c to 00b85107 has its CatchHandler @ 00a84e90 */
      param_5[1] = param_6[1] + param_5[1];
      fVar5 = *param_3;
      if (fVar5 <= -16.0) {
        iVar4 = -0x80000000;
      }
      else if (16.0 <= fVar5) {
        iVar4 = 0x7fffffff;
      }
      else {
        fVar1 = 0.5;
        if (fVar5 * 1.3421773e+08 <= 0.0) {
          fVar1 = -0.5;
        }
        iVar4 = (int)(fVar1 + fVar5 * 1.3421773e+08);
      }
      param_1[2] = fVar5 * param_5[2] + param_1[2];
                    /* catch() { ... } // from try @ 00a84f10 with catch @ 00a85098 */
                    /* catch() { ... } // from try @ 00a84f04 with catch @ 00a8509c */
                    /* catch() { ... } // from try @ 00a84ee4 with catch @ 00a850a0 */
      param_5[2] = param_6[2] + param_5[2];
                    /* catch() { ... } // from try @ 00a84f1c with catch @ 00a850b0 */
      param_3 = param_3 + 1;
      *param_4 = *param_4 + (*param_7 >> 0x10) * ((iVar4 + iVar3 + iVar2) / 3 >> 0xc);
      param_2 = param_2 - 1;
      param_1 = param_1 + 3;
      *param_7 = *param_7 + param_8;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

