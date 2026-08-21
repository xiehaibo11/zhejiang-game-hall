
void mdct_backward(uint param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined4 *puVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  uint uVar35;
  uint uVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  int *piVar51;
  long lVar52;
  ulong uVar53;
  ulong uVar54;
  int *piVar55;
  int *piVar56;
  int *piVar57;
  int *piVar58;
  int iVar59;
  long lVar60;
  int *piVar61;
  int *piVar62;
  int iVar63;
  int *piVar64;
  long lVar65;
  long lVar66;
  uint uVar67;
  ulong uVar68;
  ulong uVar69;
  int *piVar70;
  long lVar71;
  long lVar72;
  long lVar73;
  
  iVar59 = -10;
  do {
    iVar63 = iVar59;
    iVar59 = iVar63 + 1;
  } while ((1 << (ulong)(iVar63 + 0xeU & 0x1f) & param_1) == 0);
  uVar35 = 2 << (ulong)(-iVar59 & 0x1f);
  piVar1 = param_2 + ((int)param_1 >> 1);
  lVar65 = (long)((ulong)param_1 << 0x20) >> 0x21;
  piVar51 = &DAT_01432f0c;
  piVar57 = piVar1 + -3;
  lVar52 = (long)(int)uVar35;
  do {
    iVar31 = *piVar57;
    iVar29 = piVar51[-1];
    iVar30 = *piVar51;
    piVar51 = (int *)((long)piVar51 +
                     (-(ulong)(uVar35 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar35 << 2));
    *piVar57 = ((uint)((ulong)((long)iVar30 * (long)piVar57[2]) >> 0x1f) & 0xfffffffe) +
               ((uint)((ulong)((long)iVar29 * (long)iVar31) >> 0x1f) & 0xfffffffe);
    piVar57[2] = ((uint)((ulong)((long)iVar29 * (long)piVar57[2]) >> 0x1f) & 0xfffffffe) -
                 ((uint)((ulong)((long)iVar30 * (long)iVar31) >> 0x1f) & 0xfffffffe);
    piVar57 = piVar57 + -4;
  } while (param_2 + ((int)param_1 >> 2) <= piVar57);
  lVar60 = 0;
  do {
    piVar61 = (int *)((long)piVar57 + lVar60);
    iVar29 = piVar51[-1];
    iVar30 = *piVar51;
    iVar31 = *piVar61;
    piVar51 = piVar51 + -lVar52;
    lVar60 = lVar60 + -0x10;
    *piVar61 = ((uint)((ulong)((long)iVar29 * (long)piVar61[2]) >> 0x1f) & 0xfffffffe) +
               ((uint)((ulong)((long)iVar30 * (long)iVar31) >> 0x1f) & 0xfffffffe);
    piVar61[2] = ((uint)((ulong)((long)iVar30 * (long)piVar61[2]) >> 0x1f) & 0xfffffffe) -
                 ((uint)((ulong)((long)iVar29 * (long)iVar31) >> 0x1f) & 0xfffffffe);
  } while (param_2 <= piVar61 + -4);
  lVar60 = lVar65 * 4;
  piVar57 = &sincos_lookup0;
  piVar51 = param_2;
  do {
    lVar60 = lVar60 + -0x10;
    iVar31 = *piVar51;
    iVar32 = piVar51[2];
    iVar29 = *piVar57;
    iVar30 = piVar57[1];
    piVar61 = (int *)((long)param_2 + lVar60);
    piVar57 = piVar57 + lVar52;
    iVar33 = *piVar61;
    iVar34 = piVar61[2];
    *piVar61 = ((uint)((ulong)((long)iVar30 * (long)iVar32) >> 0x1f) & 0xfffffffe) -
               ((uint)((ulong)((long)iVar29 * (long)iVar31) >> 0x1f) & 0xfffffffe);
    piVar61[2] = ((uint)((ulong)((long)iVar29 * (long)iVar32) >> 0x1f) & 0xfffffffe) +
                 ((uint)((ulong)((long)iVar30 * (long)iVar31) >> 0x1f) & 0xfffffffe);
    iVar29 = *piVar57;
    iVar30 = piVar57[1];
    *piVar51 = ((uint)((ulong)((long)iVar29 * (long)iVar34) >> 0x1f) & 0xfffffffe) -
               ((uint)((ulong)((long)iVar30 * (long)iVar33) >> 0x1f) & 0xfffffffe);
    piVar51[2] = ((uint)((ulong)((long)iVar30 * (long)iVar34) >> 0x1f) & 0xfffffffe) +
                 ((uint)((ulong)((long)iVar29 * (long)iVar33) >> 0x1f) & 0xfffffffe);
    piVar51 = piVar51 + 4;
  } while (piVar51 <= piVar61 + -4);
  if (6 < iVar63 + 0xeU) {
    uVar67 = 0;
    piVar51 = param_2 + -2;
    do {
      uVar19 = ((int)param_1 >> 1) >> (uVar67 & 0x1f);
      uVar36 = 4 << (ulong)(uVar67 - iVar59 & 0x1f);
      uVar53 = -(ulong)(uVar19 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar19 << 2;
      uVar54 = -(ulong)(uVar36 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar36 << 2;
      uVar69 = -(ulong)((uint)((int)uVar19 >> 1) >> 0x1f) & 0xfffffffc00000000 |
               (ulong)(uint)((int)uVar19 >> 1) << 2;
      lVar60 = 0;
      piVar61 = (int *)((long)piVar51 + uVar69);
      piVar57 = piVar51 + ((int)uVar19 >> 2);
      piVar70 = piVar51;
      do {
        piVar70 = (int *)((long)piVar70 + uVar53);
        piVar55 = piVar70;
        piVar58 = piVar61;
        piVar62 = &sincos_lookup0;
        do {
          iVar29 = piVar55[-2];
          iVar32 = piVar55[-1];
          iVar30 = *piVar55;
          piVar64 = &DAT_01433f08;
          piVar55[-2] = iVar32 + iVar29;
          *piVar55 = iVar30 + piVar55[1];
          iVar31 = piVar58[-2];
          iVar33 = piVar58[-1];
          lVar71 = (long)(piVar55[1] - iVar30);
          piVar55[-1] = iVar31 + iVar33;
          iVar30 = *piVar58;
          iVar34 = piVar58[1];
          lVar66 = (long)(iVar29 - iVar32);
          lVar73 = (long)(iVar33 - iVar31);
          piVar55[1] = iVar30 + iVar34;
          iVar29 = *piVar62;
          iVar31 = piVar62[1];
          lVar72 = (long)(iVar34 - iVar30);
          piVar55 = piVar55 + -4;
          piVar58[-2] = ((uint)((ulong)(iVar31 * lVar66) >> 0x1f) & 0xfffffffe) +
                        ((uint)((ulong)(iVar29 * lVar71) >> 0x1f) & 0xfffffffe);
          *piVar58 = ((uint)((ulong)(iVar29 * lVar66) >> 0x1f) & 0xfffffffe) -
                     ((uint)((ulong)(iVar31 * lVar71) >> 0x1f) & 0xfffffffe);
          iVar29 = *piVar62;
          iVar30 = piVar62[1];
          piVar62 = (int *)((long)piVar62 + uVar54);
                    /* catch() { ... } // from try @ 00ebac14 with catch @ 00ebabe8 */
          piVar58[-1] = ((uint)((ulong)(iVar30 * lVar72) >> 0x1f) & 0xfffffffe) +
                        ((uint)((ulong)(iVar29 * lVar73) >> 0x1f) & 0xfffffffe);
          piVar58[1] = ((uint)((ulong)(iVar29 * lVar72) >> 0x1f) & 0xfffffffe) -
                       ((uint)((ulong)(iVar30 * lVar73) >> 0x1f) & 0xfffffffe);
          piVar58 = piVar58 + -4;
          piVar56 = piVar57;
        } while (piVar62 < &DAT_01433f08);
        do {
          piVar62 = (int *)((long)piVar56 + uVar69);
          iVar29 = piVar62[-2];
          iVar30 = *piVar62;
                    /* try { // try from 00ebac0c to 00fbac13 has its CatchHandler @ 00ebac58 */
          piVar62[-2] = piVar62[-1] + iVar29;
                    /* try { // try from 00ebac14 to 00fbac73 has its CatchHandler @ 00ebabe8 */
          *piVar62 = piVar62[1] + iVar30;
          iVar31 = piVar56[-2];
          iVar32 = piVar56[-1];
          lVar66 = (long)(iVar29 - piVar62[-1]);
          piVar62[-1] = iVar32 + iVar31;
          iVar29 = *piVar56;
          iVar33 = piVar56[1];
          lVar71 = (long)(iVar30 - piVar62[1]);
          lVar73 = (long)(iVar31 - iVar32);
          piVar62[1] = iVar29 + iVar33;
          iVar30 = *piVar64;
          iVar31 = piVar64[1];
          lVar72 = (long)(iVar33 - iVar29);
                    /* catch() { ... } // from try @ 00ebac0c with catch @ 00ebac58 */
                    /* catch() { ... } // from try @ 00ebaca0 with catch @ 00ebac74 */
          piVar56[-2] = ((uint)((ulong)(iVar30 * lVar66) >> 0x1f) & 0xfffffffe) -
                        ((uint)((ulong)(iVar31 * lVar71) >> 0x1f) & 0xfffffffe);
          *piVar56 = ((uint)((ulong)(iVar31 * lVar66) >> 0x1f) & 0xfffffffe) +
                     ((uint)((ulong)(iVar30 * lVar71) >> 0x1f) & 0xfffffffe);
          iVar29 = *piVar64;
          iVar30 = piVar64[1];
                    /* try { // try from 00ebac98 to 00fbac9f has its CatchHandler @ 00ebace4 */
          piVar64 = (int *)((long)piVar64 - uVar54);
                    /* try { // try from 00ebaca0 to 00fbacff has its CatchHandler @ 00ebac74 */
          piVar56[-1] = ((uint)((ulong)(iVar29 * lVar72) >> 0x1f) & 0xfffffffe) -
                        ((uint)((ulong)(iVar30 * lVar73) >> 0x1f) & 0xfffffffe);
          piVar56[1] = ((uint)((ulong)(iVar30 * lVar72) >> 0x1f) & 0xfffffffe) +
                       ((uint)((ulong)(iVar29 * lVar73) >> 0x1f) & 0xfffffffe);
                    /* catch() { ... } // from try @ 00ebac98 with catch @ 00ebace4 */
          piVar56 = piVar56 + -4;
        } while (&sincos_lookup0 < piVar64);
        lVar60 = lVar60 + 1;
        piVar61 = (int *)((long)piVar61 + uVar53);
        piVar57 = (int *)((long)piVar57 + uVar53);
      } while (lVar60 < 1 << (ulong)(uVar67 & 0x1f));
      do {
        uVar67 = uVar67 + 1;
        if (iVar63 + 8U == uVar67) goto LAB_00ebad04;
      } while (uVar67 == 0x1f);
    } while( true );
  }
LAB_00ebad04:
  if (1 < (int)param_1) {
    lVar60 = 0;
    piVar51 = param_2 + 0x10;
    do {
      iVar21 = piVar51[2];
      iVar25 = piVar51[3];
      iVar22 = *piVar51;
      iVar26 = piVar51[1];
      iVar23 = piVar51[8];
      iVar27 = piVar51[9];
      iVar24 = piVar51[10];
      iVar28 = piVar51[0xb];
      iVar63 = iVar26 + iVar22;
      iVar29 = iVar25 + iVar21;
      iVar30 = piVar51[-0x10] + piVar51[-0xf];
      iVar31 = piVar51[-0xe] + piVar51[-0xd];
      iVar37 = piVar51[4] - piVar51[5];
      iVar32 = piVar51[5] + piVar51[4];
      iVar38 = piVar51[6] - piVar51[7];
      iVar33 = piVar51[7] + piVar51[6];
      iVar39 = piVar51[-0xb] - piVar51[-0xc];
      iVar34 = piVar51[-0xc] + piVar51[-0xb];
      iVar2 = iVar27 + iVar23;
      iVar3 = iVar28 + iVar24;
      iVar4 = piVar51[-8] + piVar51[-7];
      iVar5 = piVar51[-6] + piVar51[-5];
                    /* try { // try from 00ebadd8 to 00fbade3 has its CatchHandler @ 00ebadfc */
      iVar40 = piVar51[-9] - piVar51[-10];
      iVar6 = piVar51[-10] + piVar51[-9];
                    /* try { // try from 00ebade4 to 00fbaec7 has its CatchHandler @ 00ebad00 */
      iVar41 = piVar51[0xc] - piVar51[0xd];
      iVar7 = piVar51[0xd] + piVar51[0xc];
      iVar42 = piVar51[0xe] - piVar51[0xf];
      iVar8 = piVar51[0xf] + piVar51[0xe];
      iVar43 = piVar51[-4] - piVar51[-3];
                    /* catch() { ... } // from try @ 00ebadd8 with catch @ 00ebadfc */
      iVar9 = piVar51[-3] + piVar51[-4];
      iVar10 = piVar51[-2] + piVar51[-1];
      iVar44 = piVar51[-1] - piVar51[-2];
      iVar45 = iVar42 - iVar43;
      iVar43 = iVar43 + iVar42;
      piVar51[8] = iVar2;
      piVar51[9] = iVar4;
      piVar51[10] = iVar3;
      piVar51[0xb] = iVar5;
      *piVar51 = iVar63;
      piVar51[1] = iVar30;
      piVar51[2] = iVar29;
      piVar51[3] = iVar31;
      piVar51[0xc] = iVar7;
      piVar51[0xd] = iVar9;
      piVar51[0xe] = iVar8;
      piVar51[0xf] = iVar10;
      piVar51[4] = iVar32;
      piVar51[5] = iVar34;
      piVar51[6] = iVar33;
      piVar51[7] = iVar6;
      iVar46 = iVar41 - iVar44;
      iVar44 = iVar44 + iVar41;
      iVar41 = (iVar7 - iVar9) + (iVar6 - iVar33);
      iVar47 = (iVar7 - iVar9) - (iVar6 - iVar33);
      iVar42 = (iVar8 - iVar10) + (iVar32 - iVar34);
      iVar48 = (iVar8 - iVar10) - (iVar32 - iVar34);
      iVar11 = iVar4 + iVar2 + iVar30 + iVar63;
      iVar49 = (iVar4 + iVar2) - (iVar30 + iVar63);
      iVar12 = iVar5 + iVar3 + iVar31 + iVar29;
      iVar50 = (iVar5 + iVar3) - (iVar31 + iVar29);
      iVar13 = iVar9 + iVar7 + iVar34 + iVar32;
      iVar34 = (iVar9 + iVar7) - (iVar34 + iVar32);
      iVar32 = iVar10 + iVar8 + iVar6 + iVar33;
      iVar33 = (iVar10 + iVar8) - (iVar6 + iVar33);
      piVar51[8] = iVar34 + iVar50;
      piVar51[9] = iVar33 - iVar49;
      piVar51[10] = iVar34 - iVar50;
      piVar51[0xb] = iVar33 + iVar49;
      piVar51[0xc] = iVar13 - iVar11;
      piVar51[0xd] = iVar32 - iVar12;
      lVar73 = (long)(iVar22 - iVar26);
      lVar66 = (long)(iVar21 - iVar25);
      piVar51[0xe] = iVar13 + iVar11;
      piVar51[0xf] = iVar32 + iVar12;
      lVar71 = (long)(piVar51[-0xf] - piVar51[-0x10]);
      lVar72 = (long)(piVar51[-0xd] - piVar51[-0xe]);
      iVar8 = ((uint)((ulong)(lVar73 * 0x30fbc54d) >> 0x1f) & 0xfffffffe) -
              ((uint)((ulong)(lVar66 * 0x7641af3d) >> 0x1f) & 0xfffffffe);
      iVar32 = ((uint)((ulong)(lVar66 * 0x30fbc54d) >> 0x1f) & 0xfffffffe) +
               ((uint)((ulong)(lVar73 * 0x7641af3d) >> 0x1f) & 0xfffffffe);
      lVar66 = (long)(iVar23 - iVar27);
      lVar73 = (long)(iVar24 - iVar28);
      iVar33 = ((uint)((ulong)(lVar72 * 0x30fbc54d) >> 0x1f) & 0xfffffffe) +
               ((uint)((ulong)(lVar71 * 0x7641af3d) >> 0x1f) & 0xfffffffe);
      iVar9 = ((uint)((ulong)(lVar72 * 0x7641af3d) >> 0x1f) & 0xfffffffe) -
              ((uint)((ulong)(lVar71 * 0x30fbc54d) >> 0x1f) & 0xfffffffe);
      lVar71 = (long)(piVar51[-7] - piVar51[-8]);
      lVar72 = (long)(piVar51[-5] - piVar51[-6]);
      iVar10 = ((uint)((ulong)(lVar66 * 0x7641af3d) >> 0x1f) & 0xfffffffe) -
               ((uint)((ulong)(lVar73 * 0x30fbc54d) >> 0x1f) & 0xfffffffe);
      iVar34 = ((uint)((ulong)(lVar73 * 0x7641af3d) >> 0x1f) & 0xfffffffe) +
               ((uint)((ulong)(lVar66 * 0x30fbc54d) >> 0x1f) & 0xfffffffe);
      iVar6 = ((uint)((ulong)(lVar72 * 0x7641af3d) >> 0x1f) & 0xfffffffe) +
              ((uint)((ulong)(lVar71 * 0x30fbc54d) >> 0x1f) & 0xfffffffe);
      uVar67 = (uint)((ulong)((long)(iVar37 - iVar38) * 0x5a82799a) >> 0x1f) & 0xfffffffe;
      uVar19 = (uint)((ulong)((long)(iVar40 + iVar39) * 0x5a82799a) >> 0x1f) & 0xfffffffe;
      uVar36 = (uint)((ulong)((long)(iVar38 + iVar37) * 0x5a82799a) >> 0x1f) & 0xfffffffe;
      uVar14 = (uint)((ulong)((long)(iVar40 - iVar39) * 0x5a82799a) >> 0x1f) & 0xfffffffe;
      iVar7 = ((uint)((ulong)(lVar72 * 0x30fbc54d) >> 0x1f) & 0xfffffffe) -
              ((uint)((ulong)(lVar71 * 0x7641af3d) >> 0x1f) & 0xfffffffe);
      piVar51[-0x10] = iVar8;
      piVar51[-0xf] = iVar33;
      piVar51[-0xe] = iVar32;
      piVar51[-0xd] = iVar9;
      piVar51[-0xc] = uVar67;
      piVar51[-0xb] = uVar19;
      piVar51[-10] = uVar36;
      piVar51[-9] = uVar14;
      iVar11 = iVar10 - iVar6;
      iVar6 = iVar6 + iVar10;
      iVar10 = iVar34 - iVar7;
      iVar7 = iVar7 + iVar34;
      uVar15 = (uint)((ulong)((long)((iVar2 - iVar4) - (iVar3 - iVar5)) * 0x5a82799a) >> 0x1f) &
               0xfffffffe;
      uVar16 = (uint)((ulong)((long)((iVar31 - iVar29) + (iVar30 - iVar63)) * 0x5a82799a) >> 0x1f) &
               0xfffffffe;
      uVar17 = (uint)((ulong)((long)((iVar3 - iVar5) + (iVar2 - iVar4)) * 0x5a82799a) >> 0x1f) &
               0xfffffffe;
      uVar18 = (uint)((ulong)((long)((iVar31 - iVar29) - (iVar30 - iVar63)) * 0x5a82799a) >> 0x1f) &
               0xfffffffe;
      iVar63 = iVar46 + (uVar14 - uVar36);
      iVar46 = iVar46 - (uVar14 - uVar36);
      iVar29 = iVar45 + (uVar67 - uVar19);
      iVar45 = iVar45 - (uVar67 - uVar19);
      iVar30 = iVar6 + iVar33 + iVar8;
      iVar6 = iVar6 - (iVar33 + iVar8);
      iVar31 = iVar7 + iVar9 + iVar32;
      iVar7 = iVar7 - (iVar9 + iVar32);
      iVar34 = iVar44 + uVar19 + uVar67;
      iVar44 = iVar44 - (uVar19 + uVar67);
      iVar2 = iVar43 + uVar14 + uVar36;
      iVar43 = iVar43 - (uVar14 + uVar36);
      iVar3 = uVar15 + uVar16;
      iVar5 = uVar15 - uVar16;
      iVar4 = uVar17 + uVar18;
      iVar12 = uVar17 - uVar18;
      *piVar51 = iVar47 + iVar12;
      piVar51[1] = iVar48 - iVar5;
      piVar51[2] = iVar47 - iVar12;
      piVar51[3] = iVar48 + iVar5;
      piVar51[6] = iVar41 + iVar3;
      piVar51[7] = iVar42 + iVar4;
      uVar67 = (uint)((ulong)((long)(iVar11 - iVar10) * 0x5a82799a) >> 0x1f) & 0xfffffffe;
      uVar19 = (uint)((ulong)((long)((iVar9 - iVar32) + (iVar33 - iVar8)) * 0x5a82799a) >> 0x1f) &
               0xfffffffe;
      uVar36 = (uint)((ulong)((long)(iVar10 + iVar11) * 0x5a82799a) >> 0x1f) & 0xfffffffe;
      uVar14 = (uint)((ulong)((long)((iVar9 - iVar32) - (iVar33 - iVar8)) * 0x5a82799a) >> 0x1f) &
               0xfffffffe;
      iVar32 = uVar67 + uVar19;
      iVar5 = uVar67 - uVar19;
      iVar33 = uVar36 + uVar14;
      iVar8 = uVar36 - uVar14;
      piVar51[-6] = iVar44 - iVar7;
      piVar51[-5] = iVar43 + iVar6;
      piVar51[-8] = iVar44 + iVar7;
      piVar51[-7] = iVar43 - iVar6;
      piVar51[-4] = iVar34 - iVar30;
      piVar51[-3] = iVar2 - iVar31;
      piVar51[-2] = iVar34 + iVar30;
      piVar51[-1] = iVar2 + iVar31;
      piVar51[4] = iVar41 - iVar3;
      piVar51[5] = iVar42 - iVar4;
      piVar51[-0x10] = iVar46 + iVar8;
      piVar51[-0xf] = iVar45 - iVar5;
      piVar51[-0xe] = iVar46 - iVar8;
      piVar51[-0xd] = iVar5 + iVar45;
      piVar51[-0xc] = iVar63 - iVar32;
      piVar51[-0xb] = iVar29 - iVar33;
      piVar51[-10] = iVar63 + iVar32;
      piVar51[-9] = iVar33 + iVar29;
      lVar60 = lVar60 + 0x20;
      piVar51 = piVar51 + 0x20;
    } while (lVar60 < lVar65);
  }
  uVar53 = 0;
  piVar51 = param_2 + lVar65;
  do {
    piVar61 = piVar51 + -2;
    uVar54 = uVar53 >> 4;
    uVar68 = uVar53 >> 8;
    uVar69 = uVar53 & 0xf;
    uVar53 = (ulong)((int)uVar53 + 1);
    piVar57 = param_2 + (int)(((uint)(byte)(&DAT_01434f10)[uVar68] |
                               (uint)(byte)(&DAT_01434f10)[uVar54 & 0xf] << 4 |
                              (uint)(byte)(&DAT_01434f10)[uVar69] << 8) >> (ulong)(-iVar59 & 0x1f));
    if (piVar57 < piVar61) {
      iVar63 = *piVar57;
      *piVar57 = *piVar61;
      *piVar61 = iVar63;
      iVar63 = piVar57[1];
      piVar57[1] = piVar51[-1];
      piVar51[-1] = iVar63;
    }
    piVar51 = piVar61;
  } while (param_2 < piVar61);
  puVar20 = &sincos_lookup0 + ((int)uVar35 >> 1);
  if ((int)uVar35 < 4) {
    puVar20 = &sincos_lookup1;
  }
  lVar65 = 0;
  piVar51 = puVar20 + 1;
  piVar57 = piVar1;
  piVar61 = param_2;
  do {
    piVar70 = piVar57 + -2;
    lVar65 = lVar65 + lVar52;
    lVar66 = (long)(*piVar70 + *piVar61);
    lVar60 = (long)(piVar57[-1] - piVar61[1]);
    iVar63 = *piVar61 - *piVar70 >> 1;
    iVar29 = piVar61[1] + piVar57[-1] >> 1;
    iVar59 = (int)((ulong)(piVar51[-1] * lVar60) >> 0x20) +
             (int)((ulong)(*piVar51 * lVar66) >> 0x20);
    iVar30 = (int)((ulong)(*piVar51 * lVar60) >> 0x20) -
             (int)((ulong)(piVar51[-1] * lVar66) >> 0x20);
    piVar62 = piVar61 + 2;
    *piVar61 = iVar59 + iVar29;
    piVar61[1] = iVar30 + iVar63;
    piVar51 = piVar51 + lVar52;
    *piVar70 = iVar29 - iVar59;
    piVar57[-1] = iVar30 - iVar63;
    piVar57 = piVar70;
    piVar61 = piVar62;
  } while (lVar65 < 0x400);
  piVar51 = piVar51 + -lVar52;
  do {
    piVar61 = piVar70 + -2;
    piVar57 = piVar51 + -1;
    iVar30 = *piVar51;
    piVar51 = piVar51 + -lVar52;
    lVar60 = (long)(*piVar61 + *piVar62);
    lVar65 = (long)(piVar70[-1] - piVar62[1]);
    iVar63 = *piVar62 - *piVar61 >> 1;
    iVar29 = piVar62[1] + piVar70[-1] >> 1;
    iVar59 = (int)((ulong)(iVar30 * lVar65) >> 0x20) + (int)((ulong)(*piVar57 * lVar60) >> 0x20);
    iVar30 = (int)((ulong)(*piVar57 * lVar65) >> 0x20) - (int)((ulong)(iVar30 * lVar60) >> 0x20);
    piVar57 = piVar62 + 2;
    *piVar62 = iVar59 + iVar29;
    piVar62[1] = iVar30 + iVar63;
    *piVar61 = iVar29 - iVar59;
    piVar70[-1] = iVar30 - iVar63;
    piVar70 = piVar61;
    piVar62 = piVar57;
  } while (piVar57 < piVar61);
  uVar67 = (int)uVar35 >> 2;
  if (uVar67 == 1) {
    iVar59 = 0;
    iVar63 = 0x3fffffff;
    piVar57 = &sincos_lookup1;
    piVar51 = &sincos_lookup0;
    do {
      iVar29 = *piVar57;
      iVar30 = piVar57[1];
      iVar31 = *param_2;
      lVar65 = (long)((iVar29 >> 1) + iVar59);
      lVar52 = (long)((iVar30 >> 1) + iVar63);
      *param_2 = ((uint)((ulong)-(param_2[1] * lVar52) >> 0x1f) & 0xfffffffe) +
                 ((uint)((ulong)(lVar65 * iVar31) >> 0x1f) & 0xfffffffe);
      param_2[1] = ((uint)((ulong)-(param_2[1] * lVar65) >> 0x1f) & 0xfffffffe) -
                   ((uint)((ulong)(lVar52 * iVar31) >> 0x1f) & 0xfffffffe);
      iVar31 = param_2[2];
      iVar59 = piVar51[2] >> 1;
      iVar63 = piVar51[3] >> 1;
      lVar65 = (long)(iVar59 + (iVar29 >> 1));
      lVar52 = (long)(iVar63 + (iVar30 >> 1));
      param_2[2] = ((uint)((ulong)-(param_2[3] * lVar52) >> 0x1f) & 0xfffffffe) +
                   ((uint)((ulong)(lVar65 * iVar31) >> 0x1f) & 0xfffffffe);
      param_2[3] = ((uint)((ulong)-(param_2[3] * lVar65) >> 0x1f) & 0xfffffffe) -
                   ((uint)((ulong)(lVar52 * iVar31) >> 0x1f) & 0xfffffffe);
      param_2 = param_2 + 4;
      piVar57 = piVar57 + 2;
      piVar51 = piVar51 + 2;
    } while (param_2 < piVar1);
  }
  else if (uVar67 == 0) {
    iVar63 = 0x7fffffff;
    iVar59 = 0;
    piVar57 = &sincos_lookup1;
    piVar51 = &sincos_lookup0;
    do {
      iVar31 = *piVar57;
      iVar32 = piVar57[1];
      iVar33 = *param_2;
      iVar34 = param_2[2];
      iVar29 = iVar31 - iVar59 >> 2;
      iVar30 = iVar32 - iVar63 >> 2;
      lVar60 = (long)(iVar29 + iVar59);
      lVar66 = (long)(iVar30 + iVar63);
      lVar65 = (long)(iVar31 - iVar29);
      lVar52 = (long)(iVar32 - iVar30);
      *param_2 = ((uint)((ulong)-(param_2[1] * lVar66) >> 0x1f) & 0xfffffffe) +
                 ((uint)((ulong)(lVar60 * iVar33) >> 0x1f) & 0xfffffffe);
      param_2[1] = ((uint)((ulong)-(param_2[1] * lVar60) >> 0x1f) & 0xfffffffe) -
                   ((uint)((ulong)(lVar66 * iVar33) >> 0x1f) & 0xfffffffe);
      param_2[2] = ((uint)((ulong)-(param_2[3] * lVar52) >> 0x1f) & 0xfffffffe) +
                   ((uint)((ulong)(iVar34 * lVar65) >> 0x1f) & 0xfffffffe);
      param_2[3] = ((uint)((ulong)-(param_2[3] * lVar65) >> 0x1f) & 0xfffffffe) -
                   ((uint)((ulong)(iVar34 * lVar52) >> 0x1f) & 0xfffffffe);
      iVar59 = piVar51[2];
      iVar63 = piVar51[3];
      iVar29 = iVar59 - iVar31 >> 2;
      iVar30 = iVar63 - iVar32 >> 2;
      lVar65 = (long)(iVar59 - iVar29);
      lVar52 = (long)(iVar63 - iVar30);
      param_2[4] = ((uint)((ulong)-((long)param_2[5] * (long)(iVar30 + iVar32)) >> 0x1f) &
                   0xfffffffe) +
                   ((uint)((ulong)((long)(iVar29 + iVar31) * (long)param_2[4]) >> 0x1f) & 0xfffffffe
                   );
      param_2[5] = ((uint)((ulong)-(param_2[7] * lVar52) >> 0x1f) & 0xfffffffe) +
                   ((uint)((ulong)(param_2[6] * lVar65) >> 0x1f) & 0xfffffffe);
      param_2[6] = ((uint)((ulong)-(param_2[7] * lVar65) >> 0x1f) & 0xfffffffe) -
                   ((uint)((ulong)(param_2[6] * lVar52) >> 0x1f) & 0xfffffffe);
      param_2 = param_2 + 8;
      piVar57 = piVar57 + 2;
      piVar51 = piVar51 + 2;
    } while (param_2 < piVar1);
  }
  else {
    puVar20 = &sincos_lookup0 + ((int)uVar35 >> 3);
    if ((int)uVar35 < 0x10) {
      puVar20 = &sincos_lookup1;
    }
    piVar51 = puVar20 + 1;
    do {
      iVar59 = *param_2;
      iVar63 = piVar51[-1];
      iVar29 = *piVar51;
      piVar51 = (int *)((long)piVar51 +
                       (-(ulong)(uVar67 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar67 << 2));
      piVar57 = param_2 + 2;
      *param_2 = ((uint)((ulong)-((long)param_2[1] * (long)iVar29) >> 0x1f) & 0xfffffffe) +
                 ((uint)((ulong)((long)iVar63 * (long)iVar59) >> 0x1f) & 0xfffffffe);
      param_2[1] = ((uint)((ulong)-((long)param_2[1] * (long)iVar63) >> 0x1f) & 0xfffffffe) -
                   ((uint)((ulong)((long)iVar29 * (long)iVar59) >> 0x1f) & 0xfffffffe);
      param_2 = piVar57;
    } while (piVar57 < piVar1);
  }
  return;
}

