
void jpeg_idct_6x12(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  int *piVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  int local_180 [6];
  undefined4 local_168 [6];
  undefined4 local_150 [6];
  undefined4 local_138 [6];
  undefined4 local_120 [6];
  undefined4 local_108 [6];
  undefined4 local_f0 [6];
  undefined4 local_d8 [6];
  undefined4 local_c0 [6];
  undefined4 local_a8 [6];
  undefined4 local_90 [6];
  undefined4 local_78 [6];
  
  lVar17 = *(long *)(param_1 + 0x1b8);
  lVar20 = *(long *)(param_2 + 0x58);
                    /* try { // try from 0110def8 to 0120df03 has its CatchHandler @ 0110df84 */
  lVar19 = 0;
  do {
                    /* try { // try from 0110df04 to 0120e01b has its CatchHandler @ 0110de48 */
    psVar4 = (short *)(param_3 + lVar19 * 2);
    piVar21 = (int *)(lVar20 + lVar19 * 4);
    lVar25 = (long)piVar21[0x10] * (long)psVar4[0x10];
    uVar28 = (ulong)(uint)(piVar21[0x30] * (int)psVar4[0x30]);
    lVar18 = (long)piVar21[8] * (long)psVar4[8];
    lVar29 = (long)piVar21[0x18] * (long)psVar4[0x18];
    lVar15 = (long)piVar21[0x38] * (long)psVar4[0x38];
                    /* catch() { ... } // from try @ 0110def8 with catch @ 0110df84 */
    uVar8 = (long)(*piVar21 * (int)*psVar4) << 0xd | 0x400;
    lVar23 = lVar25 * 0x2000 + uVar28 * -0x2000;
    lVar30 = (long)piVar21[0x20] * (long)psVar4[0x20] * 0x2731 + uVar8;
    lVar24 = uVar8 + (long)piVar21[0x20] * (long)psVar4[0x20] * -0x2731;
    lVar5 = lVar23 + uVar8;
    lVar23 = uVar8 - lVar23;
    lVar31 = uVar28 * 0x2000 + lVar25 * 0x2bb6;
    lVar22 = (long)piVar21[0x28] * (long)psVar4[0x28];
    lVar26 = uVar28 * -0x2000 + lVar25 * 0xbb6;
    lVar6 = lVar31 + lVar30;
                    /* catch() { ... } // from try @ 0110de9c with catch @ 0110dfd0 */
    lVar30 = lVar30 - lVar31;
    lVar25 = lVar26 + lVar24;
    lVar24 = lVar24 - lVar26;
    lVar16 = (lVar22 + lVar18 + lVar15) * 0x1b8d;
    lVar31 = lVar16 + (lVar22 + lVar18) * 0x85b;
    lVar26 = lVar29 * -0x1151 + lVar18 * -0x15a4 + lVar15 * -0x3f74 + lVar16;
    lVar32 = ((lVar18 - lVar15) + (lVar29 - lVar22)) * 0x1151;
    lVar27 = lVar32 + (lVar18 - lVar15) * 0x187e;
    lVar32 = lVar32 + (lVar29 - lVar22) * -0x3b21;
    lVar33 = (lVar15 + lVar22) * -0x2175;
    lVar18 = lVar29 * 0x29cf + lVar18 * 0x8f7 + lVar31;
    lVar31 = lVar29 * -0x1151 + lVar22 * -0x2f50 + lVar33 + lVar31;
    lVar33 = lVar29 * -0x29cf + lVar15 * 0x32c6 + lVar16 + lVar33;
    local_78[lVar19] = (int)((ulong)(lVar6 - lVar18) >> 0xb);
    local_150[lVar19] = (int)((ulong)(lVar31 + lVar25) >> 0xb);
    local_a8[lVar19] = (int)((ulong)(lVar25 - lVar31) >> 0xb);
    local_d8[lVar19] = (int)((ulong)(lVar23 - lVar32) >> 0xb);
    local_138[lVar19] = (int)((ulong)(lVar33 + lVar24) >> 0xb);
    lVar25 = lVar19 + 1;
    local_90[lVar19] = (int)((ulong)(lVar5 - lVar27) >> 0xb);
    local_108[lVar19] = (int)((ulong)(lVar26 + lVar30) >> 0xb);
    local_c0[lVar19] = (int)((ulong)(lVar24 - lVar33) >> 0xb);
    local_168[lVar19] = (int)((ulong)(lVar27 + lVar5) >> 0xb);
    local_120[lVar19] = (int)((ulong)(lVar32 + lVar23) >> 0xb);
    local_180[lVar19] = (int)((ulong)(lVar18 + lVar6) >> 0xb);
    local_f0[lVar19] = (int)((ulong)(lVar30 - lVar26) >> 0xb);
    lVar19 = lVar25;
  } while ((int)lVar25 != 6);
  lVar19 = 0;
  piVar21 = local_180;
  lVar17 = lVar17 + -0x180;
  do {
    iVar9 = piVar21[3];
    iVar10 = piVar21[1];
    iVar11 = piVar21[5];
    iVar12 = piVar21[2];
    iVar1 = *piVar21 * 0x2000 + 0x8020000;
    iVar2 = iVar1 + piVar21[4] * 0x16a1;
    iVar1 = iVar1 + piVar21[4] * -0x2d42;
    iVar13 = (iVar11 + iVar10) * 0xbb6;
    iVar14 = (iVar10 - iVar9) - iVar11;
    iVar3 = iVar2 + iVar12 * 0x2731;
    iVar10 = iVar13 + (iVar9 + iVar10) * 0x2000;
    puVar7 = (undefined1 *)(*(long *)(param_4 + lVar19) + (ulong)param_5);
    *puVar7 = *(undefined1 *)(lVar17 + ((ulong)((uint)(iVar10 + iVar3) >> 0x12) & 0x3ff));
    puVar7[5] = *(undefined1 *)(lVar17 + ((ulong)((uint)(iVar3 - iVar10) >> 0x12) & 0x3ff));
    iVar2 = iVar2 + iVar12 * -0x2731;
    puVar7[1] = *(undefined1 *)(lVar17 + ((ulong)((uint)(iVar14 * 0x2000 + iVar1) >> 0x12) & 0x3ff))
    ;
    iVar13 = iVar13 + (iVar11 - iVar9) * 0x2000;
    puVar7[4] = *(undefined1 *)
                 (lVar17 + ((ulong)((uint)(iVar1 + iVar14 * -0x2000) >> 0x12) & 0x3ff));
    lVar19 = lVar19 + 8;
    puVar7[2] = *(undefined1 *)(lVar17 + ((ulong)((uint)(iVar13 + iVar2) >> 0x12) & 0x3ff));
    piVar21 = piVar21 + 6;
    puVar7[3] = *(undefined1 *)(lVar17 + ((ulong)((uint)(iVar2 - iVar13) >> 0x12) & 0x3ff));
  } while (lVar19 != 0x60);
  return;
}

