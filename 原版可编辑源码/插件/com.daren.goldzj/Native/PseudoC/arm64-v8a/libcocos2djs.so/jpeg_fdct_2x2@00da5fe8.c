
void jpeg_fdct_2x2(int *param_1,long *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  memset(param_1,0,0x100);
  pbVar3 = (byte *)(*param_2 + (ulong)param_3);
  pbVar4 = (byte *)(param_2[1] + (ulong)param_3);
  uVar8 = (uint)*pbVar3;
  uVar7 = (uint)pbVar3[1];
  iVar1 = uVar7 + uVar8;
  iVar5 = uVar8 - uVar7;
  uVar8 = (uint)*pbVar4;
  uVar7 = (uint)pbVar4[1];
  iVar2 = uVar7 + uVar8;
  iVar6 = uVar8 - uVar7;
  *param_1 = (iVar2 + iVar1) * 0x10 + -0x2000;
  param_1[1] = (iVar6 + iVar5) * 0x10;
  param_1[8] = (iVar1 - iVar2) * 0x10;
  param_1[9] = (iVar5 - iVar6) * 0x10;
  return;
}

