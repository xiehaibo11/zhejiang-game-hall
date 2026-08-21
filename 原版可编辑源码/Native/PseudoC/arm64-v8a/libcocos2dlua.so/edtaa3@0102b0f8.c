
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
  int iVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  bool bVar21;
  int iVar22;
  int iVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  double *pdVar27;
  ulong uVar28;
  ulong uVar29;
  double *pdVar30;
  undefined2 *puVar31;
  long lVar32;
  undefined2 *puVar33;
  double *pdVar34;
  double *pdVar35;
  short *psVar36;
  short *psVar37;
  long lVar38;
  long lVar39;
  int iVar40;
  ulong uVar41;
  ulong uVar42;
  short *psVar43;
  ulong uVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  ulong local_108;
  ulong local_e0;
  
  uVar2 = param_4 + 1;
  uVar10 = param_5 * param_4;
                    /* try { // try from 0102b130 to 0112b137 has its CatchHandler @ 0102b1ac */
                    /* try { // try from 0102b138 to 0112b1fb has its CatchHandler @ 0102aefc */
  uVar41 = (ulong)param_4;
  iVar19 = -param_4;
  iVar13 = param_4 - 1;
  if (0 < (int)uVar10) {
    uVar28 = (ulong)uVar10;
    puVar31 = param_6;
    puVar33 = param_7;
    pdVar27 = param_1;
    pdVar34 = param_2;
    pdVar30 = param_3;
    pdVar35 = param_8;
    do {
      *puVar31 = 0;
      *puVar33 = 0;
      dVar46 = *pdVar27;
                    /* catch() { ... } // from try @ 0102b0a4 with catch @ 0102b1bc */
      if (dVar46 <= 0.0) {
        dVar45 = 1000000.0;
      }
      else {
        dVar45 = 0.0;
        if (dVar46 < 1.0) {
          dVar47 = *pdVar34;
          dVar45 = 0.5 - dVar46;
                    /* catch() { ... } // from try @ 0102b03c with catch @ 0102b1d8 */
          if ((dVar47 != 0.0) && (dVar48 = *pdVar30, dVar48 != 0.0)) {
            dVar49 = SQRT(dVar47 * dVar47 + dVar48 * dVar48);
                    /* try { // try from 0102b1fc to 0112b337 has its CatchHandler @ 0102b1fc
                       catch() { ... } // from try @ 0102b1fc with catch @ 0102b1fc
                       catch() { ... } // from try @ 0102b354 with catch @ 0102b1fc */
            if (0.0 < dVar49) {
              dVar47 = dVar47 / dVar49;
              dVar48 = dVar48 / dVar49;
            }
            dVar47 = ABS(dVar47);
            dVar48 = ABS(dVar48);
            dVar49 = dVar48;
            if (dVar48 <= dVar47) {
              dVar49 = dVar47;
              dVar47 = dVar48;
            }
            dVar48 = (dVar47 * 0.5) / dVar49;
            if (dVar48 <= dVar46) {
              if (1.0 - dVar48 <= dVar46) {
                dVar45 = SQRT((1.0 - dVar46) * dVar47 * (dVar49 + dVar49)) +
                         (dVar49 + dVar47) * -0.5;
              }
              else {
                dVar45 = dVar45 * dVar49;
              }
            }
            else {
              dVar45 = (dVar49 + dVar47) * 0.5 - SQRT(dVar46 * dVar47 * (dVar49 + dVar49));
            }
          }
        }
      }
      *pdVar35 = dVar45;
      pdVar30 = pdVar30 + 1;
      pdVar34 = pdVar34 + 1;
      pdVar27 = pdVar27 + 1;
      puVar33 = puVar33 + 1;
      uVar28 = uVar28 - 1;
      puVar31 = puVar31 + 1;
      pdVar35 = pdVar35 + 1;
                    /* catch() { ... } // from try @ 0102b130 with catch @ 0102b1ac */
    } while (uVar28 != 0);
  }
  lVar32 = (long)(int)param_4;
  iVar14 = param_4 - 2;
  iVar15 = param_5 - 2;
  iVar11 = (param_5 - 1) * param_4;
  uVar12 = -param_4;
  lVar4 = (long)(int)(iVar15 * param_4) + 1;
                    /* try { // try from 0102b338 to 0112b353 has its CatchHandler @ 0102b3a4 */
  uVar28 = -(ulong)(uVar12 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar12 << 1;
                    /* try { // try from 0102b354 to 0112b3bf has its CatchHandler @ 0102b1fc */
  do {
    if ((int)param_5 < 2) {
      bVar21 = false;
    }
    else {
                    /* catch() { ... } // from try @ 0102b338 with catch @ 0102b3a4 */
      lVar26 = 0;
      bVar21 = false;
      uVar29 = 1;
      local_e0 = (ulong)uVar2;
      iVar7 = param_4 * 2;
      uVar6 = param_4 * 2 - 2;
      do {
        local_108 = (ulong)uVar6;
        uVar44 = uVar29 * lVar32;
        dVar46 = param_8[uVar44];
        if (0.0 < dVar46) {
          uVar18 = (int)uVar44 - param_4;
          uVar24 = -(ulong)(uVar18 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar18 << 1;
          sVar8 = *(short *)((long)param_7 + uVar24);
          sVar9 = *(short *)((long)param_6 + uVar24);
          iVar23 = sVar8 + 1;
          dVar45 = (double)distaa3(param_1,param_2,param_3,uVar41,(ulong)uVar18,(int)sVar9,
                                   (long)sVar8,(int)sVar9,iVar23);
          dVar46 = dVar46 + -0.001;
          if (dVar45 < dVar46) {
            param_6[uVar44] = sVar9;
            dVar46 = dVar45 + -0.001;
            param_7[uVar44] = (short)iVar23;
            param_8[uVar44] = dVar45;
            bVar21 = true;
          }
          lVar38 = uVar44 + (long)(iVar19 + 1);
          sVar8 = param_6[lVar38];
          sVar9 = param_7[lVar38];
          dVar45 = (double)distaa3(param_1,param_2,param_3,uVar41);
          if (dVar45 < dVar46) {
            bVar21 = true;
            param_6[uVar44] = sVar8 + -1;
            param_7[uVar44] = sVar9 + 1;
            param_8[uVar44] = dVar45;
          }
        }
        lVar38 = uVar44 + 1;
        pdVar30 = param_8 + lVar38;
        dVar46 = *pdVar30;
        if (1 < iVar13) {
          lVar38 = 0;
          iVar23 = (int)local_e0;
          uVar42 = (ulong)iVar23;
          lVar39 = (long)(iVar19 + 1) + uVar42;
          pdVar34 = param_8 + iVar23;
          pdVar27 = pdVar34;
          uVar24 = uVar42;
          if (0.0 < dVar46) goto LAB_0102b5a4;
          do {
            uVar44 = (ulong)(uint)(iVar23 + (int)lVar38);
            while( true ) {
              dVar46 = pdVar34[lVar38 + 1];
              pdVar27 = pdVar27 + 1;
              lVar38 = lVar38 + 1;
              uVar24 = uVar24 + 1;
              pdVar30 = pdVar27;
              if (iVar14 == (int)lVar38) {
                lVar38 = uVar42 + lVar38;
                goto joined_r0x0102b79c;
              }
              if (dVar46 <= 0.0) break;
LAB_0102b5a4:
              uVar25 = -(uVar44 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar44 & 0xffffffff) << 1;
              sVar8 = *(short *)((long)param_7 + uVar25);
              sVar9 = *(short *)((long)param_6 + uVar25);
              iVar3 = sVar9 + 1;
              dVar45 = (double)distaa3(param_1,param_2,param_3,uVar41,uVar44 & 0xffffffff,
                                       (long)sVar9,(int)sVar8,iVar3,(int)sVar8);
              dVar46 = dVar46 + -0.001;
              if (dVar45 < dVar46) {
                dVar46 = dVar45 + -0.001;
                param_6[uVar42 + lVar38] = (short)iVar3;
                param_7[uVar42 + lVar38] = sVar8;
                *pdVar30 = dVar45;
                bVar21 = true;
              }
              uVar18 = (int)uVar44 - param_4;
              uVar44 = -(ulong)(uVar18 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar18 << 1;
              sVar8 = *(short *)((long)param_6 + uVar44);
              sVar9 = *(short *)((long)param_7 + uVar44);
              dVar45 = (double)distaa3(param_1,param_2,param_3,uVar41);
              if (dVar45 < dVar46) {
                dVar46 = dVar45 + -0.001;
                param_6[uVar42 + lVar38] = sVar8 + 1;
                param_7[uVar42 + lVar38] = sVar9 + 1;
                *pdVar30 = dVar45;
                bVar21 = true;
              }
              lVar5 = lVar26 + lVar38 + 1;
              iVar22 = (int)lVar5;
              sVar8 = param_6[iVar22];
              iVar3 = (short)param_7[iVar22] + 1;
              dVar45 = (double)distaa3(param_1,param_2,param_3,uVar41,lVar5,(int)sVar8,
                                       (long)(short)param_7[iVar22],(int)sVar8,iVar3);
              if (dVar45 < dVar46) {
                dVar46 = dVar45 + -0.001;
                param_6[uVar42 + lVar38] = sVar8;
                param_7[uVar42 + lVar38] = (short)iVar3;
                *pdVar30 = dVar45;
                bVar21 = true;
              }
              iVar22 = (short)param_6[lVar39 + lVar38] + -1;
              iVar3 = (short)param_7[lVar39 + lVar38] + 1;
              dVar45 = (double)distaa3(param_1,param_2,param_3,uVar41,(int)lVar26 + (int)lVar38 + 2,
                                       (long)(short)param_6[lVar39 + lVar38],
                                       (long)(short)param_7[lVar39 + lVar38],iVar22,iVar3);
              if (dVar45 < dVar46) {
                param_6[uVar42 + lVar38] = (short)iVar22;
                param_7[uVar42 + lVar38] = (short)iVar3;
                bVar21 = true;
                *pdVar30 = dVar45;
              }
              uVar44 = uVar24 & 0xffffffff;
            }
          } while( true );
        }
joined_r0x0102b79c:
        if (0.0 < dVar46) {
          uVar24 = -(uVar44 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar44 & 0xffffffff) << 1;
          sVar8 = *(short *)((long)param_6 + uVar24);
          sVar9 = *(short *)((long)param_7 + uVar24);
          iVar23 = sVar8 + 1;
          dVar45 = (double)distaa3(param_1,param_2,param_3,uVar41,uVar44 & 0xffffffff,(long)sVar8,
                                   (int)sVar9,iVar23,(int)sVar9);
          dVar46 = dVar46 + -0.001;
          if (dVar45 < dVar46) {
            param_6[lVar38] = (short)iVar23;
            param_7[lVar38] = sVar9;
            dVar46 = dVar45 + -0.001;
            *pdVar30 = dVar45;
            bVar21 = true;
          }
          uVar18 = (int)uVar44 - param_4;
          uVar44 = -(ulong)(uVar18 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar18 << 1;
          sVar8 = *(short *)((long)param_6 + uVar44);
          sVar9 = *(short *)((long)param_7 + uVar44);
          dVar45 = (double)distaa3(param_1,param_2,param_3,uVar41);
          if (dVar45 < dVar46) {
            param_6[lVar38] = sVar8 + 1;
            param_7[lVar38] = sVar9 + 1;
            dVar46 = dVar45 + -0.001;
            *pdVar30 = dVar45;
            bVar21 = true;
          }
          uVar18 = (int)lVar38 - param_4;
          uVar44 = -(ulong)(uVar18 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar18 << 1;
          sVar8 = *(short *)((long)param_7 + uVar44);
          sVar9 = *(short *)((long)param_6 + uVar44);
          iVar23 = sVar8 + 1;
          dVar45 = (double)distaa3(param_1,param_2,param_3,uVar41,(ulong)uVar18,(int)sVar9,
                                   (long)sVar8,(int)sVar9,iVar23);
          if (dVar45 < dVar46) {
            param_6[lVar38] = sVar9;
            bVar21 = true;
            param_7[lVar38] = (short)iVar23;
            *pdVar30 = dVar45;
          }
        }
        if (-1 < iVar14) {
          iVar23 = -1;
          uVar44 = -(ulong)(uVar6 >> 0x1f) & 0xfffffffe00000000 | local_108 << 1;
          pdVar30 = param_8 + (int)uVar6;
          psVar36 = (short *)((long)param_6 + uVar44 + 2);
          psVar37 = (short *)((long)param_7 + uVar44 + 2);
          do {
            dVar46 = *pdVar30;
            if (0.0 < dVar46) {
              sVar8 = *psVar37;
              iVar3 = *psVar36 + -1;
              dVar45 = (double)distaa3(param_1,param_2,param_3,uVar41,iVar7 + iVar23,(long)*psVar36,
                                       (int)sVar8,iVar3,(int)sVar8);
              if (dVar45 < dVar46 + -0.001) {
                bVar21 = true;
                psVar36[-1] = (short)iVar3;
                psVar37[-1] = sVar8;
                *pdVar30 = dVar45;
              }
            }
            iVar23 = iVar23 + -1;
            pdVar30 = pdVar30 + -1;
            psVar36 = psVar36 + -1;
            psVar37 = psVar37 + -1;
          } while (0 < (int)(param_4 + iVar23));
        }
        local_e0 = local_e0 + uVar41;
        uVar29 = uVar29 + 1;
        uVar6 = uVar6 + param_4;
        lVar26 = lVar26 + uVar41;
        iVar7 = iVar7 + param_4;
      } while (uVar29 != param_5);
    }
    lVar26 = (long)iVar15;
    pdVar30 = param_8 + lVar4;
    psVar36 = param_7 + lVar4;
    puVar33 = param_6 + lVar4;
    uVar6 = iVar11 - 2;
    iVar7 = uVar10 - 1;
    iVar23 = iVar15 * param_4;
    iVar3 = uVar10 - 3;
    iVar22 = uVar10 - 2;
    iVar20 = iVar11 + -1;
    if (-1 < iVar15) {
      do {
        lVar38 = lVar32 + lVar26 * lVar32;
        lVar39 = lVar38 + -1;
        dVar46 = param_8[lVar39];
        if (0.0 < dVar46) {
          lVar5 = lVar39 + lVar32;
          sVar8 = param_6[lVar5];
          iVar16 = (short)param_7[lVar5] + -1;
          dVar45 = (double)distaa3(param_1,param_2,param_3,uVar41,lVar5,(int)sVar8,
                                   (long)(short)param_7[lVar5],(int)sVar8,iVar16);
          dVar46 = dVar46 + -0.001;
          if (dVar45 < dVar46) {
            dVar46 = dVar45 + -0.001;
            bVar21 = true;
            param_6[lVar39] = sVar8;
            param_7[lVar39] = (short)iVar16;
            param_8[lVar39] = dVar45;
          }
          lVar5 = lVar39 + iVar13;
          sVar8 = param_6[lVar5];
          sVar9 = param_7[lVar5];
          dVar45 = (double)distaa3(param_1,param_2,param_3,uVar41);
          if (dVar45 < dVar46) {
            bVar21 = true;
            param_6[lVar39] = sVar8 + 1;
            param_7[lVar39] = sVar9 + -1;
            param_8[lVar39] = dVar45;
          }
        }
        lVar38 = lVar38 + -2;
        pdVar34 = param_8 + lVar38;
        dVar46 = *pdVar34;
        lVar39 = (long)(int)uVar6;
        if (0 < iVar14) {
          lVar5 = iVar13 + lVar39;
          uVar29 = -(ulong)(uVar6 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar6 << 1;
          psVar37 = (short *)((long)param_6 + uVar29);
          psVar43 = (short *)((long)param_7 + uVar29);
          lVar38 = 0;
          pdVar27 = param_8 + (int)uVar6;
          do {
            if (0.0 < dVar46) {
              sVar8 = psVar43[1];
              iVar16 = psVar37[1] + -1;
              iVar40 = (int)lVar38;
              dVar45 = (double)distaa3(param_1,param_2,param_3,uVar41,iVar20 + iVar40,
                                       (long)psVar37[1],(int)sVar8,iVar16,(int)sVar8);
              dVar46 = dVar46 + -0.001;
              if (dVar45 < dVar46) {
                *psVar37 = (short)iVar16;
                dVar46 = dVar45 + -0.001;
                *psVar43 = sVar8;
                *pdVar34 = dVar45;
                bVar21 = true;
              }
              iVar16 = (short)param_6[(int)uVar2 + lVar39 + lVar38] + -1;
              iVar17 = (short)param_7[(int)uVar2 + lVar39 + lVar38] + -1;
              dVar45 = (double)distaa3(param_1,param_2,param_3,uVar41,iVar7 + iVar40,
                                       (long)(short)param_6[(int)uVar2 + lVar39 + lVar38],
                                       (long)(short)param_7[(int)uVar2 + lVar39 + lVar38],iVar16,
                                       iVar17);
              if (dVar45 < dVar46) {
                dVar46 = dVar45 + -0.001;
                *psVar37 = (short)iVar16;
                *psVar43 = (short)iVar17;
                *pdVar34 = dVar45;
                bVar21 = true;
              }
              iVar16 = (short)param_7[lVar32 + lVar39 + lVar38] + -1;
              sVar8 = param_6[lVar32 + lVar39 + lVar38];
              dVar45 = (double)distaa3(param_1,param_2,param_3,uVar41,iVar22 + iVar40,(int)sVar8,
                                       (long)(short)param_7[lVar32 + lVar39 + lVar38],(int)sVar8,
                                       iVar16);
              if (dVar45 < dVar46) {
                dVar46 = dVar45 + -0.001;
                *psVar37 = sVar8;
                *psVar43 = (short)iVar16;
                *pdVar34 = dVar45;
                bVar21 = true;
              }
              iVar16 = (short)param_6[lVar5 + lVar38] + 1;
              iVar17 = (short)param_7[lVar5 + lVar38] + -1;
              dVar45 = (double)distaa3(param_1,param_2,param_3,uVar41,iVar3 + iVar40,
                                       (long)(short)param_6[lVar5 + lVar38],
                                       (long)(short)param_7[lVar5 + lVar38],iVar16,iVar17);
              if (dVar45 < dVar46) {
                *psVar37 = (short)iVar16;
                *psVar43 = (short)iVar17;
                *pdVar34 = dVar45;
                bVar21 = true;
              }
            }
            dVar46 = (param_8 + (int)uVar6)[lVar38 + -1];
            lVar38 = lVar38 + -1;
            pdVar34 = pdVar27 + -1;
            psVar37 = psVar37 + -1;
            psVar43 = psVar43 + -1;
            pdVar27 = pdVar34;
          } while (0 < iVar14 + (int)lVar38);
          lVar38 = lVar39 + lVar38;
        }
        if (0.0 < dVar46) {
          iVar40 = (int)lVar38;
          uVar18 = iVar40 + 1;
          uVar29 = -(ulong)(uVar18 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar18 << 1;
          sVar8 = *(short *)((long)param_6 + uVar29);
          sVar9 = *(short *)((long)param_7 + uVar29);
          iVar16 = sVar8 + -1;
          dVar45 = (double)distaa3(param_1,param_2,param_3,uVar41,(ulong)uVar18,(long)sVar8,
                                   (int)sVar9,iVar16,(int)sVar9);
          dVar46 = dVar46 + -0.001;
          if (dVar45 < dVar46) {
            dVar46 = dVar45 + -0.001;
            bVar21 = true;
            param_6[lVar38] = (short)iVar16;
            param_7[lVar38] = sVar9;
            *pdVar34 = dVar45;
          }
          uVar29 = -(ulong)(uVar2 + iVar40 >> 0x1f) & 0xfffffffe00000000 |
                   (ulong)(uVar2 + iVar40) << 1;
          sVar8 = *(short *)((long)param_6 + uVar29);
          sVar9 = *(short *)((long)param_7 + uVar29);
                    /* catch() { ... } // from try @ 0102be50 with catch @ 0102be24 */
          dVar45 = (double)distaa3(param_1,param_2,param_3,uVar41);
          if (dVar45 < dVar46) {
            dVar46 = dVar45 + -0.001;
            bVar21 = true;
            param_6[lVar38] = sVar8 + -1;
                    /* try { // try from 0102be48 to 0112be4f has its CatchHandler @ 0102be94 */
            param_7[lVar38] = sVar9 + -1;
            *pdVar34 = dVar45;
          }
                    /* try { // try from 0102be50 to 0112beaf has its CatchHandler @ 0102be24 */
          uVar18 = iVar40 + param_4;
          uVar29 = -(ulong)(uVar18 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar18 << 1;
          sVar8 = *(short *)((long)param_7 + uVar29);
          sVar9 = *(short *)((long)param_6 + uVar29);
          iVar16 = sVar8 + -1;
          dVar45 = (double)distaa3(param_1,param_2,param_3,uVar41,(ulong)uVar18,(int)sVar9,
                                   (long)sVar8,(int)sVar9,iVar16);
          if (dVar45 < dVar46) {
                    /* catch() { ... } // from try @ 0102be48 with catch @ 0102be94 */
            bVar21 = true;
            param_6[lVar38] = sVar9;
            param_7[lVar38] = (short)iVar16;
            *pdVar34 = dVar45;
          }
        }
        if (1 < (int)param_4) {
                    /* catch() { ... } // from try @ 0102bee0 with catch @ 0102beb0 */
          lVar38 = 0;
          psVar37 = psVar36;
          puVar31 = puVar33;
          do {
                    /* try { // try from 0102bee0 to 0112bf4b has its CatchHandler @ 0102beb0 */
            dVar46 = pdVar30[lVar38];
            if (0.0 < dVar46) {
              sVar8 = psVar37[-1];
              iVar16 = (short)puVar31[-1] + 1;
              dVar45 = (double)distaa3(param_1,param_2,param_3,uVar41,iVar23 + (int)lVar38,
                                       (long)(short)puVar31[-1],(int)sVar8,iVar16,(int)sVar8);
              if (dVar45 < dVar46 + -0.001) {
                    /* catch() { ... } // from try @ 0102bed8 with catch @ 0102bf30 */
                bVar21 = true;
                *puVar31 = (short)iVar16;
                *psVar37 = sVar8;
                pdVar30[lVar38] = dVar45;
              }
            }
            lVar38 = lVar38 + 1;
            puVar31 = puVar31 + 1;
            psVar37 = psVar37 + 1;
                    /* try { // try from 0102bed8 to 0112bedf has its CatchHandler @ 0102bf30 */
          } while (iVar13 != (int)lVar38);
        }
        bVar1 = 0 < lVar26;
        lVar26 = lVar26 + -1;
        pdVar30 = (double *)
                  ((long)pdVar30 +
                  (-(ulong)(uVar12 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar12 << 3));
        psVar36 = (short *)((long)psVar36 + uVar28);
        puVar33 = (undefined2 *)((long)puVar33 + uVar28);
        uVar6 = uVar6 - param_4;
        iVar7 = iVar7 + iVar19;
        iVar23 = iVar23 + iVar19;
        iVar3 = iVar3 + iVar19;
        iVar22 = iVar22 + iVar19;
        iVar20 = iVar20 + iVar19;
      } while (bVar1);
    }
    if (!bVar21) {
                    /* try { // try from 0102bf4c to 0112bf83 has its CatchHandler @ 0102bf4c
                       catch() { ... } // from try @ 0102bf4c with catch @ 0102bf4c
                       catch() { ... } // from try @ 0102bfb4 with catch @ 0102bf4c */
      return;
    }
  } while( true );
}

