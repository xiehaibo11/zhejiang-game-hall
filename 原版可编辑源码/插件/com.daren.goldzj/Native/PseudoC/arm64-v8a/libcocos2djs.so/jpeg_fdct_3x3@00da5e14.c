
void jpeg_fdct_3x3(int *param_1,long *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  long lVar4;
  int iVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  int iVar14;
  ulong uVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  
  memset(param_1,0,0x100);
  uVar15 = (ulong)param_3;
  pbVar3 = (byte *)(*param_2 + uVar15);
  bVar6 = pbVar3[1];
  lVar7 = (ulong)pbVar3[2] + (ulong)*pbVar3;
  iVar1 = ((int)lVar7 + (uint)bVar6) * 0x10 + -0x1800;
  iVar9 = (int)(((ulong)*pbVar3 - (ulong)pbVar3[2]) * 0x2731 + 0x100 >> 9);
  *param_1 = iVar1;
  param_1[1] = iVar9;
  param_1[2] = (int)((lVar7 + (ulong)(uint)bVar6 * -2) * 0x16a1 + 0x100 >> 9);
  pbVar3 = (byte *)(param_2[1] + uVar15);
  lVar7 = (ulong)pbVar3[2] + (ulong)*pbVar3;
  lVar4 = (lVar7 + (ulong)pbVar3[1]) * 0x10 + 0xffffe800;
  uVar13 = ((ulong)*pbVar3 - (ulong)pbVar3[2]) * 0x2731 + 0x100 >> 9;
  uVar11 = (lVar7 + (ulong)pbVar3[1] * -2) * 0x16a1 + 0x100 >> 9;
  iVar14 = (int)lVar4;
  iVar12 = (int)uVar13;
  param_1[8] = iVar14;
  param_1[9] = iVar12;
  iVar10 = (int)uVar11;
  param_1[10] = iVar10;
  pbVar3 = (byte *)(param_2[2] + uVar15);
  lVar7 = (ulong)pbVar3[2] + (ulong)*pbVar3;
  iVar5 = param_1[2];
  iVar2 = ((int)lVar7 + (uint)pbVar3[1]) * 0x10 + -0x1800;
  iVar17 = (int)(((ulong)*pbVar3 - (ulong)pbVar3[2]) * 0x2731 + 0x100 >> 9);
  iVar16 = (int)((lVar7 + (ulong)pbVar3[1] * -2) * 0x16a1 + 0x100 >> 9);
  lVar7 = (long)(iVar2 + iVar1);
  lVar8 = (long)(iVar17 + iVar9);
  lVar18 = (long)(iVar5 + iVar16);
  param_1[8] = (int)((long)(iVar1 - iVar2) * 0x45ad + 0x4000U >> 0xf);
  param_1[9] = (int)((long)(iVar9 - iVar17) * 0x45ad + 0x4000U >> 0xf);
  param_1[0x10] = (int)((lVar7 - ((lVar4 << 0x20) >> 0x1f)) * 0x283a + 0x4000U >> 0xf);
  param_1[0x11] = (int)((lVar8 - ((long)(uVar13 << 0x20) >> 0x1f)) * 0x283a + 0x4000U >> 0xf);
  *param_1 = (int)((lVar7 + iVar14) * 0x38e4 + 0x4000U >> 0xf);
  param_1[1] = (int)((lVar8 + iVar12) * 0x38e4 + 0x4000U >> 0xf);
  param_1[2] = (int)((lVar18 + iVar10) * 0x38e4 + 0x4000U >> 0xf);
  param_1[0x12] = (int)((lVar18 - ((long)(uVar11 << 0x20) >> 0x1f)) * 0x283a + 0x4000U >> 0xf);
  param_1[10] = (int)((long)(iVar5 - iVar16) * 0x45ad + 0x4000U >> 0xf);
  return;
}

