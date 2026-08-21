
/* void cocos2d::volumeMulti<3, 8, int, int, short, int, short>(int*, unsigned long, int const*,
   int*, short const*, short) */

void cocos2d::volumeMulti<3,8,int,int,short,int,short>
               (int *param_1,ulong param_2,int *param_3,int *param_4,short *param_5,short param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  short sVar9;
  int iVar10;
  
  sVar9 = *param_5;
  if (param_4 == (int *)0x0) {
    do {
      param_2 = param_2 - 1;
      iVar10 = (int)sVar9;
      *param_1 = *param_1 + (*param_3 >> 0xc) * iVar10;
      param_1[1] = param_1[1] + (param_3[1] >> 0xc) * iVar10;
                    /* try { // try from 00a84550 to 00b8455f has its CatchHandler @ 00a8461c */
      param_1[2] = param_1[2] + (param_3[2] >> 0xc) * iVar10;
                    /* try { // try from 00a84560 to 00b846c3 has its CatchHandler @ 00a841f0 */
      param_1[3] = param_1[3] + (param_3[3] >> 0xc) * iVar10;
      param_1[4] = param_1[4] + (param_3[4] >> 0xc) * iVar10;
      param_1[5] = param_1[5] + (param_3[5] >> 0xc) * iVar10;
                    /* catch() { ... } // from try @ 00a84384 with catch @ 00a84594 */
      param_1[6] = param_1[6] + (param_3[6] >> 0xc) * iVar10;
      piVar1 = param_3 + 7;
                    /* catch() { ... } // from try @ 00a84374 with catch @ 00a845a4 */
      param_3 = param_3 + 8;
      param_1[7] = param_1[7] + (*piVar1 >> 0xc) * iVar10;
                    /* catch() { ... } // from try @ 00a84358 with catch @ 00a845b4 */
      param_1 = param_1 + 8;
    } while (param_2 != 0);
  }
  else {
    do {
      iVar2 = *param_3;
      *param_1 = *param_1 + (iVar2 >> 0xc) * (int)sVar9;
      iVar3 = param_3[1];
                    /* try { // try from 00a84460 to 00b8454f has its CatchHandler @ 00a841f0 */
      param_1[1] = param_1[1] + (iVar3 >> 0xc) * (int)sVar9;
      iVar4 = param_3[2];
      iVar10 = (int)sVar9;
      param_1[2] = param_1[2] + (iVar4 >> 0xc) * iVar10;
      iVar5 = param_3[3];
      param_1[3] = param_1[3] + (iVar5 >> 0xc) * iVar10;
      iVar6 = param_3[4];
      param_1[4] = param_1[4] + (iVar6 >> 0xc) * iVar10;
      iVar7 = param_3[5];
      param_1[5] = param_1[5] + (iVar7 >> 0xc) * iVar10;
      iVar8 = param_3[6];
      param_1[6] = param_1[6] + (iVar8 >> 0xc) * (int)sVar9;
      iVar10 = param_3[7];
      param_3 = param_3 + 8;
      param_1[7] = param_1[7] + (iVar10 >> 0xc) * (int)sVar9;
      iVar10 = iVar10 + iVar8 + iVar7 + iVar6 + iVar5 + iVar4 + iVar3 + iVar2;
      iVar2 = iVar10 + 7;
      if (-1 < iVar10) {
        iVar2 = iVar10;
      }
      param_2 = param_2 - 1;
      *param_4 = *param_4 + (iVar2 >> 0xf) * (int)param_6;
      param_1 = param_1 + 8;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

