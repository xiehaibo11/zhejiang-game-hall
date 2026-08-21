
/* void cocos2d::experimental::volumeMulti<3, 5, int, int, short, int, short>(int*, unsigned long,
   int const*, int*, short const*, short) */

void cocos2d::experimental::volumeMulti<3,5,int,int,short,int,short>
               (int *param_1,ulong param_2,int *param_3,int *param_4,short *param_5,short param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  
  sVar7 = *param_5;
  iVar8 = (int)sVar7;
  if (param_4 == (int *)0x0) {
    do {
      param_2 = param_2 - 1;
      *param_1 = *param_1 + (*param_3 >> 0xc) * iVar8;
      param_1[1] = param_1[1] + (param_3[1] >> 0xc) * iVar8;
      param_1[2] = param_1[2] + (param_3[2] >> 0xc) * iVar8;
      param_1[3] = param_1[3] + (param_3[3] >> 0xc) * iVar8;
      piVar1 = param_3 + 4;
      param_3 = param_3 + 5;
      param_1[4] = param_1[4] + (*piVar1 >> 0xc) * iVar8;
      param_1 = param_1 + 5;
    } while (param_2 != 0);
  }
  else {
    do {
      iVar2 = *param_3;
      param_2 = param_2 - 1;
      *param_1 = *param_1 + (iVar2 >> 0xc) * iVar8;
      iVar3 = param_3[1];
      iVar9 = (int)sVar7;
      param_1[1] = param_1[1] + (iVar3 >> 0xc) * iVar9;
      iVar4 = param_3[2];
      param_1[2] = param_1[2] + (iVar4 >> 0xc) * iVar9;
      iVar5 = param_3[3];
      param_1[3] = param_1[3] + (iVar5 >> 0xc) * iVar9;
      iVar6 = param_3[4];
      param_3 = param_3 + 5;
      param_1[4] = param_1[4] + (iVar6 >> 0xc) * iVar9;
      *param_4 = *param_4 + ((iVar6 + iVar5 + iVar4 + iVar3 + iVar2) / 5 >> 0xc) * (int)param_6;
      param_1 = param_1 + 5;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

