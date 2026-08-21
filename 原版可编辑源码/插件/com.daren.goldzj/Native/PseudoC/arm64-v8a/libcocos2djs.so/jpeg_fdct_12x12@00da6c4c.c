
void jpeg_fdct_12x12(int *param_1,long param_2,ulong param_3)

{
  byte *pbVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  int iVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  int local_e0 [8];
  int local_c0 [8];
  int local_a0 [8];
  int local_80 [8];
  
  piVar8 = param_1;
  iVar23 = 0;
  while( true ) {
    do {
      iVar18 = iVar23;
      piVar17 = piVar8;
      pbVar1 = (byte *)(*(long *)(param_2 + (long)iVar18 * 8) + (param_3 & 0xffffffff));
      lVar10 = (ulong)pbVar1[0xb] + (ulong)*pbVar1;
      uVar2 = (ulong)pbVar1[10] + (ulong)pbVar1[1];
      lVar15 = (ulong)*pbVar1 - (ulong)pbVar1[0xb];
      lVar27 = (ulong)pbVar1[9] + (ulong)pbVar1[2];
      lVar22 = (ulong)pbVar1[1] - (ulong)pbVar1[10];
      lVar16 = (ulong)pbVar1[8] + (ulong)pbVar1[3];
      lVar20 = (ulong)pbVar1[2] - (ulong)pbVar1[9];
      lVar21 = (ulong)pbVar1[3] - (ulong)pbVar1[8];
      lVar11 = (ulong)pbVar1[6] + (ulong)pbVar1[5];
      lVar12 = (ulong)pbVar1[7] + (ulong)pbVar1[4];
      lVar9 = (ulong)pbVar1[4] - (ulong)pbVar1[7];
      lVar19 = (ulong)pbVar1[5] - (ulong)pbVar1[6];
      lVar14 = lVar11 + lVar10;
      lVar10 = lVar10 - lVar11;
      lVar11 = lVar27 - lVar16;
      lVar16 = lVar16 + lVar27;
      uVar13 = (uint)uVar2;
      iVar23 = (int)lVar12;
      lVar27 = (lVar9 + lVar22) * 0x1151;
      lVar22 = lVar27 + lVar22 * 0x187e;
      lVar24 = (lVar20 + lVar15) * 0x23e7;
      lVar27 = lVar27 + lVar9 * -0x3b21;
      lVar9 = (lVar21 + lVar20) * -0x5e8;
      lVar25 = (lVar21 + lVar15) * 0x1b8d;
      piVar17[2] = (int)((uVar2 | 0x1000) + (lVar11 * 0x2bb5 - lVar12) + lVar10 * 0x2bb6 >> 0xd);
      *piVar17 = (uVar13 | 0xfffffa00) + (int)lVar16 + iVar23 + (int)lVar14;
      piVar17[3] = (int)(lVar27 + (lVar15 - lVar21) * 0x29cf + (lVar19 + lVar20) * -0x1151 + 0x1000U
                        >> 0xd);
      piVar17[1] = (int)(lVar24 + lVar15 * -0x1296 + lVar25 + lVar22 + lVar19 * 0x5e8 + 0x1000U >>
                        0xd);
      piVar17[4] = (int)((lVar14 - lVar16) * 0x2731 + 0x1000U >> 0xd);
      piVar17[5] = (int)((ulong)(((lVar24 + lVar20 * -0x4add + lVar9 + 0x1000) - lVar27) +
                                lVar19 * 0x1b8d) >> 0xd);
      piVar17[6] = (int)lVar10 - ((uVar13 - iVar23) + (int)lVar11);
      piVar17[7] = (int)((ulong)(((lVar9 + lVar21 * 0x173a + lVar25 + 0x1000) - lVar22) +
                                lVar19 * -0x23e7) >> 0xd);
      piVar8 = local_e0;
      iVar23 = 8;
    } while (iVar18 == 7);
    if (iVar18 == 0xb) break;
    piVar8 = piVar17 + 8;
    iVar23 = iVar18 + 1;
  }
  iVar23 = 8;
  piVar8 = local_a0;
  do {
    iVar18 = param_1[8] - *piVar8;
    iVar3 = param_1[0x10] - piVar8[-8];
    iVar4 = *param_1 - piVar8[8];
    iVar5 = param_1[0x28] - param_1[0x30];
    lVar11 = (long)(piVar8[8] + *param_1);
    lVar12 = (long)(*piVar8 + param_1[8]);
    lVar14 = (long)(piVar8[-8] + param_1[0x10]);
    lVar16 = (long)(piVar8[-0x10] + param_1[0x18]);
    lVar15 = (long)(param_1[0x38] + param_1[0x20]);
    lVar27 = (long)(param_1[0x30] + param_1[0x28]);
    iVar6 = param_1[0x18] - piVar8[-0x10];
    iVar7 = param_1[0x20] - param_1[0x38];
    lVar10 = lVar27 + lVar11;
    lVar11 = lVar11 - lVar27;
    lVar27 = lVar16 + lVar14;
    lVar14 = lVar14 - lVar16;
    lVar16 = lVar12 - lVar15;
    lVar19 = ((long)iVar7 + (long)iVar18) * 0xf65;
    lVar21 = (long)iVar4;
    lVar26 = (long)iVar3;
    lVar20 = lVar19 + (long)iVar18 * 0x15c5;
    lVar19 = lVar19 + (long)iVar7 * -0x348f;
    lVar22 = (lVar26 + lVar21) * 0x1fea;
    lVar24 = (long)iVar6;
    lVar25 = (lVar24 + lVar26) * -0x540;
    lVar9 = (lVar24 + lVar21) * 0x187d;
    param_1[0x30] = (int)((lVar11 - (lVar16 + lVar14)) * 0x1c72 + 0x2000U >> 0xe);
    *param_1 = (int)((lVar27 + lVar12 + lVar15 + lVar10) * 0x1c72 + 0x2000U >> 0xe);
    param_1[0x20] = (int)((lVar10 - lVar27) * 0x22d6 + 0x2000U >> 0xe);
    param_1[0x10] = (int)(lVar11 * 0x26db + lVar14 * 0xa69 + lVar16 * 0x1c72 + 0x2000U >> 0xe);
    param_1[0x28] =
         (int)((ulong)(((lVar22 + (long)iVar3 * -0x428c + lVar25 + 0x2000) - lVar19) +
                      (long)iVar5 * 0x187d) >> 0xe);
    iVar23 = iVar23 + -1;
    param_1[0x18] =
         (int)(lVar19 + (lVar21 - lVar24) * 0x252a + (lVar26 + iVar5) * -0xf65 + 0x2000U >> 0xe);
    param_1[8] = (int)(lVar22 + (long)iVar4 * -0x1085 + lVar9 + lVar20 + (long)iVar5 * 0x540 +
                       0x2000U >> 0xe);
    param_1[0x38] =
         (int)((ulong)(((lVar25 + (long)iVar6 * 0x14a5 + lVar9 + 0x2000) - lVar20) +
                      (long)iVar5 * -0x1fea) >> 0xe);
    piVar8 = piVar8 + 1;
    param_1 = param_1 + 1;
  } while (0 < iVar23);
  return;
}

