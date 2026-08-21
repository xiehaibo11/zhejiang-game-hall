
/* void cocos2d::experimental::volumeRampMulti<3, 8, int, short, int, int, int>(int*, unsigned long,
   short const*, int*, int*, int const*, int*, int) */

void cocos2d::experimental::volumeRampMulti<3,8,int,short,int,int,int>
               (int *param_1,ulong param_2,short *param_3,int *param_4,int *param_5,int *param_6,
               int *param_7,int param_8)

{
  short *psVar1;
  uint uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  uint uVar10;
  int iVar11;
  
  if (param_4 == (int *)0x0) {
    iVar11 = *param_5;
    do {
      param_2 = param_2 - 1;
      *param_1 = *param_1 + (iVar11 >> 0x10) * (int)*param_3;
      param_1[1] = param_1[1] + (*param_5 >> 0x10) * (int)param_3[1];
      param_1[2] = param_1[2] + (*param_5 >> 0x10) * (int)param_3[2];
      param_1[3] = param_1[3] + (*param_5 >> 0x10) * (int)param_3[3];
      param_1[4] = param_1[4] + (*param_5 >> 0x10) * (int)param_3[4];
      param_1[5] = param_1[5] + (*param_5 >> 0x10) * (int)param_3[5];
      param_1[6] = param_1[6] + (*param_5 >> 0x10) * (int)param_3[6];
      psVar1 = param_3 + 7;
      param_3 = param_3 + 8;
      param_1[7] = param_1[7] + (*param_5 >> 0x10) * (int)*psVar1;
      param_1 = param_1 + 8;
      iVar11 = *param_5 + *param_6;
      *param_5 = iVar11;
    } while (param_2 != 0);
  }
  else {
    do {
      sVar3 = *param_3;
      *param_1 = *param_1 + (*param_5 >> 0x10) * (int)sVar3;
      sVar4 = param_3[1];
      param_1[1] = param_1[1] + (*param_5 >> 0x10) * (int)sVar4;
      sVar5 = param_3[2];
      param_1[2] = param_1[2] + (*param_5 >> 0x10) * (int)sVar5;
      sVar6 = param_3[3];
      param_1[3] = param_1[3] + (*param_5 >> 0x10) * (int)sVar6;
      sVar7 = param_3[4];
      param_1[4] = param_1[4] + (*param_5 >> 0x10) * (int)sVar7;
      sVar8 = param_3[5];
      param_1[5] = param_1[5] + (*param_5 >> 0x10) * (int)sVar8;
      sVar9 = param_3[6];
      param_1[6] = param_1[6] + (*param_5 >> 0x10) * (int)sVar9;
      psVar1 = param_3 + 7;
      param_3 = param_3 + 8;
      iVar11 = (int)sVar4 + (int)sVar3 + (int)sVar5 + (int)sVar6 + (int)sVar7 + (int)sVar8 +
               (int)sVar9 + (int)*psVar1;
      param_1[7] = param_1[7] + (*param_5 >> 0x10) * (int)*psVar1;
      uVar10 = iVar11 * 0x1000;
      *param_5 = *param_5 + *param_6;
      uVar2 = iVar11 * 0x1000 | 7;
      if (-1 < (int)uVar10) {
        uVar2 = uVar10;
      }
      *param_4 = *param_4 + (*param_7 >> 0x10) * ((int)uVar2 >> 0xf);
      param_2 = param_2 - 1;
      param_1 = param_1 + 8;
      *param_7 = *param_7 + param_8;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

