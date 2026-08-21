
void jpeg_fdct_14x7(int *param_1,long param_2,ulong param_3)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
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
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  
  lVar8 = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  do {
    pbVar1 = (byte *)(*(long *)(param_2 + lVar8) + (param_3 & 0xffffffff));
                    /* try { // try from 01104e58 to 01204e5f has its CatchHandler @ 01104eb4 */
                    /* try { // try from 01104e70 to 01204e77 has its CatchHandler @ 01104eac */
                    /* try { // try from 01104e78 to 01204ef3 has its CatchHandler @ 01104db4 */
    lVar13 = (ulong)pbVar1[0xd] + (ulong)*pbVar1;
    lVar6 = (ulong)pbVar1[0xc] + (ulong)pbVar1[1];
    lVar5 = (ulong)pbVar1[0xb] + (ulong)pbVar1[2];
    lVar21 = (ulong)*pbVar1 - (ulong)pbVar1[0xd];
    iVar7 = (uint)pbVar1[10] + (uint)pbVar1[3];
    lVar9 = (ulong)pbVar1[2] - (ulong)pbVar1[0xb];
    lVar20 = (ulong)pbVar1[8] + (ulong)pbVar1[5];
    lVar11 = (ulong)pbVar1[3] - (ulong)pbVar1[10];
    lVar4 = (ulong)pbVar1[7] + (ulong)pbVar1[6];
    lVar22 = (ulong)pbVar1[1] - (ulong)pbVar1[0xc];
    lVar10 = (ulong)pbVar1[9] + (ulong)pbVar1[4];
    lVar14 = (ulong)pbVar1[4] - (ulong)pbVar1[9];
    lVar15 = (ulong)pbVar1[5] - (ulong)pbVar1[8];
                    /* catch() { ... } // from try @ 01104e70 with catch @ 01104eac */
    lVar19 = lVar4 + lVar13;
    lVar13 = lVar13 - lVar4;
                    /* catch() { ... } // from try @ 01104e58 with catch @ 01104eb4 */
    lVar18 = lVar6 - lVar20;
    lVar17 = (ulong)pbVar1[6] - (ulong)pbVar1[7];
    lVar20 = lVar20 + lVar6;
    lVar6 = lVar10 + lVar5;
    lVar5 = lVar5 - lVar10;
    lVar10 = (lVar9 + lVar21) * 0x2652 + (lVar17 + lVar14) * 0x1814;
                    /* try { // try from 01104f14 to 01204fb7 has its CatchHandler @ 01104f14
                       catch() { ... } // from try @ 01104f14 with catch @ 01104f14
                       catch() { ... } // from try @ 01104fd8 with catch @ 01104f14 */
    lVar16 = (lVar22 + lVar21) * 0x2ab7 + (lVar15 - lVar17) * 0xef2;
    lVar4 = (lVar13 + lVar18) * 0x2362;
    lVar12 = lVar11 * -0x2000 + (lVar15 - lVar14) * 0x2cf8 + (lVar9 + lVar22) * -0x511;
                    /* try { // try from 01104fb8 to 01204fbf has its CatchHandler @ 01105014 */
    piVar2 = param_1 + lVar8;
    piVar2[6] = (int)(lVar18 * -0x3704 + lVar5 * -0x2c1f + lVar4 + 0x400U >> 0xb);
    piVar2[7] = (((((int)lVar21 - (int)(lVar9 + lVar22)) + (int)lVar11) - (int)(lVar15 - lVar14)) -
                (int)lVar17) * 4;
                    /* try { // try from 01104fd0 to 01204fd7 has its CatchHandler @ 0110500c */
                    /* try { // try from 01104fd8 to 01205053 has its CatchHandler @ 01104f14 */
    piVar2[4] = (int)(lVar20 * 0xa12 + (ulong)(uint)(iVar7 * 2) * -0x16a1 + lVar6 * -0x1c37 +
                      lVar19 * 0x28c6 + 0x400 >> 0xb);
    piVar2[5] = (int)(lVar14 * 0x23d7 + lVar9 * -0x4bf7 + lVar12 + lVar10 + 0x400U >> 0xb);
    piVar2[2] = (int)(lVar13 * 0x8bd + lVar5 * 0x13a3 + lVar4 + 0x400U >> 0xb);
    piVar2[3] = (int)(lVar15 * -0x623c + lVar22 * -0xd92 + lVar12 + lVar16 + 0x400U >> 0xb);
    lVar8 = lVar8 + 8;
    *piVar2 = ((int)lVar6 + iVar7 + (int)lVar20 + (int)lVar19) * 4 + -0x1c00;
                    /* catch() { ... } // from try @ 01104fd0 with catch @ 0110500c */
    piVar2[1] = (int)((lVar11 * 0x2000 | 0x400U) + lVar17 * -0x240f + lVar21 * -0x2410 + lVar16 +
                      lVar10 >> 0xb);
                    /* catch() { ... } // from try @ 01104fb8 with catch @ 01105014 */
  } while (lVar8 != 0x38);
  iVar7 = 8;
  do {
    lVar11 = (long)param_1[0x18];
                    /* try { // try from 01105074 to 01205117 has its CatchHandler @ 01105074
                       catch() { ... } // from try @ 01105074 with catch @ 01105074
                       catch() { ... } // from try @ 01105138 with catch @ 01105074 */
    iVar3 = param_1[0x10] - param_1[0x20];
    lVar4 = (long)(param_1[0x30] + *param_1);
    lVar19 = (long)(param_1[0x28] + param_1[8]);
    lVar20 = (long)(param_1[0x20] + param_1[0x10]);
    lVar8 = (long)(*param_1 - param_1[0x30]);
    lVar6 = (long)(param_1[8] - param_1[0x28]);
    lVar9 = (lVar19 - lVar20) * 0xd27;
    lVar10 = (lVar4 - lVar19) * 0x24da + 0x8000;
    lVar14 = (lVar6 + lVar8) * 0x2719;
    lVar13 = (iVar3 + lVar8) * 0x19a5;
    lVar5 = (iVar3 + lVar6) * -0x39a0;
    lVar12 = (lVar20 + lVar4 + lVar11 * -4) * 0xec7;
                    /* try { // try from 01105118 to 0120511f has its CatchHandler @ 01105174 */
                    /* try { // try from 01105130 to 01205137 has its CatchHandler @ 0110516c */
    iVar7 = iVar7 + -1;
                    /* try { // try from 01105138 to 012051b3 has its CatchHandler @ 01105074 */
    param_1[0x30] = (int)((ulong)(lVar10 + (lVar4 - lVar20) * -0x267a + lVar12) >> 0x10);
    *param_1 = (int)((ulong)((lVar11 + lVar19 + lVar20 + lVar4) * 0x29cc + 0x8000) >> 0x10);
    param_1[0x20] = (int)((ulong)(lVar10 + lVar9 + (lVar19 + lVar11 * -2) * -0x1d8e) >> 0x10);
    param_1[0x10] = (int)((ulong)((lVar4 - lVar20) * 0x267a + lVar9 + lVar12 + 0x8000) >> 0x10);
    param_1[8] = (int)((ulong)((lVar8 - lVar6) * -0x71e + 0x8000 + lVar14 + lVar13) >> 0x10);
    param_1[0x18] = (int)((ulong)((lVar8 - lVar6) * 0x71e + lVar14 + lVar5 + 0x8000) >> 0x10);
                    /* catch() { ... } // from try @ 01105130 with catch @ 0110516c */
    param_1[0x28] = (int)((ulong)(lVar13 + (long)iVar3 * 0x4e31 + lVar5 + 0x8000) >> 0x10);
    param_1 = param_1 + 1;
                    /* catch() { ... } // from try @ 01105118 with catch @ 01105174 */
  } while (0 < iVar7);
  return;
}

