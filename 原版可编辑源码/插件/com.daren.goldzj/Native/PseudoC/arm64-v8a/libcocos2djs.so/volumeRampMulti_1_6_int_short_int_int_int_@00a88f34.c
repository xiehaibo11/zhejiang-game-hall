
/* void cocos2d::volumeRampMulti<1, 6, int, short, int, int, int>(int*, unsigned long, short const*,
   int*, int*, int const*, int*, int) */

void cocos2d::volumeRampMulti<1,6,int,short,int,int,int>
               (int *param_1,ulong param_2,short *param_3,int *param_4,int *param_5,int *param_6,
               int *param_7,int param_8)

{
  short sVar1;
  int iVar2;
  
  if (param_4 == (int *)0x0) {
    do {
      sVar1 = *param_3;
      param_2 = param_2 - 1;
      *param_1 = *param_1 + (*param_5 >> 0x10) * (int)sVar1;
      *param_5 = *param_5 + *param_6;
      param_1[1] = param_1[1] + (param_5[1] >> 0x10) * (int)sVar1;
      param_5[1] = param_5[1] + param_6[1];
                    /* catch() { ... } // from try @ 00a88f00 with catch @ 00a89080 */
      iVar2 = (int)sVar1;
                    /* catch() { ... } // from try @ 00a88eac with catch @ 00a89084 */
      param_1[2] = param_1[2] + (param_5[2] >> 0x10) * iVar2;
                    /* catch() { ... } // from try @ 00a88ea4 with catch @ 00a8908c */
                    /* catch() { ... } // from try @ 00a88e98 with catch @ 00a89094 */
      param_5[2] = param_5[2] + param_6[2];
                    /* catch() { ... } // from try @ 00a88ec4 with catch @ 00a8909c */
      param_1[3] = param_1[3] + (param_5[3] >> 0x10) * iVar2;
                    /* catch() { ... } // from try @ 00a88f10 with catch @ 00a890ac */
      param_5[3] = param_5[3] + param_6[3];
      param_1[4] = param_1[4] + (param_5[4] >> 0x10) * iVar2;
      param_5[4] = param_5[4] + param_6[4];
      param_1[5] = param_1[5] + (param_5[5] >> 0x10) * iVar2;
      param_1 = param_1 + 6;
      param_5[5] = param_5[5] + param_6[5];
      param_3 = param_3 + 1;
    } while (param_2 != 0);
  }
  else {
    do {
      sVar1 = *param_3;
      param_2 = param_2 - 1;
      *param_1 = *param_1 + (*param_5 >> 0x10) * (int)sVar1;
      *param_5 = *param_5 + *param_6;
      param_1[1] = param_1[1] + (param_5[1] >> 0x10) * (int)sVar1;
      param_5[1] = param_5[1] + param_6[1];
      iVar2 = (int)sVar1;
      param_1[2] = param_1[2] + (param_5[2] >> 0x10) * iVar2;
      param_5[2] = param_5[2] + param_6[2];
      param_1[3] = param_1[3] + (param_5[3] >> 0x10) * iVar2;
      param_5[3] = param_5[3] + param_6[3];
      param_1[4] = param_1[4] + (param_5[4] >> 0x10) * iVar2;
      param_5[4] = param_5[4] + param_6[4];
      param_1[5] = param_1[5] + (param_5[5] >> 0x10) * iVar2;
      param_1 = param_1 + 6;
                    /* try { // try from 00a89004 to 00b8910b has its CatchHandler @ 00a88e40 */
      param_5[5] = param_5[5] + param_6[5];
      *param_4 = *param_4 + (*param_7 >> 0x10) * (int)sVar1;
      *param_7 = *param_7 + param_8;
      param_3 = param_3 + 1;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

