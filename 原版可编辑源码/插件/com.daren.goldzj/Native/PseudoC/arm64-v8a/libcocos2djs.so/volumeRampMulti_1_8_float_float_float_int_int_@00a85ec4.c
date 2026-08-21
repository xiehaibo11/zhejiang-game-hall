
/* void cocos2d::volumeRampMulti<1, 8, float, float, float, int, int>(float*, unsigned long, float
   const*, int*, float*, float const*, int*, int) */

void cocos2d::volumeRampMulti<1,8,float,float,float,int,int>
               (float *param_1,ulong param_2,float *param_3,int *param_4,float *param_5,
               float *param_6,int *param_7,int param_8)

{
  float fVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  float fVar5;
  
  if (param_4 == (int *)0x0) {
    do {
                    /* try { // try from 00a85f9c to 00b85fa7 has its CatchHandler @ 00a861a4 */
                    /* try { // try from 00a85fa8 to 00b85fb3 has its CatchHandler @ 00a861a0 */
      param_2 = param_2 - 1;
                    /* try { // try from 00a85fb4 to 00b85fcb has its CatchHandler @ 00a861b8 */
      *param_1 = *param_1 + *param_3 * *param_5;
      *param_5 = *param_6 + *param_5;
      param_1[1] = param_1[1] + *param_3 * param_5[1];
                    /* try { // try from 00a85fe8 to 00b85fff has its CatchHandler @ 00a86188 */
      param_5[1] = param_6[1] + param_5[1];
      param_1[2] = param_1[2] + *param_3 * param_5[2];
      param_5[2] = param_6[2] + param_5[2];
                    /* try { // try from 00a8601c to 00b860bf has its CatchHandler @ 00a861b8 */
      param_1[3] = param_1[3] + *param_3 * param_5[3];
      param_5[3] = param_6[3] + param_5[3];
      param_1[4] = param_1[4] + *param_3 * param_5[4];
      param_5[4] = param_6[4] + param_5[4];
      param_1[5] = param_1[5] + *param_3 * param_5[5];
      param_5[5] = param_6[5] + param_5[5];
      param_1[6] = param_1[6] + *param_3 * param_5[6];
      param_5[6] = param_6[6] + param_5[6];
      param_1[7] = param_1[7] + *param_3 * param_5[7];
      param_1 = param_1 + 8;
      param_5[7] = param_6[7] + param_5[7];
      param_3 = param_3 + 1;
    } while (param_2 != 0);
  }
  else {
                    /* catch() { ... } // from try @ 00a85be4 with catch @ 00a85ed0
                       catch() { ... } // from try @ 00a85cdc with catch @ 00a85ed0 */
    do {
      lVar3 = 0;
      iVar2 = 0;
      do {
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
                    /* try { // try from 00a85f28 to 00b85f7b has its CatchHandler @ 00a85f28
                       catch() { ... } // from try @ 00a85f28 with catch @ 00a85f28
                       catch() { ... } // from try @ 00a86174 with catch @ 00a85f28 */
        iVar2 = iVar4 + iVar2;
        *(float *)((long)param_1 + lVar3) =
             fVar5 * *(float *)((long)param_5 + lVar3) + *(float *)((long)param_1 + lVar3);
        *(float *)((long)param_5 + lVar3) =
             *(float *)((long)param_6 + lVar3) + *(float *)((long)param_5 + lVar3);
        lVar3 = lVar3 + 4;
      } while (lVar3 != 0x20);
      iVar4 = iVar2 + 7;
      if (-1 < iVar2) {
        iVar4 = iVar2;
      }
      *param_4 = *param_4 + (*param_7 >> 0x10) * (iVar4 >> 0xf);
                    /* try { // try from 00a85f7c to 00b85f93 has its CatchHandler @ 00a861a8 */
      param_1 = param_1 + 8;
      param_3 = param_3 + 1;
      param_2 = param_2 - 1;
      *param_7 = *param_7 + param_8;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

