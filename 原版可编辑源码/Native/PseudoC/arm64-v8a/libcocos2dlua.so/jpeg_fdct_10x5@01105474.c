
void jpeg_fdct_10x5(int *param_1,long param_2,uint param_3)

{
  byte *pbVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
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
  
  memset(param_1 + 0x28,0,0x60);
  lVar14 = 0;
                    /* try { // try from 011054bc to 012054c3 has its CatchHandler @ 01105518 */
                    /* try { // try from 011054d4 to 012054db has its CatchHandler @ 01105510 */
                    /* try { // try from 011054dc to 01205557 has its CatchHandler @ 01105410 */
  do {
    pbVar1 = (byte *)(*(long *)(param_2 + lVar14) + (ulong)param_3);
                    /* catch() { ... } // from try @ 011054d4 with catch @ 01105510 */
                    /* catch() { ... } // from try @ 011054bc with catch @ 01105518 */
    lVar15 = (ulong)pbVar1[9] + (ulong)*pbVar1;
    lVar10 = (ulong)pbVar1[8] + (ulong)pbVar1[1];
    lVar9 = (ulong)*pbVar1 - (ulong)pbVar1[9];
    lVar7 = (ulong)pbVar1[6] + (ulong)pbVar1[3];
    iVar13 = (uint)pbVar1[7] + (uint)pbVar1[2];
    lVar11 = (ulong)pbVar1[1] - (ulong)pbVar1[8];
    lVar12 = (ulong)pbVar1[5] + (ulong)pbVar1[4];
    lVar16 = (ulong)pbVar1[2] - (ulong)pbVar1[7];
    lVar17 = (ulong)pbVar1[3] - (ulong)pbVar1[6];
    lVar2 = lVar7 + lVar10;
    lVar8 = (ulong)pbVar1[4] - (ulong)pbVar1[5];
    lVar3 = lVar12 + lVar15;
    lVar10 = lVar10 - lVar7;
    lVar15 = lVar15 - lVar12;
                    /* try { // try from 0110558c to 01205637 has its CatchHandler @ 0110558c
                       catch() { ... } // from try @ 0110558c with catch @ 0110558c
                       catch() { ... } // from try @ 01105658 with catch @ 0110558c */
    lVar18 = (lVar15 + lVar10) * 0x1a9a;
    lVar12 = (lVar11 - lVar17) * 0x19e3 + lVar16 * -0x2000 + (lVar8 + lVar9) * 0x9e3;
    lVar7 = (lVar17 + lVar11) * -0x12cf + (lVar9 - lVar8) * 0x1e6f + 0x400;
    piVar4 = param_1 + lVar14;
    piVar4[2] = (int)(lVar18 + lVar15 * 0x1071 + 0x400U >> 0xb);
    piVar4[3] = (int)((ulong)(lVar7 + lVar12) >> 0xb);
    *piVar4 = ((int)lVar2 + iVar13 + (int)lVar3) * 4 + -0x1400;
    piVar4[1] = (int)(lVar11 * 0x2853 + lVar9 * 0x2cb3 + lVar16 * 0x2000 + lVar17 * 0x148c +
                      lVar8 * 0x714 + 0x400U >> 0xb);
    lVar14 = lVar14 + 8;
    piVar4[6] = (int)(lVar18 + lVar10 * -0x45a4 + 0x400U >> 0xb);
    piVar4[4] = (int)(lVar3 * 0x249d + (ulong)(uint)(iVar13 * 2) * -0x16a1 + lVar2 * -0xdfc + 0x400
                     >> 0xb);
    piVar4[5] = ((int)(lVar8 + lVar9) - ((int)(lVar11 - lVar17) + (int)lVar16)) * 4;
    piVar4[7] = (int)((ulong)(lVar7 - lVar12) >> 0xb);
  } while (lVar14 != 0x28);
  iVar13 = 8;
                    /* try { // try from 01105638 to 0120563f has its CatchHandler @ 01105694 */
  do {
                    /* try { // try from 01105650 to 01205657 has its CatchHandler @ 0110568c */
                    /* try { // try from 01105658 to 012056d3 has its CatchHandler @ 0110558c */
    iVar5 = *param_1 - param_1[0x20];
    iVar6 = param_1[8] - param_1[0x18];
    lVar12 = (long)(param_1[0x20] + *param_1);
    lVar7 = (long)(param_1[0x18] + param_1[8]);
    lVar14 = lVar7 + lVar12;
    lVar10 = lVar14 + (long)param_1[0x10] * -4;
                    /* catch() { ... } // from try @ 01105650 with catch @ 0110568c */
    lVar15 = ((long)iVar6 + (long)iVar5) * 0x220c;
    lVar7 = (lVar12 - lVar7) * 0x2062 + 0x4000;
                    /* catch() { ... } // from try @ 01105638 with catch @ 01105694 */
    iVar13 = iVar13 + -1;
    *param_1 = (int)((lVar14 + param_1[0x10]) * 0x28f6 + 0x4000U >> 0xf);
    param_1[0x10] = (int)((ulong)(lVar7 + lVar10 * 0xe7b) >> 0xf);
    param_1[0x20] = (int)((ulong)(lVar7 + lVar10 * -0xe7b) >> 0xf);
    param_1[8] = (int)(lVar15 + (long)iVar5 * 0x150b + 0x4000U >> 0xf);
    param_1[0x18] = (int)(lVar15 + (long)iVar6 * -0x5924 + 0x4000U >> 0xf);
    param_1 = param_1 + 1;
  } while (0 < iVar13);
  return;
}

