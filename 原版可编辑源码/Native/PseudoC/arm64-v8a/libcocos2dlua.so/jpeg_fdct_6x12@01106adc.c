
void jpeg_fdct_6x12(int *param_1,long param_2,uint param_3)

{
  byte *pbVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  int local_e0 [8];
  int local_c0 [8];
  int local_a0 [8];
  int local_80 [8];
  
  memset(param_1,0,0x100);
  piVar3 = param_1;
  iVar4 = 0;
  while( true ) {
    do {
      iVar13 = iVar4;
      piVar8 = piVar3;
      pbVar1 = (byte *)(*(long *)(param_2 + (long)iVar13 * 8) + (ulong)param_3);
      lVar7 = (ulong)pbVar1[5] + (ulong)*pbVar1;
      lVar19 = (ulong)*pbVar1 - (ulong)pbVar1[5];
      iVar4 = (uint)pbVar1[1] - (uint)pbVar1[4];
      lVar2 = (ulong)pbVar1[3] + (ulong)pbVar1[2];
      lVar15 = (ulong)pbVar1[2] - (ulong)pbVar1[3];
      lVar20 = (ulong)pbVar1[4] + (ulong)pbVar1[1];
      lVar10 = lVar2 + lVar7;
                    /* try { // try from 01106b88 to 01206c2b has its CatchHandler @ 01106b88
                       catch() { ... } // from try @ 01106b88 with catch @ 01106b88
                       catch() { ... } // from try @ 01106c4c with catch @ 01106b88 */
      iVar18 = (int)lVar19;
      iVar14 = (int)lVar15;
      piVar8[2] = (int)((lVar7 - lVar2) * 0x2731 + 0x400U >> 0xb);
      piVar8[3] = ((iVar18 - iVar4) - iVar14) * 4;
      iVar6 = (int)((lVar15 + lVar19) * 0xbb6 + 0x400U >> 0xb);
      piVar8[4] = (int)((lVar10 + lVar20 * -2) * 0x16a1 + 0x400U >> 0xb);
      piVar8[5] = iVar6 + (iVar14 - iVar4) * 4;
      *piVar8 = ((int)lVar10 + (int)lVar20) * 4 + -0xc00;
      piVar8[1] = iVar6 + (iVar4 + iVar18) * 4;
      piVar3 = local_e0;
      iVar4 = 8;
    } while (iVar13 == 7);
    if (iVar13 == 0xb) break;
    piVar3 = piVar8 + 8;
    iVar4 = iVar13 + 1;
  }
  lVar7 = 0;
  do {
    piVar3 = (int *)((long)param_1 + lVar7);
                    /* try { // try from 01106c2c to 01206c33 has its CatchHandler @ 01106c88 */
                    /* try { // try from 01106c44 to 01206c4b has its CatchHandler @ 01106c80 */
                    /* try { // try from 01106c4c to 01206cc7 has its CatchHandler @ 01106b88 */
    iVar4 = piVar3[0x10] - *(int *)((long)local_c0 + lVar7);
    iVar6 = *piVar3 - *(int *)((long)local_80 + lVar7);
    iVar13 = piVar3[8] - *(int *)((long)local_a0 + lVar7);
                    /* catch() { ... } // from try @ 01106c44 with catch @ 01106c80 */
    iVar14 = piVar3[0x18] - *(int *)((long)local_e0 + lVar7);
    iVar18 = piVar3[0x28] - piVar3[0x30];
                    /* catch() { ... } // from try @ 01106c2c with catch @ 01106c88 */
    lVar15 = (long)(*(int *)((long)local_80 + lVar7) + *piVar3);
    lVar19 = (long)(*(int *)((long)local_a0 + lVar7) + piVar3[8]);
    lVar9 = (long)(*(int *)((long)local_c0 + lVar7) + piVar3[0x10]);
    lVar10 = (long)(*(int *)((long)local_e0 + lVar7) + piVar3[0x18]);
    lVar20 = (long)(piVar3[0x30] + piVar3[0x28]);
    lVar16 = (long)(piVar3[0x38] + piVar3[0x20]);
    lVar2 = lVar20 + lVar15;
    lVar15 = lVar15 - lVar20;
    lVar20 = lVar10 + lVar9;
    lVar9 = lVar9 - lVar10;
    lVar11 = lVar19 - lVar16;
    iVar5 = piVar3[0x20] - piVar3[0x38];
    lVar10 = ((long)iVar5 + (long)iVar13) * 0xf65;
    lVar22 = (long)iVar6;
                    /* try { // try from 01106ce8 to 01206d8b has its CatchHandler @ 01106ce8
                       catch() { ... } // from try @ 01106ce8 with catch @ 01106ce8
                       catch() { ... } // from try @ 01106dac with catch @ 01106ce8 */
    lVar25 = (long)iVar4;
    lVar21 = lVar10 + (long)iVar13 * 0x15c5;
    lVar10 = lVar10 + (long)iVar5 * -0x348f;
    lVar17 = (lVar25 + lVar22) * 0x1fea;
    lVar23 = (long)iVar14;
    lVar24 = (lVar23 + lVar25) * -0x540;
    lVar12 = (lVar23 + lVar22) * 0x187d;
    piVar3[0x30] = (int)((lVar15 - (lVar11 + lVar9)) * 0x1c72 + 0x4000U >> 0xf);
    piVar3[0x20] = (int)((lVar2 - lVar20) * 0x22d6 + 0x4000U >> 0xf);
    *piVar3 = (int)((lVar20 + lVar19 + lVar16 + lVar2) * 0x1c72 + 0x4000U >> 0xf);
                    /* try { // try from 01106d8c to 01206d93 has its CatchHandler @ 01106de8 */
    piVar3[0x10] = (int)(lVar15 * 0x26db + lVar9 * 0xa69 + lVar11 * 0x1c72 + 0x4000U >> 0xf);
                    /* try { // try from 01106da4 to 01206dab has its CatchHandler @ 01106de0 */
                    /* try { // try from 01106dac to 01206e27 has its CatchHandler @ 01106ce8 */
    lVar7 = lVar7 + 4;
    piVar3[0x28] = (int)((ulong)(((lVar17 + (long)iVar4 * -0x428c + lVar24 + 0x4000) - lVar10) +
                                (long)iVar18 * 0x187d) >> 0xf);
    piVar3[0x18] = (int)(lVar10 + (lVar22 - lVar23) * 0x252a + (lVar25 + iVar18) * -0xf65 + 0x4000U
                        >> 0xf);
    piVar3[8] = (int)(lVar17 + (long)iVar6 * -0x1085 + lVar12 + lVar21 + (long)iVar18 * 0x540 +
                      0x4000U >> 0xf);
    piVar3[0x38] = (int)((ulong)(((lVar24 + (long)iVar14 * 0x14a5 + lVar12 + 0x4000) - lVar21) +
                                (long)iVar18 * -0x1fea) >> 0xf);
  } while ((int)lVar7 != 0x18);
                    /* catch() { ... } // from try @ 01106da4 with catch @ 01106de0 */
                    /* catch() { ... } // from try @ 01106d8c with catch @ 01106de8 */
  return;
}

