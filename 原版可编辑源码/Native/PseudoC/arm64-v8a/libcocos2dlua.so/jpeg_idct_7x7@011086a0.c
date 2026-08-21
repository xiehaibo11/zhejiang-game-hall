
void jpeg_idct_7x7(long param_1,long param_2,long param_3,long param_4,uint param_5)

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
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  int *piVar26;
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
  int local_124 [7];
  undefined4 local_108 [7];
  undefined4 local_ec [7];
  undefined4 local_d0 [7];
  undefined4 local_b4 [7];
  undefined4 local_98 [7];
  undefined4 local_7c [7];
  
  lVar21 = *(long *)(param_1 + 0x1b8);
  lVar25 = *(long *)(param_2 + 0x58);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01108690 with catch @ 011086c8
                        */
  lVar24 = 0;
  do {
    psVar4 = (short *)(param_3 + lVar24 * 2);
    piVar26 = (int *)(lVar25 + lVar24 * 4);
    lVar30 = (long)piVar26[0x10] * (long)psVar4[0x10];
    lVar22 = (long)piVar26[0x20] * (long)psVar4[0x20];
    lVar35 = (long)piVar26[8] * (long)psVar4[8];
    lVar31 = (long)piVar26[0x18] * (long)psVar4[0x18];
    lVar33 = (long)piVar26[0x30] * (long)psVar4[0x30];
    lVar27 = (long)piVar26[0x28] * (long)psVar4[0x28];
    uVar8 = (long)(*piVar26 * (int)*psVar4) << 0xd | 0x400;
    lVar28 = (lVar30 - lVar22) * 0xa12;
    lVar29 = (lVar31 + lVar35) * 0x1def;
    lVar36 = uVar8 + (lVar33 + lVar30) * 0x28c6;
    lVar23 = (lVar22 - lVar33) * 0x1c37;
    lVar34 = (lVar27 + lVar35) * 0x13a3;
    lVar5 = lVar23 + lVar33 * -0x27d + lVar36;
    lVar32 = (lVar27 + lVar31) * -0x2c1f;
    lVar6 = lVar34 + lVar29 + (lVar35 - lVar31) * -0x573;
    lVar36 = lVar28 + lVar30 * -0x4f0f + lVar36;
    lVar29 = lVar29 + (lVar35 - lVar31) * 0x573 + lVar32;
    lVar32 = lVar34 + lVar27 * 0x3bde + lVar32;
    lVar23 = uVar8 + lVar22 * -0x3aeb + lVar28 + lVar23;
    lVar27 = lVar24 + 1;
    local_124[lVar24] = (int)((ulong)(lVar6 + lVar5) >> 0xb);
    local_7c[lVar24] = (int)((ulong)(lVar5 - lVar6) >> 0xb);
    local_ec[lVar24] = (int)((ulong)(lVar32 + lVar36) >> 0xb);
    local_b4[lVar24] = (int)((ulong)(lVar36 - lVar32) >> 0xb);
    local_108[lVar24] = (int)((ulong)(lVar29 + lVar23) >> 0xb);
    local_98[lVar24] = (int)((ulong)(lVar23 - lVar29) >> 0xb);
    local_d0[lVar24] = (int)(uVar8 + (lVar22 - (lVar33 + lVar30)) * 0x2d41 >> 0xb);
    lVar24 = lVar27;
  } while ((int)lVar27 != 7);
  lVar24 = 0;
  piVar26 = local_124;
  lVar21 = lVar21 + -0x180;
  do {
    iVar9 = piVar26[3];
    iVar11 = piVar26[4];
    iVar12 = piVar26[1];
    iVar10 = piVar26[5];
    iVar13 = piVar26[6];
    iVar14 = piVar26[2];
    iVar1 = *piVar26 * 0x2000 + 0x8020000;
    iVar16 = (iVar11 - iVar13) * 0x1c37;
    iVar17 = (iVar14 - iVar11) * 0xa12;
    iVar18 = (iVar9 + iVar12) * 0x1def;
    iVar15 = iVar1 + (iVar13 + iVar14) * 0x28c6;
    iVar19 = (iVar10 + iVar12) * 0x13a3;
    iVar2 = iVar16 + iVar13 * -0x27d + iVar15;
    iVar3 = iVar18 + (iVar12 - iVar9) * -0x573 + iVar19;
    puVar7 = (undefined1 *)(*(long *)(param_4 + lVar24) + (ulong)param_5);
    *puVar7 = *(undefined1 *)(lVar21 + ((ulong)((uint)(iVar3 + iVar2) >> 0x12) & 0x3ff));
    iVar20 = (iVar10 + iVar9) * -0x2c1f;
    iVar16 = iVar1 + iVar11 * -0x3aeb + iVar17 + iVar16;
    iVar9 = iVar18 + (iVar12 - iVar9) * 0x573 + iVar20;
    puVar7[6] = *(undefined1 *)(lVar21 + ((ulong)((uint)(iVar2 - iVar3) >> 0x12) & 0x3ff));
    iVar15 = iVar17 + iVar14 * -0x4f0f + iVar15;
    puVar7[1] = *(undefined1 *)(lVar21 + ((ulong)((uint)(iVar9 + iVar16) >> 0x12) & 0x3ff));
    iVar20 = iVar19 + iVar10 * 0x3bde + iVar20;
    puVar7[5] = *(undefined1 *)(lVar21 + ((ulong)((uint)(iVar16 - iVar9) >> 0x12) & 0x3ff));
    lVar24 = lVar24 + 8;
    puVar7[2] = *(undefined1 *)(lVar21 + ((ulong)((uint)(iVar20 + iVar15) >> 0x12) & 0x3ff));
    puVar7[4] = *(undefined1 *)(lVar21 + ((ulong)((uint)(iVar15 - iVar20) >> 0x12) & 0x3ff));
    piVar26 = piVar26 + 7;
    puVar7[3] = *(undefined1 *)
                 (lVar21 + ((ulong)((uint)(iVar1 + (iVar11 - (iVar13 + iVar14)) * 0x2d41) >> 0x12) &
                           0x3ff));
  } while (lVar24 != 0x38);
  return;
}

