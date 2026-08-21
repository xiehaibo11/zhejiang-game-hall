
void pvmp3_split(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  
  iVar13 = param_1[-6];
  iVar1 = param_1[-2];
  iVar7 = param_1[-1];
  iVar2 = param_1[-4];
  iVar8 = param_1[-3];
  iVar14 = param_1[-8];
  iVar15 = param_1[-5];
  iVar16 = param_1[-7];
  iVar3 = param_1[-10];
  iVar9 = param_1[-9];
  iVar4 = param_1[-0xc];
  iVar10 = param_1[-0xb];
  iVar5 = param_1[-0xe];
  iVar11 = param_1[-0xd];
  param_1[-4] = iVar2 + param_1[3];
  param_1[-3] = iVar8 + param_1[2];
  param_1[-2] = iVar1 + param_1[1];
  param_1[-1] = iVar7 + *param_1;
  param_1[-6] = iVar13 + param_1[5];
  param_1[-5] = iVar15 + param_1[4];
  iVar6 = param_1[-0x10];
  iVar12 = param_1[-0xf];
  param_1[-8] = iVar14 + param_1[7];
  param_1[-7] = iVar16 + param_1[6];
  param_1[-10] = iVar3 + param_1[9];
  param_1[-9] = iVar9 + param_1[8];
  param_1[-0xc] = iVar4 + param_1[0xb];
  param_1[-0xb] = iVar10 + param_1[10];
  param_1[-0xe] = iVar5 + param_1[0xd];
  param_1[-0xd] = iVar11 + param_1[0xc];
  param_1[-0x10] = iVar6 + param_1[0xf];
  param_1[-0xf] = iVar12 + param_1[0xe];
  *param_1 = (int)((ulong)((long)(iVar7 - *param_1) * 0x51852300) >> 0x1b);
  param_1[1] = (int)((ulong)((long)(iVar1 - param_1[1]) * 0x1b42c840) >> 0x1b);
  param_1[2] = (int)((ulong)((long)(iVar8 - param_1[2]) * 0x107655e0) >> 0x1b);
  param_1[3] = (int)((ulong)((long)(iVar2 - param_1[3]) * 0xbdf91b0) >> 0x1b);
  param_1[4] = (int)((ulong)((long)(iVar15 - param_1[4]) * 0x95b0350) >> 0x1b);
  param_1[5] = (int)((ulong)((long)(iVar13 - param_1[5]) * 0x7c7d1d8) >> 0x1b);
  param_1[6] = (int)((ulong)((long)((iVar16 - param_1[6]) * 2) * 0x6b6fcf00) >> 0x20);
  param_1[7] = (int)((ulong)((long)((iVar14 - param_1[7]) * 2) * 0x5f4cf700) >> 0x20);
  param_1[8] = (int)((ulong)((long)((iVar9 - param_1[8]) * 2) * 0x56601e80) >> 0x20);
  param_1[9] = (int)((ulong)((long)((iVar3 - param_1[9]) * 2) * 0x4fae3700) >> 0x20);
  param_1[10] = (int)((ulong)((long)((iVar10 - param_1[10]) * 2) * 0x4a9d9d00) >> 0x20);
  param_1[0xb] = (int)((ulong)((long)((iVar4 - param_1[0xb]) * 2) * 0x46cc1c00) >> 0x20);
  param_1[0xc] = (int)((ulong)((long)((iVar11 - param_1[0xc]) * 2) * 0x43f93400) >> 0x20);
  param_1[0xd] = (int)((ulong)((long)((iVar5 - param_1[0xd]) * 2) * 0x41fa2d80) >> 0x20);
  param_1[0xe] = (int)((ulong)((long)((iVar12 - param_1[0xe]) * 2) * 0x40b34580) >> 0x20);
  param_1[0xf] = (int)((ulong)((long)((iVar6 - param_1[0xf]) * 2) * 0x4013c280) >> 0x20);
  return;
}

