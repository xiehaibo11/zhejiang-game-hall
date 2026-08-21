
/* void cocos2d::volumeRampMulti<3, 6, int, int, int, int, int>(int*, unsigned long, int const*,
   int*, int*, int const*, int*, int) */

void cocos2d::volumeRampMulti<3,6,int,int,int,int,int>
               (int *param_1,ulong param_2,int *param_3,int *param_4,int *param_5,int *param_6,
               int *param_7,int param_8)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (param_4 == (int *)0x0) {
    iVar7 = *param_5;
    do {
      param_2 = param_2 - 1;
      *param_1 = *param_1 + (iVar7 >> 0x10) * (*param_3 >> 0xc);
      param_1[1] = param_1[1] + (*param_5 >> 0x10) * (param_3[1] >> 0xc);
                    /* try { // try from 00a83b80 to 00b83bc3 has its CatchHandler @ 00a83bd8 */
      param_1[2] = param_1[2] + (*param_5 >> 0x10) * (param_3[2] >> 0xc);
      param_1[3] = param_1[3] + (*param_5 >> 0x10) * (param_3[3] >> 0xc);
      param_1[4] = param_1[4] + (*param_5 >> 0x10) * (param_3[4] >> 0xc);
      piVar1 = param_3 + 5;
                    /* try { // try from 00a83bc4 to 00b83c5f has its CatchHandler @ 00a83978 */
      param_3 = param_3 + 6;
                    /* catch() { ... } // from try @ 00a83a38 with catch @ 00a83bd8
                       catch() { ... } // from try @ 00a83b80 with catch @ 00a83bd8 */
      param_1[5] = param_1[5] + (*param_5 >> 0x10) * (*piVar1 >> 0xc);
      param_1 = param_1 + 6;
      iVar7 = *param_5 + *param_6;
                    /* catch() { ... } // from try @ 00a839f8 with catch @ 00a83bf0 */
      *param_5 = iVar7;
                    /* catch() { ... } // from try @ 00a839ec with catch @ 00a83bf4 */
    } while (param_2 != 0);
  }
  else {
    do {
      iVar7 = *param_3;
                    /* try { // try from 00a83a38 to 00b83a4f has its CatchHandler @ 00a83bd8 */
      param_2 = param_2 - 1;
      *param_1 = *param_1 + (*param_5 >> 0x10) * (iVar7 >> 0xc);
      iVar2 = param_3[1];
      param_1[1] = param_1[1] + (*param_5 >> 0x10) * (iVar2 >> 0xc);
                    /* try { // try from 00a83a6c to 00b83b0f has its CatchHandler @ 00a83c08 */
      iVar3 = param_3[2];
      param_1[2] = param_1[2] + (*param_5 >> 0x10) * (iVar3 >> 0xc);
      iVar4 = param_3[3];
      param_1[3] = param_1[3] + (*param_5 >> 0x10) * (iVar4 >> 0xc);
      iVar5 = param_3[4];
      param_1[4] = param_1[4] + (*param_5 >> 0x10) * (iVar5 >> 0xc);
      iVar6 = param_3[5];
      param_3 = param_3 + 6;
      param_1[5] = param_1[5] + (*param_5 >> 0x10) * (iVar6 >> 0xc);
      *param_5 = *param_5 + *param_6;
      *param_4 = *param_4 +
                 (*param_7 >> 0x10) * ((iVar6 + iVar5 + iVar4 + iVar3 + iVar2 + iVar7) / 6 >> 0xc);
      param_1 = param_1 + 6;
      *param_7 = *param_7 + param_8;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
                    /* catch() { ... } // from try @ 00a839cc with catch @ 00a83bf8 */
  return;
}

