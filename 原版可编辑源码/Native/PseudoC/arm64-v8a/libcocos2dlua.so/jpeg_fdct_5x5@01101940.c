
void jpeg_fdct_5x5(int *param_1,long *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  long lVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  int iVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  
  memset(param_1,0,0x100);
  uVar19 = (ulong)param_3;
  pbVar3 = (byte *)(*param_2 + uVar19);
  bVar5 = pbVar3[2];
  lVar16 = (ulong)pbVar3[4] + (ulong)*pbVar3;
  lVar30 = (ulong)*pbVar3 - (ulong)pbVar3[4];
  lVar17 = (ulong)pbVar3[3] + (ulong)pbVar3[1];
  lVar32 = (ulong)pbVar3[1] - (ulong)pbVar3[3];
  lVar4 = lVar17 + lVar16;
  lVar27 = lVar4 + (ulong)(uint)bVar5 * -4;
  lVar16 = (lVar16 - lVar17) * 0x194c + 0x200;
  lVar17 = (lVar32 + lVar30) * 0x1a9a;
                    /* try { // try from 011019ec to 01201a1f has its CatchHandler @ 011019ec
                       catch() { ... } // from try @ 011019ec with catch @ 011019ec
                       catch() { ... } // from try @ 01101a2c with catch @ 011019ec */
  param_1[3] = (int)(lVar17 + lVar32 * -0x45a4 + 0x200U >> 10);
  param_1[4] = (int)((ulong)(lVar16 + lVar27 * -0xb50) >> 10);
  *param_1 = ((int)lVar4 + (uint)bVar5) * 8 + -0x1400;
  param_1[1] = (int)(lVar17 + lVar30 * 0x1071 + 0x200U >> 10);
  param_1[2] = (int)((ulong)(lVar16 + lVar27 * 0xb50) >> 10);
                    /* try { // try from 01101a20 to 01201a2b has its CatchHandler @ 01101a90 */
  pbVar3 = (byte *)(param_2[1] + uVar19);
                    /* try { // try from 01101a2c to 01201aab has its CatchHandler @ 011019ec */
  bVar5 = pbVar3[2];
  lVar16 = (ulong)pbVar3[4] + (ulong)*pbVar3;
  lVar30 = (ulong)*pbVar3 - (ulong)pbVar3[4];
  lVar17 = (ulong)pbVar3[3] + (ulong)pbVar3[1];
  lVar27 = (ulong)pbVar3[1] - (ulong)pbVar3[3];
  lVar4 = lVar17 + lVar16;
  lVar32 = lVar4 + (ulong)(uint)bVar5 * -4;
  lVar16 = (lVar16 - lVar17) * 0x194c + 0x200;
  lVar17 = (lVar27 + lVar30) * 0x1a9a;
                    /* catch() { ... } // from try @ 01101a20 with catch @ 01101a90 */
  param_1[0xb] = (int)(lVar17 + lVar27 * -0x45a4 + 0x200U >> 10);
  param_1[0xc] = (int)((ulong)(lVar16 + lVar32 * -0xb50) >> 10);
  param_1[8] = ((int)lVar4 + (uint)bVar5) * 8 + -0x1400;
  param_1[9] = (int)(lVar17 + lVar30 * 0x1071 + 0x200U >> 10);
  param_1[10] = (int)((ulong)(lVar16 + lVar32 * 0xb50) >> 10);
  pbVar3 = (byte *)(param_2[2] + uVar19);
  bVar5 = pbVar3[2];
  lVar16 = (ulong)pbVar3[4] + (ulong)*pbVar3;
  lVar30 = (ulong)*pbVar3 - (ulong)pbVar3[4];
  lVar17 = (ulong)pbVar3[3] + (ulong)pbVar3[1];
  lVar32 = (ulong)pbVar3[1] - (ulong)pbVar3[3];
  lVar4 = lVar17 + lVar16;
  lVar27 = lVar4 + (ulong)(uint)bVar5 * -4;
  lVar16 = (lVar16 - lVar17) * 0x194c + 0x200;
  lVar17 = (lVar32 + lVar30) * 0x1a9a;
  param_1[0x13] = (int)(lVar17 + lVar32 * -0x45a4 + 0x200U >> 10);
  param_1[0x14] = (int)((ulong)(lVar16 + lVar27 * -0xb50) >> 10);
  param_1[0x10] = ((int)lVar4 + (uint)bVar5) * 8 + -0x1400;
  param_1[0x11] = (int)(lVar17 + lVar30 * 0x1071 + 0x200U >> 10);
  param_1[0x12] = (int)((ulong)(lVar16 + lVar27 * 0xb50) >> 10);
  pbVar3 = (byte *)(param_2[3] + uVar19);
  bVar5 = pbVar3[2];
  lVar16 = (ulong)pbVar3[4] + (ulong)*pbVar3;
  lVar17 = (ulong)pbVar3[3] + (ulong)pbVar3[1];
  lVar30 = (ulong)*pbVar3 - (ulong)pbVar3[4];
  lVar32 = (ulong)pbVar3[1] - (ulong)pbVar3[3];
  lVar4 = lVar17 + lVar16;
                    /* catch() { ... } // from try @ 01101bf4 with catch @ 01101b94 */
  lVar27 = lVar4 + (ulong)(uint)bVar5 * -4;
  lVar16 = (lVar16 - lVar17) * 0x194c + 0x200;
  lVar17 = (lVar32 + lVar30) * 0x1a9a;
  param_1[0x1b] = (int)(lVar17 + lVar32 * -0x45a4 + 0x200U >> 10);
  param_1[0x1c] = (int)((ulong)(lVar16 + lVar27 * -0xb50) >> 10);
  iVar1 = ((int)lVar4 + (uint)bVar5) * 8 + -0x1400;
  param_1[0x18] = iVar1;
  param_1[0x19] = (int)(lVar17 + lVar30 * 0x1071 + 0x200U >> 10);
                    /* try { // try from 01101be0 to 01201be7 has its CatchHandler @ 01101c9c */
  param_1[0x1a] = (int)((ulong)(lVar16 + lVar27 * 0xb50) >> 10);
                    /* try { // try from 01101be8 to 01201bf3 has its CatchHandler @ 01101c84 */
  iVar6 = param_1[8] - iVar1;
                    /* try { // try from 01101bf4 to 01201cb7 has its CatchHandler @ 01101b94 */
  pbVar3 = (byte *)(param_2[4] + uVar19);
  lVar16 = (ulong)pbVar3[4] + (ulong)*pbVar3;
  lVar27 = (ulong)*pbVar3 - (ulong)pbVar3[4];
  lVar17 = (ulong)pbVar3[3] + (ulong)pbVar3[1];
  lVar4 = lVar17 + lVar16;
  lVar32 = (ulong)pbVar3[1] - (ulong)pbVar3[3];
  lVar30 = lVar4 + (ulong)(uint)pbVar3[2] * -4;
  lVar16 = (lVar16 - lVar17) * 0x194c + 0x200;
  lVar17 = (lVar32 + lVar27) * 0x1a9a;
  iVar2 = ((int)lVar4 + (uint)pbVar3[2]) * 8 + -0x1400;
  param_1[0x24] = (int)((ulong)(lVar16 + lVar30 * -0xb50) >> 10);
  iVar7 = *param_1 - iVar2;
                    /* catch() { ... } // from try @ 01101be8 with catch @ 01101c84 */
  param_1[0x22] = (int)((ulong)(lVar16 + lVar30 * 0xb50) >> 10);
  param_1[0x23] = (int)(lVar17 + lVar32 * -0x45a4 + 0x200U >> 10);
  lVar20 = ((long)iVar6 + (long)iVar7) * 0x220c;
  iVar8 = param_1[9] - param_1[0x19];
                    /* catch() { ... } // from try @ 01101be0 with catch @ 01101c9c */
  iVar29 = (int)(lVar17 + lVar27 * 0x1071 + 0x200U >> 10);
  iVar9 = param_1[1] - iVar29;
  lVar21 = ((long)iVar8 + (long)iVar9) * 0x220c;
  iVar10 = param_1[10] - param_1[0x1a];
  iVar11 = param_1[0xb] - param_1[0x1b];
  iVar12 = param_1[2] - param_1[0x22];
  iVar13 = param_1[3] - param_1[0x23];
  iVar14 = param_1[0xc] - param_1[0x1c];
  iVar15 = param_1[4] - param_1[0x24];
  lVar22 = ((long)iVar14 + (long)iVar15) * 0x220c;
  lVar26 = ((long)iVar10 + (long)iVar12) * 0x220c;
  lVar24 = ((long)iVar11 + (long)iVar13) * 0x220c;
  lVar23 = (long)(iVar1 + param_1[8]);
  lVar36 = (long)(*param_1 + iVar2);
  lVar16 = lVar23 + lVar36;
  lVar33 = (long)(param_1[0x19] + param_1[9]);
  lVar31 = (long)(param_1[1] + iVar29);
  lVar17 = lVar33 + lVar31;
  *param_1 = (int)((lVar16 + param_1[0x10]) * 0x28f6 + 0x4000U >> 0xf);
  param_1[8] = (int)(lVar20 + (long)iVar7 * 0x150b + 0x4000U >> 0xf);
  lVar34 = (long)(param_1[0x1a] + param_1[10]);
  lVar35 = (long)(param_1[0x1b] + param_1[0xb]);
  lVar18 = (long)(param_1[0x1c] + param_1[0xc]);
  lVar25 = (long)(param_1[0x22] + param_1[2]);
  lVar32 = (long)(param_1[0x23] + param_1[3]);
  lVar28 = (long)(param_1[0x24] + param_1[4]);
  lVar4 = lVar34 + lVar25;
  lVar27 = lVar35 + lVar32;
  lVar30 = lVar18 + lVar28;
  lVar36 = (lVar36 - lVar23) * 0x2062 + 0x4000;
  lVar31 = (lVar31 - lVar33) * 0x2062 + 0x4000;
  lVar25 = (lVar25 - lVar34) * 0x2062 + 0x4000;
  lVar23 = (lVar32 - lVar35) * 0x2062 + 0x4000;
  lVar18 = (lVar28 - lVar18) * 0x2062 + 0x4000;
  lVar16 = lVar16 + (long)param_1[0x10] * -4;
  lVar32 = lVar17 + (long)param_1[0x11] * -4;
  param_1[0x18] = (int)(lVar20 + (long)iVar6 * -0x5924 + 0x4000U >> 0xf);
                    /* try { // try from 01101e68 to 01201eb3 has its CatchHandler @ 01101e68
                       catch() { ... } // from try @ 01101e68 with catch @ 01101e68
                       catch() { ... } // from try @ 01101ec4 with catch @ 01101e68 */
  param_1[0x10] = (int)((ulong)(lVar36 + lVar16 * 0xe7b) >> 0xf);
  param_1[1] = (int)((lVar17 + param_1[0x11]) * 0x28f6 + 0x4000U >> 0xf);
  param_1[9] = (int)(lVar21 + (long)iVar9 * 0x150b + 0x4000U >> 0xf);
  param_1[0x11] = (int)((ulong)(lVar31 + lVar32 * 0xe7b) >> 0xf);
                    /* try { // try from 01101eb4 to 01201ec3 has its CatchHandler @ 01101f2c */
  param_1[0x19] = (int)(lVar21 + (long)iVar8 * -0x5924 + 0x4000U >> 0xf);
  param_1[0x20] = (int)((ulong)(lVar36 + lVar16 * -0xe7b) >> 0xf);
  param_1[0x21] = (int)((ulong)(lVar31 + lVar32 * -0xe7b) >> 0xf);
  lVar17 = lVar27 + (long)param_1[0x13] * -4;
                    /* try { // try from 01101ec4 to 01201f83 has its CatchHandler @ 01101e68 */
  lVar16 = lVar4 + (long)param_1[0x12] * -4;
  lVar32 = lVar30 + (long)param_1[0x14] * -4;
                    /* catch() { ... } // from try @ 01101eb4 with catch @ 01101f2c */
  param_1[10] = (int)(lVar26 + (long)iVar12 * 0x150b + 0x4000U >> 0xf);
  param_1[0xb] = (int)(lVar24 + (long)iVar13 * 0x150b + 0x4000U >> 0xf);
  param_1[0x1a] = (int)(lVar26 + (long)iVar10 * -0x5924 + 0x4000U >> 0xf);
  param_1[0x1b] = (int)(lVar24 + (long)iVar11 * -0x5924 + 0x4000U >> 0xf);
  param_1[2] = (int)((lVar4 + param_1[0x12]) * 0x28f6 + 0x4000U >> 0xf);
  param_1[3] = (int)((lVar27 + param_1[0x13]) * 0x28f6 + 0x4000U >> 0xf);
  param_1[4] = (int)((lVar30 + param_1[0x14]) * 0x28f6 + 0x4000U >> 0xf);
  param_1[0xc] = (int)(lVar22 + (long)iVar15 * 0x150b + 0x4000U >> 0xf);
  param_1[0x12] = (int)((ulong)(lVar25 + lVar16 * 0xe7b) >> 0xf);
  param_1[0x13] = (int)((ulong)(lVar23 + lVar17 * 0xe7b) >> 0xf);
  param_1[0x22] = (int)((ulong)(lVar25 + lVar16 * -0xe7b) >> 0xf);
  param_1[0x23] = (int)((ulong)(lVar23 + lVar17 * -0xe7b) >> 0xf);
  param_1[0x14] = (int)((ulong)(lVar18 + lVar32 * 0xe7b) >> 0xf);
  param_1[0x24] = (int)((ulong)(lVar18 + lVar32 * -0xe7b) >> 0xf);
  param_1[0x1c] = (int)(lVar22 + (long)iVar14 * -0x5924 + 0x4000U >> 0xf);
  return;
}

