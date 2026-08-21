
void spSkeletonClipping_clipTriangles
               (long param_1,long param_2,undefined8 param_3,long param_4,int param_5,long param_6,
               int param_7)

{
  unkbyte10 *pVar1;
  unkbyte10 *pVar2;
  ushort *puVar3;
  uint *puVar4;
  undefined8 uVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auVar10 [12];
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float fVar15;
  undefined1 auVar16 [12];
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  unkbyte10 Var24;
  unkbyte10 Var25;
  int iVar26;
  long lVar27;
  int iVar28;
  long lVar29;
  uint uVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  float *pfVar35;
  ulong uVar36;
  float *pfVar37;
  short *psVar38;
  ulong uVar39;
  float *pfVar40;
  ulong uVar41;
  ulong uVar42;
  undefined8 *puVar43;
  unkbyte10 *pVar44;
  short sVar45;
  int iVar46;
  unkbyte10 *pVar47;
  long lVar48;
  ulong uVar49;
  short sVar50;
  short sVar51;
  short sVar52;
  short sVar53;
  short sVar54;
  short sVar55;
  short sVar56;
  short sVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar62;
  float fVar63;
  undefined1 auVar61 [16];
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  long local_1c0;
  
                    /* try { // try from 00d67784 to 00e6779f has its CatchHandler @ 00d67848 */
  puVar4 = *(uint **)(param_1 + 0x10);
  piVar6 = *(int **)(param_1 + 0x18);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  piVar7 = *(int **)(param_1 + 0x28);
  lVar31 = *(long *)(*(uint **)(param_1 + 0x40) + 2);
                    /* try { // try from 00d677b8 to 00e677c3 has its CatchHandler @ 00d67818 */
  uVar8 = **(uint **)(param_1 + 0x40);
                    /* try { // try from 00d677c4 to 00e67863 has its CatchHandler @ 00d67744 */
  spFloatArray_clear(piVar6);
  spFloatArray_clear(uVar5);
  spUnsignedShortArray_clear(piVar7);
  if (0 < param_5) {
    iVar28 = 0;
    iVar46 = 0;
    lVar32 = (long)param_7;
LAB_00d678f8:
    local_1c0 = (long)iVar28;
    do {
      if (0 < (int)uVar8) {
                    /* try { // try from 00d67928 to 00e6794f has its CatchHandler @ 00d67d8c */
        uVar49 = 0;
        puVar3 = (ushort *)(param_4 + local_1c0 * 2);
        lVar33 = (ulong)*puVar3 * lVar32 * 4;
                    /* try { // try from 00d67954 to 00e6796f has its CatchHandler @ 00d67d84 */
        fVar73 = *(float *)(param_2 + lVar33);
        fVar58 = *(float *)(param_6 + lVar33);
        fVar70 = *(float *)(param_2 + lVar33 + 4);
        fVar65 = *(float *)(param_6 + lVar33 + 4);
                    /* try { // try from 00d67970 to 00e67977 has its CatchHandler @ 00d67d4c */
        lVar34 = (ulong)puVar3[1] * lVar32 * 4;
        lVar33 = (ulong)puVar3[2] * lVar32 * 4;
                    /* try { // try from 00d67978 to 00e67983 has its CatchHandler @ 00d67d50 */
        fVar71 = *(float *)(param_2 + lVar34);
        fVar69 = *(float *)(param_6 + lVar34);
        fVar66 = *(float *)(param_2 + lVar33);
        fVar75 = *(float *)(param_6 + lVar33);
        fVar72 = *(float *)(param_2 + lVar34 + 4);
        fVar67 = *(float *)(param_2 + lVar33 + 4);
        fVar74 = *(float *)(param_6 + lVar34 + 4);
        fVar68 = *(float *)(param_6 + lVar33 + 4);
        fVar76 = fVar66 - fVar71;
        fVar77 = fVar73 - fVar66;
        fVar78 = fVar72 - fVar67;
        fVar79 = fVar67 - fVar70;
        fVar11 = 1.0 / (fVar77 * fVar78 + fVar76 * (fVar70 - fVar67));
                    /* try { // try from 00d679d4 to 00e679df has its CatchHandler @ 00d67d80 */
        do {
          iVar28 = *piVar6;
          lVar33 = (long)iVar28;
                    /* try { // try from 00d67a7c to 00e67a87 has its CatchHandler @ 00d67d80 */
          iVar26 = _clip(SUB42(fVar73,0),SUB42(fVar70,0),fVar71,fVar72,fVar66,fVar67,param_1,
                         *(undefined8 *)(lVar31 + uVar49 * 8),puVar4);
          lVar34 = lVar33 * 4;
          sVar45 = (short)iVar46;
          if (iVar26 == 0) {
                    /* catch() { ... } // from try @ 00d677b8 with catch @ 00d67818 */
            lVar33 = spFloatArray_setSize(piVar6,iVar28 + 6);
            lVar27 = *(long *)(lVar33 + 8);
            lVar33 = spFloatArray_setSize(uVar5,iVar28 + 6);
                    /* catch() { ... } // from try @ 00d67784 with catch @ 00d67848 */
            uVar49 = -(ulong)(iVar28 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar28 + 1U) << 2;
            uVar36 = -(ulong)(iVar28 + 2U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar28 + 2U) << 2;
            uVar39 = -(ulong)(iVar28 + 3U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar28 + 3U) << 2;
            uVar41 = -(ulong)(iVar28 + 4U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar28 + 4U) << 2;
            lVar33 = *(long *)(lVar33 + 8);
            *(float *)(lVar27 + lVar34) = fVar73;
            *(float *)(lVar27 + uVar49) = fVar70;
                    /* try { // try from 00d67864 to 00e678eb has its CatchHandler @ 00d67864
                       catch() { ... } // from try @ 00d67864 with catch @ 00d67864
                       catch() { ... } // from try @ 00d67ce0 with catch @ 00d67864 */
            *(float *)(lVar27 + uVar36) = fVar71;
            *(float *)(lVar27 + uVar39) = fVar72;
            *(float *)(lVar27 + uVar41) = fVar66;
            uVar42 = -(ulong)(iVar28 + 5U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar28 + 5U) << 2;
            *(float *)(lVar27 + uVar42) = fVar67;
            *(float *)(lVar33 + lVar34) = fVar58;
            *(float *)(lVar33 + uVar49) = fVar65;
            *(float *)(lVar33 + uVar36) = fVar69;
            *(float *)(lVar33 + uVar39) = fVar74;
            *(float *)(lVar33 + uVar41) = fVar75;
            *(float *)(lVar33 + uVar42) = fVar68;
            iVar26 = *piVar7;
            lVar33 = spUnsignedShortArray_setSize(piVar7,iVar26 + 3);
            lVar33 = *(long *)(lVar33 + 8);
            iVar28 = (int)local_1c0 + 3;
            *(short *)(lVar33 + (long)iVar26 * 2) = sVar45;
            iVar46 = iVar46 + 3;
                    /* try { // try from 00d678ec to 00e67903 has its CatchHandler @ 00d67d48 */
            *(short *)(lVar33 + (long)(iVar26 + 1) * 2) = sVar45 + 1;
            *(short *)(lVar33 + (long)(iVar26 + 2) * 2) = sVar45 + 2;
            if (param_5 <= iVar28) {
              return;
            }
            goto LAB_00d678f8;
          }
          uVar9 = *puVar4;
          if (uVar9 != 0) {
            pVar47 = *(unkbyte10 **)(puVar4 + 2);
            iVar28 = (uVar9 & 0xfffffffe) + iVar28;
                    /* try { // try from 00d67aa8 to 00e67ad3 has its CatchHandler @ 00d67d48 */
            iVar26 = (int)uVar9 >> 1;
            lVar27 = spFloatArray_setSize(piVar6,iVar28);
            lVar48 = *(long *)(lVar27 + 8);
            lVar27 = spFloatArray_setSize(uVar5,iVar28);
            if (0 < (int)uVar9) {
              lVar27 = *(long *)(lVar27 + 8);
              uVar39 = (long)(int)uVar9 - 1;
                    /* try { // try from 00d67af8 to 00e67b03 has its CatchHandler @ 00d67d2c */
              uVar36 = (uVar39 >> 1) + 1;
              if (uVar36 < 4) {
                lVar29 = 0;
              }
              else {
                uVar39 = uVar39 & 0xfffffffffffffffe;
                    /* try { // try from 00d67b10 to 00e67b23 has its CatchHandler @ 00d67d48 */
                lVar29 = (uVar39 + lVar33) * 4;
                pVar44 = (unkbyte10 *)((long)pVar47 + uVar39 * 4 + 8);
                pVar1 = (unkbyte10 *)(lVar27 + lVar29 + 8);
                pVar2 = (unkbyte10 *)(lVar48 + lVar29 + 8);
                    /* try { // try from 00d67b3c to 00e67b43 has its CatchHandler @ 00d67d88 */
                    /* try { // try from 00d67b54 to 00e67b6b has its CatchHandler @ 00d67d40 */
                lVar29 = 0;
                if (((pVar1 <= (unkbyte10 *)(lVar48 + lVar34) ||
                      pVar2 <= (unkbyte10 *)(lVar27 + lVar34)) &&
                    (pVar44 <= (unkbyte10 *)(lVar48 + lVar34) || pVar2 <= pVar47)) &&
                   (pVar44 <= (unkbyte10 *)(lVar27 + lVar34) || pVar1 <= pVar47)) {
                    /* try { // try from 00d67b84 to 00e67bbf has its CatchHandler @ 00d67d90 */
                  uVar41 = uVar36 & 0xfffffffffffffffc;
                  lVar29 = uVar41 * 2;
                  pfVar35 = (float *)(lVar27 + lVar34);
                  lVar33 = lVar29 + lVar33;
                  puVar43 = (undefined8 *)(lVar48 + lVar34);
                  uVar39 = uVar41;
                  pVar44 = pVar47;
                  do {
                    uVar14 = *(undefined8 *)((long)pVar44 + 8);
                    uVar13 = *(undefined8 *)pVar44;
                    Var24 = *pVar44;
                    uVar22 = *(undefined8 *)((long)pVar44 + 0x18);
                    uVar19 = *(undefined8 *)(pVar44 + 1);
                    Var25 = pVar44[1];
                    auVar61 = NEON_fmov(0x3f800000,4);
                    uVar39 = uVar39 - 4;
                    auVar16._10_2_ = (short)((ulong)uVar22 >> 0x10);
                    auVar16._0_10_ = Var25;
                    auVar10._10_2_ = (short)((ulong)uVar14 >> 0x10);
                    auVar10._0_10_ = Var24;
                    puVar43[1] = uVar14;
                    *puVar43 = uVar13;
                    puVar43[3] = uVar22;
                    puVar43[2] = uVar19;
                    fVar12 = (float)Var24 - fVar66;
                    fVar60 = auVar10._8_4_ - fVar66;
                    fVar18 = (float)Var25 - fVar66;
                    fVar15 = auVar16._8_4_ - fVar66;
                    fVar59 = (float)((ulong)uVar13 >> 0x20) - fVar67;
                    fVar62 = (float)((ulong)uVar14 >> 0x20) - fVar67;
                    fVar63 = (float)((ulong)uVar19 >> 0x20) - fVar67;
                    fVar64 = (float)((ulong)uVar22 >> 0x20) - fVar67;
                    fVar17 = fVar11 * (fVar78 * fVar12 + fVar76 * fVar59);
                    fVar20 = fVar11 * (fVar78 * fVar60 + fVar76 * fVar62);
                    fVar21 = fVar11 * (fVar78 * fVar18 + fVar76 * fVar63);
                    fVar23 = fVar11 * (fVar78 * fVar15 + fVar76 * fVar64);
                    fVar12 = fVar11 * (fVar79 * fVar12 + fVar77 * fVar59);
                    fVar60 = fVar11 * (fVar79 * fVar60 + fVar77 * fVar62);
                    fVar18 = fVar11 * (fVar79 * fVar18 + fVar77 * fVar63);
                    fVar15 = fVar11 * (fVar79 * fVar15 + fVar77 * fVar64);
                    fVar59 = (auVar61._0_4_ - fVar17) - fVar12;
                    fVar62 = (auVar61._4_4_ - fVar20) - fVar60;
                    fVar63 = (auVar61._8_4_ - fVar21) - fVar18;
                    fVar64 = (auVar61._12_4_ - fVar23) - fVar15;
                    *pfVar35 = fVar58 * fVar17 + fVar69 * fVar12 + fVar75 * fVar59;
                    pfVar35[1] = fVar65 * fVar17 + fVar74 * fVar12 + fVar68 * fVar59;
                    pfVar35[2] = fVar58 * fVar20 + fVar69 * fVar60 + fVar75 * fVar62;
                    pfVar35[3] = fVar65 * fVar20 + fVar74 * fVar60 + fVar68 * fVar62;
                    pfVar35[4] = fVar58 * fVar21 + fVar69 * fVar18 + fVar75 * fVar63;
                    pfVar35[5] = fVar65 * fVar21 + fVar74 * fVar18 + fVar68 * fVar63;
                    pfVar35[6] = fVar58 * fVar23 + fVar69 * fVar15 + fVar75 * fVar64;
                    pfVar35[7] = fVar65 * fVar23 + fVar74 * fVar15 + fVar68 * fVar64;
                    pfVar35 = pfVar35 + 8;
                    puVar43 = puVar43 + 4;
                    pVar44 = pVar44 + 2;
                  } while (uVar39 != 0);
                  if (uVar36 == uVar41) goto LAB_00d67ce0;
                }
              }
              pfVar35 = (float *)((long)pVar47 + lVar29 * 4 + 4);
              pfVar37 = (float *)(lVar27 + lVar33 * 4 + 4);
                    /* try { // try from 00d67c60 to 00e67c83 has its CatchHandler @ 00d67d44 */
              pfVar40 = (float *)(lVar48 + lVar33 * 4 + 4);
              do {
                fVar12 = pfVar35[-1];
                fVar60 = *pfVar35;
                lVar29 = lVar29 + 2;
                pfVar35 = pfVar35 + 2;
                pfVar40[-1] = fVar12;
                *pfVar40 = fVar60;
                fVar12 = fVar12 - fVar66;
                fVar60 = fVar60 - fVar67;
                    /* try { // try from 00d67c88 to 00e67c9f has its CatchHandler @ 00d67d38 */
                fVar18 = fVar11 * (fVar78 * fVar12 + fVar76 * fVar60);
                fVar12 = fVar11 * (fVar79 * fVar12 + fVar77 * fVar60);
                    /* try { // try from 00d67ca4 to 00e67cbb has its CatchHandler @ 00d67d34 */
                fVar60 = (1.0 - fVar18) - fVar12;
                    /* try { // try from 00d67cc4 to 00e67cdf has its CatchHandler @ 00d67d30 */
                pfVar37[-1] = fVar58 * fVar18 + fVar69 * fVar12 + fVar75 * fVar60;
                *pfVar37 = fVar65 * fVar18 + fVar74 * fVar12 + fVar68 * fVar60;
                pfVar37 = pfVar37 + 2;
                pfVar40 = pfVar40 + 2;
              } while (lVar29 < (int)uVar9);
            }
LAB_00d67ce0:
                    /* try { // try from 00d67ce0 to 00e67dab has its CatchHandler @ 00d67864 */
            lVar34 = (long)*piVar7;
            lVar33 = spUnsignedShortArray_setSize(piVar7,iVar26 * 3 + *piVar7 + -6);
            if (1 < (int)(iVar26 - 1U)) {
              lVar33 = *(long *)(lVar33 + 8);
              uVar36 = (ulong)(iVar26 - 3) + 1;
              if (uVar36 < 0x10) {
                uVar30 = 1;
                lVar27 = lVar34;
              }
              else {
                sVar54 = 5;
                sVar55 = 6;
                sVar56 = 7;
                sVar57 = 8;
                    /* catch() { ... } // from try @ 00d67af8 with catch @ 00d67d2c */
                sVar50 = 1;
                sVar51 = 2;
                sVar52 = 3;
                sVar53 = 4;
                    /* catch() { ... } // from try @ 00d67cc4 with catch @ 00d67d30 */
                uVar41 = uVar36 & 0x1fffffff0;
                    /* catch() { ... } // from try @ 00d67ca4 with catch @ 00d67d34 */
                    /* catch() { ... } // from try @ 00d67c88 with catch @ 00d67d38 */
                uVar30 = (uint)uVar41 | 1;
                    /* catch() { ... } // from try @ 00d67a48 with catch @ 00d67d3c */
                lVar27 = uVar41 * 3 + lVar34;
                    /* catch() { ... } // from try @ 00d67b54 with catch @ 00d67d40 */
                    /* catch() { ... } // from try @ 00d67c60 with catch @ 00d67d44 */
                    /* catch() { ... } // from try @ 00d678ec with catch @ 00d67d48
                       catch() { ... } // from try @ 00d67aa8 with catch @ 00d67d48
                       catch() { ... } // from try @ 00d67b10 with catch @ 00d67d48 */
                    /* catch() { ... } // from try @ 00d67970 with catch @ 00d67d4c */
                    /* catch() { ... } // from try @ 00d67978 with catch @ 00d67d50 */
                uVar39 = uVar41;
                psVar38 = (short *)(lVar33 + lVar34 * 2);
                do {
                  *psVar38 = sVar45;
                  psVar38[1] = sVar45 + sVar50;
                  psVar38[2] = sVar45 + sVar50 + 1;
                  psVar38[3] = sVar45;
                  psVar38[4] = sVar45 + sVar51;
                  psVar38[5] = sVar45 + sVar51 + 1;
                  psVar38[6] = sVar45;
                  psVar38[7] = sVar45 + sVar52;
                  psVar38[8] = sVar45 + sVar52 + 1;
                  psVar38[9] = sVar45;
                  psVar38[10] = sVar45 + sVar53;
                  psVar38[0xb] = sVar45 + sVar53 + 1;
                  psVar38[0xc] = sVar45;
                  psVar38[0xd] = sVar45 + sVar54;
                  psVar38[0xe] = sVar45 + sVar54 + 1;
                  psVar38[0xf] = sVar45;
                  psVar38[0x10] = sVar45 + sVar55;
                  psVar38[0x11] = sVar45 + sVar55 + 1;
                  psVar38[0x12] = sVar45;
                  psVar38[0x13] = sVar45 + sVar56;
                  psVar38[0x14] = sVar45 + sVar56 + 1;
                  psVar38[0x15] = sVar45;
                  psVar38[0x16] = sVar45 + sVar57;
                  psVar38[0x17] = sVar45 + sVar57 + 1;
                  uVar39 = uVar39 - 0x10;
                    /* catch() { ... } // from try @ 00d679d4 with catch @ 00d67d80
                       catch() { ... } // from try @ 00d67a7c with catch @ 00d67d80 */
                  psVar38[0x18] = sVar45;
                  psVar38[0x19] = sVar50 + sVar45 + 8;
                  psVar38[0x1a] = sVar50 + sVar45 + 9;
                  psVar38[0x1b] = sVar45;
                  psVar38[0x1c] = sVar51 + sVar45 + 8;
                  psVar38[0x1d] = sVar51 + sVar45 + 9;
                  psVar38[0x1e] = sVar45;
                  psVar38[0x1f] = sVar52 + sVar45 + 8;
                  psVar38[0x20] = sVar52 + sVar45 + 9;
                  psVar38[0x21] = sVar45;
                  psVar38[0x22] = sVar53 + sVar45 + 8;
                  psVar38[0x23] = sVar53 + sVar45 + 9;
                  psVar38[0x24] = sVar45;
                  psVar38[0x25] = sVar54 + sVar45 + 8;
                  psVar38[0x26] = sVar54 + sVar45 + 9;
                  psVar38[0x27] = sVar45;
                  psVar38[0x28] = sVar55 + sVar45 + 8;
                  psVar38[0x29] = sVar55 + sVar45 + 9;
                  psVar38[0x2a] = sVar45;
                  psVar38[0x2b] = sVar56 + sVar45 + 8;
                  psVar38[0x2c] = sVar56 + sVar45 + 9;
                  psVar38[0x2d] = sVar45;
                  psVar38[0x2e] = sVar57 + sVar45 + 8;
                  psVar38[0x2f] = sVar57 + sVar45 + 9;
                    /* catch() { ... } // from try @ 00d67954 with catch @ 00d67d84 */
                  sVar50 = sVar50 + 0x10;
                  sVar51 = sVar51 + 0x10;
                  sVar52 = sVar52 + 0x10;
                  sVar53 = sVar53 + 0x10;
                  sVar54 = sVar54 + 0x10;
                  sVar55 = sVar55 + 0x10;
                  sVar56 = sVar56 + 0x10;
                  sVar57 = sVar57 + 0x10;
                  psVar38 = psVar38 + 0x30;
                    /* catch() { ... } // from try @ 00d67b3c with catch @ 00d67d88 */
                    /* catch() { ... } // from try @ 00d67928 with catch @ 00d67d8c */
                } while (uVar39 != 0);
                    /* catch() { ... } // from try @ 00d67b84 with catch @ 00d67d90 */
                if (uVar36 == uVar41) goto LAB_00d67a48;
              }
              psVar38 = (short *)(lVar33 + lVar27 * 2 + 4);
              do {
                sVar50 = sVar45 + (short)uVar30;
                uVar30 = uVar30 + 1;
                psVar38[-1] = sVar50;
                    /* try { // try from 00d67dac to 00e67dcf has its CatchHandler @ 00d67dac
                       catch() { ... } // from try @ 00d67dac with catch @ 00d67dac
                       catch() { ... } // from try @ 00d67ddc with catch @ 00d67dac */
                psVar38[-2] = sVar45;
                *psVar38 = sVar50 + 1;
                psVar38 = psVar38 + 3;
              } while (iVar26 - 1U != uVar30);
            }
LAB_00d67a48:
                    /* try { // try from 00d67a48 to 00e67a53 has its CatchHandler @ 00d67d3c */
            iVar46 = iVar46 + (uVar9 >> 1);
          }
          uVar49 = uVar49 + 1;
        } while (uVar49 != uVar8);
      }
      local_1c0 = local_1c0 + 3;
    } while (local_1c0 < param_5);
  }
                    /* try { // try from 00d67dd0 to 00e67ddb has its CatchHandler @ 00d67e44 */
                    /* try { // try from 00d67ddc to 00e67e5f has its CatchHandler @ 00d67dac */
  return;
}

