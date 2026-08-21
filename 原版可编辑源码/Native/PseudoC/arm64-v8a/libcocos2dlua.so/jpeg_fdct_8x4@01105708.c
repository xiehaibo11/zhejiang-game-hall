
void jpeg_fdct_8x4(int *param_1,long param_2,uint param_3)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  byte *pbVar5;
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
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
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
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  
                    /* try { // try from 01105708 to 012057b3 has its CatchHandler @ 01105708
                       catch() { ... } // from try @ 01105708 with catch @ 01105708
                       catch() { ... } // from try @ 011057d4 with catch @ 01105708 */
  memset(param_1 + 0x20,0,0x80);
  lVar23 = 0;
  do {
    plVar1 = (long *)(param_2 + lVar23);
    piVar4 = param_1 + lVar23;
    lVar23 = lVar23 + 8;
    pbVar5 = (byte *)(*plVar1 + (ulong)param_3);
    lVar33 = (ulong)pbVar5[7] + (ulong)*pbVar5;
    lVar35 = (ulong)pbVar5[6] + (ulong)pbVar5[1];
                    /* try { // try from 011057b4 to 012057bb has its CatchHandler @ 01105810 */
    lVar34 = (ulong)pbVar5[5] + (ulong)pbVar5[2];
    lVar36 = (ulong)pbVar5[4] + (ulong)pbVar5[3];
    lVar21 = (ulong)*pbVar5 - (ulong)pbVar5[7];
    lVar20 = (ulong)pbVar5[3] - (ulong)pbVar5[4];
    lVar22 = (ulong)pbVar5[1] - (ulong)pbVar5[6];
    lVar31 = (ulong)pbVar5[2] - (ulong)pbVar5[5];
                    /* try { // try from 011057cc to 012057d3 has its CatchHandler @ 01105808 */
    iVar2 = (int)lVar34 + (int)lVar35;
    lVar35 = lVar35 - lVar34;
                    /* try { // try from 011057d4 to 0120584f has its CatchHandler @ 01105708 */
    iVar3 = (int)lVar36 + (int)lVar33;
    lVar33 = lVar33 - lVar36;
    lVar37 = (lVar20 + lVar21) * -0x1ccd;
                    /* catch() { ... } // from try @ 011057cc with catch @ 01105808 */
    lVar39 = (lVar31 + lVar22) * -0x5203;
    lVar34 = (lVar33 + lVar35) * 0x1151 + 0x200;
                    /* catch() { ... } // from try @ 011057b4 with catch @ 01105810 */
    lVar38 = (lVar20 + lVar22 + lVar31 + lVar21) * 0x25a1 + 0x200;
    lVar36 = lVar38 + (lVar31 + lVar21) * -0xc7c;
    lVar38 = lVar38 + (lVar20 + lVar22) * -0x3ec5;
                    /* catch() { ... } // from try @ 011058ec with catch @ 01105850 */
    *piVar4 = (iVar3 + iVar2) * 8 + -0x2000;
    piVar4[1] = (int)((ulong)(lVar37 + lVar21 * 0x300b + lVar36) >> 10);
    piVar4[2] = (int)((ulong)(lVar34 + lVar33 * 0x187e) >> 10);
    piVar4[3] = (int)((ulong)(lVar39 + lVar22 * 0x6254 + lVar38) >> 10);
    piVar4[4] = (iVar3 - iVar2) * 8;
    piVar4[5] = (int)((ulong)(lVar39 + lVar31 * 0x41b3 + lVar36) >> 10);
    piVar4[6] = (int)((ulong)(lVar34 + lVar35 * -0x3b21) >> 10);
    piVar4[7] = (int)((ulong)(lVar37 + lVar20 * 0x98e + lVar38) >> 10);
  } while (lVar23 != 0x20);
  iVar2 = *param_1 - param_1[0x18];
  iVar3 = param_1[1] - param_1[0x19];
  iVar6 = param_1[8] - param_1[0x10];
  iVar7 = param_1[9] - param_1[0x11];
                    /* try { // try from 011058e4 to 012058eb has its CatchHandler @ 011059a4 */
                    /* try { // try from 011058ec to 012059bf has its CatchHandler @ 01105850 */
  iVar8 = param_1[2] - param_1[0x1a];
  iVar9 = param_1[3] - param_1[0x1b];
  iVar10 = param_1[10] - param_1[0x12];
  iVar11 = param_1[0xb] - param_1[0x13];
  iVar12 = param_1[4] - param_1[0x1c];
  iVar13 = param_1[5] - param_1[0x1d];
  iVar14 = param_1[0xc] - param_1[0x14];
                    /* catch() { ... } // from try @ 011058e4 with catch @ 011059a4 */
  iVar15 = param_1[0xd] - param_1[0x15];
  lVar31 = ((long)iVar6 + (long)iVar2) * 0x1151 + 0x4000;
  lVar37 = ((long)iVar7 + (long)iVar3) * 0x1151 + 0x4000;
  iVar16 = param_1[0xe] - param_1[0x16];
  iVar17 = param_1[0xf] - param_1[0x17];
  iVar18 = param_1[6] - param_1[0x1e];
  iVar19 = param_1[7] - param_1[0x1f];
  lVar39 = ((long)iVar10 + (long)iVar8) * 0x1151 + 0x4000;
  lVar24 = ((long)iVar11 + (long)iVar9) * 0x1151 + 0x4000;
  lVar25 = ((long)iVar14 + (long)iVar12) * 0x1151 + 0x4000;
  lVar26 = ((long)iVar15 + (long)iVar13) * 0x1151 + 0x4000;
  lVar32 = ((long)iVar16 + (long)iVar18) * 0x1151 + 0x4000;
  lVar27 = ((long)iVar17 + (long)iVar19) * 0x1151 + 0x4000;
  lVar21 = (long)(param_1[0x16] + param_1[0xe]);
  lVar20 = (long)(param_1[0x17] + param_1[0xf]);
                    /* try { // try from 01105a94 to 01205b37 has its CatchHandler @ 01105a94
                       catch() { ... } // from try @ 01105a94 with catch @ 01105a94
                       catch() { ... } // from try @ 01105b58 with catch @ 01105a94 */
  lVar23 = (long)(param_1[0x18] + *param_1) + 2;
  lVar28 = (long)(param_1[0x10] + param_1[8]);
  lVar33 = (long)(param_1[0x19] + param_1[1]) + 2;
  lVar29 = (long)(param_1[0x11] + param_1[9]);
                    /* try { // try from 01105b38 to 01205b3f has its CatchHandler @ 01105b94 */
  lVar35 = (long)(param_1[0x1a] + param_1[2]) + 2;
  lVar30 = (long)(param_1[0x12] + param_1[10]);
                    /* try { // try from 01105b50 to 01205b57 has its CatchHandler @ 01105b8c */
                    /* try { // try from 01105b58 to 01205bd3 has its CatchHandler @ 01105a94 */
  lVar34 = (long)(param_1[0x1b] + param_1[3]) + 2;
  lVar22 = (long)(param_1[0x13] + param_1[0xb]);
  lVar36 = (long)(param_1[0x1c] + param_1[4]) + 2;
                    /* catch() { ... } // from try @ 01105b50 with catch @ 01105b8c */
                    /* catch() { ... } // from try @ 01105b38 with catch @ 01105b94 */
  lVar38 = (long)(param_1[0x14] + param_1[0xc]);
  param_1[0x10] = (int)((ulong)(lVar23 - lVar28) >> 2);
  *param_1 = (int)((ulong)(lVar23 + lVar28) >> 2);
  param_1[1] = (int)((ulong)(lVar33 + lVar29) >> 2);
  param_1[0x11] = (int)((ulong)(lVar33 - lVar29) >> 2);
  param_1[2] = (int)((ulong)(lVar35 + lVar30) >> 2);
  lVar28 = (long)(param_1[0x15] + param_1[0xd]);
  lVar23 = (long)(param_1[0x1d] + param_1[5]) + 2;
  param_1[0x12] = (int)((ulong)(lVar35 - lVar30) >> 2);
  param_1[0x13] = (int)((ulong)(lVar34 - lVar22) >> 2);
                    /* try { // try from 01105bf4 to 01205c97 has its CatchHandler @ 01105bf4
                       catch() { ... } // from try @ 01105bf4 with catch @ 01105bf4
                       catch() { ... } // from try @ 01105cb8 with catch @ 01105bf4 */
  param_1[3] = (int)((ulong)(lVar34 + lVar22) >> 2);
  param_1[4] = (int)((ulong)(lVar36 + lVar38) >> 2);
  lVar33 = (long)(param_1[0x1e] + param_1[6]) + 2;
  param_1[0x14] = (int)((ulong)(lVar36 - lVar38) >> 2);
  param_1[5] = (int)((ulong)(lVar23 + lVar28) >> 2);
  lVar35 = (long)(param_1[0x1f] + param_1[7]) + 2;
  param_1[0x15] = (int)((ulong)(lVar23 - lVar28) >> 2);
  param_1[6] = (int)((ulong)(lVar33 + lVar21) >> 2);
  param_1[0x16] = (int)((ulong)(lVar33 - lVar21) >> 2);
  param_1[7] = (int)((ulong)(lVar35 + lVar20) >> 2);
  param_1[0x17] = (int)((ulong)(lVar35 - lVar20) >> 2);
  param_1[8] = (int)((ulong)(lVar31 + (long)iVar2 * 0x187e) >> 0xf);
  param_1[0x18] = (int)((ulong)(lVar31 + (long)iVar6 * -0x3b21) >> 0xf);
  param_1[9] = (int)((ulong)(lVar37 + (long)iVar3 * 0x187e) >> 0xf);
  param_1[0x19] = (int)((ulong)(lVar37 + (long)iVar7 * -0x3b21) >> 0xf);
  param_1[10] = (int)((ulong)(lVar39 + (long)iVar8 * 0x187e) >> 0xf);
  param_1[0x1a] = (int)((ulong)(lVar39 + (long)iVar10 * -0x3b21) >> 0xf);
                    /* try { // try from 01105c98 to 01205c9f has its CatchHandler @ 01105cf4 */
  param_1[0xd] = (int)((ulong)(lVar26 + (long)iVar13 * 0x187e) >> 0xf);
  param_1[0xe] = (int)((ulong)(lVar32 + (long)iVar18 * 0x187e) >> 0xf);
                    /* try { // try from 01105cb0 to 01205cb7 has its CatchHandler @ 01105cec */
                    /* try { // try from 01105cb8 to 01205d33 has its CatchHandler @ 01105bf4 */
  param_1[0xb] = (int)((ulong)(lVar24 + (long)iVar9 * 0x187e) >> 0xf);
  param_1[0xc] = (int)((ulong)(lVar25 + (long)iVar12 * 0x187e) >> 0xf);
  param_1[0x1b] = (int)((ulong)(lVar24 + (long)iVar11 * -0x3b21) >> 0xf);
  param_1[0x1c] = (int)((ulong)(lVar25 + (long)iVar14 * -0x3b21) >> 0xf);
  param_1[0x1d] = (int)((ulong)(lVar26 + (long)iVar15 * -0x3b21) >> 0xf);
  param_1[0x1e] = (int)((ulong)(lVar32 + (long)iVar16 * -0x3b21) >> 0xf);
  param_1[0xf] = (int)((ulong)(lVar27 + (long)iVar19 * 0x187e) >> 0xf);
  param_1[0x1f] = (int)((ulong)(lVar27 + (long)iVar17 * -0x3b21) >> 0xf);
                    /* catch() { ... } // from try @ 01105cb0 with catch @ 01105cec */
  return;
}

