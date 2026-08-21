
/* void cocos2d::experimental::volumeRampMulti<3, 5, int, short, int, int, int>(int*, unsigned long,
   short const*, int*, int*, int const*, int*, int) */

void cocos2d::experimental::volumeRampMulti<3,5,int,short,int,int,int>
               (int *param_1,ulong param_2,short *param_3,int *param_4,int *param_5,int *param_6,
               int *param_7,int param_8)

{
  short *psVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  
  if (param_4 == (int *)0x0) {
    iVar7 = *param_5;
    do {
      param_2 = param_2 - 1;
      *param_1 = *param_1 + (iVar7 >> 0x10) * (int)*param_3;
      param_1[1] = param_1[1] + (*param_5 >> 0x10) * (int)param_3[1];
      param_1[2] = param_1[2] + (*param_5 >> 0x10) * (int)param_3[2];
      param_1[3] = param_1[3] + (*param_5 >> 0x10) * (int)param_3[3];
      psVar1 = param_3 + 4;
      param_3 = param_3 + 5;
      param_1[4] = param_1[4] + (*param_5 >> 0x10) * (int)*psVar1;
      param_1 = param_1 + 5;
      iVar7 = *param_5 + *param_6;
      *param_5 = iVar7;
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
      param_1[2] = param_1[2] + (*param_5 >> 0x10) * (int)sVar4;
      sVar5 = param_3[3];
      param_1[3] = param_1[3] + (*param_5 >> 0x10) * (int)sVar5;
      sVar6 = param_3[4];
      param_1[4] = param_1[4] + (*param_5 >> 0x10) * (int)sVar6;
      *param_5 = *param_5 + *param_6;
      *param_4 = *param_4 +
                 (*param_7 >> 0x10) *
                 ((((int)sVar3 + (int)sVar2 + (int)sVar4 + (int)sVar5 + (int)sVar6) * 0x1000) / 5 >>
                 0xc);
      param_3 = param_3 + 5;
      param_1 = param_1 + 5;
      *param_7 = *param_7 + param_8;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

