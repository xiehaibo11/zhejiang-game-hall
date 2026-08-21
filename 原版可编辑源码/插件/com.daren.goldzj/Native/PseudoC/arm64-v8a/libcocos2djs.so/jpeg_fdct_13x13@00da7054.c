
void jpeg_fdct_13x13(int *param_1,long param_2,ulong param_3)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  int *piVar19;
  int *piVar20;
  int iVar21;
  ulong uVar22;
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
  long lVar35;
  long lVar36;
  long lVar37;
  int local_100 [8];
  int local_e0 [8];
  int local_c0 [8];
  int local_a0 [8];
  int local_80 [8];
  
  piVar19 = param_1;
  iVar18 = 0;
  while( true ) {
    do {
      iVar21 = iVar18;
      piVar20 = piVar19;
      pbVar1 = (byte *)(*(long *)(param_2 + (long)iVar21 * 8) + (param_3 & 0xffffffff));
      uVar22 = (ulong)pbVar1[6];
      lVar7 = (ulong)pbVar1[0xc] + (ulong)*pbVar1;
      lVar8 = (ulong)pbVar1[0xb] + (ulong)pbVar1[1];
      lVar17 = (ulong)pbVar1[10] + (ulong)pbVar1[2];
      lVar14 = (ulong)*pbVar1 - (ulong)pbVar1[0xc];
      lVar28 = (ulong)pbVar1[1] - (ulong)pbVar1[0xb];
      lVar26 = (ulong)pbVar1[2] - (ulong)pbVar1[10];
      lVar25 = (ulong)pbVar1[3] - (ulong)pbVar1[9];
      lVar9 = (ulong)pbVar1[8] + (ulong)pbVar1[4];
      lVar23 = (ulong)pbVar1[4] - (ulong)pbVar1[8];
      lVar24 = (ulong)pbVar1[5] - (ulong)pbVar1[7];
      lVar34 = lVar7 + uVar22 * -2;
      lVar10 = (ulong)pbVar1[7] + (ulong)pbVar1[5];
      lVar35 = lVar17 + uVar22 * -2;
      lVar13 = (ulong)pbVar1[9] + (ulong)pbVar1[3];
      lVar33 = (lVar25 + lVar14) * 0x1e02 + (lVar24 + lVar23) * 0xad5;
      lVar11 = lVar8 + uVar22 * -2;
      lVar15 = lVar13 + uVar22 * -2;
      lVar32 = (lVar26 + lVar28) * -0xad5 + (lVar23 - lVar24) * 0x1e02;
      lVar31 = lVar9 + uVar22 * -2;
      lVar36 = (lVar28 + lVar14) * 0x2a50;
      lVar37 = (lVar26 + lVar14) * 0x253e;
      lVar27 = (lVar25 + lVar26) * -0x1508;
      lVar29 = (lVar25 + lVar28) * -0x253e;
      lVar30 = lVar10 + uVar22 * -2;
      lVar16 = (lVar15 - lVar31) * -0xdf2 + (lVar34 - lVar35) * 0x24f9 + (lVar11 - lVar30) * -0xa20;
      lVar12 = (lVar15 + lVar31) * -0x1dfe + (lVar34 + lVar35) * 0x319 + (lVar11 + lVar30) * 0xf95;
      *piVar20 = (int)lVar7 + (int)lVar8 + (int)lVar17 + (int)lVar13 + (int)lVar9 + (uint)pbVar1[6]
                 + (int)lVar10 + -0x680;
      piVar20[1] = (int)(lVar36 + lVar14 * -0x40a5 + lVar37 + lVar23 * 0xa33 + lVar33 + 0x1000U >>
                        0xd);
      piVar20[4] = (int)(lVar12 + lVar16 + 0x1000U >> 0xd);
      piVar20[5] = (int)(lVar37 + lVar26 * -0x324f + lVar27 + lVar24 * 0x4853 + lVar32 + 0x1000U >>
                        0xd);
      piVar20[6] = (int)((ulong)((0x1000 - lVar12) + lVar16) >> 0xd);
      piVar20[7] = (int)(lVar27 + lVar25 * 0x4694 + lVar29 + lVar24 * -0x37c1 + lVar33 + 0x1000U >>
                        0xd);
      piVar20[2] = (int)(lVar34 * 0x2bf1 + lVar11 * 0x21e0 + lVar35 * 0x100c + lVar15 * -0x574 +
                         lVar31 * -0x19b5 + lVar30 * -0x2812 + 0x1000U >> 0xd);
      piVar20[3] = (int)(lVar36 + lVar28 * 0x1acb + lVar29 + lVar23 * -0x4aef + lVar32 + 0x1000U >>
                        0xd);
      piVar19 = local_100;
      iVar18 = 8;
    } while (iVar21 == 7);
    if (iVar21 == 0xc) break;
    piVar19 = piVar20 + 8;
    iVar18 = iVar21 + 1;
  }
  iVar18 = 8;
  piVar19 = local_c0;
  do {
    iVar21 = *param_1 - piVar19[0x10];
    iVar2 = param_1[8] - piVar19[8];
    iVar3 = param_1[0x10] - *piVar19;
    iVar4 = param_1[0x18] - piVar19[-8];
    iVar5 = param_1[0x20] - piVar19[-0x10];
    iVar6 = param_1[0x28] - param_1[0x38];
    lVar17 = (long)iVar21;
    lVar12 = (long)iVar2;
    lVar24 = (long)iVar3;
    lVar25 = (long)iVar4;
    lVar26 = (long)param_1[0x30];
    lVar23 = (lVar25 + lVar17) * 0x16bb + ((long)iVar6 + (long)iVar5) * 0x834;
    lVar31 = (lVar12 + lVar17) * 0x200c;
    lVar15 = (long)(piVar19[0x10] + *param_1);
    lVar7 = (long)(piVar19[8] + param_1[8]);
    lVar9 = (long)(*piVar19 + param_1[0x10]);
    lVar16 = lVar15 + lVar26 * -2;
    lVar13 = (long)(piVar19[-8] + param_1[0x18]);
    lVar14 = (long)(piVar19[-0x10] + param_1[0x20]);
    lVar8 = lVar7 + lVar26 * -2;
    lVar10 = lVar9 + lVar26 * -2;
    lVar11 = lVar13 + lVar26 * -2;
    lVar29 = (lVar24 + lVar12) * -0x834 + ((long)iVar5 - (long)iVar6) * 0x16bb;
    lVar30 = lVar14 + lVar26 * -2;
    lVar32 = (lVar24 + lVar17) * 0x1c35;
    lVar28 = (lVar25 + lVar24) * -0xfee;
    lVar24 = (lVar25 + lVar12) * -0x1c35;
    lVar27 = (long)(param_1[0x38] + param_1[0x28]);
    lVar25 = lVar27 + lVar26 * -2;
    lVar12 = (lVar11 - lVar30) * -0xa90 + (lVar16 - lVar10) * 0x1c01 + (lVar8 - lVar25) * -0x7ab;
    lVar17 = (lVar11 + lVar30) * -0x16b8 + (lVar16 + lVar10) * 0x259 + (lVar8 + lVar25) * 0xbcd;
    *param_1 = (int)((lVar7 + lVar15 + lVar9 + lVar13 + lVar14 + lVar27 + lVar26) * 0x183d + 0x2000U
                    >> 0xe);
    param_1[0x20] = (int)(lVar17 + lVar12 + 0x2000U >> 0xe);
    param_1[0x30] = (int)((ulong)((0x2000 - lVar17) + lVar12) >> 0xe);
    param_1[8] = (int)(lVar31 + (long)iVar21 * -0x30f6 + lVar32 + (long)iVar5 * 0x7ba + lVar23 +
                       0x2000U >> 0xe);
    param_1[0x18] =
         (int)(lVar31 + (long)iVar2 * 0x144b + lVar24 + (long)iVar5 * -0x38c1 + lVar29 + 0x2000U >>
              0xe);
    param_1[0x28] =
         (int)(lVar32 + (long)iVar3 * -0x261a + lVar28 + (long)iVar6 * 0x36c7 + lVar29 + 0x2000U >>
              0xe);
    param_1[0x38] =
         (int)(lVar28 + (long)iVar4 * 0x3575 + lVar24 + (long)iVar6 * -0x2a3b + lVar23 + 0x2000U >>
              0xe);
    iVar18 = iVar18 + -1;
    param_1[0x10] =
         (int)(lVar16 * 0x2148 + lVar8 * 0x19a8 + lVar10 * 0xc28 + lVar11 * -0x422 +
               lVar30 * -0x1379 + lVar25 * -0x1e5a + 0x2000U >> 0xe);
    piVar19 = piVar19 + 1;
    param_1 = param_1 + 1;
  } while (0 < iVar18);
  return;
}

