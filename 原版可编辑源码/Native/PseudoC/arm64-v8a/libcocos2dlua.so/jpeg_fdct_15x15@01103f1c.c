
void jpeg_fdct_15x15(int *param_1,long param_2,ulong param_3)

{
  byte *pbVar1;
  long lVar2;
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
  int iVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  int *piVar23;
  int *piVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  int local_140 [8];
  int local_120 [8];
  int local_100 [8];
  int local_e0 [8];
  int local_c0 [8];
  int local_a0 [8];
  int local_80 [8];
  
  piVar23 = param_1;
  iVar15 = 0;
  while( true ) {
    do {
      iVar16 = iVar15;
      piVar24 = piVar23;
      pbVar1 = (byte *)(*(long *)(param_2 + (long)iVar16 * 8) + (param_3 & 0xffffffff));
                    /* try { // try from 01103f94 to 01203f9b has its CatchHandler @ 01103ff0 */
      lVar9 = (ulong)pbVar1[0xe] + (ulong)*pbVar1;
                    /* try { // try from 01103fac to 01203fb3 has its CatchHandler @ 01103fe8 */
      lVar10 = (ulong)pbVar1[0xd] + (ulong)pbVar1[1];
      lVar2 = (ulong)pbVar1[0xb] + (ulong)pbVar1[3];
                    /* try { // try from 01103fb4 to 0120402f has its CatchHandler @ 01103ef0 */
      lVar11 = (ulong)pbVar1[10] + (ulong)pbVar1[4];
      lVar22 = (ulong)pbVar1[0xc] + (ulong)pbVar1[2];
      lVar26 = (ulong)*pbVar1 - (ulong)pbVar1[0xe];
      lVar28 = (ulong)pbVar1[1] - (ulong)pbVar1[0xd];
      lVar19 = (ulong)pbVar1[2] - (ulong)pbVar1[0xc];
      lVar12 = (ulong)pbVar1[9] + (ulong)pbVar1[5];
      lVar13 = (ulong)pbVar1[8] + (ulong)pbVar1[6];
      lVar18 = (ulong)pbVar1[4] - (ulong)pbVar1[10];
      lVar25 = (ulong)pbVar1[5] - (ulong)pbVar1[9];
      lVar27 = (ulong)pbVar1[6] - (ulong)pbVar1[8];
                    /* catch() { ... } // from try @ 01103fac with catch @ 01103fe8 */
      lVar17 = (ulong)pbVar1[3] - (ulong)pbVar1[0xb];
                    /* catch() { ... } // from try @ 01103f94 with catch @ 01103ff0 */
      lVar14 = (ulong)pbVar1[7] + lVar22;
      lVar20 = lVar11 + lVar9 + lVar12;
      lVar21 = lVar2 + lVar10 + lVar13;
                    /* try { // try from 01104050 to 012040f3 has its CatchHandler @ 01104050
                       catch() { ... } // from try @ 01104050 with catch @ 01104050
                       catch() { ... } // from try @ 01104114 with catch @ 01104050 */
      lVar22 = lVar22 + ((ulong)(lVar11 + lVar10) >> 1) + (ulong)pbVar1[7] * -2;
      lVar10 = (lVar9 - lVar2) * 0x2c44 + (lVar10 - lVar11) * 0x194c + (lVar13 - lVar12) * 0x1e48;
      lVar11 = (lVar18 + lVar28) * 0x2b0a + (lVar25 + lVar17) * 0x1268 + (lVar26 - lVar27) * 0x2d02;
                    /* try { // try from 011040f4 to 012040fb has its CatchHandler @ 01104150 */
      piVar24[6] = (int)((lVar20 + lVar14 * -2) * 0x249d + (lVar21 + lVar14 * -2) * -0xdfc + 0x1000U
                        >> 0xd);
                    /* try { // try from 0110410c to 01204113 has its CatchHandler @ 01104148 */
                    /* try { // try from 01104114 to 0120418f has its CatchHandler @ 01104050 */
      piVar24[7] = (int)((ulong)(lVar28 * -0x45a4 + lVar26 * -0xb60 + 0x1000 + lVar19 * -0x2731 +
                                 lVar25 * -0x1bd1 + lVar11) >> 0xd);
      piVar24[2] = (int)(lVar2 * 0x30ff + lVar22 * 0x16a1 + lVar13 * -0x47a0 + lVar10 + 0x1000U >>
                        0xd);
      piVar24[3] = (int)(((lVar28 - lVar17) - lVar27) * 0x1a9a +
                         ((lVar26 - lVar18) - lVar25) * 0x2b0a + 0x1000U >> 0xd);
                    /* catch() { ... } // from try @ 0110410c with catch @ 01104148 */
      piVar24[4] = (int)(lVar12 * 0x198d + lVar22 * -0x16a1 + lVar9 * -0x2ec + lVar10 + 0x1000U >>
                        0xd);
                    /* catch() { ... } // from try @ 011040f4 with catch @ 01104150 */
      piVar24[5] = (int)((((lVar26 - lVar19) - lVar17) + lVar25 + lVar27) * 0x2731 + 0x1000U >> 0xd)
      ;
      *piVar24 = (int)lVar20 + (int)lVar14 + (int)lVar21 + -0x780;
      piVar24[1] = (int)(lVar19 * 0x2731 + lVar17 * 0xf39 + lVar18 * -0x1071 + lVar27 * 0x366a +
                         lVar11 + 0x1000U >> 0xd);
      piVar23 = local_140;
      iVar15 = 8;
    } while (iVar16 == 7);
    if (iVar16 == 0xe) break;
    piVar23 = piVar24 + 8;
    iVar15 = iVar16 + 1;
  }
  iVar15 = 8;
  piVar23 = local_e0;
  do {
                    /* try { // try from 011041c4 to 0120426f has its CatchHandler @ 011041c4
                       catch() { ... } // from try @ 011041c4 with catch @ 011041c4
                       catch() { ... } // from try @ 01104290 with catch @ 011041c4 */
    iVar16 = param_1[0x10] - piVar23[8];
    iVar3 = param_1[0x18] - *piVar23;
    iVar4 = param_1[0x20] - piVar23[-8];
    lVar9 = (long)(piVar23[8] + param_1[0x10]);
    iVar5 = param_1[8] - piVar23[0x10];
    lVar18 = (long)iVar3;
    iVar6 = *param_1 - piVar23[0x18];
    iVar7 = param_1[0x28] - piVar23[-0x10];
    iVar8 = param_1[0x30] - piVar23[-0x18];
    lVar26 = (long)(piVar23[0x18] + *param_1);
    lVar13 = (long)(piVar23[0x10] + param_1[8]);
    lVar20 = (long)(*piVar23 + param_1[0x18]);
    lVar14 = (long)(piVar23[-8] + param_1[0x20]);
    lVar21 = (long)(piVar23[-0x10] + param_1[0x28]);
    lVar17 = (long)(piVar23[-0x18] + param_1[0x30]);
    lVar27 = (long)iVar6;
    lVar10 = param_1[0x38] + lVar9;
    lVar2 = lVar14 + lVar26 + lVar21;
    lVar11 = lVar20 + lVar13 + lVar17;
                    /* try { // try from 01104270 to 01204277 has its CatchHandler @ 011042cc */
                    /* try { // try from 01104288 to 0120428f has its CatchHandler @ 011042c4 */
                    /* try { // try from 01104290 to 0120430b has its CatchHandler @ 011041c4 */
    lVar25 = (long)iVar7;
                    /* catch() { ... } // from try @ 01104288 with catch @ 011042c4 */
                    /* catch() { ... } // from try @ 01104270 with catch @ 011042cc */
    lVar12 = (long)iVar8;
    lVar19 = ((long)iVar4 + (long)iVar5) * 0x30f8 + (lVar25 + lVar18) * 0x14f1 +
             (lVar27 - lVar12) * 0x3335;
    lVar22 = lVar9 + (lVar14 + lVar13 >> 1) + (long)param_1[0x38] * -2;
    lVar9 = (lVar26 - lVar20) * 0x325d + (lVar13 - lVar14) * 0x1cc9 + (lVar17 - lVar21) * 0x2274 +
            0x4000;
                    /* try { // try from 01104340 to 012043eb has its CatchHandler @ 01104340
                       catch() { ... } // from try @ 01104340 with catch @ 01104340
                       catch() { ... } // from try @ 0110440c with catch @ 01104340 */
    *param_1 = (int)((lVar11 + lVar2 + lVar10) * 0x2469 + 0x4000U >> 0xf);
    param_1[0x38] =
         (int)((ulong)((long)iVar5 * -0x4f3c + (long)iVar6 * -0xcf2 + 0x4000 +
                       (long)iVar16 * -0x2c97 + (long)iVar7 * -0x1fa6 + lVar19) >> 0xf);
    param_1[0x30] =
         (int)((lVar2 + lVar10 * -2) * 0x29a8 + (lVar11 + lVar10 * -2) * -0xfe9 + 0x4000U >> 0xf);
    param_1[0x18] =
         (int)(((iVar5 - lVar18) - lVar12) * 0x1e44 + ((lVar27 - iVar4) - lVar25) * 0x30f8 + 0x4000U
              >> 0xf);
    param_1[8] = (int)((long)iVar3 * 0x1152 + (long)iVar16 * 0x2c97 + (long)iVar4 * -0x12b4 +
                       (long)iVar8 * 0x3dea + lVar19 + 0x4000U >> 0xf);
    param_1[0x10] =
         (int)((ulong)(lVar9 + lVar17 * -0x517e + lVar22 * 0x19bf + lVar20 * 0x37bf) >> 0xf);
    iVar15 = iVar15 + -1;
    param_1[0x28] =
         (int)((((lVar27 - iVar16) - lVar18) + lVar25 + lVar12) * 0x2c97 + 0x4000U >> 0xf);
    param_1[0x20] =
         (int)((ulong)(lVar9 + lVar26 * -0x354 + lVar22 * -0x19be + lVar21 * 0x1d12) >> 0xf);
    piVar23 = piVar23 + 1;
    param_1 = param_1 + 1;
  } while (0 < iVar15);
                    /* try { // try from 011043ec to 012043f3 has its CatchHandler @ 01104448 */
  return;
}

