
void pvmp3_dequantize_sample(long param_1,long param_2,long param_3,uint param_4,int *param_5)

{
  short *psVar1;
  long lVar2;
  uint uVar3;
  short sVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  uint *puVar17;
  int iVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  
  iVar7 = *param_5 * 3 + param_5[4];
  if ((*(int *)(param_3 + 0x10) == 0) || (*(int *)(param_3 + 0x14) != 2)) {
    lVar14 = (long)iVar7;
    uVar6 = 0;
    do {
      uVar21 = (ulong)uVar6;
      psVar1 = (short *)(mp3_sfBandIndex + (ulong)(uVar6 + 1) * 2 + lVar14 * 0x4a);
      uVar15 = *(int *)(param_3 + 8) -
               (*(int *)(param_3 + 0x40) * 2 + 2) *
               (*(int *)(param_2 + uVar21 * 4) + (&DAT_0199878c)[uVar21] * *(int *)(param_3 + 0x3c))
      ;
      sVar4 = *psVar1;
      lVar19 = (long)*(int *)(&DAT_0199877c + (ulong)(uVar15 & 3) * 4);
      iVar7 = (int)uVar15 >> 2;
      uVar15 = iVar7 + 0xc;
      if ((int)param_4 < (int)sVar4) {
        if ((int)uVar15 < 1) {
          sVar5 = *(short *)(mp3_sfBandIndex + uVar21 * 2 + lVar14 * 0x4a);
          uVar6 = -iVar7 - 0xc;
          lVar14 = (long)(int)sVar5;
          if ((int)uVar6 < 0x20) {
            if ((int)sVar5 < (int)param_4) {
              do {
                uVar15 = *(uint *)(param_1 + lVar14 * 4);
                if (uVar15 != 0) {
                  uVar3 = -uVar15;
                  if (-1 < (int)uVar15) {
                    uVar3 = uVar15;
                  }
                  if ((int)uVar3 < 0x201) {
                    iVar7 = *(int *)(power_one_third + (ulong)uVar3 * 4) >> 1;
                  }
                  else if (uVar3 >> 0xf == 0) {
                    iVar7 = pvmp3_normalize(uVar3);
                    uVar11 = (uint)(0x16 - (long)iVar7);
                    lVar22 = (long)(int)(uVar3 >> (ulong)(uVar11 & 0x1f)) * 4;
                    iVar7 = (int)((ulong)((long)(int)(*(int *)(power_one_third + lVar22) +
                                                     (*(int *)(power_one_third + lVar22 + 4) -
                                                      *(int *)(power_one_third + lVar22) >>
                                                     (uVar11 & 0x1f)) *
                                                     (uVar3 & (-1 << (ulong)(uVar11 & 0x1f) ^
                                                              0xffffffffU))) *
                                         (long)*(int *)(&DAT_01998760 + (0x16 - (long)iVar7) * 4))
                                 >> 0x1e);
                  }
                  else {
                    iVar7 = 0x7fffffff;
                  }
                  *(int *)(param_1 + lVar14 * 4) =
                       (int)((ulong)(((long)(int)(uVar15 << 0x10) * (long)iVar7 * 4 >> 0x20) *
                                    lVar19) >> 0x1e) >> (uVar6 & 0x1f);
                }
                lVar22 = param_1 + lVar14 * 4;
                uVar15 = *(uint *)(lVar22 + 4);
                if (uVar15 != 0) {
                  uVar3 = -uVar15;
                  if (-1 < (int)uVar15) {
                    uVar3 = uVar15;
                  }
                  if ((int)uVar3 < 0x201) {
                    iVar7 = *(int *)(power_one_third + (ulong)uVar3 * 4) >> 1;
                  }
                  else if (uVar3 >> 0xf == 0) {
                    iVar7 = pvmp3_normalize(uVar3);
                    uVar11 = (uint)(0x16 - (long)iVar7);
                    lVar13 = (long)(int)(uVar3 >> (ulong)(uVar11 & 0x1f)) * 4;
                    iVar7 = (int)((ulong)((long)(int)(*(int *)(power_one_third + lVar13) +
                                                     (*(int *)(power_one_third + lVar13 + 4) -
                                                      *(int *)(power_one_third + lVar13) >>
                                                     (uVar11 & 0x1f)) *
                                                     (uVar3 & (-1 << (ulong)(uVar11 & 0x1f) ^
                                                              0xffffffffU))) *
                                         (long)*(int *)(&DAT_01998760 + (0x16 - (long)iVar7) * 4))
                                 >> 0x1e);
                  }
                  else {
                    iVar7 = 0x7fffffff;
                  }
                  *(int *)(lVar22 + 4) =
                       (int)((ulong)(((long)(int)(uVar15 << 0x10) * (long)iVar7 * 4 >> 0x20) *
                                    lVar19) >> 0x1e) >> (uVar6 & 0x1f);
                }
                lVar14 = lVar14 + 2;
              } while (lVar14 < (int)param_4);
            }
          }
          else {
            memset((void *)(param_1 + lVar14 * 4),0,((long)(int)sVar4 - (long)(int)sVar5) * 4);
          }
        }
        else {
          sVar4 = *(short *)(mp3_sfBandIndex + uVar21 * 2 + lVar14 * 0x4a);
          if ((int)sVar4 < (int)param_4) {
            puVar17 = (uint *)(param_1 + (long)(int)sVar4 * 4);
            iVar7 = param_4 - (int)sVar4;
            do {
              uVar6 = *puVar17;
              if (uVar6 != 0) {
                uVar3 = -uVar6;
                if (-1 < (int)uVar6) {
                  uVar3 = uVar6;
                }
                if ((int)uVar3 < 0x201) {
                  iVar8 = *(int *)(power_one_third + (ulong)uVar3 * 4) >> 1;
                }
                else if (uVar3 >> 0xf == 0) {
                  iVar8 = pvmp3_normalize(uVar3);
                  uVar11 = (uint)(0x16 - (long)iVar8);
                  lVar14 = (long)(int)(uVar3 >> (ulong)(uVar11 & 0x1f)) * 4;
                  iVar8 = (int)((ulong)((long)(int)(*(int *)(power_one_third + lVar14) +
                                                   (*(int *)(power_one_third + lVar14 + 4) -
                                                    *(int *)(power_one_third + lVar14) >>
                                                   (uVar11 & 0x1f)) *
                                                   (uVar3 & (-1 << (ulong)(uVar11 & 0x1f) ^
                                                            0xffffffffU))) *
                                       (long)*(int *)(&DAT_01998760 + (0x16 - (long)iVar8) * 4)) >>
                               0x1e);
                }
                else {
                  iVar8 = 0x7fffffff;
                }
                *puVar17 = (int)((ulong)(((long)(int)(uVar6 << 0x10) * (long)iVar8 * 4 >> 0x20) *
                                        lVar19) >> 0x1e) << (ulong)(uVar15 & 0x1f);
              }
              iVar7 = iVar7 + -1;
              puVar17 = puVar17 + 1;
            } while (iVar7 != 0);
          }
        }
        break;
      }
      if ((int)uVar15 < 1) {
        sVar5 = *(short *)(mp3_sfBandIndex + uVar21 * 2 + lVar14 * 0x4a);
        lVar22 = (long)sVar5;
        uVar15 = -iVar7 - 0xc;
        if ((int)uVar15 < 0x20) {
          if ((int)sVar5 < (int)sVar4) {
            do {
              uVar3 = *(uint *)(param_1 + lVar22 * 4);
              if (uVar3 != 0) {
                uVar11 = -uVar3;
                if (-1 < (int)uVar3) {
                  uVar11 = uVar3;
                }
                if ((int)uVar11 < 0x201) {
                  iVar7 = *(int *)(power_one_third + (ulong)uVar11 * 4) >> 1;
                }
                else if (uVar11 >> 0xf == 0) {
                  iVar7 = pvmp3_normalize(uVar11);
                  uVar12 = (uint)(0x16 - (long)iVar7);
                  lVar13 = (long)(int)(uVar11 >> (ulong)(uVar12 & 0x1f)) * 4;
                  iVar7 = (int)((ulong)((long)(int)(*(int *)(power_one_third + lVar13) +
                                                   (*(int *)(power_one_third + lVar13 + 4) -
                                                    *(int *)(power_one_third + lVar13) >>
                                                   (uVar12 & 0x1f)) *
                                                   (uVar11 & (-1 << (ulong)(uVar12 & 0x1f) ^
                                                             0xffffffffU))) *
                                       (long)*(int *)(&DAT_01998760 + (0x16 - (long)iVar7) * 4)) >>
                               0x1e);
                }
                else {
                  iVar7 = 0x7fffffff;
                }
                *(int *)(param_1 + lVar22 * 4) =
                     (int)((ulong)(((long)(int)(uVar3 << 0x10) * (long)iVar7 * 4 >> 0x20) * lVar19)
                          >> 0x1e) >> (uVar15 & 0x1f);
              }
              lVar13 = param_1 + lVar22 * 4;
              uVar3 = *(uint *)(lVar13 + 4);
              if (uVar3 != 0) {
                uVar11 = -uVar3;
                if (-1 < (int)uVar3) {
                  uVar11 = uVar3;
                }
                if ((int)uVar11 < 0x201) {
                  iVar7 = *(int *)(power_one_third + (ulong)uVar11 * 4) >> 1;
                }
                else if (uVar11 >> 0xf == 0) {
                  iVar7 = pvmp3_normalize(uVar11);
                  uVar12 = (uint)(0x16 - (long)iVar7);
                  lVar2 = (long)(int)(uVar11 >> (ulong)(uVar12 & 0x1f)) * 4;
                  iVar7 = (int)((ulong)((long)(int)(*(int *)(power_one_third + lVar2) +
                                                   (*(int *)(power_one_third + lVar2 + 4) -
                                                    *(int *)(power_one_third + lVar2) >>
                                                   (uVar12 & 0x1f)) *
                                                   (uVar11 & (-1 << (ulong)(uVar12 & 0x1f) ^
                                                             0xffffffffU))) *
                                       (long)*(int *)(&DAT_01998760 + (0x16 - (long)iVar7) * 4)) >>
                               0x1e);
                }
                else {
                  iVar7 = 0x7fffffff;
                }
                *(int *)(lVar13 + 4) =
                     (int)((ulong)(((long)(int)(uVar3 << 0x10) * (long)iVar7 * 4 >> 0x20) * lVar19)
                          >> 0x1e) >> (uVar15 & 0x1f);
              }
              lVar22 = lVar22 + 2;
            } while (lVar22 < *psVar1);
          }
        }
        else {
          uVar15 = (int)sVar4 - (int)sVar5;
          memset((void *)(param_1 + lVar22 * 4),0,
                 -(ulong)(uVar15 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar15 << 2);
        }
      }
      else if ((int)*(short *)(mp3_sfBandIndex + uVar21 * 2 + lVar14 * 0x4a) < (int)sVar4) {
        lVar22 = (long)*(short *)(mp3_sfBandIndex + uVar21 * 2 + lVar14 * 0x4a);
        do {
          uVar3 = *(uint *)(param_1 + lVar22 * 4);
          if (uVar3 != 0) {
            uVar11 = -uVar3;
            if (-1 < (int)uVar3) {
              uVar11 = uVar3;
            }
            if ((int)uVar11 < 0x201) {
              iVar7 = *(int *)(power_one_third + (ulong)uVar11 * 4) >> 1;
            }
            else if (uVar11 >> 0xf == 0) {
              iVar7 = pvmp3_normalize(uVar11);
              uVar12 = (uint)(0x16 - (long)iVar7);
              lVar13 = (long)(int)(uVar11 >> (ulong)(uVar12 & 0x1f)) * 4;
              iVar7 = (int)((ulong)((long)(int)(*(int *)(power_one_third + lVar13) +
                                               (*(int *)(power_one_third + lVar13 + 4) -
                                                *(int *)(power_one_third + lVar13) >>
                                               (uVar12 & 0x1f)) *
                                               (uVar11 & (-1 << (ulong)(uVar12 & 0x1f) ^ 0xffffffffU
                                                         ))) *
                                   (long)*(int *)(&DAT_01998760 + (0x16 - (long)iVar7) * 4)) >> 0x1e
                           );
            }
            else {
              iVar7 = 0x7fffffff;
            }
            *(int *)(param_1 + lVar22 * 4) =
                 (int)((ulong)(((long)(int)(uVar3 << 0x10) * (long)iVar7 * 4 >> 0x20) * lVar19) >>
                      0x1e) << (ulong)(uVar15 & 0x1f);
          }
          lVar13 = param_1 + lVar22 * 4;
          uVar3 = *(uint *)(lVar13 + 4);
          if (uVar3 != 0) {
            uVar11 = -uVar3;
            if (-1 < (int)uVar3) {
              uVar11 = uVar3;
            }
            if ((int)uVar11 < 0x201) {
              iVar7 = *(int *)(power_one_third + (ulong)uVar11 * 4) >> 1;
            }
            else if (uVar11 >> 0xf == 0) {
              iVar7 = pvmp3_normalize(uVar11);
              uVar12 = (uint)(0x16 - (long)iVar7);
              lVar2 = (long)(int)(uVar11 >> (ulong)(uVar12 & 0x1f)) * 4;
              iVar7 = (int)((ulong)((long)(int)(*(int *)(power_one_third + lVar2) +
                                               (*(int *)(power_one_third + lVar2 + 4) -
                                                *(int *)(power_one_third + lVar2) >> (uVar12 & 0x1f)
                                               ) * (uVar11 & (-1 << (ulong)(uVar12 & 0x1f) ^
                                                             0xffffffffU))) *
                                   (long)*(int *)(&DAT_01998760 + (0x16 - (long)iVar7) * 4)) >> 0x1e
                           );
            }
            else {
              iVar7 = 0x7fffffff;
            }
            *(int *)(lVar13 + 4) =
                 (int)((ulong)(((long)(int)(uVar3 << 0x10) * (long)iVar7 * 4 >> 0x20) * lVar19) >>
                      0x1e) << (ulong)(uVar15 & 0x1f);
          }
          lVar22 = lVar22 + 2;
        } while (lVar22 < *psVar1);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 0x16);
  }
  else {
    lVar14 = 8;
    if (*param_5 != 0) {
      lVar14 = 6;
    }
    lVar19 = (long)iVar7;
    if (*(int *)(param_3 + 0x18) == 0) {
      uVar6 = *(short *)(mp3_sfBandIndex + lVar19 * 0x4a + 0x30) * 3;
    }
    else {
      uVar6 = (uint)*(short *)(mp3_sfBandIndex + lVar19 * 0x4a + 2);
    }
    if (0 < (int)param_4) {
      lVar22 = lVar19 * 0x4a;
      iVar8 = *(int *)(&DAT_0199877c + ((ulong)*(uint *)(param_3 + 8) & 3) * 4);
      iVar7 = 0;
      uVar20 = 0;
      uVar21 = 0;
      uVar10 = 0;
      iVar18 = 0;
      uVar15 = ((int)*(uint *)(param_3 + 8) >> 2) + 0xc;
      do {
        if (uVar20 == uVar6) {
          lVar13 = (long)(int)uVar21;
          uVar21 = lVar13 + 1;
          iVar9 = *(int *)(param_3 + 0x18);
          if (iVar9 == 0) {
            uVar10 = uVar21 & 0xffffffff;
            lVar2 = lVar19 * 0x4a + 0x1995ca0;
            uVar6 = *(short *)(lVar2 + lVar13 * 2 + 4) * 3;
            iVar18 = *(short *)(lVar2 + (long)(int)uVar21 * 2) * 3;
          }
          else {
            if (uVar6 == (int)*(short *)(mp3_sfBandIndex + lVar14 * 2 + lVar22)) {
              uVar10 = 3;
              uVar21 = 3;
              sVar4 = *(short *)(mp3_sfBandIndex + lVar22 + 0x36);
              sVar5 = *(short *)(mp3_sfBandIndex + lVar22 + 0x34);
LAB_00e9ce8c:
              uVar6 = sVar4 * 3;
              iVar18 = sVar5 * 3;
            }
            else {
              if ((long)(int)*(short *)(mp3_sfBandIndex + lVar14 * 2 + lVar22) <= (long)uVar20) {
                lVar2 = lVar19 * 0x4a + 0x1995ca0;
                sVar4 = *(short *)(lVar2 + (lVar13 + 2) * 2);
                sVar5 = *(short *)(lVar2 + uVar21 * 2);
                uVar10 = uVar21 & 0xffffffff;
                goto LAB_00e9ce8c;
              }
              uVar6 = (uint)*(short *)(mp3_sfBandIndex + (lVar13 + 2) * 2 + lVar19 * 0x4a);
            }
            if (uVar20 < 0x24) {
              uVar16 = -(uVar21 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar21 & 0xffffffff) << 2;
              uVar15 = *(int *)(param_3 + 8) -
                       (*(int *)(param_3 + 0x40) * 2 + 2) *
                       (*(int *)(param_2 + uVar16) +
                       *(int *)((long)&DAT_0199878c + uVar16) * *(int *)(param_3 + 0x3c));
              iVar8 = *(int *)(&DAT_0199877c + (ulong)(uVar15 & 3) * 4);
              uVar15 = ((int)uVar15 >> 2) + 0xc;
              if (uVar20 < 0x24) goto LAB_00e9ce14;
            }
          }
LAB_00e9cee4:
          iVar8 = (int)((ulong)((long)*(int *)(mp3_shortwindBandWidths +
                                              (long)(int)uVar10 * 4 + lVar19 * 0x34) *
                               (long)(iVar7 + iVar18 * -0x10000)) >> 0x20) + 1 >> 0xf;
          uVar15 = *(int *)(param_3 + 8) + *(int *)(param_3 + (long)iVar8 * 4 + 0x28) * -8 +
                   *(int *)(param_2 + (long)iVar8 * 0x34 + (long)(int)uVar21 * 4 + 0x5c) *
                   (*(int *)(param_3 + 0x40) + 1) * -2;
          iVar8 = *(int *)(&DAT_0199877c + (ulong)(uVar15 & 3) * 4);
          uVar15 = ((int)uVar15 >> 2) + 0xc;
        }
        else {
          iVar9 = *(int *)(param_3 + 0x18);
          if (0x23 < uVar20) goto LAB_00e9cee4;
LAB_00e9ce14:
          if (iVar9 == 0) goto LAB_00e9cee4;
        }
        uVar11 = *(uint *)(param_1 + uVar20 * 4);
        uVar3 = -uVar11;
        if (-1 < (int)uVar11) {
          uVar3 = uVar11;
        }
        if ((int)uVar3 < 0x201) {
          iVar9 = *(int *)(power_one_third + (ulong)uVar3 * 4) >> 1;
        }
        else if (uVar3 >> 0xf == 0) {
          iVar9 = pvmp3_normalize(uVar3);
          uVar12 = (uint)(0x16 - (long)iVar9);
          lVar13 = (long)(int)(uVar3 >> (ulong)(uVar12 & 0x1f)) * 4;
          iVar9 = (int)((ulong)((long)(int)(*(int *)(power_one_third + lVar13) +
                                           (*(int *)(power_one_third + lVar13 + 4) -
                                            *(int *)(power_one_third + lVar13) >> (uVar12 & 0x1f)) *
                                           (uVar3 & (-1 << (ulong)(uVar12 & 0x1f) ^ 0xffffffffU))) *
                               (long)*(int *)(&DAT_01998760 + (0x16 - (long)iVar9) * 4)) >> 0x1e);
        }
        else {
          iVar9 = 0x7fffffff;
        }
        iVar9 = (int)((ulong)(((long)(int)(uVar11 << 0x10) * (long)iVar9 * 4 >> 0x20) * (long)iVar8)
                     >> 0x1e);
        if ((int)uVar15 < 0) {
          iVar9 = iVar9 >> (-uVar15 & 0x1f);
          if ((int)uVar15 < -0x1f) {
            iVar9 = 0;
          }
        }
        else {
          iVar9 = iVar9 << (ulong)(uVar15 & 0x1f);
        }
        *(int *)(param_1 + uVar20 * 4) = iVar9;
        uVar20 = uVar20 + 1;
        iVar7 = iVar7 + 0x10000;
      } while (param_4 != uVar20);
    }
  }
  memset((void *)(param_1 + (long)(int)param_4 * 4),0,
         -(ulong)(0x240 - param_4 >> 0x1f) & 0xfffffffc00000000 | (ulong)(0x240 - param_4) << 2);
  return;
}

