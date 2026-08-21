
void jpeg_idct_6x6(long param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  long lVar1;
  int iVar2;
  short *psVar3;
  int *piVar4;
  undefined1 *puVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  int *piVar20;
  int iVar21;
  long lVar22;
  long lVar23;
  int local_a0 [6];
  int local_88 [6];
  undefined4 local_70 [6];
  undefined4 local_58 [6];
  int local_40 [6];
  undefined4 local_28 [6];
  
  piVar20 = local_a0;
  lVar17 = *(long *)(param_1 + 0x1b8);
  lVar19 = *(long *)(param_2 + 0x58);
  lVar18 = 0;
  do {
    psVar3 = (short *)(param_3 + lVar18 * 2);
    piVar4 = (int *)(lVar19 + lVar18 * 4);
    lVar15 = (long)piVar4[8] * (long)psVar3[8];
    lVar1 = lVar18 + 1;
    lVar23 = (long)piVar4[0x18] * (long)psVar3[0x18];
    lVar22 = (long)piVar4[0x28] * (long)psVar3[0x28];
    uVar6 = (long)(*piVar4 * (int)*psVar3) << 0xd | 0x400;
    lVar14 = (lVar22 + lVar15) * 0xbb6;
    iVar12 = ((int)lVar15 - (int)lVar23) - (int)lVar22;
    lVar16 = uVar6 + (long)piVar4[0x20] * (long)psVar3[0x20] * 0x16a1;
    lVar15 = lVar14 + (lVar23 + lVar15) * 0x2000;
    lVar14 = lVar14 + (lVar22 - lVar23) * 0x2000;
    lVar22 = (long)piVar4[0x10] * (long)psVar3[0x10] * 0x2731 + lVar16;
                    /* try { // try from 01108a88 to 01208ae7 has its CatchHandler @ 01108a88
                       catch() { ... } // from try @ 01108a88 with catch @ 01108a88
                       catch() { ... } // from try @ 01108aec with catch @ 01108a88 */
    lVar16 = lVar16 + (long)piVar4[0x10] * (long)psVar3[0x10] * -0x2731;
    iVar21 = (int)(uVar6 + (long)piVar4[0x20] * (long)psVar3[0x20] * -0x2d42 >> 0xb);
    local_40[lVar18] = iVar21 + iVar12 * -4;
    local_88[lVar18] = iVar12 * 4 + iVar21;
    local_a0[lVar18] = (int)((ulong)(lVar15 + lVar22) >> 0xb);
    local_28[lVar18] = (int)((ulong)(lVar22 - lVar15) >> 0xb);
    local_70[lVar18] = (int)((ulong)(lVar14 + lVar16) >> 0xb);
    local_58[lVar18] = (int)((ulong)(lVar16 - lVar14) >> 0xb);
    lVar18 = lVar1;
  } while ((int)lVar1 != 6);
  lVar18 = 0;
  lVar17 = lVar17 + -0x180;
                    /* try { // try from 01108ae8 to 01208aeb has its CatchHandler @ 01108b0c */
                    /* try { // try from 01108aec to 01208b33 has its CatchHandler @ 01108a88 */
  do {
    iVar7 = piVar20[3];
    iVar8 = piVar20[1];
    iVar9 = piVar20[5];
    iVar10 = piVar20[2];
                    /* catch() { ... } // from try @ 01108ae8 with catch @ 01108b0c */
    iVar12 = *piVar20 * 0x2000 + 0x8020000;
    iVar21 = iVar12 + piVar20[4] * 0x16a1;
    iVar12 = iVar12 + piVar20[4] * -0x2d42;
    iVar11 = (iVar9 + iVar8) * 0xbb6;
    iVar13 = (iVar8 - iVar7) - iVar9;
    iVar2 = iVar21 + iVar10 * 0x2731;
    iVar8 = iVar11 + (iVar7 + iVar8) * 0x2000;
    puVar5 = (undefined1 *)(*(long *)(param_4 + lVar18) + (param_5 & 0xffffffff));
                    /* try { // try from 01108b58 to 01208bb7 has its CatchHandler @ 01108b58
                       catch() { ... } // from try @ 01108b58 with catch @ 01108b58
                       catch() { ... } // from try @ 01108bbc with catch @ 01108b58 */
    *puVar5 = *(undefined1 *)(lVar17 + ((ulong)((uint)(iVar8 + iVar2) >> 0x12) & 0x3ff));
    puVar5[5] = *(undefined1 *)(lVar17 + ((ulong)((uint)(iVar2 - iVar8) >> 0x12) & 0x3ff));
    iVar21 = iVar21 + iVar10 * -0x2731;
    puVar5[1] = *(undefined1 *)
                 (lVar17 + ((ulong)((uint)(iVar13 * 0x2000 + iVar12) >> 0x12) & 0x3ff));
    iVar11 = iVar11 + (iVar9 - iVar7) * 0x2000;
    puVar5[4] = *(undefined1 *)
                 (lVar17 + ((ulong)((uint)(iVar12 + iVar13 * -0x2000) >> 0x12) & 0x3ff));
    lVar18 = lVar18 + 8;
    puVar5[2] = *(undefined1 *)(lVar17 + ((ulong)((uint)(iVar11 + iVar21) >> 0x12) & 0x3ff));
                    /* try { // try from 01108bb8 to 01208bbb has its CatchHandler @ 01108bdc */
    piVar20 = piVar20 + 6;
                    /* try { // try from 01108bbc to 01208c03 has its CatchHandler @ 01108b58 */
    puVar5[3] = *(undefined1 *)(lVar17 + ((ulong)((uint)(iVar21 - iVar11) >> 0x12) & 0x3ff));
  } while (lVar18 != 0x30);
  return;
}

