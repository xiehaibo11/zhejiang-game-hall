
void pvmp3_dct_6(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = *param_1 + param_1[5];
  iVar5 = param_1[5] - *param_1;
  iVar2 = param_1[1] + param_1[4];
  iVar6 = param_1[4] - param_1[1];
  iVar3 = param_1[2] + param_1[3];
  iVar7 = param_1[3] - param_1[2];
  iVar4 = iVar3 + iVar1;
  *param_1 = iVar4 + iVar2;
  param_1[4] = (iVar4 >> 1) - iVar2;
  param_1[1] = (int)((ulong)((long)iVar6 * -0x2d413cc0) >> 0x1e) +
               (int)((ulong)((long)iVar5 * -0x3dd1ba80) >> 0x1e) +
               (int)((ulong)((long)iVar7 * -0x10907dc0) >> 0x1e);
  param_1[2] = (int)((ulong)((long)(iVar1 - iVar3) * 0x376cf5c0) >> 0x1e);
  param_1[3] = (int)((ulong)((long)((iVar6 - iVar5) + iVar7) * 0x2d413cc0) >> 0x1e);
  param_1[5] = (int)((ulong)((long)iVar6 * 0x2d413cc0) >> 0x1e) +
               (int)((ulong)((long)iVar5 * -0x10907dc0) >> 0x1e) +
               (int)((ulong)((long)iVar7 * -0x3dd1ba80) >> 0x1e);
  return;
}

