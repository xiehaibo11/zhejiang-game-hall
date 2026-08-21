
void jpeg_fdct_12x6(int *param_1,long param_2,ulong param_3)

{
  byte *pbVar1;
  ulong uVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  
  lVar4 = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  do {
    pbVar1 = (byte *)(*(long *)(param_2 + lVar4) + (param_3 & 0xffffffff));
    lVar6 = (ulong)pbVar1[0xb] + (ulong)*pbVar1;
    uVar2 = (ulong)pbVar1[10] + (ulong)pbVar1[1];
    lVar13 = (ulong)*pbVar1 - (ulong)pbVar1[0xb];
    lVar5 = (ulong)pbVar1[9] + (ulong)pbVar1[2];
    lVar14 = (ulong)pbVar1[1] - (ulong)pbVar1[10];
    lVar10 = (ulong)pbVar1[8] + (ulong)pbVar1[3];
    lVar12 = (ulong)pbVar1[2] - (ulong)pbVar1[9];
    lVar18 = (ulong)pbVar1[3] - (ulong)pbVar1[8];
    lVar20 = (ulong)pbVar1[6] + (ulong)pbVar1[5];
    lVar8 = (ulong)pbVar1[7] + (ulong)pbVar1[4];
    lVar11 = (ulong)pbVar1[5] - (ulong)pbVar1[6];
    lVar9 = lVar20 + lVar6;
    lVar6 = lVar6 - lVar20;
    lVar19 = lVar5 - lVar10;
    lVar10 = lVar10 + lVar5;
    iVar7 = (int)uVar2;
    iVar15 = (int)lVar8;
    lVar5 = (ulong)pbVar1[4] - (ulong)pbVar1[7];
    lVar20 = (lVar5 + lVar14) * 0x1151;
    lVar16 = (lVar12 + lVar13) * 0x23e7;
    lVar14 = lVar20 + lVar14 * 0x187e;
    lVar20 = lVar20 + lVar5 * -0x3b21;
    lVar5 = (lVar18 + lVar12) * -0x5e8;
    lVar17 = (lVar18 + lVar13) * 0x1b8d;
    piVar3 = param_1 + lVar4;
    piVar3[2] = (int)((uVar2 | 0x400) + (lVar19 * 0x2bb5 - lVar8) + lVar6 * 0x2bb6 >> 0xb);
    piVar3[3] = (int)(lVar20 + (lVar13 - lVar18) * 0x29cf + (lVar11 + lVar12) * -0x1151 + 0x400U >>
                     0xb);
    *piVar3 = ((int)lVar10 + iVar7 + iVar15 + (int)lVar9) * 4 + -0x1800;
    piVar3[1] = (int)(lVar16 + lVar13 * -0x1296 + lVar17 + lVar14 + lVar11 * 0x5e8 + 0x400U >> 0xb);
    piVar3[4] = (int)((lVar9 - lVar10) * 0x2731 + 0x400U >> 0xb);
    piVar3[5] = (int)((ulong)(((lVar16 + lVar12 * -0x4add + lVar5 + 0x400) - lVar20) +
                             lVar11 * 0x1b8d) >> 0xb);
    lVar4 = lVar4 + 8;
    piVar3[6] = ((int)lVar6 - ((iVar7 - iVar15) + (int)lVar19)) * 4;
    piVar3[7] = (int)((ulong)(((lVar5 + lVar18 * 0x173a + lVar17 + 0x400) - lVar14) +
                             lVar11 * -0x23e7) >> 0xb);
  } while (lVar4 != 0x30);
  iVar7 = 8;
  do {
    iVar15 = param_1[0x20] + param_1[8];
    lVar10 = (long)(param_1[0x28] + *param_1);
    lVar6 = (long)(param_1[0x18] + param_1[0x10]);
    lVar20 = (long)(*param_1 - param_1[0x28]);
    lVar8 = (long)(param_1[8] - param_1[0x20]);
    lVar9 = (long)(param_1[0x10] - param_1[0x18]);
    lVar4 = lVar6 + lVar10;
    lVar5 = (lVar9 + lVar20) * 0x14d3;
    param_1[0x10] = (int)((ulong)((lVar10 - lVar6) * 0x45ad + 0x8000) >> 0x10);
    iVar7 = iVar7 + -1;
    *param_1 = (int)((ulong)((lVar4 + iVar15) * 0x38e4 + 0x8000) >> 0x10);
    param_1[0x18] = (int)((ulong)(((lVar20 - lVar8) - lVar9) * 0x38e4 + 0x8000) >> 0x10);
    param_1[0x20] = (int)((ulong)((lVar4 + (long)iVar15 * -2) * 0x283a + 0x8000) >> 0x10);
    param_1[8] = (int)((ulong)(lVar5 + (lVar8 + lVar20) * 0x38e4 + 0x8000) >> 0x10);
    param_1[0x28] = (int)((ulong)(lVar5 + (lVar9 - lVar8) * 0x38e4 + 0x8000) >> 0x10);
    param_1 = param_1 + 1;
  } while (0 < iVar7);
  return;
}

