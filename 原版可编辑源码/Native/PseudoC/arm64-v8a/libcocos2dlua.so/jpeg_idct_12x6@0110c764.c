
void jpeg_idct_12x6(long param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  int *piVar6;
  undefined1 *puVar7;
  ulong uVar8;
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
  int iVar20;
  int iVar21;
  int iVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  int iVar29;
  long lVar30;
  long lVar31;
  int local_120 [48];
  
  lVar27 = *(long *)(param_1 + 0x1b8);
  lVar28 = *(long *)(param_2 + 0x58);
  lVar26 = 0;
  do {
    psVar5 = (short *)(param_3 + lVar26 * 2);
    piVar6 = (int *)(lVar28 + lVar26 * 4);
    lVar24 = (long)piVar6[8] * (long)psVar5[8];
    lVar1 = lVar26 + 1;
    lVar31 = (long)piVar6[0x18] * (long)psVar5[0x18];
                    /* try { // try from 0110c7f8 to 0120c8e3 has its CatchHandler @ 0110c7f8
                       catch() { ... } // from try @ 0110c7f8 with catch @ 0110c7f8
                       catch() { ... } // from try @ 0110c904 with catch @ 0110c7f8 */
    lVar30 = (long)piVar6[0x28] * (long)psVar5[0x28];
    uVar8 = (long)(*piVar6 * (int)*psVar5) << 0xd | 0x400;
    lVar23 = (lVar30 + lVar24) * 0xbb6;
    iVar21 = ((int)lVar24 - (int)lVar31) - (int)lVar30;
    lVar25 = uVar8 + (long)piVar6[0x20] * (long)psVar5[0x20] * 0x16a1;
    lVar24 = lVar23 + (lVar31 + lVar24) * 0x2000;
    lVar23 = lVar23 + (lVar30 - lVar31) * 0x2000;
    lVar30 = (long)piVar6[0x10] * (long)psVar5[0x10] * 0x2731 + lVar25;
    lVar25 = lVar25 + (long)piVar6[0x10] * (long)psVar5[0x10] * -0x2731;
    iVar29 = (int)(uVar8 + (long)piVar6[0x20] * (long)psVar5[0x20] * -0x2d42 >> 0xb);
    local_120[lVar26 + 0x20] = iVar29 + iVar21 * -4;
    local_120[lVar26 + 8] = iVar21 * 4 + iVar29;
    local_120[lVar26] = (int)((ulong)(lVar24 + lVar30) >> 0xb);
    local_120[lVar26 + 0x28] = (int)((ulong)(lVar30 - lVar24) >> 0xb);
    local_120[lVar26 + 0x10] = (int)((ulong)(lVar23 + lVar25) >> 0xb);
    local_120[lVar26 + 0x18] = (int)((ulong)(lVar25 - lVar23) >> 0xb);
    lVar26 = lVar1;
  } while ((int)lVar1 != 8);
  lVar26 = 0;
  lVar27 = lVar27 + -0x180;
  do {
    iVar10 = local_120[lVar26 + 1];
    iVar12 = local_120[lVar26 + 4];
    iVar14 = local_120[lVar26 + 5];
    iVar9 = local_120[lVar26 + 6];
    iVar11 = local_120[lVar26 + 7];
    iVar13 = local_120[lVar26 + 2];
    iVar15 = local_120[lVar26 + 3];
    puVar7 = (undefined1 *)(*(long *)(param_4 + lVar26) + (param_5 & 0xffffffff));
    iVar21 = local_120[lVar26] * 0x2000 + 0x8020000;
                    /* try { // try from 0110c8e4 to 0120c903 has its CatchHandler @ 0110c95c */
                    /* try { // try from 0110c904 to 0120c997 has its CatchHandler @ 0110c7f8 */
    iVar19 = (iVar14 + iVar10 + iVar11) * 0x1b8d;
    iVar29 = iVar21 + iVar12 * 0x2731;
    iVar16 = iVar9 * 0x2000 + iVar13 * 0x2bb6;
    iVar17 = iVar19 + (iVar14 + iVar10) * 0x85b;
    iVar2 = iVar16 + iVar29;
    iVar3 = iVar15 * 0x29cf + iVar10 * 0x8f7 + iVar17;
    *puVar7 = *(undefined1 *)(lVar27 + ((ulong)((uint)(iVar3 + iVar2) >> 0x12) & 0x3ff));
    iVar22 = iVar13 * 0x2000 + iVar9 * -0x2000;
    iVar20 = ((iVar10 - iVar11) + (iVar15 - iVar14)) * 0x1151;
                    /* catch() { ... } // from try @ 0110c8e4 with catch @ 0110c95c */
    iVar4 = iVar22 + iVar21;
    iVar18 = iVar20 + (iVar10 - iVar11) * 0x187e;
    puVar7[0xb] = *(undefined1 *)(lVar27 + ((ulong)((uint)(iVar2 - iVar3) >> 0x12) & 0x3ff));
    iVar9 = iVar9 * -0x2000 + iVar13 * 0xbb6;
    puVar7[1] = *(undefined1 *)(lVar27 + ((ulong)((uint)(iVar18 + iVar4) >> 0x12) & 0x3ff));
    iVar3 = (iVar11 + iVar14) * -0x2175;
    iVar12 = iVar21 + iVar12 * -0x2731;
    iVar17 = iVar15 * -0x1151 + iVar14 * -0x2f50 + iVar3 + iVar17;
    iVar2 = iVar9 + iVar12;
    puVar7[10] = *(undefined1 *)(lVar27 + ((ulong)((uint)(iVar4 - iVar18) >> 0x12) & 0x3ff));
    puVar7[2] = *(undefined1 *)(lVar27 + ((ulong)((uint)(iVar17 + iVar2) >> 0x12) & 0x3ff));
    iVar12 = iVar12 - iVar9;
    iVar3 = iVar15 * -0x29cf + iVar11 * 0x32c6 + iVar19 + iVar3;
    puVar7[9] = *(undefined1 *)(lVar27 + ((ulong)((uint)(iVar2 - iVar17) >> 0x12) & 0x3ff));
    iVar21 = iVar21 - iVar22;
    puVar7[3] = *(undefined1 *)(lVar27 + ((ulong)((uint)(iVar3 + iVar12) >> 0x12) & 0x3ff));
    iVar20 = iVar20 + (iVar15 - iVar14) * -0x3b21;
    lVar26 = lVar26 + 8;
    puVar7[8] = *(undefined1 *)(lVar27 + ((ulong)((uint)(iVar12 - iVar3) >> 0x12) & 0x3ff));
    iVar19 = iVar15 * -0x1151 + iVar10 * -0x15a4 + iVar11 * -0x3f74 + iVar19;
    puVar7[4] = *(undefined1 *)(lVar27 + ((ulong)((uint)(iVar20 + iVar21) >> 0x12) & 0x3ff));
    iVar29 = iVar29 - iVar16;
    puVar7[7] = *(undefined1 *)(lVar27 + ((ulong)((uint)(iVar21 - iVar20) >> 0x12) & 0x3ff));
    puVar7[5] = *(undefined1 *)(lVar27 + ((ulong)((uint)(iVar19 + iVar29) >> 0x12) & 0x3ff));
    puVar7[6] = *(undefined1 *)(lVar27 + ((ulong)((uint)(iVar29 - iVar19) >> 0x12) & 0x3ff));
  } while (lVar26 != 0x30);
  return;
}

