
void edtaa3(double *param_1,double *param_2,double *param_3,uint param_4,uint param_5,
           undefined2 *param_6,undefined2 *param_7,double *param_8)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  short sVar8;
  short sVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  double *pdVar19;
  int iVar20;
  int iVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  double *pdVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  undefined2 *puVar30;
  long lVar31;
  ulong uVar32;
  double *pdVar33;
  undefined2 *puVar34;
  ulong uVar35;
  double *pdVar36;
  double *pdVar37;
  double *pdVar38;
  ulong uVar39;
  long lVar40;
  long lVar41;
  short *psVar42;
  long lVar43;
  short *psVar44;
  uint uVar45;
  ulong uVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  uint local_13c;
  undefined2 *local_138;
  short *local_130;
  ulong local_128;
  ulong local_108;
  ulong local_e0;
  ulong local_c8;
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  
  uVar2 = param_4 + 1;
  iVar13 = param_4 - 1;
  uVar10 = param_5 * param_4;
  uVar17 = -param_4;
  uVar27 = (ulong)param_4;
                    /* try { // try from 009f5804 to 00af580b has its CatchHandler @ 009f587c */
                    /* try { // try from 009f580c to 00af585f has its CatchHandler @ 009f4e58 */
  if (0 < (int)uVar10) {
    uVar28 = (ulong)uVar10;
    puVar30 = param_6;
    puVar34 = param_7;
    pdVar36 = param_1;
    pdVar37 = param_2;
    pdVar33 = param_3;
    pdVar38 = param_8;
    do {
      *puVar30 = 0;
      *puVar34 = 0;
      dVar47 = *pdVar36;
      dVar48 = 1000000.0;
                    /* try { // try from 009f5860 to 00af5867 has its CatchHandler @ 009f5958 */
      if ((0.0 < dVar47) && (dVar48 = 0.0, dVar47 < 1.0)) {
                    /* try { // try from 009f5868 to 00af586f has its CatchHandler @ 009f5948 */
        dVar49 = *pdVar37;
                    /* try { // try from 009f5870 to 00af5877 has its CatchHandler @ 009f58c0 */
                    /* try { // try from 009f5878 to 00af587b has its CatchHandler @ 009f58a0 */
                    /* catch() { ... } // from try @ 009f5804 with catch @ 009f587c
                       try { // try from 009f587c to 00af5bef has its CatchHandler @ 009f4e58 */
        if ((dVar49 == 0.0) || (dVar50 = *pdVar33, dVar50 == 0.0)) {
          dVar48 = 0.5 - dVar47;
        }
        else {
          dVar48 = SQRT(dVar49 * dVar49 + dVar50 * dVar50);
          if (0.0 < dVar48) {
            dVar49 = dVar49 / dVar48;
            dVar50 = dVar50 / dVar48;
          }
                    /* catch() { ... } // from try @ 009f53b4 with catch @ 009f58a0
                       catch() { ... } // from try @ 009f5878 with catch @ 009f58a0 */
          dVar49 = ABS(dVar49);
          dVar50 = ABS(dVar50);
          dVar48 = dVar50;
          if (dVar50 <= dVar49) {
            dVar48 = dVar49;
            dVar49 = dVar50;
          }
          dVar50 = (dVar49 * 0.5) / dVar48;
                    /* catch() { ... } // from try @ 009f532c with catch @ 009f58c0
                       catch() { ... } // from try @ 009f5870 with catch @ 009f58c0 */
          if (dVar50 <= dVar47) {
            if (1.0 - dVar50 <= dVar47) {
              dVar48 = SQRT((1.0 - dVar47) * dVar49 * (dVar48 + dVar48)) + (dVar48 + dVar49) * -0.5;
            }
            else {
              dVar48 = (0.5 - dVar47) * dVar48;
            }
          }
          else {
            dVar48 = (dVar48 + dVar49) * 0.5 - SQRT(dVar47 * dVar49 * (dVar48 + dVar48));
          }
        }
      }
      *pdVar38 = dVar48;
      pdVar33 = pdVar33 + 1;
      pdVar37 = pdVar37 + 1;
      pdVar36 = pdVar36 + 1;
      puVar34 = puVar34 + 1;
      uVar28 = uVar28 - 1;
      puVar30 = puVar30 + 1;
      pdVar38 = pdVar38 + 1;
    } while (uVar28 != 0);
  }
                    /* catch() { ... } // from try @ 009f5240 with catch @ 009f5948
                       catch() { ... } // from try @ 009f5868 with catch @ 009f5948 */
  iVar14 = param_4 - 2;
                    /* catch() { ... } // from try @ 009f51b4 with catch @ 009f5958
                       catch() { ... } // from try @ 009f5860 with catch @ 009f5958 */
                    /* catch() { ... } // from try @ 009f4ef8 with catch @ 009f5968
                       catch() { ... } // from try @ 009f5084 with catch @ 009f5968 */
  lVar31 = (long)(int)param_4;
                    /* catch() { ... } // from try @ 009f53fc with catch @ 009f5970 */
  iVar15 = param_5 - 2;
  uVar39 = (ulong)uVar17;
  uVar16 = param_4 - 3;
                    /* catch() { ... } // from try @ 009f5298 with catch @ 009f59ac */
  lVar4 = (ulong)uVar16 + 1;
  iVar11 = (param_5 - 1) * param_4;
  uVar32 = ~(ulong)uVar16;
  uVar12 = iVar15 * param_4;
  lVar5 = (-(ulong)(uVar12 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar12 << 1) + 2;
  uVar28 = -(ulong)(uVar17 >> 0x1f) & 0xfffffffe00000000 | uVar39 << 1;
  do {
    if ((int)param_5 < 2) {
      bVar18 = false;
    }
    else {
      lVar26 = 0;
      uVar29 = 1;
      bVar18 = false;
      local_e0 = (ulong)uVar2;
      iVar7 = param_4 * 2;
      uVar6 = param_4 * 2 - 2;
      do {
        local_108 = (ulong)uVar6;
        uVar35 = uVar29 * lVar31;
        dVar48 = param_8[uVar35];
        if (0.0 < dVar48) {
          uVar45 = (int)uVar35 - param_4;
          uVar22 = -(ulong)(uVar45 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar45 << 1;
          sVar8 = *(short *)((long)param_7 + uVar22);
          sVar9 = *(short *)((long)param_6 + uVar22);
          iVar21 = sVar8 + 1;
          dVar47 = (double)distaa3(param_1,param_2,param_3,param_4,(ulong)uVar45,(int)sVar9,
                                   (long)sVar8,(int)sVar9,iVar21);
          dVar48 = dVar48 + -0.001;
          if (dVar47 < dVar48) {
            dVar48 = dVar47 + -0.001;
            param_6[uVar35] = sVar9;
            param_7[uVar35] = (short)iVar21;
            param_8[uVar35] = dVar47;
            bVar18 = true;
          }
          lVar40 = uVar35 + (long)(int)(uVar17 + 1);
          sVar8 = param_6[lVar40];
          sVar9 = param_7[lVar40];
          dVar47 = (double)distaa3(param_1,param_2,param_3,param_4);
          if (dVar47 < dVar48) {
            param_6[uVar35] = sVar8 + -1;
            param_7[uVar35] = sVar9 + 1;
            param_8[uVar35] = dVar47;
            bVar18 = true;
          }
        }
        lVar40 = uVar35 + 1;
        pdVar33 = param_8 + lVar40;
        dVar48 = *pdVar33;
        if (1 < iVar13) {
          lVar43 = 0;
          iVar21 = (int)local_e0;
          uVar46 = (ulong)iVar21;
          lVar40 = lVar4 + uVar46;
          lVar24 = (long)(int)(uVar17 + 1) + uVar46;
                    /* catch() { ... } // from try @ 009f4e98 with catch @ 009f5bec */
                    /* try { // try from 009f5bf0 to 00af5bfb has its CatchHandler @ 009f5bfc */
                    /* catch() { ... } // from try @ 009f5bf0 with catch @ 009f5bfc */
                    /* try { // try from 009f5c00 to 00af5c03 has its CatchHandler @ 009f5c08 */
                    /* try { // try from 009f5c04 to 00af5c63 has its CatchHandler @ 009f4e58 */
                    /* catch() { ... } // from try @ 009f5c00 with catch @ 009f5c08 */
          pdVar37 = param_8 + uVar46 + 1;
          uVar22 = uVar46;
          do {
                    /* catch() { ... } // from try @ 009f4e94 with catch @ 009f5c0c */
            pdVar36 = pdVar37;
            if (dVar48 <= 0.0) {
              uVar35 = (ulong)(uint)(iVar21 + (int)lVar43);
            }
            else {
                    /* catch() { ... } // from try @ 009f4f08 with catch @ 009f5c20
                       catch() { ... } // from try @ 009f55f8 with catch @ 009f5c20 */
              uVar23 = -(uVar35 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar35 & 0xffffffff) << 1;
              sVar8 = *(short *)((long)param_6 + uVar23);
              sVar9 = *(short *)((long)param_7 + uVar23);
              iVar3 = sVar8 + 1;
              dVar47 = (double)distaa3(param_1,param_2,param_3,param_4,uVar35 & 0xffffffff,
                                       (long)sVar8,(int)sVar9,iVar3,(int)sVar9);
              dVar48 = dVar48 + -0.001;
              if (dVar47 < dVar48) {
                dVar48 = dVar47 + -0.001;
                param_6[uVar46 + lVar43] = (short)iVar3;
                    /* try { // try from 009f5c8c to 00af5d8f has its CatchHandler @ 009f5c8c
                       catch() { ... } // from try @ 009f5c8c with catch @ 009f5c8c
                       catch() { ... } // from try @ 009f5d98 with catch @ 009f5c8c
                       catch() { ... } // from try @ 009f5e50 with catch @ 009f5c8c
                       catch() { ... } // from try @ 009f5ecc with catch @ 009f5c8c */
                param_7[uVar46 + lVar43] = sVar9;
                *pdVar33 = dVar47;
                bVar18 = true;
              }
              uVar45 = (int)uVar35 - param_4;
              uVar35 = -(ulong)(uVar45 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar45 << 1;
              sVar8 = *(short *)((long)param_6 + uVar35);
              sVar9 = *(short *)((long)param_7 + uVar35);
              dVar47 = (double)distaa3(param_1,param_2,param_3,param_4);
              if (dVar47 < dVar48) {
                dVar48 = dVar47 + -0.001;
                param_6[uVar46 + lVar43] = sVar8 + 1;
                param_7[uVar46 + lVar43] = sVar9 + 1;
                *pdVar33 = dVar47;
                bVar18 = true;
              }
              lVar41 = lVar26 + lVar43 + 1;
              iVar20 = (int)lVar41;
              sVar8 = param_6[iVar20];
              iVar3 = (short)param_7[iVar20] + 1;
              dVar47 = (double)distaa3(param_1,param_2,param_3,param_4,lVar41,(int)sVar8,
                                       (long)(short)param_7[iVar20],(int)sVar8,iVar3);
              if (dVar47 < dVar48) {
                dVar48 = dVar47 + -0.001;
                param_6[uVar46 + lVar43] = sVar8;
                param_7[uVar46 + lVar43] = (short)iVar3;
                *pdVar33 = dVar47;
                bVar18 = true;
              }
                    /* try { // try from 009f5d90 to 00af5d97 has its CatchHandler @ 009f5f34 */
                    /* try { // try from 009f5d98 to 00af5e47 has its CatchHandler @ 009f5c8c */
              iVar20 = (short)param_6[lVar24 + lVar43] + -1;
              iVar3 = (short)param_7[lVar24 + lVar43] + 1;
              dVar47 = (double)distaa3(param_1,param_2,param_3,param_4,(int)lVar26 + (int)lVar43 + 2
                                       ,(long)(short)param_6[lVar24 + lVar43],
                                       (long)(short)param_7[lVar24 + lVar43],iVar20,iVar3);
              if (dVar47 < dVar48) {
                param_6[uVar46 + lVar43] = (short)iVar20;
                param_7[uVar46 + lVar43] = (short)iVar3;
                *pdVar33 = dVar47;
                bVar18 = true;
              }
              uVar35 = uVar22 & 0xffffffff;
            }
            dVar48 = (param_8 + uVar46 + 1)[lVar43];
            lVar43 = lVar43 + 1;
            uVar22 = uVar22 + 1;
            pdVar37 = pdVar36 + 1;
            pdVar33 = pdVar36;
          } while (iVar14 != (int)lVar43);
          uVar35 = (ulong)(uVar16 + iVar21);
          pdVar33 = param_8 + lVar4 + uVar46;
        }
        if (0.0 < dVar48) {
                    /* try { // try from 009f5e48 to 00af5e4f has its CatchHandler @ 009f5ecc */
          uVar22 = -(uVar35 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar35 & 0xffffffff) << 1;
          sVar8 = *(short *)((long)param_6 + uVar22);
                    /* try { // try from 009f5e50 to 00af5ebb has its CatchHandler @ 009f5c8c */
          sVar9 = *(short *)((long)param_7 + uVar22);
          iVar21 = sVar8 + 1;
          dVar47 = (double)distaa3(param_1,param_2,param_3,param_4,uVar35 & 0xffffffff,(long)sVar8,
                                   (int)sVar9,iVar21,(int)sVar9);
          dVar48 = dVar48 + -0.001;
          if (dVar47 < dVar48) {
            dVar48 = dVar47 + -0.001;
            param_6[lVar40] = (short)iVar21;
            param_7[lVar40] = sVar9;
            *pdVar33 = dVar47;
            bVar18 = true;
          }
          uVar45 = (int)uVar35 - param_4;
                    /* try { // try from 009f5ebc to 00af5ec3 has its CatchHandler @ 009f5f34 */
          uVar35 = -(ulong)(uVar45 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar45 << 1;
          sVar8 = *(short *)((long)param_6 + uVar35);
                    /* try { // try from 009f5ec4 to 00af5ecb has its CatchHandler @ 009f5ecc */
          sVar9 = *(short *)((long)param_7 + uVar35);
                    /* catch() { ... } // from try @ 009f5e48 with catch @ 009f5ecc
                       catch() { ... } // from try @ 009f5ec4 with catch @ 009f5ecc
                       try { // try from 009f5ecc to 00af5f4f has its CatchHandler @ 009f5c8c */
          dVar47 = (double)distaa3(param_1,param_2,param_3,param_4);
          if (dVar47 < dVar48) {
            dVar48 = dVar47 + -0.001;
            param_6[lVar40] = sVar8 + 1;
            param_7[lVar40] = sVar9 + 1;
            *pdVar33 = dVar47;
            bVar18 = true;
          }
          uVar45 = (int)lVar40 - param_4;
          uVar35 = -(ulong)(uVar45 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar45 << 1;
          sVar8 = *(short *)((long)param_7 + uVar35);
          sVar9 = *(short *)((long)param_6 + uVar35);
          iVar21 = sVar8 + 1;
                    /* catch() { ... } // from try @ 009f5d90 with catch @ 009f5f34
                       catch() { ... } // from try @ 009f5ebc with catch @ 009f5f34 */
          dVar47 = (double)distaa3(param_1,param_2,param_3,param_4,(ulong)uVar45,(int)sVar9,
                                   (long)sVar8,(int)sVar9,iVar21);
          if (dVar47 < dVar48) {
            param_6[lVar40] = sVar9;
            param_7[lVar40] = (short)iVar21;
            *pdVar33 = dVar47;
            bVar18 = true;
          }
        }
        if (-1 < iVar14) {
          iVar21 = -1;
          uVar35 = -(ulong)(uVar6 >> 0x1f) & 0xfffffffe00000000 | local_108 << 1;
          pdVar33 = param_8 + (int)uVar6;
          psVar42 = (short *)((long)param_6 + uVar35 + 2);
          psVar44 = (short *)((long)param_7 + uVar35 + 2);
          do {
            dVar48 = *pdVar33;
            if (0.0 < dVar48) {
              sVar8 = *psVar44;
              iVar3 = *psVar42 + -1;
              dVar47 = (double)distaa3(param_1,param_2,param_3,param_4,iVar7 + iVar21,(long)*psVar42
                                       ,(int)sVar8,iVar3,(int)sVar8);
              if (dVar47 < dVar48 + -0.001) {
                psVar42[-1] = (short)iVar3;
                psVar44[-1] = sVar8;
                *pdVar33 = dVar47;
                bVar18 = true;
              }
            }
            iVar21 = iVar21 + -1;
            pdVar33 = pdVar33 + -1;
            psVar42 = psVar42 + -1;
            psVar44 = psVar44 + -1;
          } while (0 < (int)(param_4 + iVar21));
        }
        local_e0 = local_e0 + uVar27;
        uVar29 = uVar29 + 1;
        uVar6 = uVar6 + param_4;
                    /* try { // try from 009f6060 to 00af6063 has its CatchHandler @ 009f606c */
        lVar26 = lVar26 + uVar27;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009f6060 with catch @ 009f606c
                        */
        iVar7 = iVar7 + param_4;
      } while (uVar29 != param_5);
    }
    lVar26 = (long)iVar15;
    pdVar33 = param_8 + (int)uVar12;
    local_13c = uVar12;
    local_138 = (undefined2 *)((long)param_6 + lVar5);
    local_130 = (short *)((long)param_7 + lVar5);
    local_c8 = (ulong)(iVar11 - 1);
    local_c0 = (ulong)(uVar10 - 1);
    local_b8 = (ulong)(uVar10 - 2);
    local_b0 = (ulong)(uVar10 - 3);
    uVar6 = iVar11 - 2;
    if (-1 < iVar15) {
      do {
        local_128 = (ulong)uVar6;
        lVar40 = lVar31 + lVar26 * lVar31;
        lVar43 = lVar40 + -1;
        dVar48 = param_8[lVar43];
        if (0.0 < dVar48) {
          lVar24 = lVar43 + lVar31;
          sVar8 = param_6[lVar24];
          iVar7 = (short)param_7[lVar24] + -1;
          dVar47 = (double)distaa3(param_1,param_2,param_3,param_4,lVar24,(int)sVar8,
                                   (long)(short)param_7[lVar24],(int)sVar8,iVar7);
          dVar48 = dVar48 + -0.001;
          if (dVar47 < dVar48) {
            param_6[lVar43] = sVar8;
            dVar48 = dVar47 + -0.001;
            param_7[lVar43] = (short)iVar7;
                    /* try { // try from 009f6158 to 00af6183 has its CatchHandler @ 009f6158
                       catch() { ... } // from try @ 009f6158 with catch @ 009f6158
                       catch() { ... } // from try @ 009f6188 with catch @ 009f6158 */
            param_8[lVar43] = dVar47;
            bVar18 = true;
          }
          lVar24 = lVar43 + iVar13;
          sVar8 = param_6[lVar24];
          sVar9 = param_7[lVar24];
                    /* try { // try from 009f6184 to 00af6187 has its CatchHandler @ 009f6198 */
                    /* try { // try from 009f6188 to 00af61ab has its CatchHandler @ 009f6158 */
                    /* catch() { ... } // from try @ 009f6184 with catch @ 009f6198 */
          dVar47 = (double)distaa3(param_1,param_2,param_3,param_4);
          if (dVar47 < dVar48) {
            param_6[lVar43] = sVar8 + 1;
            param_7[lVar43] = sVar9 + -1;
            param_8[lVar43] = dVar47;
            bVar18 = true;
          }
        }
        lVar40 = lVar40 + -2;
        pdVar37 = param_8 + lVar40;
        dVar48 = *pdVar37;
        pdVar36 = pdVar37;
        if (0 < iVar14) {
          uVar29 = -(ulong)(uVar6 >> 0x1f) & 0xfffffffe00000000 | local_128 << 1;
                    /* try { // try from 009f61f8 to 00af623b has its CatchHandler @ 009f61f8
                       catch() { ... } // from try @ 009f61f8 with catch @ 009f61f8
                       catch() { ... } // from try @ 009f661c with catch @ 009f61f8
                       catch() { ... } // from try @ 009f6730 with catch @ 009f61f8 */
          psVar42 = (short *)((long)param_6 + uVar29);
          psVar44 = (short *)((long)param_7 + uVar29);
          lVar24 = (long)(int)uVar6;
          uVar29 = -(ulong)(uVar6 >> 0x1f) & 0xfffffff800000000 | local_128 << 3;
          pdVar38 = (double *)((long)param_8 + (uVar29 - 8));
          lVar43 = iVar13 + lVar24;
          lVar40 = uVar32 + lVar24;
                    /* try { // try from 009f623c to 00af6243 has its CatchHandler @ 009f68c0 */
                    /* try { // try from 009f624c to 00af625b has its CatchHandler @ 009f68cc */
                    /* try { // try from 009f625c to 00af6263 has its CatchHandler @ 009f68b0 */
          lVar41 = 0;
                    /* try { // try from 009f6270 to 00af62a3 has its CatchHandler @ 009f68d8 */
          pdVar36 = (double *)((long)param_8 + uVar29 + uVar32 * 8);
          pdVar19 = pdVar38;
          do {
            pdVar25 = pdVar19;
            if (0.0 < dVar48) {
              sVar8 = psVar44[1];
              iVar7 = psVar42[1] + -1;
              iVar21 = (int)lVar41;
                    /* try { // try from 009f62b0 to 00af62b7 has its CatchHandler @ 009f68a8 */
                    /* try { // try from 009f62b8 to 00af62cb has its CatchHandler @ 009f6898 */
              dVar47 = (double)distaa3(param_1,param_2,param_3,param_4,(int)local_c8 + iVar21,
                                       (long)psVar42[1],(int)sVar8,iVar7,(int)sVar8);
              dVar48 = dVar48 + -0.001;
              if (dVar47 < dVar48) {
                *psVar42 = (short)iVar7;
                dVar48 = dVar47 + -0.001;
                *psVar44 = sVar8;
                *pdVar37 = dVar47;
                    /* try { // try from 009f62e0 to 00af62e7 has its CatchHandler @ 009f6890 */
                bVar18 = true;
              }
                    /* try { // try from 009f62e8 to 00af62fb has its CatchHandler @ 009f688c */
              iVar7 = (short)param_6[(int)uVar2 + lVar24 + lVar41] + -1;
                    /* try { // try from 009f6310 to 00af6317 has its CatchHandler @ 009f6884 */
              iVar3 = (short)param_7[(int)uVar2 + lVar24 + lVar41] + -1;
                    /* try { // try from 009f6318 to 00af632b has its CatchHandler @ 009f6880 */
              dVar47 = (double)distaa3(param_1,param_2,param_3,param_4,(int)local_c0 + iVar21,
                                       (long)(short)param_6[(int)uVar2 + lVar24 + lVar41],
                                       (long)(short)param_7[(int)uVar2 + lVar24 + lVar41],iVar7,
                                       iVar3);
              if (dVar47 < dVar48) {
                dVar48 = dVar47 + -0.001;
                *psVar42 = (short)iVar7;
                *psVar44 = (short)iVar3;
                *pdVar37 = dVar47;
                bVar18 = true;
              }
                    /* try { // try from 009f6340 to 00af6347 has its CatchHandler @ 009f6878 */
                    /* try { // try from 009f6348 to 00af635b has its CatchHandler @ 009f6874 */
              iVar7 = (short)param_7[lVar31 + lVar24 + lVar41] + -1;
              sVar8 = param_6[lVar31 + lVar24 + lVar41];
                    /* try { // try from 009f6370 to 00af6377 has its CatchHandler @ 009f686c */
              dVar47 = (double)distaa3(param_1,param_2,param_3,param_4,(int)local_b8 + iVar21,
                                       (int)sVar8,(long)(short)param_7[lVar31 + lVar24 + lVar41],
                                       (int)sVar8,iVar7);
                    /* try { // try from 009f6378 to 00af638b has its CatchHandler @ 009f6868 */
              if (dVar47 < dVar48) {
                dVar48 = dVar47 + -0.001;
                *psVar42 = sVar8;
                *psVar44 = (short)iVar7;
                *pdVar37 = dVar47;
                bVar18 = true;
              }
                    /* try { // try from 009f63a0 to 00af63a7 has its CatchHandler @ 009f6860 */
                    /* try { // try from 009f63a8 to 00af63bb has its CatchHandler @ 009f685c */
              iVar7 = (short)param_6[lVar43 + lVar41] + 1;
              iVar3 = (short)param_7[lVar43 + lVar41] + -1;
                    /* try { // try from 009f63d0 to 00af63d7 has its CatchHandler @ 009f6854 */
              dVar47 = (double)distaa3(param_1,param_2,param_3,param_4,(int)local_b0 + iVar21,
                                       (long)(short)param_6[lVar43 + lVar41],
                                       (long)(short)param_7[lVar43 + lVar41],iVar7,iVar3);
                    /* try { // try from 009f63d8 to 00af63eb has its CatchHandler @ 009f6850 */
              if (dVar47 < dVar48) {
                *psVar42 = (short)iVar7;
                *psVar44 = (short)iVar3;
                *pdVar37 = dVar47;
                bVar18 = true;
              }
            }
            dVar48 = pdVar38[lVar41];
            lVar41 = lVar41 + -1;
                    /* try { // try from 009f6400 to 00af640f has its CatchHandler @ 009f68b8 */
            psVar42 = psVar42 + -1;
            psVar44 = psVar44 + -1;
                    /* try { // try from 009f6414 to 00af6423 has its CatchHandler @ 009f67f8 */
            pdVar19 = pdVar25 + -1;
            pdVar37 = pdVar25;
          } while (0 < iVar14 + (int)lVar41);
        }
                    /* try { // try from 009f6424 to 00af6437 has its CatchHandler @ 009f67e8 */
        if (0.0 < dVar48) {
          iVar21 = (int)lVar40;
          uVar45 = iVar21 + 1;
          uVar29 = -(ulong)(uVar45 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar45 << 1;
          sVar8 = *(short *)((long)param_6 + uVar29);
          sVar9 = *(short *)((long)param_7 + uVar29);
          iVar7 = sVar8 + -1;
          dVar47 = (double)distaa3(param_1,param_2,param_3,param_4,(ulong)uVar45,(long)sVar8,
                                   (int)sVar9,iVar7,(int)sVar9);
                    /* try { // try from 009f6468 to 00af6477 has its CatchHandler @ 009f6918 */
          dVar48 = dVar48 + -0.001;
          if (dVar47 < dVar48) {
                    /* try { // try from 009f6480 to 00af6487 has its CatchHandler @ 009f68e0 */
            dVar48 = dVar47 + -0.001;
            param_6[lVar40] = (short)iVar7;
                    /* try { // try from 009f6488 to 00af6497 has its CatchHandler @ 009f68e8 */
            param_7[lVar40] = sVar9;
            *pdVar36 = dVar47;
            bVar18 = true;
          }
                    /* try { // try from 009f64a8 to 00af64af has its CatchHandler @ 009f68ec */
          uVar29 = -(ulong)(uVar2 + iVar21 >> 0x1f) & 0xfffffffe00000000 |
                   (ulong)(uVar2 + iVar21) << 1;
                    /* try { // try from 009f64b0 to 00af64bf has its CatchHandler @ 009f68f4 */
          sVar8 = *(short *)((long)param_6 + uVar29);
          sVar9 = *(short *)((long)param_7 + uVar29);
                    /* try { // try from 009f64cc to 00af64db has its CatchHandler @ 009f68f8 */
          dVar47 = (double)distaa3(param_1,param_2,param_3,param_4);
          if (dVar47 < dVar48) {
                    /* try { // try from 009f64dc to 00af64eb has its CatchHandler @ 009f6900 */
            dVar48 = dVar47 + -0.001;
            param_6[lVar40] = sVar8 + -1;
            param_7[lVar40] = sVar9 + -1;
            *pdVar36 = dVar47;
            bVar18 = true;
          }
          uVar45 = iVar21 + param_4;
          uVar29 = -(ulong)(uVar45 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar45 << 1;
          sVar8 = *(short *)((long)param_7 + uVar29);
          sVar9 = *(short *)((long)param_6 + uVar29);
          iVar7 = sVar8 + -1;
          dVar47 = (double)distaa3(param_1,param_2,param_3,param_4,(ulong)uVar45,(int)sVar9,
                                   (long)sVar8,(int)sVar9,iVar7);
                    /* try { // try from 009f6528 to 00af652f has its CatchHandler @ 009f6824 */
                    /* try { // try from 009f6530 to 00af6543 has its CatchHandler @ 009f6820 */
          if (dVar47 < dVar48) {
            param_6[lVar40] = sVar9;
            param_7[lVar40] = (short)iVar7;
            *pdVar36 = dVar47;
            bVar18 = true;
          }
        }
                    /* try { // try from 009f6558 to 00af655f has its CatchHandler @ 009f6818 */
        if (1 < (int)param_4) {
                    /* try { // try from 009f6560 to 00af6573 has its CatchHandler @ 009f6814 */
          lVar40 = 1;
          psVar42 = local_130;
          puVar34 = local_138;
          uVar45 = local_13c;
          do {
            dVar48 = pdVar33[lVar40];
            if (0.0 < dVar48) {
              sVar8 = psVar42[-1];
                    /* try { // try from 009f6588 to 00af658f has its CatchHandler @ 009f680c */
                    /* try { // try from 009f6590 to 00af65a3 has its CatchHandler @ 009f6808 */
              iVar7 = (short)puVar34[-1] + 1;
                    /* try { // try from 009f65ac to 00af65bb has its CatchHandler @ 009f6800 */
              dVar47 = (double)distaa3(param_1,param_2,param_3,uVar27,uVar45,
                                       (long)(short)puVar34[-1],(int)sVar8,iVar7,(int)sVar8);
              if (dVar47 < dVar48 + -0.001) {
                *puVar34 = (short)iVar7;
                    /* try { // try from 009f65c8 to 00af65cf has its CatchHandler @ 009f67fc */
                *psVar42 = sVar8;
                pdVar33[lVar40] = dVar47;
                bVar18 = true;
              }
            }
            lVar40 = lVar40 + 1;
            uVar45 = uVar45 + 1;
            puVar34 = puVar34 + 1;
            psVar42 = psVar42 + 1;
          } while (param_4 != (uint)lVar40);
        }
                    /* try { // try from 009f6610 to 00af661b has its CatchHandler @ 009f67fc */
                    /* try { // try from 009f661c to 00af668b has its CatchHandler @ 009f61f8 */
        bVar1 = 0 < lVar26;
        lVar26 = lVar26 + -1;
        pdVar33 = (double *)
                  ((long)pdVar33 + (-(ulong)(uVar17 >> 0x1f) & 0xfffffff800000000 | uVar39 << 3));
        local_13c = local_13c - param_4;
        local_138 = (undefined2 *)((long)local_138 + uVar28);
        local_130 = (short *)((long)local_130 + uVar28);
        local_c8 = local_c8 + uVar39;
        local_c0 = local_c0 + uVar39;
        local_b8 = local_b8 + uVar39;
        local_b0 = local_b0 + uVar39;
        uVar6 = uVar6 - param_4;
      } while (bVar1);
    }
                    /* try { // try from 009f668c to 00af669b has its CatchHandler @ 009f68c8 */
  } while (bVar18);
                    /* try { // try from 009f66a0 to 00af66ab has its CatchHandler @ 009f6844 */
                    /* try { // try from 009f66ac to 00af66bf has its CatchHandler @ 009f6834 */
  return;
}

