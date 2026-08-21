
/* void cocos2d::experimental::volumeRampMulti<3, 8, int, int, int, int, int>(int*, unsigned long,
   int const*, int*, int*, int const*, int*, int) */

void cocos2d::experimental::volumeRampMulti<3,8,int,int,int,int,int>
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
  int iVar8;
  int iVar9;
  
  if (param_4 == (int *)0x0) {
    iVar9 = *param_5;
    do {
      param_2 = param_2 - 1;
      *param_1 = *param_1 + (iVar9 >> 0x10) * (*param_3 >> 0xc);
      param_1[1] = param_1[1] + (*param_5 >> 0x10) * (param_3[1] >> 0xc);
      param_1[2] = param_1[2] + (*param_5 >> 0x10) * (param_3[2] >> 0xc);
      param_1[3] = param_1[3] + (*param_5 >> 0x10) * (param_3[3] >> 0xc);
      param_1[4] = param_1[4] + (*param_5 >> 0x10) * (param_3[4] >> 0xc);
      param_1[5] = param_1[5] + (*param_5 >> 0x10) * (param_3[5] >> 0xc);
      param_1[6] = param_1[6] + (*param_5 >> 0x10) * (param_3[6] >> 0xc);
      piVar1 = param_3 + 7;
      param_3 = param_3 + 8;
      param_1[7] = param_1[7] + (*param_5 >> 0x10) * (*piVar1 >> 0xc);
      param_1 = param_1 + 8;
      iVar9 = *param_5 + *param_6;
      *param_5 = iVar9;
    } while (param_2 != 0);
  }
  else {
    do {
      iVar2 = *param_3;
      *param_1 = *param_1 + (*param_5 >> 0x10) * (iVar2 >> 0xc);
      iVar3 = param_3[1];
      param_1[1] = param_1[1] + (*param_5 >> 0x10) * (iVar3 >> 0xc);
      iVar4 = param_3[2];
      param_1[2] = param_1[2] + (*param_5 >> 0x10) * (iVar4 >> 0xc);
      iVar5 = param_3[3];
      param_1[3] = param_1[3] + (*param_5 >> 0x10) * (iVar5 >> 0xc);
      iVar6 = param_3[4];
      param_1[4] = param_1[4] + (*param_5 >> 0x10) * (iVar6 >> 0xc);
      iVar7 = param_3[5];
      param_1[5] = param_1[5] + (*param_5 >> 0x10) * (iVar7 >> 0xc);
      iVar8 = param_3[6];
      param_1[6] = param_1[6] + (*param_5 >> 0x10) * (iVar8 >> 0xc);
      iVar9 = param_3[7];
      param_3 = param_3 + 8;
      param_1[7] = param_1[7] + (*param_5 >> 0x10) * (iVar9 >> 0xc);
      iVar9 = iVar9 + iVar8 + iVar7 + iVar6 + iVar5 + iVar4 + iVar3 + iVar2;
      *param_5 = *param_5 + *param_6;
      iVar2 = iVar9 + 7;
      if (-1 < iVar9) {
        iVar2 = iVar9;
      }
      *param_4 = *param_4 + (*param_7 >> 0x10) * (iVar2 >> 0xf);
      param_2 = param_2 - 1;
      param_1 = param_1 + 8;
      *param_7 = *param_7 + param_8;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

