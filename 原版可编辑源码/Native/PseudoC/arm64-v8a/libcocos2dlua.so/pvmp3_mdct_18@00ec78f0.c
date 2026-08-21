
void pvmp3_mdct_18(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  int *piVar9;
  undefined1 auVar10 [16];
  ulong uVar11;
  undefined1 auVar12 [16];
  ulong uVar16;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  ulong uVar19;
  ulong uVar20;
  
  auVar12 = NEON_rev64(*(undefined1 (*) [16])(param_1 + 0xe),4);
  auVar10._0_4_ = *param_1 << 1;
  auVar10._4_4_ = param_1[1] << 1;
  auVar10._8_4_ = param_1[2] << 1;
  auVar10._12_4_ = param_1[3] << 1;
  auVar12 = NEON_ext(auVar12,auVar12,8,1);
  uVar19 = (long)auVar12._0_4_ * 0x5bb3cc80;
  uVar20 = (long)auVar12._4_4_ * 0x1ea52b40;
  iVar6 = (int)((ulong)((long)auVar10._0_4_ * 0x400f9c00) >> 0x20);
  iVar8 = (int)((ulong)((long)auVar10._4_4_ * 0x408d6080) >> 0x20);
  auVar10 = NEON_ext(auVar10,auVar10,8,1);
  auVar12 = NEON_ext(auVar12,auVar12,8,1);
  uVar11 = (long)auVar12._0_4_ * 0x127b1ca0;
  uVar16 = (long)auVar12._4_4_ * 0xd4d5260;
  iVar1 = (int)((ulong)((long)auVar10._0_4_ * 0x418dcb80) >> 0x20);
  iVar2 = (int)((ulong)((long)auVar10._4_4_ * 0x431b1a00) >> 0x20);
  auVar13._0_8_ = (ulong)((long)(iVar1 - (int)(uVar11 >> 0x1b)) * 0x8d3b7d0) >> 0x1c;
  auVar13._8_8_ = (ulong)((long)(iVar2 - (int)(uVar16 >> 0x1b)) * 0x9c42570) >> 0x1c;
  param_1[2] = (int)(uVar11 >> 0x1b) + iVar1;
  param_1[3] = (int)(uVar16 >> 0x1b) + iVar2;
  *param_1 = (int)(uVar19 >> 0x1b) + iVar6;
  param_1[1] = (int)(uVar20 >> 0x1b) + iVar8;
  auVar12._0_8_ = (ulong)((long)(iVar6 - (int)(uVar19 >> 0x1b)) * 0x807d2b0) >> 0x1c;
  auVar12._8_8_ = (ulong)((long)(iVar8 - (int)(uVar20 >> 0x1b)) * 0x8483ee0) >> 0x1c;
  auVar14 = NEON_ext(auVar13,auVar13,8,1);
  auVar10 = NEON_ext(auVar12,auVar12,8,1);
  auVar12 = NEON_rev64(*(undefined1 (*) [16])(param_1 + 10),4);
  auVar12 = NEON_ext(auVar12,auVar12,8,1);
  auVar17._0_4_ = param_1[4] << 1;
  auVar17._4_4_ = param_1[5] << 1;
  auVar17._8_4_ = param_1[6] << 1;
  auVar17._12_4_ = param_1[7] << 1;
  uVar19 = (long)auVar12._0_4_ * 0xa73d750;
  uVar20 = (long)auVar12._4_4_ * 0x8a9a830;
  iVar6 = (int)((ulong)((long)auVar17._0_4_ * 0x4545ea00) >> 0x20);
  iVar8 = (int)((ulong)((long)auVar17._4_4_ * 0x48270680) >> 0x20);
  auVar18 = NEON_ext(auVar17,auVar17,8,1);
  auVar12 = NEON_ext(auVar12,auVar12,8,1);
  uVar11 = (long)auVar12._0_4_ * 0x771d3a8;
  uVar16 = (long)auVar12._4_4_ * 0x6921a98;
                    /* catch() { ... } // from try @ 00ec7adc with catch @ 00ec7a74 */
  iVar1 = (int)((ulong)((long)auVar18._0_4_ * 0x4be25480) >> 0x20);
  iVar2 = (int)((ulong)((long)auVar18._4_4_ * 0x50ab9480) >> 0x20);
  param_1[0x10] = auVar10._0_4_;
  param_1[0x11] = auVar10._8_4_;
  param_1[0xe] = auVar14._0_4_;
  param_1[0xf] = auVar14._8_4_;
  param_1[6] = (int)(uVar11 >> 0x1b) + iVar1;
  param_1[7] = (int)(uVar16 >> 0x1b) + iVar2;
  param_1[4] = (int)(uVar19 >> 0x1b) + iVar6;
  param_1[5] = (int)(uVar20 >> 0x1b) + iVar8;
                    /* try { // try from 00ec7ad4 to 00fc7adb has its CatchHandler @ 00ec7aec */
  auVar14._0_8_ = (ulong)((long)(iVar1 - (int)(uVar11 >> 0x1b)) * 0x12edfb20) >> 0x1c;
  auVar14._8_8_ = (ulong)((long)(iVar2 - (int)(uVar16 >> 0x1b)) * 0x1ee8dd40) >> 0x1c;
  auVar15._0_8_ = (ulong)((long)(iVar6 - (int)(uVar19 >> 0x1b)) * 0xb504f30) >> 0x1c;
  auVar15._8_8_ = (ulong)((long)(iVar8 - (int)(uVar20 >> 0x1b)) * 0xdf29440) >> 0x1c;
                    /* try { // try from 00ec7adc to 00fc7b27 has its CatchHandler @ 00ec7a74 */
  auVar10 = NEON_ext(auVar14,auVar14,8,1);
  auVar12 = NEON_ext(auVar15,auVar15,8,1);
  auVar18._0_8_ = CONCAT44(auVar10._8_4_,auVar10._0_4_);
  auVar18._8_4_ = auVar12._0_4_;
  auVar18._12_4_ = auVar12._8_4_;
                    /* catch() { ... } // from try @ 00ec7ad4 with catch @ 00ec7aec */
  *(long *)(param_1 + 0xc) = auVar18._8_8_;
  *(undefined8 *)(param_1 + 10) = auVar18._0_8_;
  piVar9 = param_1 + 9;
  iVar6 = (int)((ulong)((long)(param_1[8] << 1) * 0x56ce4d80) >> 0x20);
  iVar8 = (int)((ulong)((long)*piVar9 * 0x5ebb630) >> 0x1b);
  param_1[8] = iVar8 + iVar6;
  *piVar9 = (int)((ulong)((long)(iVar6 - iVar8) * 0x5bca2a00) >> 0x1c);
  pvmp3_dct_9();
  pvmp3_dct_9(piVar9);
  iVar8 = param_1[5];
  iVar3 = param_1[0x10];
  iVar2 = param_1[0xe];
  param_1[0x10] = param_1[8];
  iVar4 = param_1[0xc];
  param_1[0xe] = param_1[7];
  param_1[0xc] = param_1[6];
  param_1[8] = param_1[4];
  param_1[6] = param_1[3];
  iVar1 = param_1[10];
  param_1[10] = iVar8;
  param_1[4] = param_1[2];
  param_1[2] = param_1[1];
  param_1[3] = param_1[0xb] - iVar1;
  iVar6 = param_1[0xd] - iVar2;
  param_1[5] = param_1[0xb] - iVar4;
  iVar1 = *piVar9 - iVar1;
  param_1[7] = param_1[0xd] - iVar4;
  param_1[1] = iVar1;
  *piVar9 = iVar6;
  iVar6 = iVar8 + iVar6;
  iVar4 = *param_1;
                    /* catch() { ... } // from try @ 00ec7c40 with catch @ 00ec7bd4 */
  param_1[0xb] = param_1[0xf] - iVar2;
  param_1[0xd] = param_1[0xf] - iVar3;
  param_1[0xf] = param_1[0x11] - iVar3;
  iVar2 = *param_2;
  param_1[10] = iVar6;
                    /* try { // try from 00ec7bf8 to 00fc7bff has its CatchHandler @ 00ec7cb0 */
  *param_1 = iVar2 + (int)((ulong)((long)*param_3 * (long)iVar6) >> 0x20);
  *param_2 = -(iVar4 + iVar1);
  iVar6 = param_1[0xb];
  iVar2 = param_2[1];
  iVar3 = param_1[2];
  iVar8 = iVar6 + iVar8;
  param_1[0xb] = iVar8;
                    /* try { // try from 00ec7c34 to 00fc7c3f has its CatchHandler @ 00ec7ca0 */
                    /* try { // try from 00ec7c40 to 00fc7ccb has its CatchHandler @ 00ec7bd4 */
  param_1[1] = iVar2 + (int)((ulong)((long)param_3[1] * (long)iVar8) >> 0x20);
  param_2[1] = -(iVar1 + iVar3);
  iVar8 = param_1[0xc];
  iVar1 = param_2[2];
  iVar2 = param_1[3];
  iVar6 = iVar8 + iVar6;
  param_1[0xc] = iVar6;
  param_1[2] = iVar1 + (int)((ulong)((long)param_3[2] * (long)iVar6) >> 0x20);
  param_2[2] = -(iVar3 + iVar2);
  iVar6 = param_1[0xd];
  iVar1 = param_2[3];
  iVar3 = param_1[4];
  iVar8 = iVar6 + iVar8;
  param_1[0xd] = iVar8;
                    /* catch() { ... } // from try @ 00ec7c34 with catch @ 00ec7ca0 */
                    /* catch() { ... } // from try @ 00ec7bf8 with catch @ 00ec7cb0 */
  param_1[3] = iVar1 + (int)((ulong)((long)param_3[3] * (long)iVar8) >> 0x20);
  param_2[3] = -(iVar2 + iVar3);
  iVar8 = param_1[0xe];
  iVar1 = param_2[4];
  iVar2 = param_1[5];
                    /* try { // try from 00ec7ccc to 00fc7d13 has its CatchHandler @ 00ec7ccc
                       catch() { ... } // from try @ 00ec7ccc with catch @ 00ec7ccc
                       catch() { ... } // from try @ 00ec7d20 with catch @ 00ec7ccc */
  iVar6 = iVar8 + iVar6;
  param_1[0xe] = iVar6;
  param_1[4] = iVar1 + (int)((ulong)((long)param_3[4] * (long)iVar6) >> 0x20);
  param_2[4] = -(iVar3 + iVar2);
  iVar6 = param_1[0xf];
  iVar1 = param_2[5];
  iVar3 = param_1[6];
  iVar8 = iVar6 + iVar8;
  param_1[0xf] = iVar8;
                    /* try { // try from 00ec7d14 to 00fc7d1f has its CatchHandler @ 00ec7d48 */
                    /* try { // try from 00ec7d20 to 00fc7d5b has its CatchHandler @ 00ec7ccc */
  param_1[5] = iVar1 + (int)((ulong)((long)param_3[5] * (long)iVar8) >> 0x20);
  param_2[5] = -(iVar2 + iVar3);
  iVar1 = param_1[0x10];
  iVar8 = param_2[6];
  iVar2 = param_1[7];
  iVar6 = iVar1 + iVar6;
  param_1[0x10] = iVar6;
                    /* catch() { ... } // from try @ 00ec7d14 with catch @ 00ec7d48 */
  param_1[6] = iVar8 + (int)((ulong)((long)param_3[6] * (long)(iVar6 * 2)) >> 0x20);
  param_2[6] = -(iVar3 + iVar2);
  iVar6 = param_2[7];
  iVar8 = param_2[8];
  param_2[7] = -(iVar2 + param_1[8]);
  lVar7 = (long)((param_1[0x11] + iVar1) * 2);
  param_1[7] = iVar6 + (int)((ulong)(lVar7 * param_3[7]) >> 0x20);
  param_2[8] = -(param_1[8] + *piVar9);
  param_1[8] = iVar8 + (int)((ulong)((long)param_3[8] * (long)(param_1[0x11] << 1)) >> 0x20);
  iVar6 = param_2[0x10];
  iVar2 = param_2[0x11];
  *piVar9 = param_2[9] + (int)((ulong)((long)param_3[9] * (long)(param_1[0x11] << 1)) >> 0x20);
  iVar8 = param_1[10];
  iVar4 = param_3[0x11];
  iVar1 = param_1[0xf];
  iVar3 = param_1[0x10];
  param_1[10] = -iVar3;
  param_1[0x11] = iVar2 + (int)((ulong)((long)iVar4 * (long)(iVar8 << 1)) >> 0x20);
  iVar4 = param_1[0xc];
  param_1[0x10] = iVar6 + (int)((ulong)((long)param_3[0x10] * (long)(param_1[0xb] << 1)) >> 0x20);
  iVar6 = param_2[0xe];
  iVar8 = param_2[0xf];
  param_1[0xb] = -iVar1;
  iVar5 = param_3[0xf];
  iVar2 = param_1[0xe];
  param_1[0xc] = -iVar2;
  param_1[0xf] = iVar8 + (int)((ulong)((long)iVar5 * (long)(iVar4 << 1)) >> 0x20);
  param_1[0xe] = iVar6 + (int)((ulong)((long)param_3[0xe] * (long)(param_1[0xd] << 1)) >> 0x20);
  iVar6 = param_2[0xc];
  iVar8 = param_2[10];
  iVar4 = param_2[0xb];
  param_1[0xd] = param_2[0xd] + (int)((ulong)((long)param_3[0xd] * (long)(iVar2 * -2)) >> 0x20);
  param_1[0xc] = iVar6 + (int)((ulong)((long)param_3[0xc] * (long)(iVar1 * -2)) >> 0x20);
  param_1[0xb] = iVar4 + (int)((ulong)((long)param_3[0xb] * (long)(iVar3 * -2)) >> 0x20);
  param_1[10] = iVar8 + (int)((ulong)(param_3[10] * lVar7) >> 0x20);
  iVar6 = *param_2;
  iVar8 = param_2[1];
  *param_2 = (int)((ulong)((long)param_3[0x12] * (long)(param_2[8] << 1)) >> 0x20);
  param_2[0x11] = (int)((ulong)((long)param_3[0x23] * (long)(param_2[8] << 1)) >> 0x20);
  param_2[1] = (int)((ulong)((long)param_3[0x13] * (long)(param_2[7] << 1)) >> 0x20);
  param_2[0x10] = (int)((ulong)((long)param_3[0x22] * (long)(param_2[7] << 1)) >> 0x20);
                    /* catch() { ... } // from try @ 00ec7fe0 with catch @ 00ec7f60 */
  param_2[7] = (int)((ulong)((long)param_3[0x19] * (long)(iVar8 << 1)) >> 0x20);
  param_2[10] = (int)((ulong)((long)param_3[0x1c] * (long)(iVar8 << 1)) >> 0x20);
                    /* try { // try from 00ec7f98 to 00fc7f9f has its CatchHandler @ 00ec8064 */
  param_2[8] = (int)((ulong)((long)param_3[0x1a] * (long)(iVar6 << 1)) >> 0x20);
  param_2[9] = (int)((ulong)((long)param_3[0x1b] * (long)(iVar6 << 1)) >> 0x20);
  iVar6 = param_2[2];
  iVar8 = param_2[3];
  param_2[2] = (int)((ulong)((long)param_3[0x14] * (long)(param_2[6] << 1)) >> 0x20);
                    /* try { // try from 00ec7fd4 to 00fc7fdf has its CatchHandler @ 00ec8054 */
  param_2[0xf] = (int)((ulong)((long)param_3[0x21] * (long)(param_2[6] << 1)) >> 0x20);
                    /* try { // try from 00ec7fe0 to 00fc807f has its CatchHandler @ 00ec7f60 */
  iVar1 = param_2[4];
  param_2[3] = (int)((ulong)((long)param_3[0x15] * (long)(param_2[5] << 1)) >> 0x20);
  param_2[0xe] = (int)((ulong)((long)param_3[0x20] * (long)(param_2[5] << 1)) >> 0x20);
  param_2[4] = (int)((ulong)((long)param_3[0x16] * (long)(iVar1 << 1)) >> 0x20);
  param_2[0xd] = (int)((ulong)((long)param_3[0x1f] * (long)(iVar1 << 1)) >> 0x20);
  param_2[5] = (int)((ulong)((long)param_3[0x17] * (long)(iVar8 << 1)) >> 0x20);
                    /* catch() { ... } // from try @ 00ec7fd4 with catch @ 00ec8054 */
  param_2[0xc] = (int)((ulong)((long)param_3[0x1e] * (long)(iVar8 << 1)) >> 0x20);
                    /* catch() { ... } // from try @ 00ec7f98 with catch @ 00ec8064 */
  param_2[6] = (int)((ulong)((long)param_3[0x18] * (long)(iVar6 << 1)) >> 0x20);
  param_2[0xb] = (int)((ulong)((long)param_3[0x1d] * (long)(iVar6 << 1)) >> 0x20);
  return;
}

