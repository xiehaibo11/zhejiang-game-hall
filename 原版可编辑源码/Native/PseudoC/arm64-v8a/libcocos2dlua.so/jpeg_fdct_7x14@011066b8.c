
void jpeg_fdct_7x14(int *param_1,long param_2,uint param_3)

{
  uint uVar1;
  byte *pbVar2;
  long lVar3;
  int *piVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
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
  long lVar25;
  long lVar26;
  long lVar27;
  int local_120 [8];
  int local_100 [8];
  int local_e0 [8];
  int local_c0 [8];
  int local_a0 [8];
  int local_80 [8];
  
                    /* try { // try from 011066d0 to 01206773 has its CatchHandler @ 011066d0
                       catch() { ... } // from try @ 011066d0 with catch @ 011066d0
                       catch() { ... } // from try @ 01106794 with catch @ 011066d0 */
  memset(param_1,0,0x100);
  piVar4 = param_1;
  iVar6 = 0;
  while( true ) {
    do {
      iVar13 = iVar6;
      piVar12 = piVar4;
      pbVar2 = (byte *)(*(long *)(param_2 + (long)iVar13 * 8) + (ulong)param_3);
      bVar5 = pbVar2[3];
      lVar19 = (ulong)pbVar2[6] + (ulong)*pbVar2;
      lVar3 = (ulong)pbVar2[5] + (ulong)pbVar2[1];
                    /* try { // try from 01106774 to 0120677b has its CatchHandler @ 011067d0 */
      lVar20 = (ulong)pbVar2[4] + (ulong)pbVar2[2];
      lVar15 = (ulong)*pbVar2 - (ulong)pbVar2[6];
      lVar17 = (ulong)pbVar2[1] - (ulong)pbVar2[5];
      lVar24 = (ulong)pbVar2[2] - (ulong)pbVar2[4];
                    /* try { // try from 0110678c to 01206793 has its CatchHandler @ 011067c8 */
                    /* try { // try from 01106794 to 0120680f has its CatchHandler @ 011066d0 */
      lVar25 = (lVar3 - lVar20) * 0xa12;
      lVar26 = (lVar19 - lVar3) * 0x1c37 + 0x400;
                    /* catch() { ... } // from try @ 0110678c with catch @ 011067c8 */
                    /* catch() { ... } // from try @ 01106774 with catch @ 011067d0 */
      lVar14 = (lVar20 + lVar19 + (ulong)bVar5 * -4) * 0xb50;
      lVar27 = (lVar17 + lVar15) * 0x1def;
      lVar16 = (lVar24 + lVar15) * 0x13a3;
      lVar18 = (lVar24 + lVar17) * -0x2c1f;
      piVar12[6] = (int)((ulong)(lVar26 + (lVar19 - lVar20) * -0x1d76 + lVar14) >> 0xb);
                    /* try { // try from 01106830 to 012068d3 has its CatchHandler @ 01106830
                       catch() { ... } // from try @ 01106830 with catch @ 01106830
                       catch() { ... } // from try @ 011068f4 with catch @ 01106830 */
      *piVar12 = ((uint)bVar5 + (int)lVar3 + (int)(lVar20 + lVar19)) * 4 + -0xe00;
      piVar12[1] = (int)((ulong)((lVar15 - lVar17) * -0x573 + 0x400 + lVar27 + lVar16) >> 0xb);
      piVar12[2] = (int)((lVar19 - lVar20) * 0x1d76 + lVar25 + lVar14 + 0x400U >> 0xb);
      piVar12[3] = (int)((lVar15 - lVar17) * 0x573 + lVar27 + lVar18 + 0x400U >> 0xb);
      piVar12[4] = (int)(lVar26 + lVar25 + (lVar3 + (ulong)(uint)bVar5 * -2) * -0x16a1 >> 0xb);
      piVar12[5] = (int)(lVar16 + lVar24 * 0x3bde + lVar18 + 0x400U >> 0xb);
      piVar4 = local_120;
      iVar6 = 8;
    } while (iVar13 == 7);
    if (iVar13 == 0xd) break;
    piVar4 = piVar12 + 8;
    iVar6 = iVar13 + 1;
  }
  lVar19 = 0;
  do {
    piVar4 = (int *)((long)param_1 + lVar19);
    uVar1 = *(int *)((long)local_e0 + lVar19) + piVar4[0x18];
    iVar6 = *piVar4 - *(int *)((long)local_80 + lVar19);
    iVar13 = piVar4[8] - *(int *)((long)local_a0 + lVar19);
    iVar7 = piVar4[0x18] - *(int *)((long)local_e0 + lVar19);
    iVar8 = piVar4[0x20] - *(int *)((long)local_100 + lVar19);
                    /* try { // try from 011068d4 to 012068db has its CatchHandler @ 01106930 */
    lVar18 = (long)(*(int *)((long)local_80 + lVar19) + *piVar4);
    lVar17 = (long)(*(int *)((long)local_a0 + lVar19) + piVar4[8]);
    lVar24 = (long)(*(int *)((long)local_c0 + lVar19) + piVar4[0x10]);
    lVar14 = (long)(*(int *)((long)local_100 + lVar19) + piVar4[0x20]);
    lVar20 = (long)(piVar4[0x38] + piVar4[0x30]);
                    /* try { // try from 011068ec to 012068f3 has its CatchHandler @ 01106928 */
    iVar9 = piVar4[0x28] - *(int *)((long)local_120 + lVar19);
    iVar10 = piVar4[0x30] - piVar4[0x38];
                    /* try { // try from 011068f4 to 0120696f has its CatchHandler @ 01106830 */
    lVar3 = lVar20 + lVar18;
    lVar18 = lVar18 - lVar20;
    lVar20 = lVar14 + lVar24;
    lVar24 = lVar24 - lVar14;
    iVar11 = piVar4[0x10] - *(int *)((long)local_c0 + lVar19);
    lVar15 = (long)(*(int *)((long)local_120 + lVar19) + piVar4[0x28]);
                    /* catch() { ... } // from try @ 011068ec with catch @ 01106928 */
    lVar14 = lVar15 + lVar17;
    lVar17 = lVar17 - lVar15;
                    /* catch() { ... } // from try @ 011068d4 with catch @ 01106930 */
                    /* catch() { ... } // from try @ 01106a0c with catch @ 01106970 */
    lVar22 = (long)iVar6;
    lVar15 = (long)iVar11 + (long)iVar13;
    lVar26 = (long)iVar10;
    lVar25 = (long)iVar9 - (long)iVar8;
    lVar21 = (iVar11 + lVar22) * 0x1906 + (lVar26 + iVar8) * 0xfb9;
    lVar23 = (iVar13 + lVar22) * 0x1be5 + (iVar9 - lVar26) * 0x9c3;
                    /* try { // try from 01106a04 to 01206a0b has its CatchHandler @ 01106ac4 */
    lVar27 = (lVar18 + lVar17) * 0x171b;
                    /* try { // try from 01106a0c to 01206adf has its CatchHandler @ 01106970 */
    lVar16 = lVar25 * 0x1d5e + (long)iVar7 * -0x14e6 + lVar15 * -0x34f;
    piVar4[0x20] = (int)(lVar14 * 0x694 +
                         (-(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar1 << 1) * -0xec8
                         + lVar20 * -0x126d + lVar3 * 0x1aa1 + 0x4000 >> 0xf);
    piVar4[0x38] = (int)(((((lVar22 - lVar15) + (long)iVar7) - lVar25) - lVar26) * 0x14e6 + 0x4000U
                        >> 0xf);
    *piVar4 = (int)((lVar20 + (int)uVar1 + lVar14 + lVar3) * 0x14e6 + 0x4000U >> 0xf);
    piVar4[0x28] = (int)((long)iVar8 * 0x1768 + (long)iVar11 * -0x319c + lVar16 + lVar21 + 0x4000U
                        >> 0xf);
    piVar4[0x10] = (int)(lVar18 * 0x5b5 + lVar24 * 0xcd3 + lVar27 + 0x4000U >> 0xf);
    piVar4[0x18] = (int)((long)iVar9 * -0x4027 + (long)iVar13 * -0x8dd + lVar16 + lVar23 + 0x4000U
                        >> 0xf);
    lVar19 = lVar19 + 4;
    piVar4[0x30] = (int)(lVar17 * -0x23ee + lVar24 * -0x1cd0 + lVar27 + 0x4000U >> 0xf);
    piVar4[8] = (int)((long)iVar7 * 0x14e6 + (long)iVar6 * -0x178d + (long)iVar10 * -0x2a7 + lVar23
                      + lVar21 + 0x4000U >> 0xf);
  } while ((int)lVar19 != 0x1c);
                    /* catch() { ... } // from try @ 01106a04 with catch @ 01106ac4 */
  return;
}

