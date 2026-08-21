
/* void cocos2d::volumeRampMulti<0, 2, float, float, float, int, int>(float*, unsigned long, float
   const*, int*, float*, float const*, int*, int) */

void cocos2d::volumeRampMulti<0,2,float,float,float,int,int>
               (float *param_1,ulong param_2,float *param_3,int *param_4,float *param_5,
               float *param_6,int *param_7,int param_8)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  if (param_4 == (int *)0x0) {
    do {
      param_2 = param_2 - 1;
      *param_1 = *param_1 + *param_3 * *param_5;
      *param_5 = *param_6 + *param_5;
      pfVar1 = param_3 + 1;
      param_3 = param_3 + 2;
      param_1[1] = param_1[1] + *pfVar1 * param_5[1];
      param_1 = param_1 + 2;
      param_5[1] = param_6[1] + param_5[1];
    } while (param_2 != 0);
  }
  else {
    do {
      fVar5 = *param_3;
      if (fVar5 <= -16.0) {
        iVar3 = -0x80000000;
      }
      else if (16.0 <= fVar5) {
        iVar3 = 0x7fffffff;
      }
      else {
        fVar2 = 0.5;
        if (fVar5 * 1.3421773e+08 <= 0.0) {
          fVar2 = -0.5;
        }
        iVar3 = (int)(fVar2 + fVar5 * 1.3421773e+08);
                    /* try { // try from 00a7ff50 to 00b7ffa3 has its CatchHandler @ 00a7ff50
                       catch() { ... } // from try @ 00a7ff50 with catch @ 00a7ff50
                       catch() { ... } // from try @ 00a800b8 with catch @ 00a7ff50 */
      }
      *param_1 = fVar5 * *param_5 + *param_1;
      *param_5 = *param_6 + *param_5;
      fVar5 = param_3[1];
      if (fVar5 <= -16.0) {
        iVar4 = -0x80000000;
      }
      else if (16.0 <= fVar5) {
        iVar4 = 0x7fffffff;
      }
      else {
        fVar2 = 0.5;
        if (fVar5 * 1.3421773e+08 <= 0.0) {
          fVar2 = -0.5;
        }
                    /* try { // try from 00a7ffa4 to 00b7ffbb has its CatchHandler @ 00a80134 */
        iVar4 = (int)(fVar2 + fVar5 * 1.3421773e+08);
      }
                    /* try { // try from 00a7ffc4 to 00b7ffcf has its CatchHandler @ 00a80130 */
      iVar4 = iVar4 + iVar3;
                    /* try { // try from 00a7ffd0 to 00b7ffdb has its CatchHandler @ 00a8012c */
      param_1[1] = fVar5 * param_5[1] + param_1[1];
                    /* try { // try from 00a7ffdc to 00b800b7 has its CatchHandler @ 00a80144 */
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      param_3 = param_3 + 2;
      param_5[1] = param_6[1] + param_5[1];
      param_2 = param_2 - 1;
      param_1 = param_1 + 2;
      *param_4 = *param_4 + (*param_7 >> 0x10) * (iVar4 >> 0xd);
      *param_7 = *param_7 + param_8;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

