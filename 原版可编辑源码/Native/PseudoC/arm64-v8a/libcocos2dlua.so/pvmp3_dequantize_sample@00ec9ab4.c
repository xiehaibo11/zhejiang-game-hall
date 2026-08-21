
void pvmp3_dequantize_sample(long param_1,long param_2,long param_3,uint param_4,int *param_5)

{
  short *psVar1;
  uint *puVar2;
  long lVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  int iVar22;
  ulong uVar23;
  
                    /* try { // try from 00ec9ac0 to 00fc9acb has its CatchHandler @ 00ec9ae0 */
                    /* try { // try from 00ec9acc to 00fc9b0b has its CatchHandler @ 00ec9a78 */
                    /* catch() { ... } // from try @ 00ec9ac0 with catch @ 00ec9ae0 */
  iVar6 = *param_5 * 3 + param_5[4];
                    /* catch() { ... } // from try @ 00ec9aac with catch @ 00ec9af8 */
  if ((*(int *)(param_3 + 0x10) == 0) || (*(int *)(param_3 + 0x14) != 2)) {
    lVar16 = (long)iVar6;
    uVar9 = 0;
    do {
      uVar20 = (ulong)uVar9;
      psVar1 = (short *)(mp3_sfBandIndex + (ulong)(uVar9 + 1) * 2 + lVar16 * 0x4a);
      uVar13 = *(int *)(param_3 + 8) -
               (*(int *)(param_3 + 0x40) * 2 + 2) *
               (*(int *)(param_2 + uVar20 * 4) + (&DAT_0143881c)[uVar20] * *(int *)(param_3 + 0x3c))
      ;
      sVar4 = *psVar1;
      lVar21 = (long)*(int *)(&DAT_0143880c + (ulong)(uVar13 & 3) * 4);
      iVar6 = (int)uVar13 >> 2;
      uVar17 = iVar6 + 0xc;
      iVar7 = (int)sVar4;
      if ((int)param_4 < (int)sVar4) {
        if ((int)uVar17 < 1) {
          sVar4 = *(short *)(mp3_sfBandIndex + uVar20 * 2 + lVar16 * 0x4a);
          lVar16 = (long)(int)sVar4;
          if ((int)uVar13 < -0xac) {
            memset((void *)(param_1 + lVar16 * 4),0,((long)iVar7 - (long)(int)sVar4) * 4);
          }
          else if ((int)sVar4 < (int)param_4) {
            uVar9 = *(uint *)(param_1 + lVar16 * 4);
            while( true ) {
              if (uVar9 != 0) {
                uVar17 = -uVar9;
                if (-1 < (int)uVar9) {
                  uVar17 = uVar9;
                }
                if ((int)uVar17 < 0x201) {
                  iVar7 = *(int *)(power_one_third + (ulong)uVar17 * 4) >> 1;
                }
                else if (uVar17 >> 0xf == 0) {
                  iVar7 = pvmp3_normalize(uVar17);
                  uVar13 = (uint)(0x16 - (long)iVar7);
                  lVar19 = (long)(int)(uVar17 >> (ulong)(uVar13 & 0x1f)) * 4;
                  iVar7 = (int)((ulong)((long)(int)(*(int *)(power_one_third + lVar19) +
                                                   (*(int *)(power_one_third + lVar19 + 4) -
                                                    *(int *)(power_one_third + lVar19) >>
                                                   (uVar13 & 0x1f)) *
                                                   (uVar17 & (-1 << (ulong)(uVar13 & 0x1f) ^
                                                             0xffffffffU))) *
                                       (long)*(int *)(&DAT_014387f0 + (0x16 - (long)iVar7) * 4)) >>
                               0x1e);
                }
                else {
                  iVar7 = 0x7fffffff;
                }
                *(int *)(param_1 + lVar16 * 4) =
                     (int)((ulong)(((long)(int)(uVar9 << 0x10) * (long)iVar7 * 4 >> 0x20) * lVar21)
                          >> 0x1e) >> (-iVar6 - 0xcU & 0x1f);
              }
              lVar19 = param_1 + lVar16 * 4;
              uVar9 = *(uint *)(lVar19 + 4);
              if (uVar9 != 0) {
                uVar17 = -uVar9;
                if (-1 < (int)uVar9) {
                  uVar17 = uVar9;
                }
                    /* catch() { ... } // from try @ 00eca180 with catch @ 00eca154 */
                if ((int)uVar17 < 0x201) {
                  iVar7 = *(int *)(power_one_third + (ulong)uVar17 * 4) >> 1;
                }
                else if (uVar17 >> 0xf == 0) {
                  iVar7 = pvmp3_normalize(uVar17);
                    /* try { // try from 00eca178 to 00fca17f has its CatchHandler @ 00eca1c4 */
                  uVar13 = (uint)(0x16 - (long)iVar7);
                    /* try { // try from 00eca180 to 00fca1df has its CatchHandler @ 00eca154 */
                  lVar15 = (long)(int)(uVar17 >> (ulong)(uVar13 & 0x1f)) * 4;
                  iVar7 = (int)((ulong)((long)(int)(*(int *)(power_one_third + lVar15) +
                                                   (*(int *)(power_one_third + lVar15 + 4) -
                                                    *(int *)(power_one_third + lVar15) >>
                                                   (uVar13 & 0x1f)) *
                                                   (uVar17 & (-1 << (ulong)(uVar13 & 0x1f) ^
                                                             0xffffffffU))) *
                                       (long)*(int *)(&DAT_014387f0 + (0x16 - (long)iVar7) * 4)) >>
                               0x1e);
                }
                else {
                  iVar7 = 0x7fffffff;
                }
                *(int *)(lVar19 + 4) =
                     (int)((ulong)(((long)(int)(uVar9 << 0x10) * (long)iVar7 * 4 >> 0x20) * lVar21)
                          >> 0x1e) >> (-iVar6 - 0xcU & 0x1f);
              }
              lVar16 = lVar16 + 2;
              if ((int)param_4 <= lVar16) break;
              uVar9 = *(uint *)(param_1 + lVar16 * 4);
            }
          }
        }
        else {
          sVar4 = *(short *)(mp3_sfBandIndex + uVar20 * 2 + lVar16 * 0x4a);
          if ((int)sVar4 < (int)param_4) {
            puVar2 = (uint *)(param_1 + (long)(int)sVar4 * 4);
            iVar6 = param_4 - (int)sVar4;
            uVar9 = *puVar2;
            while( true ) {
              if (uVar9 != 0) {
                uVar13 = -uVar9;
                if (-1 < (int)uVar9) {
                  uVar13 = uVar9;
                }
                if ((int)uVar13 < 0x201) {
                  iVar7 = *(int *)(power_one_third + (ulong)uVar13 * 4) >> 1;
                }
                else if (uVar13 >> 0xf == 0) {
                  iVar7 = pvmp3_normalize(uVar13);
                  uVar12 = (uint)(0x16 - (long)iVar7);
                  lVar16 = (long)(int)(uVar13 >> (ulong)(uVar12 & 0x1f)) * 4;
                  iVar7 = (int)((ulong)((long)(int)(*(int *)(power_one_third + lVar16) +
                                                   (*(int *)(power_one_third + lVar16 + 4) -
                                                    *(int *)(power_one_third + lVar16) >>
                                                   (uVar12 & 0x1f)) *
                                                   (uVar13 & (-1 << (ulong)(uVar12 & 0x1f) ^
                                                             0xffffffffU))) *
                                       (long)*(int *)(&DAT_014387f0 + (0x16 - (long)iVar7) * 4)) >>
                               0x1e);
                }
                else {
                  iVar7 = 0x7fffffff;
                }
                *puVar2 = (int)((ulong)(((long)(int)(uVar9 << 0x10) * (long)iVar7 * 4 >> 0x20) *
                                       lVar21) >> 0x1e) << (ulong)(uVar17 & 0x1f);
              }
              iVar6 = iVar6 + -1;
              puVar2 = puVar2 + 1;
              if (iVar6 == 0) break;
              uVar9 = *puVar2;
            }
          }
        }
        break;
      }
      if ((int)uVar17 < 1) {
        sVar5 = *(short *)(mp3_sfBandIndex + uVar20 * 2 + lVar16 * 0x4a);
        lVar19 = (long)sVar5;
        if ((int)uVar13 < -0xac) {
          uVar17 = iVar7 - sVar5;
          memset((void *)(param_1 + lVar19 * 4),0,
                 -(ulong)(uVar17 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar17 << 2);
        }
        else if ((int)sVar5 < (int)sVar4) {
          uVar17 = *(uint *)(param_1 + lVar19 * 4);
          while( true ) {
            if (uVar17 != 0) {
              uVar13 = -uVar17;
              if (-1 < (int)uVar17) {
                uVar13 = uVar17;
              }
              if ((int)uVar13 < 0x201) {
                iVar7 = *(int *)(power_one_third + (ulong)uVar13 * 4) >> 1;
              }
              else if (uVar13 >> 0xf == 0) {
                iVar7 = pvmp3_normalize(uVar13);
                uVar12 = (uint)(0x16 - (long)iVar7);
                lVar15 = (long)(int)(uVar13 >> (ulong)(uVar12 & 0x1f)) * 4;
                iVar7 = (int)((ulong)((long)(int)(*(int *)(power_one_third + lVar15) +
                                                 (*(int *)(power_one_third + lVar15 + 4) -
                                                  *(int *)(power_one_third + lVar15) >>
                                                 (uVar12 & 0x1f)) *
                                                 (uVar13 & (-1 << (ulong)(uVar12 & 0x1f) ^
                                                           0xffffffffU))) *
                                     (long)*(int *)(&DAT_014387f0 + (0x16 - (long)iVar7) * 4)) >>
                             0x1e);
              }
              else {
                iVar7 = 0x7fffffff;
              }
              *(int *)(param_1 + lVar19 * 4) =
                   (int)((ulong)(((long)(int)(uVar17 << 0x10) * (long)iVar7 * 4 >> 0x20) * lVar21)
                        >> 0x1e) >> (-iVar6 - 0xcU & 0x1f);
            }
            lVar15 = param_1 + lVar19 * 4;
            uVar17 = *(uint *)(lVar15 + 4);
            if (uVar17 != 0) {
              uVar13 = -uVar17;
              if (-1 < (int)uVar17) {
                uVar13 = uVar17;
              }
              if ((int)uVar13 < 0x201) {
                iVar7 = *(int *)(power_one_third + (ulong)uVar13 * 4) >> 1;
              }
              else if (uVar13 >> 0xf == 0) {
                iVar7 = pvmp3_normalize(uVar13);
                uVar12 = (uint)(0x16 - (long)iVar7);
                lVar3 = (long)(int)(uVar13 >> (ulong)(uVar12 & 0x1f)) * 4;
                iVar7 = (int)((ulong)((long)(int)(*(int *)(power_one_third + lVar3) +
                                                 (*(int *)(power_one_third + lVar3 + 4) -
                                                  *(int *)(power_one_third + lVar3) >>
                                                 (uVar12 & 0x1f)) *
                                                 (uVar13 & (-1 << (ulong)(uVar12 & 0x1f) ^
                                                           0xffffffffU))) *
                                     (long)*(int *)(&DAT_014387f0 + (0x16 - (long)iVar7) * 4)) >>
                             0x1e);
              }
              else {
                iVar7 = 0x7fffffff;
              }
              *(int *)(lVar15 + 4) =
                   (int)((ulong)(((long)(int)(uVar17 << 0x10) * (long)iVar7 * 4 >> 0x20) * lVar21)
                        >> 0x1e) >> (-iVar6 - 0xcU & 0x1f);
            }
            lVar19 = lVar19 + 2;
            if (*psVar1 <= lVar19) break;
            uVar17 = *(uint *)(param_1 + lVar19 * 4);
          }
        }
      }
      else if (*(short *)(mp3_sfBandIndex + uVar20 * 2 + lVar16 * 0x4a) < iVar7) {
        lVar19 = (long)(int)*(short *)(mp3_sfBandIndex + uVar20 * 2 + lVar16 * 0x4a);
        uVar13 = *(uint *)(param_1 + lVar19 * 4);
        while( true ) {
          if (uVar13 != 0) {
            uVar12 = -uVar13;
            if (-1 < (int)uVar13) {
              uVar12 = uVar13;
            }
                    /* catch() { ... } // from try @ 00ec9cb4 with catch @ 00ec9c7c */
            if ((int)uVar12 < 0x201) {
              iVar6 = *(int *)(power_one_third + (ulong)uVar12 * 4) >> 1;
            }
            else if (uVar12 >> 0xf == 0) {
              iVar6 = pvmp3_normalize(uVar12);
                    /* try { // try from 00ec9cac to 00fc9cb3 has its CatchHandler @ 00ec9d80 */
                    /* try { // try from 00ec9cb4 to 00fc9d9b has its CatchHandler @ 00ec9c7c */
              uVar14 = (uint)(0x16 - (long)iVar6);
              lVar15 = (long)(int)(uVar12 >> (ulong)(uVar14 & 0x1f)) * 4;
              iVar6 = (int)((ulong)((long)(int)(*(int *)(power_one_third + lVar15) +
                                               (*(int *)(power_one_third + lVar15 + 4) -
                                                *(int *)(power_one_third + lVar15) >>
                                               (uVar14 & 0x1f)) *
                                               (uVar12 & (-1 << (ulong)(uVar14 & 0x1f) ^ 0xffffffffU
                                                         ))) *
                                   (long)*(int *)(&DAT_014387f0 + (0x16 - (long)iVar6) * 4)) >> 0x1e
                           );
            }
            else {
              iVar6 = 0x7fffffff;
            }
            *(int *)(param_1 + lVar19 * 4) =
                 (int)((ulong)(((long)(int)(uVar13 << 0x10) * (long)iVar6 * 4 >> 0x20) * lVar21) >>
                      0x1e) << (ulong)(uVar17 & 0x1f);
          }
          lVar15 = param_1 + lVar19 * 4;
          uVar13 = *(uint *)(lVar15 + 4);
          if (uVar13 != 0) {
            uVar12 = -uVar13;
            if (-1 < (int)uVar13) {
              uVar12 = uVar13;
            }
            if ((int)uVar12 < 0x201) {
              iVar6 = *(int *)(power_one_third + (ulong)uVar12 * 4) >> 1;
            }
            else if (uVar12 >> 0xf == 0) {
              iVar6 = pvmp3_normalize(uVar12);
              uVar14 = (uint)(0x16 - (long)iVar6);
              lVar3 = (long)(int)(uVar12 >> (ulong)(uVar14 & 0x1f)) * 4;
                    /* catch() { ... } // from try @ 00ec9cac with catch @ 00ec9d80 */
              iVar6 = (int)((ulong)((long)(int)(*(int *)(power_one_third + lVar3) +
                                               (*(int *)(power_one_third + lVar3 + 4) -
                                                *(int *)(power_one_third + lVar3) >> (uVar14 & 0x1f)
                                               ) * (uVar12 & (-1 << (ulong)(uVar14 & 0x1f) ^
                                                             0xffffffffU))) *
                                   (long)*(int *)(&DAT_014387f0 + (0x16 - (long)iVar6) * 4)) >> 0x1e
                           );
            }
            else {
              iVar6 = 0x7fffffff;
            }
            *(int *)(lVar15 + 4) =
                 (int)((ulong)(((long)(int)(uVar13 << 0x10) * (long)iVar6 * 4 >> 0x20) * lVar21) >>
                      0x1e) << (ulong)(uVar17 & 0x1f);
          }
          lVar19 = lVar19 + 2;
          if (*psVar1 <= lVar19) break;
          uVar13 = *(uint *)(param_1 + lVar19 * 4);
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < 0x16);
  }
  else {
    lVar16 = 8;
    if (*param_5 != 0) {
      lVar16 = 6;
    }
    lVar21 = (long)iVar6;
    if (*(int *)(param_3 + 0x18) == 0) {
                    /* catch() { ... } // from try @ 00eca178 with catch @ 00eca1c4 */
      uVar9 = *(short *)(mp3_sfBandIndex + lVar21 * 0x4a + 0x30) * 3;
    }
    else {
      uVar9 = (uint)*(short *)(mp3_sfBandIndex + lVar21 * 0x4a + 2);
    }
    if (0 < (int)param_4) {
      iVar6 = 0;
      uVar20 = 0;
      uVar23 = 0;
      iVar22 = 0;
      lVar19 = lVar21 * 0x4a;
      uVar17 = ((int)*(uint *)(param_3 + 8) >> 2) + 0xc;
      iVar7 = *(int *)(&DAT_0143880c + ((ulong)*(uint *)(param_3 + 8) & 3) * 4);
      uVar11 = 0;
      iVar10 = 0;
      if (uVar9 == 0) goto LAB_00eca27c;
LAB_00eca2b4:
      iVar8 = *(int *)(param_3 + 0x18);
      do {
        if ((uVar20 < 0x24) && (iVar8 != 0)) goto LAB_00eca400;
        do {
          while( true ) {
            while( true ) {
                    /* catch() { ... } // from try @ 00eca3e0 with catch @ 00eca3b4 */
              iVar7 = (int)((ulong)((long)*(int *)(mp3_shortwindBandWidths +
                                                  (long)(int)uVar11 * 4 + lVar21 * 0x34) *
                                   (long)(iVar6 + iVar10 * -0x10000)) >> 0x20) + 1 >> 0xf;
                    /* try { // try from 00eca3d8 to 00fca3df has its CatchHandler @ 00eca424 */
                    /* try { // try from 00eca3e0 to 00fca43f has its CatchHandler @ 00eca3b4 */
              uVar17 = *(int *)(param_3 + 8) + *(int *)(param_3 + (long)iVar7 * 4 + 0x28) * -8 +
                       *(int *)(param_2 + (long)iVar7 * 0x34 + (long)(int)uVar23 * 4 + 0x5c) *
                       (*(int *)(param_3 + 0x40) + 1) * -2;
              iVar7 = *(int *)(&DAT_0143880c + (ulong)(uVar17 & 3) * 4);
              uVar17 = ((int)uVar17 >> 2) + 0xc;
LAB_00eca400:
              iVar22 = (int)uVar23;
              uVar12 = *(uint *)(param_1 + uVar20 * 4);
              uVar13 = -uVar12;
              if (-1 < (int)uVar12) {
                uVar13 = uVar12;
              }
              if ((int)uVar13 < 0x201) {
                iVar8 = *(int *)(power_one_third + (ulong)uVar13 * 4) >> 1;
              }
              else {
                    /* catch() { ... } // from try @ 00eca3d8 with catch @ 00eca424 */
                if (uVar13 >> 0xf == 0) {
                    /* catch() { ... } // from try @ 00eca46c with catch @ 00eca440 */
                  iVar8 = pvmp3_normalize(uVar13);
                    /* try { // try from 00eca464 to 00fca46b has its CatchHandler @ 00eca4b0 */
                    /* try { // try from 00eca46c to 00fca4cb has its CatchHandler @ 00eca440 */
                  uVar14 = (uint)(0x16 - (long)iVar8);
                  lVar15 = (long)(int)(uVar13 >> (ulong)(uVar14 & 0x1f)) * 4;
                    /* catch() { ... } // from try @ 00eca464 with catch @ 00eca4b0 */
                  iVar8 = (int)((ulong)((long)(int)(*(int *)(power_one_third + lVar15) +
                                                   (*(int *)(power_one_third + lVar15 + 4) -
                                                    *(int *)(power_one_third + lVar15) >>
                                                   (uVar14 & 0x1f)) *
                                                   (uVar13 & (-1 << (ulong)(uVar14 & 0x1f) ^
                                                             0xffffffffU))) *
                                       (long)*(int *)(&DAT_014387f0 + (0x16 - (long)iVar8) * 4)) >>
                               0x1e);
                }
                else {
                  iVar8 = 0x7fffffff;
                }
              }
                    /* try { // try from 00eca4cc to 00fca517 has its CatchHandler @ 00eca4cc
                       catch() { ... } // from try @ 00eca4cc with catch @ 00eca4cc
                       catch() { ... } // from try @ 00eca564 with catch @ 00eca4cc */
              iVar8 = (int)((ulong)(((long)(int)(uVar12 << 0x10) * (long)iVar8 * 4 >> 0x20) *
                                   (long)iVar7) >> 0x1e);
              if ((int)uVar17 < 0) {
                iVar8 = iVar8 >> (-uVar17 & 0x1f);
                if ((int)uVar17 < -0x1f) {
                  iVar8 = 0;
                }
              }
              else {
                iVar8 = iVar8 << (ulong)(uVar17 & 0x1f);
              }
              *(int *)(param_1 + uVar20 * 4) = iVar8;
              uVar20 = uVar20 + 1;
              iVar6 = iVar6 + 0x10000;
              if (param_4 == uVar20) goto LAB_00eca4fc;
              if (uVar20 != uVar9) goto LAB_00eca2b4;
LAB_00eca27c:
              iVar8 = *(int *)(param_3 + 0x18);
              lVar15 = (long)iVar22;
              uVar23 = lVar15 + 1;
              if (iVar8 != 0) break;
                    /* catch() { ... } // from try @ 00eca32c with catch @ 00eca2c8 */
              uVar11 = uVar23 & 0xffffffff;
              lVar3 = lVar21 * 0x4a + 0x1435d30;
              uVar9 = *(short *)(lVar3 + lVar15 * 2 + 4) * 3;
              iVar10 = *(short *)(lVar3 + (long)(int)uVar23 * 2) * 3;
            }
            if (uVar9 != (int)*(short *)(mp3_sfBandIndex + lVar16 * 2 + lVar19)) break;
            uVar11 = 3;
            uVar23 = 3;
            sVar4 = *(short *)(mp3_sfBandIndex + lVar19 + 0x36);
            sVar5 = *(short *)(mp3_sfBandIndex + lVar19 + 0x34);
LAB_00eca338:
            uVar9 = sVar4 * 3;
                    /* catch() { ... } // from try @ 00eca324 with catch @ 00eca33c */
            iVar10 = sVar5 * 3;
            if (uVar20 < 0x24) goto LAB_00eca348;
          }
          if ((long)(int)*(short *)(mp3_sfBandIndex + lVar16 * 2 + lVar19) <= (long)uVar20) {
            lVar3 = lVar21 * 0x4a + 0x1435d30;
                    /* try { // try from 00eca32c to 00fca377 has its CatchHandler @ 00eca2c8 */
            sVar4 = *(short *)(lVar3 + (lVar15 + 2) * 2);
            sVar5 = *(short *)(lVar3 + uVar23 * 2);
            uVar11 = uVar23 & 0xffffffff;
            goto LAB_00eca338;
          }
          uVar9 = (uint)*(short *)(mp3_sfBandIndex + (lVar15 + 2) * 2 + lVar21 * 0x4a);
        } while (0x23 < uVar20);
LAB_00eca348:
        uVar18 = -(uVar23 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar23 & 0xffffffff) << 2;
        uVar17 = *(int *)(param_3 + 8) -
                 (*(int *)(param_3 + 0x40) * 2 + 2) *
                 (*(int *)(param_2 + uVar18) +
                 *(int *)((long)&DAT_0143881c + uVar18) * *(int *)(param_3 + 0x3c));
        iVar7 = *(int *)(&DAT_0143880c + (ulong)(uVar17 & 3) * 4);
        uVar17 = ((int)uVar17 >> 2) + 0xc;
      } while( true );
    }
  }
LAB_00eca4fc:
                    /* try { // try from 00eca518 to 00fca563 has its CatchHandler @ 00eca570 */
  memset((void *)(param_1 + (long)(int)param_4 * 4),0,
         -(ulong)(0x240 - param_4 >> 0x1f) & 0xfffffffc00000000 | (ulong)(0x240 - param_4) << 2);
  return;
}

