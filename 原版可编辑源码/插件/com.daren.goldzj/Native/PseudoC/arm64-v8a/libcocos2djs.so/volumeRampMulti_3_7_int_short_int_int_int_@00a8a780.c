
/* void cocos2d::volumeRampMulti<3, 7, int, short, int, int, int>(int*, unsigned long, short const*,
   int*, int*, int const*, int*, int) */

void cocos2d::volumeRampMulti<3,7,int,short,int,int,int>
               (int *param_1,ulong param_2,short *param_3,int *param_4,int *param_5,int *param_6,
               int *param_7,int param_8)

{
  short *psVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  
  if (param_4 == (int *)0x0) {
                    /* try { // try from 00a8a8a0 to 00b8a97f has its CatchHandler @ 00a8aa0c */
    iVar9 = *param_5;
    do {
      param_2 = param_2 - 1;
      *param_1 = *param_1 + (iVar9 >> 0x10) * (int)*param_3;
      param_1[1] = param_1[1] + (*param_5 >> 0x10) * (int)param_3[1];
      param_1[2] = param_1[2] + (*param_5 >> 0x10) * (int)param_3[2];
      param_1[3] = param_1[3] + (*param_5 >> 0x10) * (int)param_3[3];
      param_1[4] = param_1[4] + (*param_5 >> 0x10) * (int)param_3[4];
      param_1[5] = param_1[5] + (*param_5 >> 0x10) * (int)param_3[5];
      psVar1 = param_3 + 6;
      param_3 = param_3 + 7;
      param_1[6] = param_1[6] + (*param_5 >> 0x10) * (int)*psVar1;
      param_1 = param_1 + 7;
      iVar9 = *param_5 + *param_6;
      *param_5 = iVar9;
    } while (param_2 != 0);
  }
  else {
    do {
      sVar2 = *param_3;
      param_2 = param_2 - 1;
                    /* catch() { ... } // from try @ 00a8a6ac with catch @ 00a8a7a4 */
                    /* catch() { ... } // from try @ 00a8a6a0 with catch @ 00a8a7a8 */
      *param_1 = *param_1 + (*param_5 >> 0x10) * (int)sVar2;
                    /* catch() { ... } // from try @ 00a8a680 with catch @ 00a8a7ac */
      sVar3 = param_3[1];
                    /* catch() { ... } // from try @ 00a8a6b8 with catch @ 00a8a7bc */
      param_1[1] = param_1[1] + (*param_5 >> 0x10) * (int)sVar3;
      sVar4 = param_3[2];
      param_1[2] = param_1[2] + (*param_5 >> 0x10) * (int)sVar4;
      sVar5 = param_3[3];
      param_1[3] = param_1[3] + (*param_5 >> 0x10) * (int)sVar5;
      sVar6 = param_3[4];
      param_1[4] = param_1[4] + (*param_5 >> 0x10) * (int)sVar6;
                    /* try { // try from 00a8a814 to 00b8a867 has its CatchHandler @ 00a8a814
                       catch() { ... } // from try @ 00a8a814 with catch @ 00a8a814
                       catch() { ... } // from try @ 00a8a980 with catch @ 00a8a814 */
      sVar7 = param_3[5];
      param_1[5] = param_1[5] + (*param_5 >> 0x10) * (int)sVar7;
      sVar8 = param_3[6];
      param_1[6] = param_1[6] + (*param_5 >> 0x10) * (int)sVar8;
      *param_5 = *param_5 + *param_6;
                    /* try { // try from 00a8a868 to 00b8a87f has its CatchHandler @ 00a8a9fc */
      *param_4 = *param_4 +
                 (*param_7 >> 0x10) *
                 ((((int)sVar3 + (int)sVar2 + (int)sVar4 + (int)sVar5 + (int)sVar6 + (int)sVar7 +
                   (int)sVar8) * 0x1000) / 7 >> 0xc);
                    /* try { // try from 00a8a888 to 00b8a893 has its CatchHandler @ 00a8a9f8 */
      param_3 = param_3 + 7;
      param_1 = param_1 + 7;
                    /* try { // try from 00a8a894 to 00b8a89f has its CatchHandler @ 00a8a9f4 */
      *param_7 = *param_7 + param_8;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

