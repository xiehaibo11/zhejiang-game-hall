
void jpeg_fdct_14x14(int *param_1,long param_2,ulong param_3)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  int *piVar25;
  int *piVar26;
  int iVar27;
  long lVar28;
  long lVar29;
  int local_120 [8];
  int local_100 [8];
  int local_e0 [8];
  int local_c0 [8];
  int local_a0 [8];
  int local_80 [8];
  
  piVar26 = param_1;
  iVar11 = 0;
  while( true ) {
    do {
      iVar27 = iVar11;
      piVar25 = piVar26;
      pbVar2 = (byte *)(*(long *)(param_2 + (long)iVar27 * 8) + (param_3 & 0xffffffff));
      lVar16 = (ulong)pbVar2[0xd] + (ulong)*pbVar2;
      lVar17 = (ulong)pbVar2[0xc] + (ulong)pbVar2[1];
      lVar9 = (ulong)pbVar2[0xb] + (ulong)pbVar2[2];
      lVar28 = (ulong)*pbVar2 - (ulong)pbVar2[0xd];
      iVar11 = (uint)pbVar2[10] + (uint)pbVar2[3];
      lVar12 = (ulong)pbVar2[2] - (ulong)pbVar2[0xb];
      lVar10 = (ulong)pbVar2[8] + (ulong)pbVar2[5];
      lVar14 = (ulong)pbVar2[3] - (ulong)pbVar2[10];
      lVar13 = (ulong)pbVar2[7] + (ulong)pbVar2[6];
      lVar29 = (ulong)pbVar2[1] - (ulong)pbVar2[0xc];
      lVar15 = (ulong)pbVar2[9] + (ulong)pbVar2[4];
      lVar18 = (ulong)pbVar2[4] - (ulong)pbVar2[9];
      lVar19 = (ulong)pbVar2[5] - (ulong)pbVar2[8];
      lVar23 = lVar13 + lVar16;
      lVar16 = lVar16 - lVar13;
      lVar22 = lVar17 - lVar10;
      lVar21 = (ulong)pbVar2[6] - (ulong)pbVar2[7];
      lVar10 = lVar10 + lVar17;
      lVar17 = lVar15 + lVar9;
      lVar9 = lVar9 - lVar15;
      lVar13 = (lVar12 + lVar28) * 0x2652 + (lVar21 + lVar18) * 0x1814;
      lVar20 = (lVar29 + lVar28) * 0x2ab7 + (lVar19 - lVar21) * 0xef2;
      lVar24 = (lVar16 + lVar22) * 0x2362;
      lVar15 = lVar14 * -0x2000 + (lVar19 - lVar18) * 0x2cf8 + (lVar12 + lVar29) * -0x511;
      piVar25[6] = (int)(lVar22 * -0x3704 + lVar9 * -0x2c1f + lVar24 + 0x1000U >> 0xd);
      piVar25[7] = ((((int)lVar28 - (int)(lVar12 + lVar29)) + (int)lVar14) - (int)(lVar19 - lVar18))
                   - (int)lVar21;
      *piVar25 = iVar11 + (int)lVar17 + (int)lVar10 + (int)lVar23 + -0x700;
      piVar25[1] = (int)((lVar14 * 0x2000 | 0x1000U) + lVar21 * -0x240f + lVar28 * -0x2410 + lVar20
                         + lVar13 >> 0xd);
      piVar25[4] = (int)(lVar10 * 0xa12 + (ulong)(uint)(iVar11 * 2) * -0x16a1 + lVar17 * -0x1c37 +
                         lVar23 * 0x28c6 + 0x1000 >> 0xd);
      piVar25[5] = (int)(lVar18 * 0x23d7 + lVar12 * -0x4bf7 + lVar15 + lVar13 + 0x1000U >> 0xd);
      piVar25[2] = (int)(lVar16 * 0x8bd + lVar9 * 0x13a3 + lVar24 + 0x1000U >> 0xd);
      piVar25[3] = (int)(lVar19 * -0x623c + lVar29 * -0xd92 + lVar15 + lVar20 + 0x1000U >> 0xd);
      piVar26 = local_120;
      iVar11 = 8;
    } while (iVar27 == 7);
    if (iVar27 == 0xd) break;
    piVar26 = piVar25 + 8;
    iVar11 = iVar27 + 1;
  }
  iVar11 = 8;
  piVar26 = local_c0;
  do {
    iVar27 = *param_1 - piVar26[0x10];
    iVar3 = param_1[0x20] - piVar26[-0x10];
    iVar4 = param_1[0x28] - piVar26[-0x18];
    lVar15 = (long)(piVar26[0x10] + *param_1);
    lVar10 = (long)(*piVar26 + param_1[0x10]);
    lVar9 = (long)(piVar26[-0x10] + param_1[0x20]);
    lVar17 = (long)(param_1[0x38] + param_1[0x30]);
    iVar5 = param_1[0x30] - param_1[0x38];
    lVar16 = lVar17 + lVar15;
    lVar15 = lVar15 - lVar17;
    lVar17 = lVar9 + lVar10;
    lVar10 = lVar10 - lVar9;
    uVar1 = piVar26[-8] + param_1[0x18];
    iVar6 = param_1[0x10] - *piVar26;
    iVar7 = param_1[0x18] - piVar26[-8];
    lVar23 = (long)(piVar26[8] + param_1[8]);
    lVar13 = (long)(piVar26[-0x18] + param_1[0x28]);
    lVar9 = lVar13 + lVar23;
    lVar23 = lVar23 - lVar13;
    iVar8 = param_1[8] - piVar26[8];
    lVar19 = (long)iVar27;
    lVar13 = (long)iVar6 + (long)iVar8;
    lVar22 = (long)iVar5;
    lVar12 = (long)iVar4 - (long)iVar3;
    lVar18 = (iVar6 + lVar19) * 0x1906 + (lVar22 + iVar3) * 0xfb9;
    lVar20 = (iVar8 + lVar19) * 0x1be5 + (iVar4 - lVar22) * 0x9c3;
    lVar14 = (lVar15 + lVar23) * 0x171b;
    lVar21 = lVar12 * 0x1d5e + (long)iVar7 * -0x14e6 + lVar13 * -0x34f;
    param_1[0x20] =
         (int)(lVar9 * 0x694 +
               (-(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar1 << 1) * -0xec8 +
               lVar17 * -0x126d + lVar16 * 0x1aa1 + 0x2000 >> 0xe);
    param_1[0x38] =
         (int)(((((lVar19 - lVar13) + (long)iVar7) - lVar12) - lVar22) * 0x14e6 + 0x2000U >> 0xe);
    param_1[8] = (int)((long)iVar7 * 0x14e6 + (long)iVar27 * -0x178d + (long)iVar5 * -0x2a7 + lVar20
                       + lVar18 + 0x2000U >> 0xe);
    *param_1 = (int)((lVar17 + (int)uVar1 + lVar9 + lVar16) * 0x14e6 + 0x2000U >> 0xe);
    param_1[0x28] =
         (int)((long)iVar3 * 0x1768 + (long)iVar6 * -0x319c + lVar21 + lVar18 + 0x2000U >> 0xe);
    iVar11 = iVar11 + -1;
    param_1[0x10] = (int)(lVar15 * 0x5b5 + lVar10 * 0xcd3 + lVar14 + 0x2000U >> 0xe);
    param_1[0x30] = (int)(lVar23 * -0x23ee + lVar10 * -0x1cd0 + lVar14 + 0x2000U >> 0xe);
    param_1[0x18] =
         (int)((long)iVar4 * -0x4027 + (long)iVar8 * -0x8dd + lVar21 + lVar20 + 0x2000U >> 0xe);
    piVar26 = piVar26 + 1;
    param_1 = param_1 + 1;
  } while (0 < iVar11);
  return;
}

