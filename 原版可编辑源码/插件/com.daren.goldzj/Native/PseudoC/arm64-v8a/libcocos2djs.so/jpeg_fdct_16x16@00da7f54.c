
void jpeg_fdct_16x16(int *param_1,long param_2,ulong param_3)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  long lVar18;
  int *piVar19;
  long lVar20;
  int iVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  int *piVar35;
  int local_160 [8];
  int local_140 [8];
  int local_120 [8];
  int local_100 [8];
  int local_e0 [8];
  int local_c0 [8];
  int local_a0 [8];
  int local_80 [8];
  
  piVar35 = param_1;
  iVar17 = 0;
  while( true ) {
    do {
      iVar21 = iVar17;
      piVar19 = piVar35;
      pbVar1 = (byte *)(*(long *)(param_2 + (long)iVar21 * 8) + (param_3 & 0xffffffff));
      lVar26 = (ulong)pbVar1[0xd] + (ulong)pbVar1[2];
      lVar25 = (ulong)pbVar1[10] + (ulong)pbVar1[5];
      lVar24 = (ulong)pbVar1[0xf] + (ulong)*pbVar1;
      lVar27 = (ulong)pbVar1[0xc] + (ulong)pbVar1[3];
      lVar10 = (ulong)pbVar1[0xb] + (ulong)pbVar1[4];
      lVar16 = (ulong)pbVar1[8] + (ulong)pbVar1[7];
      lVar15 = (ulong)*pbVar1 - (ulong)pbVar1[0xf];
      lVar9 = (ulong)pbVar1[2] - (ulong)pbVar1[0xd];
      lVar23 = (ulong)pbVar1[3] - (ulong)pbVar1[0xc];
      lVar11 = (ulong)pbVar1[4] - (ulong)pbVar1[0xb];
      lVar12 = (ulong)pbVar1[5] - (ulong)pbVar1[10];
      lVar30 = (ulong)pbVar1[6] - (ulong)pbVar1[9];
      lVar31 = (ulong)pbVar1[7] - (ulong)pbVar1[8];
      lVar14 = lVar25 + lVar26;
      lVar26 = lVar26 - lVar25;
      lVar25 = (ulong)pbVar1[0xe] + (ulong)pbVar1[1];
      lVar33 = (ulong)pbVar1[9] + (ulong)pbVar1[6];
      lVar13 = (ulong)pbVar1[1] - (ulong)pbVar1[0xe];
      lVar20 = lVar16 + lVar24;
      lVar24 = lVar24 - lVar16;
      lVar16 = lVar33 + lVar25;
      lVar25 = lVar25 - lVar33;
      lVar33 = lVar10 + lVar27;
      lVar27 = lVar27 - lVar10;
      lVar18 = (lVar13 + lVar15) * 0x2b4e + (lVar30 - lVar31) * 0xd23;
      lVar28 = (lVar9 + lVar15) * 0x27e9 + (lVar31 + lVar12) * 0x1555;
      lVar29 = (lVar23 + lVar15) * 0x22fc + (lVar11 - lVar31) * 0x1cb6;
      lVar34 = (lVar9 + lVar13) * 0x470 + (lVar30 - lVar12) * 0x2d09;
      lVar32 = (lVar23 + lVar13) * -0x1555 + (lVar30 + lVar11) * -0x27e9;
      lVar10 = (lVar23 + lVar9) * -0x2b4e + (lVar12 - lVar11) * 0xd23;
      lVar22 = (lVar27 - lVar25) * 0x8d4 + (lVar24 - lVar26) * 0x2c63;
      *piVar19 = ((int)lVar14 + (int)lVar33 + (int)lVar16 + (int)lVar20) * 4 + -0x2000;
      piVar19[1] = (int)(lVar31 * 0x18f3 + lVar15 * -0x492a + lVar28 + lVar18 + lVar29 + 0x400U >>
                        0xb);
      piVar19[2] = (int)(lVar25 * 0x2e75 + lVar26 * 0x4587 + lVar22 + 0x400U >> 0xb);
      piVar19[3] = (int)(lVar30 * -0x353f + lVar13 * 0x24d + lVar32 + lVar34 + lVar18 + 0x400U >>
                        0xb);
      piVar19[4] = (int)((lVar20 - lVar33) * 0x29cf + (lVar16 - lVar14) * 0x1151 + 0x400U >> 0xb);
      piVar19[5] = (int)(lVar12 * 0x2747 + lVar9 * -0x2406 + lVar10 + lVar34 + lVar28 + 0x400U >>
                        0xb);
      piVar19[6] = (int)(lVar24 * -0x6c2 + lVar27 * -0x21f9 + lVar22 + 0x400U >> 0xb);
      piVar19[7] = (int)(lVar11 * 0x4560 + lVar23 * 0x2218 + lVar10 + lVar32 + lVar29 + 0x400U >>
                        0xb);
      piVar35 = local_160;
      iVar17 = 8;
    } while (iVar21 == 7);
    if (iVar21 == 0xf) break;
    piVar35 = piVar19 + 8;
    iVar17 = iVar21 + 1;
  }
  iVar17 = 8;
  piVar35 = local_e0;
  do {
    iVar21 = *param_1 - piVar35[0x18];
    iVar2 = param_1[8] - piVar35[0x10];
    iVar3 = param_1[0x10] - piVar35[8];
    iVar4 = param_1[0x18] - *piVar35;
    iVar5 = param_1[0x20] - piVar35[-8];
    iVar6 = param_1[0x28] - piVar35[-0x10];
    iVar7 = param_1[0x30] - piVar35[-0x18];
    iVar8 = param_1[0x38] - piVar35[-0x20];
    lVar9 = (long)(piVar35[0x18] + *param_1);
    lVar11 = (long)(piVar35[0x10] + param_1[8]);
    lVar12 = (long)(piVar35[8] + param_1[0x10]);
    lVar10 = (long)(*piVar35 + param_1[0x18]);
    lVar16 = (long)(piVar35[-8] + param_1[0x20]);
    lVar27 = (long)(piVar35[-0x10] + param_1[0x28]);
    lVar24 = (long)(piVar35[-0x18] + param_1[0x30]);
    lVar25 = (long)(piVar35[-0x20] + param_1[0x38]);
    lVar33 = (long)iVar21;
    lVar13 = (long)iVar2;
    lVar18 = (long)iVar3;
    lVar22 = (long)iVar4;
    lVar23 = (long)iVar5;
    lVar28 = (long)iVar6;
    lVar29 = (long)iVar7;
    lVar30 = (long)iVar8;
    lVar26 = lVar25 + lVar9;
    lVar9 = lVar9 - lVar25;
    lVar25 = lVar24 + lVar11;
    lVar11 = lVar11 - lVar24;
    lVar24 = lVar27 + lVar12;
    lVar12 = lVar12 - lVar27;
    lVar27 = lVar16 + lVar10;
    lVar10 = lVar10 - lVar16;
    lVar15 = (lVar18 + lVar33) * 0x27e9 + (lVar30 + lVar28) * 0x1555;
    lVar14 = (lVar22 + lVar33) * 0x22fc + (lVar23 - lVar30) * 0x1cb6;
    lVar20 = (lVar18 + lVar13) * 0x470 + (lVar29 - lVar28) * 0x2d09;
    lVar16 = (lVar13 + lVar33) * 0x2b4e + (lVar29 - lVar30) * 0xd23;
    lVar33 = (lVar22 + lVar13) * -0x1555 + (lVar29 + lVar23) * -0x27e9;
    lVar13 = (lVar10 - lVar11) * 0x8d4 + (lVar9 - lVar12) * 0x2c63;
    *param_1 = (int)(lVar27 + lVar24 + lVar25 + lVar26 + 8U >> 4);
    lVar18 = (lVar22 + lVar18) * -0x2b4e + (lVar28 - lVar23) * 0xd23;
    param_1[0x20] =
         (int)((lVar26 - lVar27) * 0x29cf + (lVar25 - lVar24) * 0x1151 + 0x10000U >> 0x11);
    param_1[0x10] = (int)(lVar11 * 0x2e75 + lVar12 * 0x4587 + lVar13 + 0x10000U >> 0x11);
    param_1[0x30] = (int)(lVar9 * -0x6c2 + lVar10 * -0x21f9 + lVar13 + 0x10000U >> 0x11);
    param_1[8] = (int)((long)iVar8 * 0x18f3 + (long)iVar21 * -0x492a + lVar15 + lVar16 + lVar14 +
                       0x10000U >> 0x11);
    param_1[0x28] =
         (int)((long)iVar6 * 0x2747 + (long)iVar3 * -0x2406 + lVar18 + lVar20 + lVar15 + 0x10000U >>
              0x11);
    iVar17 = iVar17 + -1;
    param_1[0x18] =
         (int)((long)iVar7 * -0x353f + (long)iVar2 * 0x24d + lVar33 + lVar20 + lVar16 + 0x10000U >>
              0x11);
    param_1[0x38] =
         (int)((long)iVar5 * 0x4560 + (long)iVar4 * 0x2218 + lVar18 + lVar33 + lVar14 + 0x10000U >>
              0x11);
    piVar35 = piVar35 + 1;
    param_1 = param_1 + 1;
  } while (0 < iVar17);
  return;
}

