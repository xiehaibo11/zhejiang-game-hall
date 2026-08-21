
void jpeg_fdct_11x11(int *param_1,long param_2,ulong param_3)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  int *piVar30;
  int *piVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  int local_c0 [8];
  int local_a0 [8];
  int local_80 [8];
  
  piVar31 = param_1;
  iVar14 = 0;
  while( true ) {
    do {
      iVar15 = iVar14;
      piVar30 = piVar31;
      pbVar1 = (byte *)(*(long *)(param_2 + (long)iVar15 * 8) + (param_3 & 0xffffffff));
      uVar20 = (ulong)pbVar1[5];
      lVar6 = (ulong)pbVar1[10] + (ulong)*pbVar1;
      lVar8 = (ulong)pbVar1[9] + (ulong)pbVar1[1];
      lVar10 = (ulong)pbVar1[8] + (ulong)pbVar1[2];
      lVar11 = (ulong)pbVar1[7] + (ulong)pbVar1[3];
      lVar12 = (ulong)pbVar1[6] + (ulong)pbVar1[4];
      lVar34 = (ulong)*pbVar1 - (ulong)pbVar1[10];
      lVar18 = (ulong)pbVar1[2] - (ulong)pbVar1[8];
      lVar16 = (ulong)pbVar1[1] - (ulong)pbVar1[9];
      lVar33 = (ulong)pbVar1[3] - (ulong)pbVar1[7];
      lVar32 = (ulong)pbVar1[4] - (ulong)pbVar1[6];
      lVar24 = lVar6 + uVar20 * -2;
      lVar26 = lVar8 + uVar20 * -2;
      lVar28 = lVar10 + uVar20 * -2;
      lVar29 = lVar11 + uVar20 * -2;
      lVar21 = lVar12 + uVar20 * -2;
      lVar23 = (lVar28 + lVar21) * 0x671 + (lVar24 + lVar29) * 0x2b6c;
      lVar7 = (lVar16 + lVar34) * 0x292a;
      lVar13 = (lVar18 + lVar34) * 0x2234;
      lVar9 = (lVar18 + lVar16) * -0x1877;
      lVar27 = (lVar24 - lVar26) * 0x2612;
      lVar22 = (lVar26 - lVar29) * 0x1da3;
      lVar19 = (lVar33 + lVar18) * 0xcc0;
      lVar17 = (lVar33 + lVar16) * -0x2ccb;
      lVar25 = (lVar33 + lVar34) * 0x1877;
      *piVar30 = ((int)lVar8 + (int)lVar6 + (int)lVar10 + (int)lVar11 + (uint)pbVar1[5] +
                 (int)lVar12) * 2 + -0xb00;
      piVar30[1] = (int)(lVar7 + lVar34 * -0x370a + lVar13 + lVar25 + lVar32 * 0xcc0 + 0x800U >> 0xc
                        );
      piVar30[2] = (int)(lVar21 * -0x2c83 + lVar29 * -0x2096 + lVar22 + lVar23 + 0x800U >> 0xc);
      piVar30[3] = (int)(lVar7 + lVar16 * 0x28d8 + lVar9 + lVar17 + lVar32 * -0x2234 + 0x800U >> 0xc
                        );
      piVar30[6] = (int)(lVar28 * -0x193d + lVar24 * -0x33db + lVar27 + lVar23 + 0x800U >> 0xc);
      piVar30[7] = (int)(lVar19 + lVar33 * 0x29c7 + lVar17 + lVar25 + lVar32 * -0x292a + 0x800U >>
                        0xc);
      piVar30[4] = (int)(lVar26 * 0x1ff + lVar28 * -0x2b6c + lVar21 * 0x12cd + lVar27 + lVar22 +
                         0x800U >> 0xc);
      piVar30[5] = (int)(lVar9 + lVar18 * -0x3fa6 + lVar13 + lVar19 + lVar32 * 0x2ccb + 0x800U >>
                        0xc);
      piVar31 = local_c0;
      iVar14 = 8;
    } while (iVar15 == 7);
    if (iVar15 == 10) break;
    piVar31 = piVar30 + 8;
    iVar14 = iVar15 + 1;
  }
  iVar14 = 8;
  piVar31 = local_80;
  do {
    lVar32 = (long)param_1[0x28];
    iVar15 = *param_1 - *piVar31;
    iVar2 = param_1[0x10] - piVar31[-0x10];
    iVar3 = param_1[0x18] - param_1[0x38];
    lVar16 = (long)(*piVar31 + *param_1);
    lVar18 = (long)(piVar31[-8] + param_1[8]);
    iVar4 = param_1[8] - piVar31[-8];
    iVar5 = param_1[0x20] - param_1[0x30];
    lVar23 = (long)(piVar31[-0x10] + param_1[0x10]);
    lVar27 = (long)(param_1[0x30] + param_1[0x20]);
    lVar26 = (long)(param_1[0x38] + param_1[0x18]);
    lVar12 = lVar23 + lVar32 * -2;
    lVar17 = lVar16 + lVar32 * -2;
    lVar19 = lVar18 + lVar32 * -2;
    lVar7 = lVar26 + lVar32 * -2;
    lVar13 = lVar27 + lVar32 * -2;
    lVar6 = (long)iVar15;
    lVar8 = (long)iVar4;
    lVar10 = (long)iVar2;
    lVar11 = (long)iVar3;
    lVar9 = (lVar8 + lVar6) * 0x2b8c;
    lVar28 = (lVar12 + lVar13) * 0x6d0 + (lVar17 + lVar7) * 0x2def;
    lVar21 = (lVar10 + lVar8) * -0x19e2;
    lVar22 = (lVar10 + lVar6) * 0x242e;
    lVar24 = (lVar17 - lVar19) * 0x2846;
    lVar25 = (lVar19 - lVar7) * 0x1f5a;
    lVar29 = (lVar11 + lVar8) * -0x2f63;
    lVar8 = (lVar11 + lVar10) * 0xd7d;
    lVar6 = (lVar11 + lVar6) * 0x19e2;
    *param_1 = (int)((lVar18 + lVar16 + lVar23 + lVar26 + lVar27 + lVar32) * 0x21da + 0x4000U >> 0xf
                    );
    iVar14 = iVar14 + -1;
    param_1[0x10] = (int)(lVar13 * -0x2f16 + lVar7 * -0x2279 + lVar25 + lVar28 + 0x4000U >> 0xf);
    param_1[0x30] = (int)(lVar12 * -0x1ab3 + lVar17 * -0x36db + lVar24 + lVar28 + 0x4000U >> 0xf);
    param_1[0x20] =
         (int)(lVar12 * -0x2def + lVar19 * 0x21c + lVar13 * 0x13e3 + lVar24 + lVar25 + 0x4000U >>
              0xf);
    param_1[8] = (int)(lVar9 + (long)iVar15 * -0x3a39 + lVar22 + lVar6 + (long)iVar5 * 0xd7d +
                       0x4000U >> 0xf);
    param_1[0x18] =
         (int)(lVar9 + (long)iVar4 * 0x2b35 + lVar21 + lVar29 + (long)iVar5 * -0x242e + 0x4000U >>
              0xf);
    param_1[0x28] =
         (int)(lVar21 + (long)iVar2 * -0x4355 + lVar22 + lVar8 + (long)iVar5 * 0x2f63 + 0x4000U >>
              0xf);
    param_1[0x38] =
         (int)(lVar8 + (long)iVar3 * 0x2c32 + lVar29 + lVar6 + (long)iVar5 * -0x2b8c + 0x4000U >>
              0xf);
    piVar31 = piVar31 + 1;
    param_1 = param_1 + 1;
  } while (0 < iVar14);
  return;
}

