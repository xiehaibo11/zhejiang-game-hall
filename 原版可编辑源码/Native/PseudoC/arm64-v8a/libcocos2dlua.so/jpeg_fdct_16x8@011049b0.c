
void jpeg_fdct_16x8(int *param_1,long param_2,ulong param_3)

{
  byte *pbVar1;
  int *piVar2;
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
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  
  lVar14 = 0;
  do {
    pbVar1 = (byte *)(*(long *)(param_2 + lVar14) + (param_3 & 0xffffffff));
    lVar19 = (ulong)pbVar1[0xd] + (ulong)pbVar1[2];
    lVar27 = (ulong)pbVar1[10] + (ulong)pbVar1[5];
    lVar17 = (ulong)pbVar1[0xf] + (ulong)*pbVar1;
    lVar18 = (ulong)pbVar1[0xe] + (ulong)pbVar1[1];
    lVar21 = (ulong)pbVar1[0xc] + (ulong)pbVar1[3];
    lVar8 = (ulong)pbVar1[0xb] + (ulong)pbVar1[4];
    lVar29 = (ulong)pbVar1[9] + (ulong)pbVar1[6];
    lVar12 = (ulong)*pbVar1 - (ulong)pbVar1[0xf];
    lVar7 = (ulong)pbVar1[2] - (ulong)pbVar1[0xd];
    lVar16 = (ulong)pbVar1[3] - (ulong)pbVar1[0xc];
    lVar9 = (ulong)pbVar1[4] - (ulong)pbVar1[0xb];
    lVar10 = (ulong)pbVar1[5] - (ulong)pbVar1[10];
    lVar23 = (ulong)pbVar1[6] - (ulong)pbVar1[9];
    lVar24 = (ulong)pbVar1[7] - (ulong)pbVar1[8];
    lVar30 = lVar27 + lVar19;
    lVar19 = lVar19 - lVar27;
    lVar27 = (ulong)pbVar1[8] + (ulong)pbVar1[7];
    lVar11 = (ulong)pbVar1[1] - (ulong)pbVar1[0xe];
    lVar31 = lVar29 + lVar18;
    lVar18 = lVar18 - lVar29;
    lVar29 = lVar27 + lVar17;
    lVar17 = lVar17 - lVar27;
    lVar27 = lVar8 + lVar21;
    lVar21 = lVar21 - lVar8;
                    /* try { // try from 01104ad0 to 01204b7b has its CatchHandler @ 01104ad0
                       catch() { ... } // from try @ 01104ad0 with catch @ 01104ad0
                       catch() { ... } // from try @ 01104b9c with catch @ 01104ad0 */
    lVar15 = (lVar11 + lVar12) * 0x2b4e + (lVar23 - lVar24) * 0xd23;
    lVar22 = (lVar7 + lVar12) * 0x27e9 + (lVar24 + lVar10) * 0x1555;
    lVar26 = (lVar16 + lVar12) * 0x22fc + (lVar9 - lVar24) * 0x1cb6;
    lVar28 = (lVar7 + lVar11) * 0x470 + (lVar23 - lVar10) * 0x2d09;
                    /* try { // try from 01104b7c to 01204b83 has its CatchHandler @ 01104bd8 */
    lVar25 = (lVar16 + lVar11) * -0x1555 + (lVar23 + lVar9) * -0x27e9;
                    /* try { // try from 01104b94 to 01204b9b has its CatchHandler @ 01104bd0 */
                    /* try { // try from 01104b9c to 01204c17 has its CatchHandler @ 01104ad0 */
    lVar8 = (lVar16 + lVar7) * -0x2b4e + (lVar10 - lVar9) * 0xd23;
    lVar20 = (lVar21 - lVar18) * 0x8d4 + (lVar17 - lVar19) * 0x2c63;
                    /* catch() { ... } // from try @ 01104b94 with catch @ 01104bd0 */
                    /* catch() { ... } // from try @ 01104b7c with catch @ 01104bd8 */
    piVar2 = param_1 + lVar14;
    *piVar2 = ((int)lVar30 + (int)lVar27 + (int)lVar31 + (int)lVar29) * 4 + -0x2000;
    piVar2[1] = (int)(lVar24 * 0x18f3 + lVar12 * -0x492a + lVar22 + lVar15 + lVar26 + 0x400U >> 0xb)
    ;
    piVar2[2] = (int)(lVar18 * 0x2e75 + lVar19 * 0x4587 + lVar20 + 0x400U >> 0xb);
    piVar2[3] = (int)(lVar23 * -0x353f + lVar11 * 0x24d + lVar25 + lVar28 + lVar15 + 0x400U >> 0xb);
    piVar2[4] = (int)((lVar29 - lVar27) * 0x29cf + (lVar31 - lVar30) * 0x1151 + 0x400U >> 0xb);
    piVar2[5] = (int)(lVar10 * 0x2747 + lVar7 * -0x2406 + lVar8 + lVar28 + lVar22 + 0x400U >> 0xb);
    piVar2[6] = (int)(lVar17 * -0x6c2 + lVar21 * -0x21f9 + lVar20 + 0x400U >> 0xb);
    lVar14 = lVar14 + 8;
    piVar2[7] = (int)(lVar9 * 0x4560 + lVar16 * 0x2218 + lVar8 + lVar25 + lVar26 + 0x400U >> 0xb);
                    /* try { // try from 01104c4c to 01204cf7 has its CatchHandler @ 01104c4c
                       catch() { ... } // from try @ 01104c4c with catch @ 01104c4c
                       catch() { ... } // from try @ 01104d18 with catch @ 01104c4c */
  } while (lVar14 != 0x40);
  iVar13 = 8;
  do {
    iVar3 = *param_1 - param_1[0x38];
    iVar4 = param_1[8] - param_1[0x30];
    iVar5 = param_1[0x10] - param_1[0x28];
    iVar6 = param_1[0x18] - param_1[0x20];
    lVar18 = (long)(param_1[0x38] + *param_1);
    lVar21 = (long)(param_1[0x30] + param_1[8]);
    lVar27 = (long)(param_1[0x28] + param_1[0x10]);
    lVar19 = (long)(param_1[0x20] + param_1[0x18]);
    lVar14 = lVar19 + lVar18;
    lVar18 = lVar18 - lVar19;
    lVar19 = lVar27 + lVar21;
    lVar21 = lVar21 - lVar27;
                    /* try { // try from 01104cf8 to 01204cff has its CatchHandler @ 01104d54 */
    lVar27 = (long)iVar5 + (long)iVar3;
    lVar17 = (long)iVar6 + (long)iVar4;
    lVar29 = ((long)iVar5 + (long)iVar4) * -0x5203;
                    /* try { // try from 01104d10 to 01204d17 has its CatchHandler @ 01104d4c */
                    /* try { // try from 01104d18 to 01204d93 has its CatchHandler @ 01104c4c */
    lVar8 = ((long)iVar6 + (long)iVar3) * -0x1ccd;
    lVar30 = (lVar17 + lVar27) * 0x25a1;
    lVar31 = (lVar18 + lVar21) * 0x1151;
    lVar27 = lVar30 + lVar27 * -0xc7c;
    lVar30 = lVar30 + lVar17 * -0x3ec5;
                    /* catch() { ... } // from try @ 01104d10 with catch @ 01104d4c */
                    /* catch() { ... } // from try @ 01104cf8 with catch @ 01104d54 */
    iVar13 = iVar13 + -1;
    *param_1 = (int)(lVar19 + lVar14 + 4U >> 3);
    param_1[0x20] = (int)((ulong)((4 - lVar19) + lVar14) >> 3);
    param_1[0x10] = (int)((ulong)(lVar31 + lVar18 * 0x187e + 0x8000) >> 0x10);
    param_1[0x30] = (int)((ulong)(lVar31 + lVar21 * -0x3b21 + 0x8000) >> 0x10);
    param_1[8] = (int)((ulong)(lVar8 + (long)iVar3 * 0x300b + lVar27 + 0x8000) >> 0x10);
                    /* try { // try from 01104db4 to 01204e57 has its CatchHandler @ 01104db4
                       catch() { ... } // from try @ 01104db4 with catch @ 01104db4
                       catch() { ... } // from try @ 01104e78 with catch @ 01104db4 */
    param_1[0x18] = (int)((ulong)(lVar29 + (long)iVar4 * 0x6254 + lVar30 + 0x8000) >> 0x10);
    param_1[0x28] = (int)((ulong)(lVar29 + (long)iVar5 * 0x41b3 + lVar27 + 0x8000) >> 0x10);
    param_1[0x38] = (int)((ulong)(lVar8 + (long)iVar6 * 0x98e + lVar30 + 0x8000) >> 0x10);
    param_1 = param_1 + 1;
  } while (0 < iVar13);
  return;
}

