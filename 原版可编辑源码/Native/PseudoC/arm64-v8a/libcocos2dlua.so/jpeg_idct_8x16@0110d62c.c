
void jpeg_idct_8x16(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  int iVar1;
  short *psVar2;
  int *piVar3;
  undefined1 *puVar4;
  ulong uVar5;
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
  long lVar18;
  long lVar19;
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
  long lVar40;
  int iVar41;
  int iVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  int local_260 [128];
  
  lVar26 = *(long *)(param_1 + 0x1b8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0110d61c with catch @ 0110d660
                        */
  lVar28 = *(long *)(param_2 + 0x58);
  lVar27 = 0;
  do {
    psVar2 = (short *)(param_3 + lVar27 * 2);
    piVar3 = (int *)(lVar28 + lVar27 * 4);
                    /* try { // try from 0110d6ac to 0120d707 has its CatchHandler @ 0110d6ac
                       catch() { ... } // from try @ 0110d6ac with catch @ 0110d6ac
                       catch() { ... } // from try @ 0110d73c with catch @ 0110d6ac
                       catch() { ... } // from try @ 0110d7a8 with catch @ 0110d6ac */
    lVar34 = (long)piVar3[0x20] * (long)psVar2[0x20];
    lVar36 = (long)piVar3[0x10] * (long)psVar2[0x10];
    lVar18 = (long)piVar3[0x30] * (long)psVar2[0x30];
    lVar32 = (long)piVar3[0x38] * (long)psVar2[0x38];
    lVar19 = (long)piVar3[8] * (long)psVar2[8];
    lVar21 = (long)piVar3[0x18] * (long)psVar2[0x18];
    lVar23 = (long)piVar3[0x28] * (long)psVar2[0x28];
    uVar5 = (long)(*piVar3 * (int)*psVar2) << 0xd | 0x400;
    lVar30 = (lVar36 - lVar18) * 0x8d4;
                    /* try { // try from 0110d708 to 0120d713 has its CatchHandler @ 0110d7ec */
    lVar25 = (lVar36 - lVar18) * 0x2c63;
    lVar38 = (lVar21 + lVar19) * 0x2b4e;
    lVar46 = (lVar23 + lVar19) * 0x27e9;
    lVar37 = (lVar23 + lVar19) * 0x1555;
                    /* try { // try from 0110d730 to 0120d73b has its CatchHandler @ 0110d7e8 */
    lVar43 = (lVar23 + lVar21) * 0x470;
                    /* try { // try from 0110d73c to 0120d79f has its CatchHandler @ 0110d6ac */
    lVar45 = (lVar23 - lVar21) * 0x2d09;
    lVar29 = lVar34 * 0x29cf + uVar5;
    lVar33 = uVar5 + lVar34 * -0x29cf;
    lVar31 = lVar34 * 0x1151 + uVar5;
    lVar35 = uVar5 + lVar34 * -0x1151;
    lVar34 = lVar25 + lVar18 * 0x5203;
    lVar48 = lVar30 + lVar36 * 0x1ccd;
    lVar25 = lVar25 + lVar36 * -0x133e;
    lVar30 = lVar30 + lVar18 * -0x1050;
    lVar39 = (lVar19 - lVar21) * 0xd23;
    lVar18 = lVar34 + lVar29;
    lVar29 = lVar29 - lVar34;
    lVar34 = lVar48 + lVar31;
    lVar31 = lVar31 - lVar48;
    lVar36 = lVar25 + lVar35;
    lVar35 = lVar35 - lVar25;
                    /* try { // try from 0110d7a0 to 0120d7a7 has its CatchHandler @ 0110d7e8 */
    lVar25 = lVar30 + lVar33;
    lVar33 = lVar33 - lVar30;
                    /* try { // try from 0110d7a8 to 0120d807 has its CatchHandler @ 0110d6ac */
                    /* catch() { ... } // from try @ 0110d730 with catch @ 0110d7e8
                       catch() { ... } // from try @ 0110d7a0 with catch @ 0110d7e8 */
                    /* catch() { ... } // from try @ 0110d708 with catch @ 0110d7ec */
    lVar44 = (lVar32 + lVar21) * -0x1555;
    lVar47 = (lVar32 + lVar19) * 0x22fc;
    lVar22 = (lVar32 + lVar21) * -0x27e9;
    lVar30 = lVar38 + lVar19 * -0x492a + lVar46 + lVar47;
    lVar20 = (lVar19 - lVar32) * 0x1cb6;
    lVar48 = lVar39 + lVar21 * 0x3f1a + lVar45 + lVar22;
    lVar40 = (lVar32 + lVar23) * -0x2b4e;
    lVar24 = (lVar32 - lVar23) * 0xd23;
    lVar19 = lVar39 + lVar19 * -0x3abe + lVar37 + lVar20;
    lVar39 = lVar43 + lVar23 * -0x2406 + lVar46 + lVar40;
    lVar40 = lVar44 + lVar32 * 0x2218 + lVar47 + lVar40;
    lVar20 = lVar22 + lVar32 * 0x6485 + lVar20 + lVar24;
    lVar24 = lVar45 + lVar23 * -0x1886 + lVar37 + lVar24;
    lVar44 = lVar38 + lVar21 * 0x24d + lVar43 + lVar44;
    local_260[lVar27] = (int)((ulong)(lVar30 + lVar18) >> 0xb);
    local_260[lVar27 + 0x78] = (int)((ulong)(lVar18 - lVar30) >> 0xb);
    local_260[lVar27 + 0x58] = (int)((ulong)(lVar33 - lVar20) >> 0xb);
    local_260[lVar27 + 8] = (int)((ulong)(lVar44 + lVar34) >> 0xb);
    local_260[lVar27 + 0x28] = (int)((ulong)(lVar24 + lVar35) >> 0xb);
    lVar18 = lVar27 + 1;
    local_260[lVar27 + 0x70] = (int)((ulong)(lVar34 - lVar44) >> 0xb);
    local_260[lVar27 + 0x68] = (int)((ulong)(lVar36 - lVar39) >> 0xb);
    local_260[lVar27 + 0x60] = (int)((ulong)(lVar25 - lVar40) >> 0xb);
    local_260[lVar27 + 0x50] = (int)((ulong)(lVar35 - lVar24) >> 0xb);
    local_260[lVar27 + 0x48] = (int)((ulong)(lVar31 - lVar48) >> 0xb);
    local_260[lVar27 + 0x10] = (int)((ulong)(lVar39 + lVar36) >> 0xb);
    local_260[lVar27 + 0x18] = (int)((ulong)(lVar40 + lVar25) >> 0xb);
    local_260[lVar27 + 0x20] = (int)((ulong)(lVar20 + lVar33) >> 0xb);
    local_260[lVar27 + 0x30] = (int)((ulong)(lVar48 + lVar31) >> 0xb);
    local_260[lVar27 + 0x38] = (int)((ulong)(lVar19 + lVar29) >> 0xb);
    local_260[lVar27 + 0x40] = (int)((ulong)(lVar29 - lVar19) >> 0xb);
    lVar27 = lVar18;
  } while ((int)lVar18 != 8);
  lVar27 = 0;
  lVar26 = lVar26 + -0x180;
  do {
    iVar8 = local_260[lVar27 + 7];
    iVar6 = local_260[lVar27 + 4];
    iVar9 = local_260[lVar27 + 5];
    iVar10 = local_260[lVar27 + 3];
    iVar7 = local_260[lVar27];
    iVar11 = local_260[lVar27 + 1];
    iVar41 = (local_260[lVar27 + 6] + local_260[lVar27 + 2]) * 0x1151;
    iVar16 = (iVar11 + iVar8) * -0x1ccd;
    iVar14 = iVar41 + local_260[lVar27 + 2] * 0x187e;
    iVar41 = iVar41 + local_260[lVar27 + 6] * -0x3b21;
    iVar42 = (iVar11 + iVar9 + iVar10 + iVar8) * 0x25a1;
    iVar12 = (iVar7 + 0x4010 + iVar6) * 0x2000;
    iVar15 = iVar42 + (iVar11 + iVar9) * -0xc7c;
    iVar1 = iVar14 + iVar12;
    iVar11 = iVar16 + iVar11 * 0x300b + iVar15;
    puVar4 = (undefined1 *)(*(long *)(param_4 + lVar27) + (ulong)param_5);
    *puVar4 = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar11 + iVar1) >> 0x12) & 0x3ff));
    iVar17 = (iVar10 + iVar9) * -0x5203;
    iVar13 = ((iVar7 + 0x4010) - iVar6) * 0x2000;
    iVar42 = iVar42 + (iVar10 + iVar8) * -0x3ec5;
    iVar6 = iVar41 + iVar13;
    iVar7 = iVar17 + iVar10 * 0x6254 + iVar42;
    puVar4[7] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar1 - iVar11) >> 0x12) & 0x3ff));
    iVar13 = iVar13 - iVar41;
    puVar4[1] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar7 + iVar6) >> 0x12) & 0x3ff));
    iVar15 = iVar17 + iVar9 * 0x41b3 + iVar15;
    puVar4[6] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar6 - iVar7) >> 0x12) & 0x3ff));
    iVar12 = iVar12 - iVar14;
    puVar4[2] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar15 + iVar13) >> 0x12) & 0x3ff));
    iVar42 = iVar16 + iVar8 * 0x98e + iVar42;
    puVar4[5] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar13 - iVar15) >> 0x12) & 0x3ff));
    lVar27 = lVar27 + 8;
    puVar4[3] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar42 + iVar12) >> 0x12) & 0x3ff));
    puVar4[4] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar12 - iVar42) >> 0x12) & 0x3ff));
  } while (lVar27 != 0x80);
  return;
}

