
void pvmp3_dct_9(int *param_1)

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
  
  iVar1 = *param_1 + param_1[8];
  iVar10 = param_1[8] - *param_1;
  iVar2 = param_1[1] + param_1[7];
  iVar3 = param_1[2] + param_1[6];
  iVar11 = param_1[6] - param_1[2];
  iVar4 = param_1[3] + param_1[5];
  iVar12 = param_1[5] - param_1[3];
  iVar5 = param_1[4] + iVar2;
  iVar6 = iVar1 * 2;
  iVar7 = iVar3 * 2;
  iVar8 = iVar4 * 2;
  iVar9 = iVar12 * 2;
  iVar4 = iVar3 + iVar1 + iVar4;
  iVar1 = iVar11 * 2;
  iVar3 = iVar10 * 2;
  iVar13 = (iVar2 >> 1) - param_1[4];
  *param_1 = iVar4 + iVar5;
  iVar2 = (param_1[7] - param_1[1]) * 2;
  iVar14 = (int)((ulong)((long)iVar2 * 0x6ed9eb80) >> 0x20);
  param_1[6] = (iVar4 >> 1) - iVar5;
  param_1[3] = (int)((ulong)((long)(((iVar11 - iVar10) + iVar12) * 2) * 0x6ed9eb80) >> 0x20);
  param_1[4] = ((int)((ulong)((long)iVar6 * 0x620dbe80) >> 0x20) - iVar13) +
               (int)((ulong)((long)iVar7 * -0x7847d900) >> 0x20) +
               (int)((ulong)((long)iVar8 * 0x163a1a80) >> 0x20);
  param_1[7] = iVar14 + (int)((ulong)((long)iVar3 * -0x2bc75100) >> 0x20) +
               (int)((ulong)((long)iVar1 * -0x7e0e2e00) >> 0x20) +
               (int)((ulong)((long)iVar9 * 0x5246dd80) >> 0x20);
  param_1[8] = ((int)((ulong)((long)iVar6 * 0x163a1a80) >> 0x20) - iVar13) +
               (int)((ulong)((long)iVar7 * 0x620dbe80) >> 0x20) +
               (int)((ulong)((long)iVar8 * -0x7847d900) >> 0x20);
  param_1[1] = (int)((ulong)((long)iVar2 * -0x6ed9eb80) >> 0x20) +
               (int)((ulong)((long)iVar3 * -0x7e0e2e00) >> 0x20) +
               (int)((ulong)((long)iVar1 * -0x5246dd80) >> 0x20) +
               (int)((ulong)((long)iVar9 * -0x2bc75100) >> 0x20);
  param_1[2] = iVar13 + (int)((ulong)((long)iVar6 * 0x7847d900) >> 0x20) +
               (int)((ulong)((long)iVar7 * -0x163a1a80) >> 0x20) +
               (int)((ulong)((long)iVar8 * -0x620dbe80) >> 0x20);
  param_1[5] = iVar14 + (int)((ulong)((long)iVar3 * -0x5246dd80) >> 0x20) +
               (int)((ulong)((long)iVar1 * 0x2bc75100) >> 0x20) +
               (int)((ulong)((long)iVar9 * -0x7e0e2e00) >> 0x20);
  return;
}

