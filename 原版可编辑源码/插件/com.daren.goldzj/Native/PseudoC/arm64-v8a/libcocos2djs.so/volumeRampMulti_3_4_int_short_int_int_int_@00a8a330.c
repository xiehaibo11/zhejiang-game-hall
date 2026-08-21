
/* void cocos2d::volumeRampMulti<3, 4, int, short, int, int, int>(int*, unsigned long, short const*,
   int*, int*, int const*, int*, int) */

void cocos2d::volumeRampMulti<3,4,int,short,int,int,int>
               (int *param_1,ulong param_2,short *param_3,int *param_4,int *param_5,int *param_6,
               int *param_7,int param_8)

{
  short *psVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  
  if (param_4 == (int *)0x0) {
    iVar6 = *param_5;
    do {
                    /* catch() { ... } // from try @ 00a8a244 with catch @ 00a8a3ec
                       catch() { ... } // from try @ 00a8a29c with catch @ 00a8a3ec */
      param_2 = param_2 - 1;
      *param_1 = *param_1 + (iVar6 >> 0x10) * (int)*param_3;
      param_1[1] = param_1[1] + (*param_5 >> 0x10) * (int)param_3[1];
      param_1[2] = param_1[2] + (*param_5 >> 0x10) * (int)param_3[2];
      psVar1 = param_3 + 3;
      param_3 = param_3 + 4;
      param_1[3] = param_1[3] + (*param_5 >> 0x10) * (int)*psVar1;
                    /* try { // try from 00a8a444 to 00b8a497 has its CatchHandler @ 00a8a444
                       catch() { ... } // from try @ 00a8a444 with catch @ 00a8a444
                       catch() { ... } // from try @ 00a8a548 with catch @ 00a8a444 */
      param_1 = param_1 + 4;
      iVar6 = *param_5 + *param_6;
      *param_5 = iVar6;
    } while (param_2 != 0);
  }
  else {
    do {
      sVar2 = *param_3;
      param_2 = param_2 - 1;
      *param_1 = *param_1 + (*param_5 >> 0x10) * (int)sVar2;
      sVar3 = param_3[1];
      param_1[1] = param_1[1] + (*param_5 >> 0x10) * (int)sVar3;
      sVar4 = param_3[2];
                    /* try { // try from 00a8a370 to 00b8a443 has its CatchHandler @ 00a8a1b8 */
      param_1[2] = param_1[2] + (*param_5 >> 0x10) * (int)sVar4;
      sVar5 = param_3[3];
      param_3 = param_3 + 4;
      param_1[3] = param_1[3] + (*param_5 >> 0x10) * (int)sVar5;
      param_1 = param_1 + 4;
      *param_5 = *param_5 + *param_6;
                    /* catch() { ... } // from try @ 00a8a238 with catch @ 00a8a3bc */
                    /* catch() { ... } // from try @ 00a8a22c with catch @ 00a8a3c0 */
                    /* catch() { ... } // from try @ 00a8a268 with catch @ 00a8a3c4
                       catch() { ... } // from try @ 00a8a32c with catch @ 00a8a3c4 */
      *param_4 = *param_4 +
                 (*param_7 >> 0x10) * ((int)sVar3 + (int)sVar2 + (int)sVar4 + (int)sVar5 >> 2);
      *param_7 = *param_7 + param_8;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

