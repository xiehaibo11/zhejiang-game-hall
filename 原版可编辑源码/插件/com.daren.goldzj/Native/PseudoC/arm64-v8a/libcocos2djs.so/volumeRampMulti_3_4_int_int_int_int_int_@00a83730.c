
/* void cocos2d::volumeRampMulti<3, 4, int, int, int, int, int>(int*, unsigned long, int const*,
   int*, int*, int const*, int*, int) */

void cocos2d::volumeRampMulti<3,4,int,int,int,int,int>
               (int *param_1,ulong param_2,int *param_3,int *param_4,int *param_5,int *param_6,
               int *param_7,int param_8)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_4 == (int *)0x0) {
    iVar5 = *param_5;
    do {
      param_2 = param_2 - 1;
      *param_1 = *param_1 + (iVar5 >> 0x10) * (*param_3 >> 0xc);
      param_1[1] = param_1[1] + (*param_5 >> 0x10) * (param_3[1] >> 0xc);
      param_1[2] = param_1[2] + (*param_5 >> 0x10) * (param_3[2] >> 0xc);
      piVar1 = param_3 + 3;
      param_3 = param_3 + 4;
      param_1[3] = param_1[3] + (*param_5 >> 0x10) * (*piVar1 >> 0xc);
      param_1 = param_1 + 4;
      iVar5 = *param_5 + *param_6;
      *param_5 = iVar5;
    } while (param_2 != 0);
  }
  else {
    do {
      iVar2 = *param_3;
      *param_1 = *param_1 + (*param_5 >> 0x10) * (iVar2 >> 0xc);
                    /* try { // try from 00a83750 to 00b83767 has its CatchHandler @ 00a838f0 */
      iVar3 = param_3[1];
      param_1[1] = param_1[1] + (*param_5 >> 0x10) * (iVar3 >> 0xc);
      iVar4 = param_3[2];
                    /* try { // try from 00a83784 to 00b83827 has its CatchHandler @ 00a83920 */
      param_1[2] = param_1[2] + (*param_5 >> 0x10) * (iVar4 >> 0xc);
      iVar5 = param_3[3];
      param_3 = param_3 + 4;
      param_1[3] = param_1[3] + (*param_5 >> 0x10) * (iVar5 >> 0xc);
      iVar5 = iVar5 + iVar4 + iVar3 + iVar2;
      *param_5 = *param_5 + *param_6;
      iVar2 = iVar5 + 3;
      if (-1 < iVar5) {
        iVar2 = iVar5;
      }
      *param_4 = *param_4 + (*param_7 >> 0x10) * (iVar2 >> 0xe);
      param_2 = param_2 - 1;
      param_1 = param_1 + 4;
      *param_7 = *param_7 + param_8;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

