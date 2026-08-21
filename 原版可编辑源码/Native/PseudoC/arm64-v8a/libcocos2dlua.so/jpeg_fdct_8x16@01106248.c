
void jpeg_fdct_8x16(int *param_1,long param_2,ulong param_3)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
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
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  int *piVar30;
  long lVar31;
  long lVar32;
  int local_160 [8];
  int local_140 [8];
  int local_120 [8];
  int local_100 [8];
  int local_e0 [8];
  int local_c0 [8];
  int local_a0 [8];
  int local_80 [8];
  
  piVar30 = param_1;
  iVar12 = 0;
  while( true ) {
    do {
      iVar10 = iVar12;
      piVar9 = piVar30;
                    /* try { // try from 011062bc to 012062c3 has its CatchHandler @ 01106318 */
      pbVar2 = (byte *)(*(long *)(param_2 + (long)iVar10 * 8) + (param_3 & 0xffffffff));
                    /* try { // try from 011062d4 to 012062db has its CatchHandler @ 01106310 */
                    /* try { // try from 011062dc to 01206357 has its CatchHandler @ 01106218 */
      lVar20 = (ulong)pbVar2[7] + (ulong)*pbVar2;
      lVar24 = (ulong)pbVar2[6] + (ulong)pbVar2[1];
      lVar15 = (ulong)*pbVar2 - (ulong)pbVar2[7];
      lVar22 = (ulong)pbVar2[4] + (ulong)pbVar2[3];
      lVar16 = (ulong)pbVar2[1] - (ulong)pbVar2[6];
      lVar17 = (ulong)pbVar2[2] - (ulong)pbVar2[5];
      lVar25 = (ulong)pbVar2[5] + (ulong)pbVar2[2];
      lVar11 = (ulong)pbVar2[3] - (ulong)pbVar2[4];
      iVar12 = (int)lVar22 + (int)lVar20;
      lVar20 = lVar20 - lVar22;
                    /* catch() { ... } // from try @ 011062d4 with catch @ 01106310 */
      iVar1 = (int)lVar25 + (int)lVar24;
      lVar24 = lVar24 - lVar25;
                    /* catch() { ... } // from try @ 011062bc with catch @ 01106318 */
      lVar31 = (lVar17 + lVar16) * -0x5203;
      lVar29 = (lVar11 + lVar15) * -0x1ccd;
      lVar22 = (lVar20 + lVar24) * 0x1151;
      lVar32 = (lVar11 + lVar16 + lVar17 + lVar15) * 0x25a1;
                    /* catch() { ... } // from try @ 011063f4 with catch @ 01106358 */
      lVar25 = lVar32 + (lVar17 + lVar15) * -0xc7c;
      lVar32 = lVar32 + (lVar11 + lVar16) * -0x3ec5;
      piVar9[6] = (int)(lVar22 + lVar24 * -0x3b21 + 0x400U >> 0xb);
      piVar9[7] = (int)(lVar29 + lVar11 * 0x98e + lVar32 + 0x400U >> 0xb);
      *piVar9 = (iVar12 + iVar1) * 4 + -0x1000;
      piVar9[1] = (int)(lVar29 + lVar15 * 0x300b + lVar25 + 0x400U >> 0xb);
      piVar9[2] = (int)(lVar22 + lVar20 * 0x187e + 0x400U >> 0xb);
      piVar9[3] = (int)(lVar31 + lVar16 * 0x6254 + lVar32 + 0x400U >> 0xb);
      piVar9[4] = (iVar12 - iVar1) * 4;
      piVar9[5] = (int)(lVar31 + lVar17 * 0x41b3 + lVar25 + 0x400U >> 0xb);
      piVar30 = local_160;
      iVar12 = 8;
    } while (iVar10 == 7);
    if (iVar10 == 0xf) break;
    piVar30 = piVar9 + 8;
    iVar12 = iVar10 + 1;
  }
  iVar12 = 8;
  piVar30 = local_e0;
  do {
                    /* try { // try from 011063ec to 012063f3 has its CatchHandler @ 011064ac */
                    /* try { // try from 011063f4 to 012064c7 has its CatchHandler @ 01106358 */
    iVar1 = *param_1 - piVar30[0x18];
    iVar10 = param_1[8] - piVar30[0x10];
    iVar3 = param_1[0x10] - piVar30[8];
    iVar4 = param_1[0x18] - *piVar30;
    iVar5 = param_1[0x20] - piVar30[-8];
    iVar6 = param_1[0x28] - piVar30[-0x10];
    iVar7 = param_1[0x30] - piVar30[-0x18];
    iVar8 = param_1[0x38] - piVar30[-0x20];
    lVar29 = (long)(piVar30[0x18] + *param_1);
    lVar31 = (long)(piVar30[0x10] + param_1[8]);
    lVar13 = (long)(piVar30[8] + param_1[0x10]);
    lVar11 = (long)(*piVar30 + param_1[0x18]);
    lVar15 = (long)(piVar30[-8] + param_1[0x20]);
    lVar25 = (long)(piVar30[-0x10] + param_1[0x28]);
    lVar22 = (long)(piVar30[-0x18] + param_1[0x30]);
    lVar24 = (long)(piVar30[-0x20] + param_1[0x38]);
    lVar17 = (long)iVar1;
    lVar18 = (long)iVar10;
    lVar19 = (long)iVar3;
    lVar21 = (long)iVar4;
    lVar23 = (long)iVar5;
    lVar26 = (long)iVar6;
    lVar27 = (long)iVar7;
    lVar28 = (long)iVar8;
    lVar20 = lVar24 + lVar29;
    lVar29 = lVar29 - lVar24;
    lVar24 = lVar22 + lVar31;
                    /* catch() { ... } // from try @ 011063ec with catch @ 011064ac */
    lVar31 = lVar31 - lVar22;
    lVar22 = lVar25 + lVar13;
    lVar13 = lVar13 - lVar25;
    lVar25 = lVar15 + lVar11;
    lVar11 = lVar11 - lVar15;
                    /* try { // try from 01106570 to 01206613 has its CatchHandler @ 01106570
                       catch() { ... } // from try @ 01106570 with catch @ 01106570
                       catch() { ... } // from try @ 01106634 with catch @ 01106570 */
    lVar14 = (lVar19 + lVar17) * 0x27e9 + (lVar28 + lVar26) * 0x1555;
    lVar16 = (lVar21 + lVar17) * 0x22fc + (lVar23 - lVar28) * 0x1cb6;
    lVar32 = (lVar19 + lVar18) * 0x470 + (lVar27 - lVar26) * 0x2d09;
    lVar15 = (lVar18 + lVar17) * 0x2b4e + (lVar27 - lVar28) * 0xd23;
    lVar17 = (lVar21 + lVar18) * -0x1555 + (lVar27 + lVar23) * -0x27e9;
    lVar18 = (lVar11 - lVar31) * 0x8d4 + (lVar29 - lVar13) * 0x2c63;
    *param_1 = (int)(lVar25 + lVar22 + lVar24 + lVar20 + 4U >> 3);
    lVar19 = (lVar21 + lVar19) * -0x2b4e + (lVar26 - lVar23) * 0xd23;
    param_1[0x20] =
         (int)((ulong)((lVar20 - lVar25) * 0x29cf + (lVar24 - lVar22) * 0x1151 + 0x8000) >> 0x10);
                    /* try { // try from 01106614 to 0120661b has its CatchHandler @ 01106670 */
                    /* try { // try from 0110662c to 01206633 has its CatchHandler @ 01106668 */
    param_1[0x10] = (int)((ulong)(lVar31 * 0x2e75 + lVar13 * 0x4587 + lVar18 + 0x8000) >> 0x10);
                    /* try { // try from 01106634 to 012066af has its CatchHandler @ 01106570 */
    param_1[0x30] = (int)((ulong)(lVar29 * -0x6c2 + lVar11 * -0x21f9 + lVar18 + 0x8000) >> 0x10);
    param_1[8] = (int)((ulong)((long)iVar8 * 0x18f3 + (long)iVar1 * -0x492a + lVar14 + lVar15 +
                               lVar16 + 0x8000) >> 0x10);
                    /* catch() { ... } // from try @ 0110662c with catch @ 01106668 */
    param_1[0x28] =
         (int)((ulong)((long)iVar6 * 0x2747 + (long)iVar3 * -0x2406 + lVar19 + lVar32 + lVar14 +
                      0x8000) >> 0x10);
                    /* catch() { ... } // from try @ 01106614 with catch @ 01106670 */
    iVar12 = iVar12 + -1;
    param_1[0x18] =
         (int)((ulong)((long)iVar7 * -0x353f + (long)iVar10 * 0x24d + lVar17 + lVar32 + lVar15 +
                      0x8000) >> 0x10);
    param_1[0x38] =
         (int)((ulong)((long)iVar5 * 0x4560 + (long)iVar4 * 0x2218 + lVar19 + lVar17 + lVar16 +
                      0x8000) >> 0x10);
    piVar30 = piVar30 + 1;
    param_1 = param_1 + 1;
  } while (0 < iVar12);
  return;
}

