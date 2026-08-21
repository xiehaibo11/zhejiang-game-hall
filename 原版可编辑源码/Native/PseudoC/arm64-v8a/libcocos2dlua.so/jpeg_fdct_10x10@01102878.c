
void jpeg_fdct_10x10(int *param_1,long param_2,ulong param_3)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  int iVar12;
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
  int local_a0 [8];
  int local_80 [8];
  
  piVar8 = param_1;
  iVar12 = 0;
  while( true ) {
    do {
      iVar9 = iVar12;
      piVar7 = piVar8;
      pbVar2 = (byte *)(*(long *)(param_2 + (long)iVar9 * 8) + (param_3 & 0xffffffff));
      lVar17 = (ulong)pbVar2[9] + (ulong)*pbVar2;
      lVar14 = (ulong)pbVar2[8] + (ulong)pbVar2[1];
      lVar11 = (ulong)*pbVar2 - (ulong)pbVar2[9];
      lVar13 = (ulong)pbVar2[6] + (ulong)pbVar2[3];
      iVar12 = (uint)pbVar2[7] + (uint)pbVar2[2];
      lVar15 = (ulong)pbVar2[1] - (ulong)pbVar2[8];
      lVar16 = (ulong)pbVar2[5] + (ulong)pbVar2[4];
      lVar18 = (ulong)pbVar2[2] - (ulong)pbVar2[7];
      lVar19 = (ulong)pbVar2[3] - (ulong)pbVar2[6];
      lVar22 = lVar13 + lVar14;
      lVar10 = (ulong)pbVar2[4] - (ulong)pbVar2[5];
      lVar20 = lVar16 + lVar17;
      lVar14 = lVar14 - lVar13;
      lVar17 = lVar17 - lVar16;
      lVar16 = (lVar15 - lVar19) * 0x19e3 + lVar18 * -0x2000 + (lVar10 + lVar11) * 0x9e3;
      lVar13 = (lVar19 + lVar15) * -0x12cf + (lVar11 - lVar10) * 0x1e6f + 0x800;
      lVar21 = (lVar17 + lVar14) * 0x1a9a;
      piVar7[4] = (int)(lVar20 * 0x249d + (ulong)(uint)(iVar12 * 2) * -0x16a1 + lVar22 * -0xdfc +
                        0x800 >> 0xc);
      piVar7[5] = ((int)(lVar10 + lVar11) - ((int)(lVar15 - lVar19) + (int)lVar18)) * 2;
      piVar7[2] = (int)(lVar21 + lVar17 * 0x1071 + 0x800U >> 0xc);
      piVar7[3] = (int)((ulong)(lVar13 + lVar16) >> 0xc);
      piVar7[6] = (int)(lVar21 + lVar14 * -0x45a4 + 0x800U >> 0xc);
      piVar7[7] = (int)((ulong)(lVar13 - lVar16) >> 0xc);
                    /* catch() { ... } // from try @ 01102a50 with catch @ 01102a18 */
      *piVar7 = ((int)lVar22 + iVar12 + (int)lVar20) * 2 + -0xa00;
      piVar7[1] = (int)(lVar15 * 0x2853 + lVar11 * 0x2cb3 + lVar18 * 0x2000 + lVar19 * 0x148c +
                        lVar10 * 0x714 + 0x800U >> 0xc);
      piVar8 = local_a0;
      iVar12 = 8;
    } while (iVar9 == 7);
    if (iVar9 == 9) break;
    piVar8 = piVar7 + 8;
    iVar12 = iVar9 + 1;
  }
  iVar12 = 8;
                    /* try { // try from 01102a48 to 01202a4f has its CatchHandler @ 01102ab8 */
                    /* try { // try from 01102a50 to 01202ad3 has its CatchHandler @ 01102a18 */
  piVar8 = local_80;
  do {
    iVar9 = *param_1 - *piVar8;
                    /* catch() { ... } // from try @ 01102a48 with catch @ 01102ab8 */
    iVar3 = param_1[8] - piVar8[-8];
    uVar1 = param_1[0x38] + param_1[0x10];
    iVar4 = param_1[0x10] - param_1[0x38];
    iVar5 = param_1[0x18] - param_1[0x30];
    iVar6 = param_1[0x20] - param_1[0x28];
    lVar20 = (long)(*piVar8 + *param_1);
    lVar22 = (long)(piVar8[-8] + param_1[8]);
    lVar13 = (long)(param_1[0x30] + param_1[0x18]);
    lVar14 = (long)(param_1[0x28] + param_1[0x20]);
    lVar17 = lVar14 + lVar20;
    lVar20 = lVar20 - lVar14;
    lVar14 = lVar13 + lVar22;
    lVar22 = lVar22 - lVar13;
    lVar16 = (long)iVar6 + (long)iVar9;
    lVar15 = (long)iVar3 - (long)iVar5;
    lVar11 = (lVar20 + lVar22) * 0x220c;
    lVar10 = lVar15 * 0x2123 + (long)iVar4 * -0x28f6 + lVar16 * 0xca8;
    lVar13 = ((long)iVar5 + (long)iVar3) * -0x1813 + ((long)iVar9 - (long)iVar6) * 0x26f5 + 0x4000;
    param_1[0x30] = (int)(lVar11 + lVar22 * -0x5924 + 0x4000U >> 0xf);
    *param_1 = (int)((lVar14 + (int)uVar1 + lVar17) * 0x28f6 + 0x4000U >> 0xf);
    param_1[0x20] =
         (int)(lVar17 * 0x2edd +
               (-(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar1 << 1) * -0x1cf7 +
               lVar14 * -0x11e6 + 0x4000 >> 0xf);
    param_1[8] = (int)((long)iVar3 * 0x339d + (long)iVar9 * 0x3937 + (long)iVar4 * 0x28f6 +
                       (long)iVar5 * 0x1a4c + (long)iVar6 * 0x910 + 0x4000U >> 0xf);
    param_1[0x18] = (int)((ulong)(lVar13 + lVar10) >> 0xf);
    iVar12 = iVar12 + -1;
    param_1[0x28] = (int)((lVar16 - (lVar15 + iVar4)) * 0x28f6 + 0x4000U >> 0xf);
    param_1[0x10] = (int)(lVar11 + lVar20 * 0x150b + 0x4000U >> 0xf);
    param_1[0x38] = (int)((ulong)(lVar13 - lVar10) >> 0xf);
    piVar8 = piVar8 + 1;
    param_1 = param_1 + 1;
  } while (0 < iVar12);
  return;
}

