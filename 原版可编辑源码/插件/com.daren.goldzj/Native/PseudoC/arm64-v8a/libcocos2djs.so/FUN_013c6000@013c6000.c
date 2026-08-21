
/* WARNING: Removing unreachable block (ram,0x013c8488) */
/* WARNING: Type propagation algorithm not settling */

ulong FUN_013c6000(ulong param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  long lVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong extraout_x8_04;
  ulong extraout_x8_05;
  ulong extraout_x8_06;
  ulong extraout_x8_07;
  ulong extraout_x8_08;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  int iVar23;
  ulong uVar24;
  ulong extraout_x10;
  long extraout_x10_00;
  long extraout_x10_01;
  ulong extraout_x10_02;
  ulong extraout_x10_03;
  int iVar25;
  int iVar26;
  ulong uVar27;
  ulong *puVar28;
  long extraout_x11;
  long extraout_x11_00;
  ulong extraout_x11_01;
  long lVar29;
  undefined8 uVar30;
  undefined4 *puVar31;
  ulong uVar32;
  long lVar33;
  long unaff_x26;
  long unaff_x27;
  double dVar34;
  double dVar35;
  double unaff_d15;
  
  if ((param_1 & 1) == 0) goto LAB_013c8368;
  lVar14 = unaff_x26 + (ulong)*(uint *)(param_1 - 1);
  uVar4 = *(ushort *)(lVar14 + 7);
  if (uVar4 < 0x412) goto LAB_013c8368;
  iVar7 = (int)unaff_x26;
  iVar11 = (int)param_3;
  iVar26 = iVar11 >> 1;
  if ((param_2 & 1) == 0) {
    uVar19 = (long)(param_2 << 0x20) >> 0x21;
  }
  else {
    uVar5 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(param_2 - 1) + 7);
    if (((uVar5 != 0x42) ||
        (uVar19 = (ulong)*(double *)(param_2 + 3), *(double *)(param_2 + 3) != (double)(long)uVar19)
        ) || (0x3ffffffffffffe < uVar19 + 0x1fffffffffffff)) {
      if (uVar5 != 0x40) {
        if (uVar5 < 0x40) {
          uVar17 = *(uint *)(param_2 + 3);
          if ((uVar17 & 0xc0000002) == 0) {
            uVar19 = (ulong)(uVar17 >> 3) & 0xffffff;
            goto LAB_013c6fec;
          }
          if ((uVar17 >> 1 & 1) == 0) goto LAB_013c8368;
          if ((uVar5 == 0x25) || (uVar5 == 0x2d)) {
            param_2 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
          }
          else if ((uVar5 >> 5 & 1) != 0) {
            *(undefined8 *)(unaff_x26 + 0x40) = 0x13c60dc;
            *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
            param_2 = (**(code **)(unaff_x26 + 0x1258))();
            *(undefined8 *)(unaff_x26 + 0x38) = 0;
            if ((param_2 & 1) == 0) {
              uVar19 = (long)(param_2 << 0x20) >> 0x21;
              if ((uVar19 == 0xffffffffffffffff) || (uVar19 == 0xfffffffffffffffe))
              goto LAB_013c8368;
              goto LAB_013c6fec;
            }
          }
        }
        else {
          if (uVar5 != 0x43) goto LAB_013c8368;
          param_2 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
        }
      }
      uVar17 = *(uint *)(lVar14 + 0xb);
      iVar15 = (int)param_2;
      if ((uVar17 >> 0x15 & 1) == 0) {
        lVar18 = unaff_x26 + (ulong)*(uint *)(lVar14 + 0x17);
        uVar17 = uVar17 >> 10 & 0x3ff;
        if (uVar17 != 0) {
          if (uVar17 < 0x21) {
            lVar29 = (long)(int)uVar17 * 3;
            do {
              if (lVar29 == 0) goto LAB_013c672c;
              lVar29 = lVar29 + -3;
            } while (*(int *)(lVar18 + lVar29 * 4 + 0xf) != iVar15);
LAB_013c62e4:
            lVar29 = lVar29 * 4;
            uVar17 = *(int *)(lVar18 + lVar29 + 0x13) >> 1;
            if (((((uVar17 & 1) == 0) && (iVar15 != (int)*(undefined8 *)(unaff_x26 + 0x5d0))) &&
                (iVar15 != (int)*(undefined8 *)(unaff_x26 + 0xc18))) &&
               (((iVar15 != (int)*(undefined8 *)(unaff_x26 + 0x848) &&
                 (iVar15 != (int)*(undefined8 *)(unaff_x26 + 0xc48))) &&
                ((iVar15 != (int)*(undefined8 *)(unaff_x26 + 0xc70) &&
                 ((iVar15 != (int)*(undefined8 *)(unaff_x26 + 0x960) &&
                  (iVar15 != (int)*(undefined8 *)(unaff_x26 + 0xa38))))))))) {
              if ((uVar17 >> 1 & 1) == 0) {
                uVar13 = uVar17 >> 6 & 7;
                if (uVar13 == 1) {
                  if ((param_3 & 1) != 0) goto LAB_013c8368;
                }
                else if (uVar13 == 2) {
                  if (((param_3 & 1) != 0) &&
                     (*(int *)(param_3 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x140)))
                  goto LAB_013c8368;
                }
                else if (uVar13 == 3) {
                  if ((((param_3 & 1) == 0) ||
                      (uVar16 = iVar7 + *(int *)(lVar18 + lVar29 + 0x17), uVar16 == 4)) ||
                     ((uVar16 != 2 &&
                      ((uVar16 == 3 || (*(uint *)(param_3 - 1) != (uVar16 & 0xfffffffd)))))))
                  goto LAB_013c8368;
                }
                else if (uVar13 == 0) goto LAB_013c8368;
                bVar10 = (uVar17 >> 2 & 1) != 1;
                uVar19 = (ulong)*(byte *)(lVar14 + 4) + (((ulong)uVar17 & 0x1ff80000) >> 0x13);
                if (uVar19 < *(byte *)(lVar14 + 3)) {
                  lVar14 = uVar19 * 4 + -1;
                  if (uVar13 == 2) {
                    if ((param_3 & 1) == 0) {
                      dVar35 = (double)iVar26;
                    }
                    else {
                      dVar35 = *(double *)(param_3 + 3);
                    }
                    lVar14 = unaff_x26 + (ulong)*(uint *)(param_1 + lVar14);
                    if (bVar10) {
                      *(double *)(lVar14 + 3) = dVar35;
                      return param_3;
                    }
                    dVar34 = *(double *)(lVar14 + 3);
                    if (dVar34 == dVar35) {
                      if ((int)((ulong)dVar34 >> 0x20) == (int)((ulong)dVar35 >> 0x20)) {
                        return param_3;
                      }
                      goto LAB_013c8368;
                    }
                  }
                  else {
                    if (bVar10) {
                      *(int *)(param_1 + lVar14) = iVar11;
                      if (((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0)
                      {
                        return param_3;
                      }
                      if ((param_3 & 1) == 0) {
                        return param_3;
                      }
                      uVar19 = unaff_x26 + (param_3 & 0xffffffff);
                      if (((uint)*(undefined8 *)((uVar19 & 0xfffffffffffc0000) + 8) >> 1 & 1) == 0)
                      {
                        return uVar19;
                      }
                      FUN_0133eb00(param_1,param_1 + lVar14,0,2);
                      return uVar19;
                    }
                    uVar19 = unaff_x26 + (ulong)*(uint *)(param_1 + lVar14);
                    if ((int)uVar19 == iVar11) {
                      return param_3;
                    }
                    bVar10 = (param_3 & 1) == 0;
                    if ((uVar19 & 1) == 0) {
                      if ((bVar10) ||
                         (*(int *)(param_3 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x140)))
                      goto LAB_013c8368;
                      dVar35 = *(double *)(param_3 + 3);
                      dVar34 = (double)((int)uVar19 >> 1);
                    }
                    else if (bVar10) {
                      if (*(int *)(uVar19 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x140))
                      goto LAB_013c8368;
                      dVar34 = *(double *)(uVar19 + 3);
                      dVar35 = (double)iVar26;
                    }
                    else {
                      iVar26 = (int)*(undefined8 *)(unaff_x26 + 0x140);
                      if ((*(int *)(uVar19 - 1) != iVar26) || (*(int *)(param_3 - 1) != iVar26))
                      goto LAB_013c8368;
                      dVar34 = *(double *)(uVar19 + 3);
                      dVar35 = *(double *)(param_3 + 3);
                    }
                    if (dVar34 == dVar35) {
                      if ((int)((ulong)dVar34 >> 0x20) == (int)((ulong)dVar35 >> 0x20)) {
                        return param_3;
                      }
                      goto LAB_013c8368;
                    }
                  }
                  if ((NAN(dVar34)) && (NAN(dVar35))) {
                    return param_3;
                  }
                }
                else {
                  uVar20 = unaff_x26 + (ulong)*(uint *)(param_1 + 3);
                  if ((uVar20 & 1) == 0) {
                    uVar20 = *(ulong *)(unaff_x26 + 0x168);
                  }
                  lVar14 = (uVar19 - *(byte *)(lVar14 + 3)) * 4 + 7;
                  if (uVar13 == 2) {
                    lVar14 = unaff_x26 + (ulong)*(uint *)(uVar20 + lVar14);
                    if ((param_3 & 1) == 0) {
                      dVar35 = (double)iVar26;
                    }
                    else {
                      dVar35 = *(double *)(param_3 + 3);
                    }
                    if (bVar10) {
                      *(double *)(lVar14 + 3) = dVar35;
                      return param_3;
                    }
                    dVar34 = *(double *)(lVar14 + 3);
                    if (dVar34 == dVar35) {
                      if ((int)((ulong)dVar34 >> 0x20) == (int)((ulong)dVar35 >> 0x20)) {
                        return param_3;
                      }
                      goto LAB_013c8368;
                    }
                  }
                  else {
                    if (bVar10) {
                      *(int *)(uVar20 + lVar14) = iVar11;
                      if (((uint)*(undefined8 *)((uVar20 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0)
                      {
                        return param_3;
                      }
                      if ((param_3 & 1) == 0) {
                        return param_3;
                      }
                      uVar19 = unaff_x26 + (param_3 & 0xffffffff);
                      if (((uint)*(undefined8 *)((uVar19 & 0xfffffffffffc0000) + 8) >> 1 & 1) == 0)
                      {
                        return uVar19;
                      }
                      FUN_0133eb00(uVar20,uVar20 + lVar14,0,2);
                      return uVar19;
                    }
                    uVar19 = unaff_x26 + (ulong)*(uint *)(uVar20 + lVar14);
                    if ((int)uVar19 == iVar11) {
                      return param_3;
                    }
                    bVar10 = (param_3 & 1) == 0;
                    if ((uVar19 & 1) == 0) {
                      if ((bVar10) ||
                         (*(int *)(param_3 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x140)))
                      goto LAB_013c8368;
                      dVar35 = *(double *)(param_3 + 3);
                      dVar34 = (double)((int)uVar19 >> 1);
                    }
                    else if (bVar10) {
                      if (*(int *)(uVar19 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x140))
                      goto LAB_013c8368;
                      dVar34 = *(double *)(uVar19 + 3);
                      dVar35 = (double)iVar26;
                    }
                    else {
                      iVar26 = (int)*(undefined8 *)(unaff_x26 + 0x140);
                      if ((*(int *)(uVar19 - 1) != iVar26) || (*(int *)(param_3 - 1) != iVar26))
                      goto LAB_013c8368;
                      dVar34 = *(double *)(uVar19 + 3);
                      dVar35 = *(double *)(param_3 + 3);
                    }
                    if (dVar34 == dVar35) {
                      if ((int)((ulong)dVar34 >> 0x20) == (int)((ulong)dVar35 >> 0x20)) {
                        return param_3;
                      }
                      goto LAB_013c8368;
                    }
                  }
                  if ((NAN(dVar34)) && (NAN(dVar35))) {
                    return param_3;
                  }
                }
              }
              else if (iVar11 == *(int *)(lVar18 + lVar29 + 0x17)) {
                return param_3;
              }
            }
            goto LAB_013c8368;
          }
          iVar6 = *(short *)(lVar18 + 5) + -1;
          iVar25 = 0;
          iVar23 = iVar6;
          do {
            iVar1 = iVar25 + ((uint)(iVar23 - iVar25) >> 1);
            if (*(uint *)(unaff_x26 +
                          (ulong)*(uint *)(lVar18 + (long)(int)(((uint)(*(int *)(lVar18 + (long)(
                                                  iVar1 * 3) * 4 + 0x13) >> 1) >> 9 & 0x3ff) * 3) *
                                                  4 + 0xf) + 3) < *(uint *)(param_2 + 3)) {
              iVar25 = iVar1 + 1;
              iVar1 = iVar23;
            }
            iVar23 = iVar1;
          } while (iVar25 != iVar23);
          for (; iVar25 <= iVar6; iVar25 = iVar25 + 1) {
            uVar13 = (uint)(*(int *)(lVar18 + (long)(iVar25 * 3) * 4 + 0x13) >> 1) >> 9 & 0x3ff;
            lVar29 = (long)(int)(uVar13 * 3);
            lVar33 = unaff_x26 + (ulong)*(uint *)(lVar18 + lVar29 * 4 + 0xf);
            if (*(uint *)(lVar33 + 3) != *(uint *)(param_2 + 3)) break;
            if ((int)lVar33 == iVar15) {
              if (uVar13 < uVar17) goto LAB_013c62e4;
              break;
            }
          }
        }
LAB_013c672c:
        bVar10 = false;
        if ((((iVar15 != (int)*(undefined8 *)(unaff_x26 + 0x5d0)) &&
             (iVar15 != (int)*(undefined8 *)(unaff_x26 + 0xc18))) &&
            (iVar15 != (int)*(undefined8 *)(unaff_x26 + 0x848))) &&
           (((iVar15 != (int)*(undefined8 *)(unaff_x26 + 0xc48) &&
             (iVar15 != (int)*(undefined8 *)(unaff_x26 + 0xc70))) &&
            ((iVar15 != (int)*(undefined8 *)(unaff_x26 + 0x960) &&
             (iVar15 != (int)*(undefined8 *)(unaff_x26 + 0xa38))))))) {
          uVar19 = unaff_x26 + (ulong)*(uint *)(lVar14 + 0x23);
          if (((uVar19 & 1) != 0) && ((uint)uVar19 != 3)) {
            if (((uint)uVar19 & 3) == 1) {
              if (*(int *)(uVar19 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x148))
              goto LAB_013c8368;
              bVar9 = (ulong)((long)((ulong)*(uint *)(uVar19 + 3) << 0x20) >> 0x21) < 2;
              if (bVar9) {
                uVar17 = 0;
              }
              else {
                uVar17 = *(int *)(uVar19 + 0xb) >> 1;
              }
              if (uVar17 == 0) goto LAB_013c8368;
              if (0x20 < uVar17) {
                if (bVar9) {
                  iVar25 = 0;
                }
                else {
                  iVar25 = *(int *)(uVar19 + 0xb) >> 1;
                }
                uVar13 = 0;
                uVar16 = iVar25 - 1U;
                do {
                  uVar2 = uVar13 + (uVar16 - uVar13 >> 1);
                  if (*(uint *)(unaff_x26 +
                                (ulong)*(uint *)(uVar19 + (long)(int)(uVar2 * 2) * 4 + 0xf) + 3) <
                      *(uint *)(param_2 + 3)) {
                    uVar13 = uVar2 + 1;
                    uVar2 = uVar16;
                  }
                  uVar16 = uVar2;
                } while (uVar13 != uVar16);
                for (; (int)uVar13 <= (int)(iVar25 - 1U); uVar13 = uVar13 + 1) {
                  lVar14 = unaff_x26 + (ulong)*(uint *)(uVar19 + (long)(int)(uVar13 << 1) * 4 + 0xf)
                  ;
                  if (*(uint *)(lVar14 + 3) != *(uint *)(param_2 + 3)) break;
                  if ((int)lVar14 == iVar15) {
                    if (uVar13 < uVar17) {
                      lVar14 = (long)(int)(uVar13 << 1) + 2;
                      goto LAB_013c68d8;
                    }
                    break;
                  }
                }
                goto LAB_013c8368;
              }
              lVar14 = (long)(int)uVar17 * 2 + 2;
              do {
                if (lVar14 == 2) goto LAB_013c8368;
                lVar14 = lVar14 + -2;
              } while (*(int *)(uVar19 + lVar14 * 4 + 7) != iVar15);
LAB_013c68d8:
              uVar19 = unaff_x26 + (ulong)*(uint *)(uVar19 + lVar14 * 4 + 0xb);
            }
            uVar20 = uVar19 & 0xfffffffffffffffd;
            if ((*(uint *)(uVar20 + 0xb) >> 0x18 & 1) == 0) {
              lVar14 = unaff_x26 + (ulong)*(uint *)(uVar20 + 0x17);
              lVar18 = (((ulong)(*(uint *)(uVar20 + 0xb) >> 10) & 0x3ff) * 3 + -3) * 4;
              if (*(int *)(lVar14 + lVar18 + 0xf) == iVar15) {
                uVar17 = *(int *)(lVar14 + lVar18 + 0x13) >> 1;
                if ((uVar17 & 0x29) == 0) {
                  if (*(int *)(param_2 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xf8)) {
                    bVar10 = (*(uint *)(param_2 + 7) & 1) != 0;
                  }
                  if (((uVar17 & 0x10) != 0) == bVar10) {
                    uVar12 = (undefined4)uVar20;
                    if ((uVar17 >> 1 & 1) == 0) {
                      uVar13 = uVar17 >> 6 & 7;
                      if (uVar13 == 1) {
                        if ((param_3 & 1) == 0) goto LAB_013c6a10;
                      }
                      else if (uVar13 == 2) {
                        if (((param_3 & 1) == 0) ||
                           (*(int *)(param_3 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x140)))
                        goto LAB_013c6a10;
                      }
                      else if (uVar13 == 3) {
                        if ((((param_3 & 1) != 0) &&
                            (uVar16 = iVar7 + *(int *)(lVar14 + lVar18 + 0x17), uVar16 != 4)) &&
                           ((uVar16 == 2 ||
                            ((uVar16 != 3 && (*(uint *)(param_3 - 1) == (uVar16 & 0xfffffffd)))))))
                        goto LAB_013c6a10;
                      }
                      else if (uVar13 != 0) {
LAB_013c6a10:
                        bVar3 = *(byte *)(uVar20 + 3);
                        uVar20 = (ulong)*(byte *)(uVar20 + 4) +
                                 (((ulong)uVar17 & 0x1ff80000) >> 0x13);
                        if (bVar3 <= uVar20) {
                          uVar21 = param_3;
                          if (uVar13 == 2) {
                            if ((param_3 & 1) == 0) {
                              dVar35 = (double)iVar26;
                            }
                            else {
                              dVar35 = *(double *)(param_3 + 3);
                            }
                            uVar21 = **(ulong **)(unaff_x26 + 0x1428);
                            uVar22 = uVar21 + 0xc;
                            if (uVar22 < **(ulong **)(unaff_x26 + 0x1430)) {
                              uVar21 = uVar21 + 1;
                              **(ulong **)(unaff_x26 + 0x1428) = uVar22;
                            }
                            else {
                              uVar21 = FUN_01348560(param_1,0xc);
                            }
                            *(int *)(uVar21 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
                            *(double *)(uVar21 + 3) = dVar35;
                          }
                          uVar22 = unaff_x26 + (ulong)*(uint *)(param_1 + 3);
                          if ((uVar22 & 1) == 0) {
                            uVar17 = ((int)uVar22 >> 1) << 10;
                            uVar22 = *(ulong *)(unaff_x26 + 0x168);
                            uVar24 = 0;
                          }
                          else {
                            uVar13 = *(int *)(uVar22 + 3) >> 1;
                            uVar17 = uVar13 & 0x3ffffc00;
                            uVar24 = (ulong)(int)(uVar13 & 0x3ff);
                          }
                          uVar20 = uVar20 - bVar3;
                          uVar27 = uVar22;
                          if (uVar24 <= uVar20) {
                            uVar27 = **(ulong **)(unaff_x26 + 0x1428);
                            lVar14 = (uVar24 + 3) * 4;
                            uVar32 = uVar27 + lVar14 + 8;
                            if (uVar32 < **(ulong **)(unaff_x26 + 0x1430)) {
                              uVar27 = uVar27 + 1;
                              **(ulong **)(unaff_x26 + 0x1428) = uVar32;
                            }
                            else {
                              uVar27 = FUN_01348560();
                            }
                            uVar13 = (uint)(uVar24 + 3);
                            *(int *)(uVar27 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x248);
                            *(uint *)(uVar27 + 3) = uVar13 * 2;
                            lVar14 = lVar14 + 7;
                            lVar18 = uVar24 * 4 + 7;
                            if (lVar14 != lVar18) {
                              uVar30 = *(undefined8 *)(unaff_x26 + 0xa0);
                              do {
                                lVar14 = lVar14 + -4;
                                *(int *)(uVar27 + lVar14) = (int)uVar30;
                              } while (lVar14 != lVar18);
                            }
                            while (lVar18 != 7) {
                              lVar18 = lVar18 + -4;
                              *(undefined4 *)(uVar27 + lVar18) = *(undefined4 *)(uVar22 + lVar18);
                            }
                            *(uint *)(uVar27 + 3) = (uVar17 | uVar13) * 2;
                            *(int *)(param_1 + 3) = (int)uVar27;
                            if (((((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 &
                                  1) != 0) && ((uVar27 & 1) != 0)) &&
                               (uVar27 = unaff_x26 + (uVar27 & 0xffffffff),
                               ((uint)*(undefined8 *)((uVar27 & 0xfffffffffffc0000) + 8) >> 1 & 1)
                               != 0)) {
                              FUN_0133eb00(param_1,param_1 + 3,0,2);
                              uVar27 = extraout_x11_01;
                            }
                          }
                          lVar14 = uVar20 * 4 + 7;
                          *(int *)(uVar27 + lVar14) = (int)uVar21;
                          if (((((uint)*(undefined8 *)((uVar27 & 0xfffffffffffc0000) + 8) >> 2 & 1)
                                != 0) && ((uVar21 & 1) != 0)) &&
                             (((uint)*(undefined8 *)
                                      ((unaff_x26 + (uVar21 & 0xffffffff) & 0xfffffffffffc0000) + 8)
                               >> 1 & 1) != 0)) {
                            FUN_0133eb00(uVar27,uVar27 + lVar14,0,2);
                          }
                          *(undefined4 *)(param_1 - 1) = uVar12;
                          if (((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1)
                              == 0) {
                            return param_3;
                          }
                          if (((uint)*(undefined8 *)
                                      ((unaff_x26 + (uVar19 & 0xfffffffd) & 0xfffffffffffc0000) + 8)
                               >> 1 & 1) == 0) {
                            return param_3;
                          }
                          FUN_0133eb00(param_1,param_1 - 1,2,2);
                          return param_3;
                        }
                        lVar14 = uVar20 * 4 + -1;
                        if (uVar13 != 2) {
                          *(undefined4 *)(param_1 - 1) = uVar12;
                          if ((((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1)
                               != 0) &&
                             (((uint)*(undefined8 *)
                                      ((unaff_x26 + (uVar19 & 0xfffffffd) & 0xfffffffffffc0000) + 8)
                               >> 1 & 1) != 0)) {
                            FUN_0133eb00(param_1,param_1 - 1,2,2);
                          }
                          *(int *)(param_1 + lVar14) = iVar11;
                          if (((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1)
                              == 0) {
                            return param_3;
                          }
                          if ((param_3 & 1) == 0) {
                            return param_3;
                          }
                          uVar19 = unaff_x26 + (param_3 & 0xffffffff);
                          if (((uint)*(undefined8 *)((uVar19 & 0xfffffffffffc0000) + 8) >> 1 & 1) ==
                              0) {
                            return uVar19;
                          }
                          FUN_0133eb00(param_1,param_1 + lVar14,0,2);
                          return uVar19;
                        }
                        if ((param_3 & 1) == 0) {
                          dVar35 = (double)iVar26;
                        }
                        else {
                          dVar35 = *(double *)(param_3 + 3);
                        }
                        uVar21 = **(ulong **)(unaff_x26 + 0x1428);
                        uVar20 = uVar21 + 0xc;
                        if (uVar20 < **(ulong **)(unaff_x26 + 0x1430)) {
                          uVar21 = uVar21 + 1;
                          **(ulong **)(unaff_x26 + 0x1428) = uVar20;
                        }
                        else {
                          uVar21 = FUN_01348560(param_1,0xc);
                        }
                        *(int *)(uVar21 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
                        *(double *)(uVar21 + 3) = dVar35;
                        *(undefined4 *)(param_1 - 1) = uVar12;
                        if ((((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) !=
                             0) && (((uint)*(undefined8 *)
                                            ((unaff_x26 + (uVar19 & 0xfffffffd) & 0xfffffffffffc0000
                                             ) + 8) >> 1 & 1) != 0)) {
                          FUN_0133eb00(param_1,param_1 - 1,2,2);
                        }
                        *(int *)(param_1 + lVar14) = (int)uVar21;
                        if (((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) ==
                            0) {
                          return param_3;
                        }
                        if ((uVar21 & 1) == 0) {
                          return param_3;
                        }
                        if (((uint)*(undefined8 *)
                                    ((unaff_x26 + (uVar21 & 0xffffffff) & 0xfffffffffffc0000) + 8)
                             >> 1 & 1) == 0) {
                          return param_3;
                        }
                        FUN_0133eb00(param_1,param_1 + lVar14,0,2);
                        return param_3;
                      }
                    }
                    else if (iVar11 == *(int *)(lVar14 + lVar18 + 0x17)) {
                      *(undefined4 *)(param_1 - 1) = uVar12;
                      if (((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0)
                      {
                        return param_3;
                      }
                      if (((uint)*(undefined8 *)
                                  ((unaff_x26 + (uVar19 & 0xfffffffd) & 0xfffffffffffc0000) + 8) >>
                           1 & 1) == 0) {
                        return param_3;
                      }
                      FUN_0133eb00(param_1,param_1 - 1,2,2);
                      return param_3;
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        uVar19 = unaff_x26 + (ulong)*(uint *)(param_1 + 3);
        if ((uVar19 & 1) == 0) {
          uVar19 = *(ulong *)(unaff_x26 + 0x410);
        }
        uVar20 = (ulong)(*(uint *)(param_2 + 3) >> 3);
        lVar18 = 0;
        while( true ) {
          uVar20 = uVar20 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar19 + 0xf) << 0x20) >> 0x21) -
                            1U;
          lVar29 = uVar20 * 3;
          lVar33 = (lVar29 + 5) * 4;
          iVar26 = *(int *)(uVar19 + lVar33 + 7);
          if (iVar26 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) break;
          if (iVar26 == iVar15) {
            if (((((((*(int *)(uVar19 + lVar33 + 0xf) >> 1 & 1U) == 0) &&
                   (iVar15 != (int)*(undefined8 *)(unaff_x26 + 0x5d0))) &&
                  (iVar15 != (int)*(undefined8 *)(unaff_x26 + 0xc18))) &&
                 ((iVar15 != (int)*(undefined8 *)(unaff_x26 + 0x848) &&
                  (iVar15 != (int)*(undefined8 *)(unaff_x26 + 0xc48))))) &&
                (iVar15 != (int)*(undefined8 *)(unaff_x26 + 0xc70))) &&
               ((iVar15 != (int)*(undefined8 *)(unaff_x26 + 0x960) &&
                (iVar15 != (int)*(undefined8 *)(unaff_x26 + 0xa38))))) {
              if ((ulong)((long)((ulong)*(uint *)(uVar19 + 3) << 0x20) >> 0x21) <= lVar29 + 6U) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(0,0x13c846c);
                (*pcVar8)();
              }
              *(int *)(uVar19 + lVar33 + 0xb) = iVar11;
              if (((uint)*(undefined8 *)((uVar19 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
                return param_3;
              }
              if ((param_3 & 1) == 0) {
                return param_3;
              }
              uVar20 = unaff_x26 + (param_3 & 0xffffffff);
              if (((uint)*(undefined8 *)((uVar20 & 0xfffffffffffc0000) + 8) >> 1 & 1) == 0) {
                return uVar20;
              }
              FUN_0133eb00(uVar19,uVar19 + lVar33 + 0xb,0,2);
              return uVar20;
            }
            goto LAB_013c8368;
          }
          lVar18 = lVar18 + 1;
          uVar20 = uVar20 + lVar18;
        }
        if ((((*(short *)(lVar14 + 7) != 0x41b) &&
             (iVar15 != (int)*(undefined8 *)(unaff_x26 + 0x5d0))) &&
            (iVar15 != (int)*(undefined8 *)(unaff_x26 + 0xc18))) &&
           (((iVar15 != (int)*(undefined8 *)(unaff_x26 + 0x848) &&
             (iVar15 != (int)*(undefined8 *)(unaff_x26 + 0xc48))) &&
            ((iVar15 != (int)*(undefined8 *)(unaff_x26 + 0xc70) &&
             ((iVar15 != (int)*(undefined8 *)(unaff_x26 + 0x960) &&
              (iVar15 != (int)*(undefined8 *)(unaff_x26 + 0xa38))))))))) {
          if ((*(int *)(param_2 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xf8)) &&
             ((*(uint *)(param_2 + 7) & 1) != 0)) {
            if ((*(uint *)(param_2 + 7) >> 4 & 1) == 0) {
LAB_013c6dc0:
              if (((uVar17 >> 0x14 & 1) != 0) &&
                 ((unaff_x26 + (ulong)*(uint *)(lVar14 + 0x23) & 1) != 0)) {
                *(undefined8 *)(unaff_x26 + 0x40) = 0x13c6ddc;
                *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
                (**(code **)(unaff_x26 + 0x11a0))(lVar14);
                *(undefined8 *)(unaff_x26 + 0x38) = 0;
              }
              uVar17 = iVar7 + *(int *)(uVar19 + 0xf);
              uVar20 = (long)((ulong)*(uint *)(uVar19 + 3) << 0x20) >> 0x21;
              if (uVar20 == 0) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(0,0x13c8474);
                (*pcVar8)();
              }
              uVar13 = iVar7 + *(int *)(uVar19 + 7) + 2;
              if (uVar13 + (uVar13 >> 1 & 0x7ffffffe) <= uVar17) {
                if (uVar20 < 2) {
                    /* WARNING: Does not return */
                  pcVar8 = (code *)SoftwareBreakpoint(0,0x13c847c);
                  (*pcVar8)();
                }
                if ((uint)(iVar7 + *(int *)(uVar19 + 0xb)) <= (uVar17 - uVar13 >> 1 & 0xfffffffe)) {
                  if (uVar20 < 4) {
                    /* WARNING: Does not return */
                    pcVar8 = (code *)SoftwareBreakpoint(0,0x13c8484);
                    (*pcVar8)();
                  }
                  lVar14 = unaff_x26 + (ulong)*(uint *)(uVar19 + 0x13);
                  uVar17 = (int)lVar14 + 2;
                  if (uVar17 < 0xffffff) {
                    *(uint *)(uVar19 + 0x13) = uVar17;
                    if ((long)((ulong)*(uint *)(uVar19 + 3) << 0x20) >> 0x21 == 0) {
                    /* WARNING: Does not return */
                      pcVar8 = (code *)SoftwareBreakpoint(0,0x13c8494);
                      (*pcVar8)();
                    }
                    *(uint *)(uVar19 + 7) = uVar13;
                    uVar20 = (ulong)(*(uint *)(param_2 + 3) >> 3);
                    lVar18 = 0;
                    while( true ) {
                      uVar20 = uVar20 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar19 + 0xf) << 0x20)
                                        >> 0x21) - 1U;
                      uVar21 = uVar20 * 3 + 5;
                      lVar33 = uVar21 * 4;
                      lVar29 = lVar33 + 7;
                      if ((*(int *)(uVar19 + lVar29) == (int)*(undefined8 *)(unaff_x26 + 0xa0)) ||
                         (*(int *)(uVar19 + lVar29) == (int)*(undefined8 *)(unaff_x26 + 0xa8)))
                      break;
                      lVar18 = lVar18 + 1;
                      uVar20 = uVar20 + lVar18;
                    }
                    if ((ulong)((long)((ulong)*(uint *)(uVar19 + 3) << 0x20) >> 0x21) <= uVar21) {
                    /* WARNING: Does not return */
                      pcVar8 = (code *)SoftwareBreakpoint(0,0x13c849c);
                      (*pcVar8)();
                    }
                    *(int *)(uVar19 + lVar29) = iVar15;
                    if (((((uint)*(undefined8 *)((uVar19 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0)
                        && ((param_2 & 1) != 0)) &&
                       (param_2 = unaff_x26 + (param_2 & 0xffffffff),
                       ((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
                      FUN_0133eb00(uVar19,uVar19 + lVar29,0,2);
                      uVar21 = extraout_x10_03;
                      lVar33 = extraout_x11_00;
                    }
                    if ((ulong)((long)((ulong)*(uint *)(uVar19 + 3) << 0x20) >> 0x21) <= uVar21 + 1)
                    {
                    /* WARNING: Does not return */
                      pcVar8 = (code *)SoftwareBreakpoint(0,0x13c84a4);
                      (*pcVar8)();
                    }
                    *(int *)(uVar19 + lVar33 + 0xb) = iVar11;
                    if (((((uint)*(undefined8 *)((uVar19 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0)
                        && ((param_3 & 1) != 0)) &&
                       (param_3 = unaff_x26 + (param_3 & 0xffffffff),
                       ((uint)*(undefined8 *)((param_3 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
                      FUN_0133eb00(uVar19,uVar19 + lVar33 + 0xb,0,2);
                      uVar21 = extraout_x10_02;
                      lVar33 = extraout_x11;
                    }
                    uVar13 = (uint)(lVar14 << 8);
                    uVar17 = uVar13 | 0x180;
                    if ((*(int *)(param_2 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xf8)) &&
                       ((*(uint *)(param_2 + 7) & 1) != 0)) {
                      uVar17 = uVar13 | 0x1a0;
                    }
                    if (uVar21 + 2 < (ulong)((long)((ulong)*(uint *)(uVar19 + 3) << 0x20) >> 0x21))
                    {
                      *(uint *)(uVar19 + lVar33 + 0xf) = uVar17;
                      return param_3;
                    }
                    /* WARNING: Does not return */
                    pcVar8 = (code *)SoftwareBreakpoint(0,0x13c84ac);
                    (*pcVar8)();
                  }
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x21a0));
            }
          }
          else if ((uVar17 >> 0x1b & 1) != 0) goto LAB_013c6dc0;
        }
      }
      goto LAB_013c8368;
    }
  }
LAB_013c6fec:
  uVar20 = unaff_x26 + (ulong)*(uint *)(param_1 + 7);
  bVar3 = *(byte *)(lVar14 + 10) >> 3;
  if (5 < bVar3) goto LAB_013c8368;
  iVar15 = (int)lVar14;
  if (uVar4 == 0x423) {
    uVar21 = (long)(unaff_x26 + (ulong)*(uint *)(param_1 + 0xb) << 0x20) >> 0x21;
    if (uVar21 <= uVar19) {
      iVar25 = iVar7 + *(int *)(uVar20 + 3) >> 1;
      uVar22 = (ulong)iVar25;
      if (uVar22 <= uVar19) goto LAB_013c8368;
      if (uVar19 == uVar21) {
        if (((*(uint *)(lVar14 + 0xb) >> 0x15 & 1) != 0) ||
           (((uint)(*(int *)(unaff_x26 + (ulong)*(uint *)(lVar14 + 0x17) + 0x13) >> 1) >> 3 & 1) !=
            0)) goto LAB_013c8368;
        iVar6 = (int)uVar19;
        if (*(int *)(uVar20 - 1) != (int)*(undefined8 *)(unaff_x26 + 0xe0)) {
          if (*(int *)(uVar20 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x1e8)) goto LAB_013c8368;
          if ((param_3 & 1) == 0) {
            dVar35 = (double)iVar26;
LAB_013c7dec:
            *(double *)(uVar20 + uVar19 * 8 + 7) = dVar35 - unaff_d15;
            *(int *)(param_1 + 0xb) = (iVar6 + 1) * 2;
            return param_3;
          }
          if (*(int *)(param_3 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x140)) {
            dVar35 = *(double *)(param_3 + 3);
            goto LAB_013c7dec;
          }
          uVar21 = *(ulong *)((param_1 & 0xfffffffffffc0000) + 8);
          lVar14 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13)
          ;
          if (((uVar21 & 0x18) != 0) && (((uint)uVar21 >> 5 & 1) == 0)) {
            uVar21 = param_1 + 0x13 & 0xfffffffffffc0000;
            if (uVar21 == (**(ulong **)(unaff_x26 + 0x1428) & 0xfffffffffffc0000)) {
              if (param_1 + 0x13 < **(ulong **)(unaff_x26 + 0x1428)) goto LAB_013c7c24;
            }
            else if ((param_1 & 0xfffffffffffc0000) == uVar21) {
LAB_013c7c24:
              if (*(int *)(param_1 + 0xf) == (int)*(undefined8 *)(unaff_x26 + 0xcd8))
              goto LAB_013c8368;
            }
          }
          if (iVar15 == *(int *)(lVar14 + 0x16f)) {
            uVar17 = *(uint *)(lVar14 + 0x167);
          }
          else {
            if (iVar15 != *(int *)(lVar14 + 0x173)) goto LAB_013c8368;
            uVar17 = *(uint *)(lVar14 + 0x16b);
          }
          if (uVar22 < 0x7ffe) {
            if ((long)uVar22 < 0x7fffffe) {
              uVar24 = **(ulong **)(unaff_x26 + 0x1428);
              uVar21 = uVar24 + uVar22 * 4 + 8;
              if (uVar21 < **(ulong **)(unaff_x26 + 0x1430)) {
                **(ulong **)(unaff_x26 + 0x1428) = uVar21;
                uVar21 = param_1;
                uVar24 = uVar24 + 1;
              }
              else {
                uVar21 = FUN_01348560();
                uVar24 = uVar21;
              }
              *(int *)(uVar24 - 1) = (int)*(undefined8 *)(unaff_x26 + 0xe0);
              *(int *)(uVar24 + 3) = iVar25 * 2;
              if (uVar22 * 4 != 0) {
                lVar14 = uVar22 * 4 + 7;
                uVar30 = *(undefined8 *)(unaff_x26 + 0xa8);
                do {
                  lVar14 = lVar14 + -4;
                  *(int *)(uVar24 + lVar14) = (int)uVar30;
                } while (lVar14 != 7);
              }
              lVar14 = uVar22 * 8 + 7;
              uVar27 = param_1;
              if (lVar14 != 7) {
                lVar18 = uVar22 * 4 + 7;
                lVar29 = -0x8000000080001;
                while( true ) {
                  lVar14 = lVar14 + -8;
                  if (*(long *)(uVar20 + lVar14) != lVar29) {
                    uVar32 = **(ulong **)(unaff_x26 + 0x1428);
                    uVar30 = *(undefined8 *)(uVar20 + lVar14);
                    uVar22 = uVar32 + 0xc;
                    if (uVar22 < **(ulong **)(unaff_x26 + 0x1430)) {
                      **(ulong **)(unaff_x26 + 0x1428) = uVar22;
                      uVar22 = uVar32 + 1;
                    }
                    else {
                      uVar21 = FUN_01348560(uVar21,0xc);
                      lVar29 = -0x8000000080001;
                      uVar27 = param_1;
                      uVar22 = uVar21;
                    }
                    *(int *)(uVar22 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
                    *(undefined8 *)(uVar22 + 3) = uVar30;
                    *(int *)(uVar24 + lVar18 + -4) = (int)uVar22;
                    if (((((uint)*(undefined8 *)((uVar24 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0)
                        && ((uVar22 & 1) != 0)) &&
                       (((uint)*(undefined8 *)
                                ((unaff_x26 + (uVar22 & 0xffffffff) & 0xfffffffffffc0000) + 8) >> 1
                        & 1) != 0)) {
                      FUN_0133eb00(uVar24,uVar24 + lVar18 + -4,0,2);
                      uVar20 = extraout_x8_01;
                      lVar18 = extraout_x9_00;
                      lVar29 = extraout_x10_00;
                    }
                  }
                  if (lVar14 == 7) break;
                  lVar18 = lVar18 + -4;
                }
              }
              *(int *)(uVar27 + 7) = (int)uVar24;
              if (((((uint)*(undefined8 *)((uVar27 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                  ((uVar24 & 1) != 0)) &&
                 (((uint)*(undefined8 *)
                          ((unaff_x26 + (uVar24 & 0xffffffff) & 0xfffffffffffc0000) + 8) >> 1 & 1)
                  != 0)) {
                FUN_0133eb00(uVar27,uVar27 + 7,0,2);
              }
              lVar14 = uVar19 * 4;
              *(uint *)(uVar27 - 1) = uVar17;
              if ((((uint)*(undefined8 *)((uVar27 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                 (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar17 & 0xfffffffffffc0000) + 8) >> 1
                  & 1) != 0)) {
                FUN_0133eb00(uVar27,uVar27 - 1,2,2);
              }
              lVar14 = lVar14 + 7;
              uVar20 = unaff_x26 + (ulong)*(uint *)(uVar27 + 7);
              iVar26 = ((int)uVar19 + 1) * 2;
              *(int *)(uVar20 + lVar14) = iVar11;
              if (((((uint)*(undefined8 *)((uVar20 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                  ((param_3 & 1) != 0)) &&
                 (param_3 = unaff_x26 + (param_3 & 0xffffffff),
                 ((uint)*(undefined8 *)((param_3 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
                FUN_0133eb00(uVar20,uVar20 + lVar14,0,2);
              }
              *(int *)(uVar27 + 0xb) = iVar26;
              return param_3;
            }
                    /* WARNING: Subroutine does not return */
            FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
          }
          goto LAB_013c8368;
        }
        if ((param_3 & 1) == 0) {
          *(int *)(uVar20 + uVar19 * 4 + 7) = iVar11;
          *(int *)(param_1 + 0xb) = (iVar6 + 1) * 2;
          return param_3;
        }
        if (1 < bVar3) {
          lVar14 = uVar19 * 4 + 7;
          *(int *)(uVar20 + lVar14) = iVar11;
          if (((((uint)*(undefined8 *)((uVar20 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
              ((param_3 & 1) != 0)) &&
             (param_3 = unaff_x26 + (param_3 & 0xffffffff),
             ((uint)*(undefined8 *)((param_3 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
            FUN_0133eb00(uVar20,uVar20 + lVar14,0,2);
          }
          *(int *)(param_1 + 0xb) = (iVar6 + 1) * 2;
          return param_3;
        }
        lVar14 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13);
        if (*(int *)(param_3 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x140)) {
          uVar21 = *(ulong *)((param_1 & 0xfffffffffffc0000) + 8);
          if (((uVar21 & 0x18) != 0) && (((uint)uVar21 >> 5 & 1) == 0)) {
            uVar21 = param_1 + 0x13 & 0xfffffffffffc0000;
            if (uVar21 == (**(ulong **)(unaff_x26 + 0x1428) & 0xfffffffffffc0000)) {
              if (param_1 + 0x13 < **(ulong **)(unaff_x26 + 0x1428)) goto LAB_013c7a30;
            }
            else if ((param_1 & 0xfffffffffffc0000) == uVar21) {
LAB_013c7a30:
              if (*(int *)(param_1 + 0xf) == (int)*(undefined8 *)(unaff_x26 + 0xcd8))
              goto LAB_013c8368;
            }
          }
          if (iVar15 == *(int *)(lVar14 + 0x15f)) {
            uVar17 = *(uint *)(lVar14 + 0x16f);
          }
          else {
            if (iVar15 != *(int *)(lVar14 + 0x163)) goto LAB_013c8368;
            uVar17 = *(uint *)(lVar14 + 0x173);
          }
          if (uVar22 < 0x3fff) {
            if (0x3fffffe < (long)uVar22) {
                    /* WARNING: Subroutine does not return */
              FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
            }
            if (uVar22 * 8 + 8 < 0x40000000) {
              puVar28 = *(ulong **)(unaff_x26 + 0x1428);
              puVar31 = (undefined4 *)*puVar28;
              if (puVar31 + uVar22 * 2 + 2 < (undefined4 *)puVar28[1]) {
                uVar21 = (long)puVar31 + 1;
                *puVar28 = (ulong)(puVar31 + uVar22 * 2 + 2);
                *puVar31 = (int)*(undefined8 *)(unaff_x26 + 0x1e8);
                puVar31[1] = iVar25 * 2;
                lVar14 = uVar22 * 4 + 7;
                if (lVar14 != 7) {
                  lVar18 = uVar22 * 8 + 7;
                  uVar30 = *(undefined8 *)(unaff_x26 + 0xa8);
                  do {
                    lVar14 = lVar14 + -4;
                    iVar26 = iVar7 + *(int *)(uVar20 + lVar14);
                    lVar18 = lVar18 + -8;
                    if (iVar26 == (int)uVar30) {
                      *(undefined8 *)(uVar21 + lVar18) = 0xfff7fffffff7ffff;
                    }
                    else {
                      *(double *)(uVar21 + lVar18) = (double)(iVar26 >> 1);
                    }
                  } while (lVar14 != 7);
                }
                *(int *)(param_1 + 7) = (int)uVar21;
                if (((((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                    ((uVar21 & 1) != 0)) &&
                   (((uint)*(undefined8 *)
                            ((unaff_x26 + (uVar21 & 0xffffffff) & 0xfffffffffffc0000) + 8) >> 1 & 1)
                    != 0)) {
                  FUN_0133eb00(param_1,param_1 + 7,0,2);
                }
                lVar14 = uVar19 * 8;
                *(uint *)(param_1 - 1) = uVar17;
                if ((((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                   (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar17 & 0xfffffffffffc0000) + 8) >>
                     1 & 1) != 0)) {
                  FUN_0133eb00(param_1,param_1 - 1,2,2);
                }
                *(double *)(unaff_x26 + (ulong)*(uint *)(param_1 + 7) + lVar14 + 7) =
                     *(double *)(param_3 + 3) - unaff_d15;
                *(int *)(param_1 + 0xb) = ((int)uVar19 + 1) * 2;
                return param_3;
              }
                    /* WARNING: Subroutine does not return */
              FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x1f88));
            }
                    /* WARNING: Subroutine does not return */
            FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fc8));
          }
          goto LAB_013c8368;
        }
        uVar21 = *(ulong *)((param_1 & 0xfffffffffffc0000) + 8);
        if (((uVar21 & 0x18) != 0) && (((uint)uVar21 >> 5 & 1) == 0)) {
          uVar21 = param_1 + 0x13 & 0xfffffffffffc0000;
          if (uVar21 == (**(ulong **)(unaff_x26 + 0x1428) & 0xfffffffffffc0000)) {
            if (param_1 + 0x13 < **(ulong **)(unaff_x26 + 0x1428)) goto LAB_013c795c;
          }
          else if ((param_1 & 0xfffffffffffc0000) == uVar21) {
LAB_013c795c:
            if (*(int *)(param_1 + 0xf) == (int)*(undefined8 *)(unaff_x26 + 0xcd8))
            goto LAB_013c8368;
          }
        }
        if (iVar15 == *(int *)(lVar14 + 0x15f)) {
          uVar17 = *(uint *)(lVar14 + 0x167);
LAB_013c79a8:
          lVar14 = uVar19 * 4;
          *(uint *)(param_1 - 1) = uVar17;
          if ((((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
             (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar17 & 0xfffffffffffc0000) + 8) >> 1 & 1)
              != 0)) {
            FUN_0133eb00(param_1,param_1 - 1,2,2);
            uVar20 = extraout_x8_02;
          }
          lVar14 = lVar14 + 7;
          *(int *)(uVar20 + lVar14) = iVar11;
          if (((((uint)*(undefined8 *)((uVar20 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
              ((param_3 & 1) != 0)) &&
             (param_3 = unaff_x26 + (param_3 & 0xffffffff),
             ((uint)*(undefined8 *)((param_3 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
            FUN_0133eb00(uVar20,uVar20 + lVar14,0,2);
          }
          *(int *)(param_1 + 0xb) = ((int)uVar19 + 1) * 2;
          return param_3;
        }
        if (iVar15 == *(int *)(lVar14 + 0x163)) {
          uVar17 = *(uint *)(lVar14 + 0x16b);
          goto LAB_013c79a8;
        }
        goto LAB_013c8368;
      }
      if (((*(uint *)(lVar14 + 0xb) >> 0x15 & 1) != 0) ||
         (((uint)(*(int *)(unaff_x26 + (ulong)*(uint *)(lVar14 + 0x17) + 0x13) >> 1) >> 3 & 1) != 0)
         ) goto LAB_013c8368;
      if (*(int *)(uVar20 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xe0)) {
        if ((param_3 & 1) == 0) {
          if ((bVar3 == 1) || (bVar3 == 3)) goto LAB_013c7560;
          lVar14 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13)
          ;
          if (iVar15 != *(int *)(lVar14 + 0x15f)) {
            if (iVar15 != *(int *)(lVar14 + 0x167)) goto LAB_013c8368;
            uVar21 = *(ulong *)((param_1 & 0xfffffffffffc0000) + 8);
            if (((uVar21 & 0x18) != 0) && (((uint)uVar21 >> 5 & 1) == 0)) {
              uVar21 = param_1 + 0x13 & 0xfffffffffffc0000;
              if (uVar21 == (**(ulong **)(unaff_x26 + 0x1428) & 0xfffffffffffc0000)) {
                if (param_1 + 0x13 < **(ulong **)(unaff_x26 + 0x1428)) goto LAB_013c7524;
              }
              else if ((param_1 & 0xfffffffffffc0000) == uVar21) {
LAB_013c7524:
                if (*(int *)(param_1 + 0xf) == (int)*(undefined8 *)(unaff_x26 + 0xcd8))
                goto LAB_013c8368;
              }
            }
            uVar17 = *(uint *)(lVar14 + 0x16b);
            *(uint *)(param_1 - 1) = uVar17;
            if ((((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
               (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar17 & 0xfffffffffffc0000) + 8) >> 1 &
                1) != 0)) {
              FUN_0133eb00(param_1,param_1 - 1,2,2);
              uVar20 = extraout_x8_05;
            }
            goto LAB_013c7560;
          }
          uVar21 = *(ulong *)((param_1 & 0xfffffffffffc0000) + 8);
          if (((uVar21 & 0x18) != 0) && (((uint)uVar21 >> 5 & 1) == 0)) {
            uVar21 = param_1 + 0x13 & 0xfffffffffffc0000;
            if (uVar21 == (**(ulong **)(unaff_x26 + 0x1428) & 0xfffffffffffc0000)) {
              if (param_1 + 0x13 < **(ulong **)(unaff_x26 + 0x1428)) goto LAB_013c749c;
            }
            else if ((param_1 & 0xfffffffffffc0000) == uVar21) {
LAB_013c749c:
              if (*(int *)(param_1 + 0xf) == (int)*(undefined8 *)(unaff_x26 + 0xcd8))
              goto LAB_013c8368;
            }
          }
          uVar17 = *(uint *)(lVar14 + 0x163);
          *(uint *)(param_1 - 1) = uVar17;
          if ((((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
             (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar17 & 0xfffffffffffc0000) + 8) >> 1 & 1)
              != 0)) {
            FUN_0133eb00(param_1,param_1 - 1,2,2);
            uVar20 = extraout_x8_06;
          }
LAB_013c7560:
          *(int *)(uVar20 + uVar19 * 4 + 7) = iVar11;
          *(int *)(param_1 + 0xb) = ((int)uVar19 + 1) * 2;
          return param_3;
        }
        if (1 < bVar3) {
          if (bVar3 == 3) goto LAB_013c7164;
          lVar14 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13)
          ;
          if (iVar15 != *(int *)(lVar14 + 0x167)) goto LAB_013c8368;
          uVar21 = *(ulong *)((param_1 & 0xfffffffffffc0000) + 8);
          if (((uVar21 & 0x18) != 0) && (((uint)uVar21 >> 5 & 1) == 0)) {
            uVar21 = param_1 + 0x13 & 0xfffffffffffc0000;
            if (uVar21 == (**(ulong **)(unaff_x26 + 0x1428) & 0xfffffffffffc0000)) {
              if (param_1 + 0x13 < **(ulong **)(unaff_x26 + 0x1428)) goto LAB_013c7128;
            }
            else if ((param_1 & 0xfffffffffffc0000) == uVar21) {
LAB_013c7128:
              if (*(int *)(param_1 + 0xf) == (int)*(undefined8 *)(unaff_x26 + 0xcd8))
              goto LAB_013c8368;
            }
          }
          uVar17 = *(uint *)(lVar14 + 0x16b);
          *(uint *)(param_1 - 1) = uVar17;
          if ((((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
             (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar17 & 0xfffffffffffc0000) + 8) >> 1 & 1)
              != 0)) {
            FUN_0133eb00(param_1,param_1 - 1,2,2);
            uVar20 = extraout_x8_08;
          }
LAB_013c7164:
          lVar14 = uVar19 * 4 + 7;
          *(int *)(uVar20 + lVar14) = iVar11;
          if (((((uint)*(undefined8 *)((uVar20 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
              ((param_3 & 1) != 0)) &&
             (param_3 = unaff_x26 + (param_3 & 0xffffffff),
             ((uint)*(undefined8 *)((param_3 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
            FUN_0133eb00(uVar20,uVar20 + lVar14,0,2);
          }
          *(int *)(param_1 + 0xb) = ((int)uVar19 + 1) * 2;
          return param_3;
        }
        lVar14 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13);
        if (*(int *)(param_3 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x140)) {
          uVar21 = *(ulong *)((param_1 & 0xfffffffffffc0000) + 8);
          if (((uVar21 & 0x18) != 0) && (((uint)uVar21 >> 5 & 1) == 0)) {
            uVar21 = param_1 + 0x13 & 0xfffffffffffc0000;
            if (uVar21 == (**(ulong **)(unaff_x26 + 0x1428) & 0xfffffffffffc0000)) {
              if (param_1 + 0x13 < **(ulong **)(unaff_x26 + 0x1428)) goto LAB_013c72c8;
            }
            else if ((param_1 & 0xfffffffffffc0000) == uVar21) {
LAB_013c72c8:
              if (*(int *)(param_1 + 0xf) == (int)*(undefined8 *)(unaff_x26 + 0xcd8))
              goto LAB_013c8368;
            }
          }
          if (iVar15 == *(int *)(lVar14 + 0x15f)) {
            uVar17 = *(uint *)(lVar14 + 0x173);
          }
          else {
            if (iVar15 != *(int *)(lVar14 + 0x163)) goto LAB_013c8368;
            uVar17 = *(uint *)(lVar14 + 0x173);
          }
          if (uVar22 < 0x3fff) {
            if (0x3fffffe < (long)uVar22) {
                    /* WARNING: Subroutine does not return */
              FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
            }
            if (uVar22 * 8 + 8 < 0x40000000) {
              puVar28 = *(ulong **)(unaff_x26 + 0x1428);
              puVar31 = (undefined4 *)*puVar28;
              lVar14 = uVar22 * 4 + 7;
              if (puVar31 + uVar22 * 2 + 2 < (undefined4 *)puVar28[1]) {
                uVar21 = (long)puVar31 + 1;
                *puVar28 = (ulong)(puVar31 + uVar22 * 2 + 2);
                *puVar31 = (int)*(undefined8 *)(unaff_x26 + 0x1e8);
                puVar31[1] = iVar25 * 2;
                if (lVar14 != 7) {
                  lVar18 = uVar22 * 8 + 7;
                  uVar30 = *(undefined8 *)(unaff_x26 + 0xa8);
                  do {
                    lVar14 = lVar14 + -4;
                    iVar26 = iVar7 + *(int *)(uVar20 + lVar14);
                    lVar18 = lVar18 + -8;
                    if (iVar26 == (int)uVar30) {
                      *(undefined8 *)(uVar21 + lVar18) = 0xfff7fffffff7ffff;
                    }
                    else {
                      *(double *)(uVar21 + lVar18) = (double)(iVar26 >> 1);
                    }
                  } while (lVar14 != 7);
                }
                *(int *)(param_1 + 7) = (int)uVar21;
                if (((((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                    ((uVar21 & 1) != 0)) &&
                   (((uint)*(undefined8 *)
                            ((unaff_x26 + (uVar21 & 0xffffffff) & 0xfffffffffffc0000) + 8) >> 1 & 1)
                    != 0)) {
                  FUN_0133eb00(param_1,param_1 + 7,0,2);
                }
                lVar14 = uVar19 * 8;
                *(uint *)(param_1 - 1) = uVar17;
                if ((((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                   (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar17 & 0xfffffffffffc0000) + 8) >>
                     1 & 1) != 0)) {
                  FUN_0133eb00(param_1,param_1 - 1,2,2);
                }
                *(double *)(unaff_x26 + (ulong)*(uint *)(param_1 + 7) + lVar14 + 7) =
                     *(double *)(param_3 + 3) - unaff_d15;
                *(int *)(param_1 + 0xb) = ((int)uVar19 + 1) * 2;
                return param_3;
              }
                    /* WARNING: Subroutine does not return */
              FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x1f88));
            }
                    /* WARNING: Subroutine does not return */
            FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fc8));
          }
          goto LAB_013c8368;
        }
        uVar21 = *(ulong *)((param_1 & 0xfffffffffffc0000) + 8);
        if (((uVar21 & 0x18) != 0) && (((uint)uVar21 >> 5 & 1) == 0)) {
          uVar21 = param_1 + 0x13 & 0xfffffffffffc0000;
          if (uVar21 == (**(ulong **)(unaff_x26 + 0x1428) & 0xfffffffffffc0000)) {
            if (param_1 + 0x13 < **(ulong **)(unaff_x26 + 0x1428)) goto LAB_013c71f4;
          }
          else if ((param_1 & 0xfffffffffffc0000) == uVar21) {
LAB_013c71f4:
            if (*(int *)(param_1 + 0xf) == (int)*(undefined8 *)(unaff_x26 + 0xcd8))
            goto LAB_013c8368;
          }
        }
        if (iVar15 == *(int *)(lVar14 + 0x15f)) {
          uVar17 = *(uint *)(lVar14 + 0x16b);
LAB_013c7240:
          lVar14 = uVar19 * 4;
          *(uint *)(param_1 - 1) = uVar17;
          if ((((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
             (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar17 & 0xfffffffffffc0000) + 8) >> 1 & 1)
              != 0)) {
            FUN_0133eb00(param_1,param_1 - 1,2,2);
            uVar20 = extraout_x8_07;
          }
          lVar14 = lVar14 + 7;
          *(int *)(uVar20 + lVar14) = iVar11;
          if (((((uint)*(undefined8 *)((uVar20 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
              ((param_3 & 1) != 0)) &&
             (param_3 = unaff_x26 + (param_3 & 0xffffffff),
             ((uint)*(undefined8 *)((param_3 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
            FUN_0133eb00(uVar20,uVar20 + lVar14,0,2);
          }
          *(int *)(param_1 + 0xb) = ((int)uVar19 + 1) * 2;
          return param_3;
        }
        if (iVar15 == *(int *)(lVar14 + 0x163)) {
          uVar17 = *(uint *)(lVar14 + 0x16b);
          goto LAB_013c7240;
        }
        goto LAB_013c8368;
      }
      if (*(int *)(uVar20 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x1e8)) goto LAB_013c8368;
      if ((param_3 & 1) == 0) {
        dVar35 = (double)iVar26;
      }
      else {
        if (*(int *)(param_3 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x140)) {
          uVar21 = *(ulong *)((param_1 & 0xfffffffffffc0000) + 8);
          lVar14 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13)
          ;
          if (((uVar21 & 0x18) != 0) && (((uint)uVar21 >> 5 & 1) == 0)) {
            uVar21 = param_1 + 0x13 & 0xfffffffffffc0000;
            if (uVar21 == (**(ulong **)(unaff_x26 + 0x1428) & 0xfffffffffffc0000)) {
              if (param_1 + 0x13 < **(ulong **)(unaff_x26 + 0x1428)) goto LAB_013c75f4;
            }
            else if ((param_1 & 0xfffffffffffc0000) == uVar21) {
LAB_013c75f4:
              if (*(int *)(param_1 + 0xf) == (int)*(undefined8 *)(unaff_x26 + 0xcd8))
              goto LAB_013c8368;
            }
          }
          if (iVar15 == *(int *)(lVar14 + 0x16f)) {
            uVar17 = *(uint *)(lVar14 + 0x16b);
          }
          else {
            if (iVar15 != *(int *)(lVar14 + 0x173)) goto LAB_013c8368;
            uVar17 = *(uint *)(lVar14 + 0x16b);
          }
          if (uVar22 < 0x7ffe) {
            if ((long)uVar22 < 0x7fffffe) {
              uVar24 = **(ulong **)(unaff_x26 + 0x1428);
              uVar21 = uVar24 + uVar22 * 4 + 8;
              if (uVar21 < **(ulong **)(unaff_x26 + 0x1430)) {
                **(ulong **)(unaff_x26 + 0x1428) = uVar21;
                uVar21 = param_1;
                uVar24 = uVar24 + 1;
              }
              else {
                uVar21 = FUN_01348560();
                uVar24 = uVar21;
              }
              *(int *)(uVar24 - 1) = (int)*(undefined8 *)(unaff_x26 + 0xe0);
              lVar14 = uVar22 * 4 + 7;
              *(int *)(uVar24 + 3) = iVar25 * 2;
              if (lVar14 != 7) {
                uVar30 = *(undefined8 *)(unaff_x26 + 0xa8);
                do {
                  lVar14 = lVar14 + -4;
                  *(int *)(uVar24 + lVar14) = (int)uVar30;
                } while (lVar14 != 7);
              }
              lVar14 = uVar22 * 8 + 7;
              uVar27 = param_1;
              if (lVar14 != 7) {
                lVar18 = uVar22 * 4 + 7;
                lVar29 = -0x8000000080001;
                while( true ) {
                  lVar14 = lVar14 + -8;
                  if (*(long *)(uVar20 + lVar14) != lVar29) {
                    uVar32 = **(ulong **)(unaff_x26 + 0x1428);
                    uVar30 = *(undefined8 *)(uVar20 + lVar14);
                    uVar22 = uVar32 + 0xc;
                    if (uVar22 < **(ulong **)(unaff_x26 + 0x1430)) {
                      **(ulong **)(unaff_x26 + 0x1428) = uVar22;
                      uVar22 = uVar32 + 1;
                    }
                    else {
                      uVar21 = FUN_01348560(uVar21,0xc);
                      lVar29 = -0x8000000080001;
                      uVar27 = param_1;
                      uVar22 = uVar21;
                    }
                    *(int *)(uVar22 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
                    *(undefined8 *)(uVar22 + 3) = uVar30;
                    *(int *)(uVar24 + lVar18 + -4) = (int)uVar22;
                    if (((((uint)*(undefined8 *)((uVar24 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0)
                        && ((uVar22 & 1) != 0)) &&
                       (((uint)*(undefined8 *)
                                ((unaff_x26 + (uVar22 & 0xffffffff) & 0xfffffffffffc0000) + 8) >> 1
                        & 1) != 0)) {
                      FUN_0133eb00(uVar24,uVar24 + lVar18 + -4,0,2);
                      uVar20 = extraout_x8_04;
                      lVar18 = extraout_x9_01;
                      lVar29 = extraout_x10_01;
                    }
                  }
                  if (lVar14 == 7) break;
                  lVar18 = lVar18 + -4;
                }
              }
              *(int *)(uVar27 + 7) = (int)uVar24;
              if (((((uint)*(undefined8 *)((uVar27 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                  ((uVar24 & 1) != 0)) &&
                 (((uint)*(undefined8 *)
                          ((unaff_x26 + (uVar24 & 0xffffffff) & 0xfffffffffffc0000) + 8) >> 1 & 1)
                  != 0)) {
                FUN_0133eb00(uVar27,uVar27 + 7,0,2);
              }
              lVar14 = uVar19 * 4;
              *(uint *)(uVar27 - 1) = uVar17;
              if ((((uint)*(undefined8 *)((uVar27 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                 (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar17 & 0xfffffffffffc0000) + 8) >> 1
                  & 1) != 0)) {
                FUN_0133eb00(uVar27,uVar27 - 1,2,2);
              }
              lVar14 = lVar14 + 7;
              uVar20 = unaff_x26 + (ulong)*(uint *)(uVar27 + 7);
              iVar26 = ((int)uVar19 + 1) * 2;
              *(int *)(uVar20 + lVar14) = iVar11;
              if (((((uint)*(undefined8 *)((uVar20 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                  ((param_3 & 1) != 0)) &&
                 (param_3 = unaff_x26 + (param_3 & 0xffffffff),
                 ((uint)*(undefined8 *)((param_3 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
                FUN_0133eb00(uVar20,uVar20 + lVar14,0,2);
              }
              *(int *)(uVar27 + 0xb) = iVar26;
              return param_3;
            }
                    /* WARNING: Subroutine does not return */
            FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
          }
          goto LAB_013c8368;
        }
        dVar35 = *(double *)(param_3 + 3);
      }
      if (bVar3 == 5) goto LAB_013c7858;
      lVar14 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13);
      if (iVar15 != *(int *)(lVar14 + 0x16f)) goto LAB_013c8368;
      uVar21 = *(ulong *)((param_1 & 0xfffffffffffc0000) + 8);
      if (((uVar21 & 0x18) != 0) && (((uint)uVar21 >> 5 & 1) == 0)) {
        uVar21 = param_1 + 0x13 & 0xfffffffffffc0000;
        if (uVar21 == (**(ulong **)(unaff_x26 + 0x1428) & 0xfffffffffffc0000)) {
          if (param_1 + 0x13 < **(ulong **)(unaff_x26 + 0x1428)) goto LAB_013c781c;
        }
        else if ((param_1 & 0xfffffffffffc0000) == uVar21) {
LAB_013c781c:
          if (*(int *)(param_1 + 0xf) == (int)*(undefined8 *)(unaff_x26 + 0xcd8)) goto LAB_013c8368;
        }
      }
      uVar17 = *(uint *)(lVar14 + 0x173);
      *(uint *)(param_1 - 1) = uVar17;
      if ((((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
         (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar17 & 0xfffffffffffc0000) + 8) >> 1 & 1) !=
          0)) {
        dVar35 = (double)FUN_0133eb00(param_1,param_1 - 1,2,2);
        uVar20 = extraout_x8_03;
      }
LAB_013c7858:
      *(double *)(uVar20 + uVar19 * 8 + 7) = dVar35 - unaff_d15;
      *(int *)(param_1 + 0xb) = ((int)uVar19 + 1) * 2;
      return param_3;
    }
  }
  else if ((ulong)((long)(unaff_x26 + (ulong)*(uint *)(uVar20 + 3) << 0x20) >> 0x21) <= uVar19)
  goto LAB_013c8368;
  if (*(int *)(uVar20 - 1) != (int)*(undefined8 *)(unaff_x26 + 0xe0)) {
    if (*(int *)(uVar20 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x1e8)) goto LAB_013c8368;
    if ((param_3 & 1) == 0) {
      dVar35 = (double)iVar26;
LAB_013c833c:
      *(double *)(uVar20 + uVar19 * 8 + 7) = dVar35 - unaff_d15;
      return param_3;
    }
    if (*(int *)(param_3 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x140)) {
      dVar35 = *(double *)(param_3 + 3);
      goto LAB_013c833c;
    }
    uVar21 = *(ulong *)((param_1 & 0xfffffffffffc0000) + 8);
    lVar14 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13);
    if (((uVar21 & 0x18) != 0) && (((uint)uVar21 >> 5 & 1) == 0)) {
      uVar21 = param_1 + 0x13 & 0xfffffffffffc0000;
      if (uVar21 == (**(ulong **)(unaff_x26 + 0x1428) & 0xfffffffffffc0000)) {
        if (param_1 + 0x13 < **(ulong **)(unaff_x26 + 0x1428)) goto LAB_013c8180;
      }
      else if ((param_1 & 0xfffffffffffc0000) == uVar21) {
LAB_013c8180:
        if (*(int *)(param_1 + 0xf) == (int)*(undefined8 *)(unaff_x26 + 0xcd8)) goto LAB_013c8368;
      }
    }
    if (iVar15 == *(int *)(lVar14 + 0x16f)) {
      uVar17 = *(uint *)(lVar14 + 0x167);
    }
    else {
      if (iVar15 != *(int *)(lVar14 + 0x173)) goto LAB_013c8368;
      uVar17 = *(uint *)(lVar14 + 0x16b);
    }
    iVar26 = iVar7 + *(int *)(uVar20 + 3) >> 1;
    uVar21 = (ulong)iVar26;
    if (uVar21 < 0x7ffe) {
      if (0x7fffffd < (long)uVar21) {
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
      }
      uVar24 = **(ulong **)(unaff_x26 + 0x1428);
      uVar22 = uVar24 + uVar21 * 4 + 8;
      if (uVar22 < **(ulong **)(unaff_x26 + 0x1430)) {
        **(ulong **)(unaff_x26 + 0x1428) = uVar22;
        uVar22 = param_1;
        uVar24 = uVar24 + 1;
      }
      else {
        uVar22 = FUN_01348560();
        uVar24 = uVar22;
      }
      *(int *)(uVar24 - 1) = (int)*(undefined8 *)(unaff_x26 + 0xe0);
      lVar14 = uVar21 * 4 + 7;
      *(int *)(uVar24 + 3) = iVar26 * 2;
      if (lVar14 != 7) {
        uVar30 = *(undefined8 *)(unaff_x26 + 0xa8);
        lVar18 = lVar14;
        do {
          lVar18 = lVar18 + -4;
          *(int *)(uVar24 + lVar18) = (int)uVar30;
        } while (lVar18 != 7);
      }
      lVar18 = uVar21 * 8 + 7;
      uVar21 = param_1;
      if (lVar18 != 7) {
        lVar29 = -0x8000000080001;
        while( true ) {
          lVar18 = lVar18 + -8;
          if (*(long *)(uVar20 + lVar18) != lVar29) {
            uVar32 = **(ulong **)(unaff_x26 + 0x1428);
            uVar30 = *(undefined8 *)(uVar20 + lVar18);
            uVar27 = uVar32 + 0xc;
            if (uVar27 < **(ulong **)(unaff_x26 + 0x1430)) {
              **(ulong **)(unaff_x26 + 0x1428) = uVar27;
              uVar27 = uVar32 + 1;
            }
            else {
              uVar22 = FUN_01348560(uVar22,0xc);
              lVar29 = -0x8000000080001;
              uVar21 = param_1;
              uVar27 = uVar22;
            }
            *(int *)(uVar27 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
            *(undefined8 *)(uVar27 + 3) = uVar30;
            *(int *)(uVar24 + lVar14 + -4) = (int)uVar27;
            if (((((uint)*(undefined8 *)((uVar24 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                ((uVar27 & 1) != 0)) &&
               (((uint)*(undefined8 *)((unaff_x26 + (uVar27 & 0xffffffff) & 0xfffffffffffc0000) + 8)
                 >> 1 & 1) != 0)) {
              FUN_0133eb00(uVar24,uVar24 + lVar14 + -4,0,2);
              uVar20 = extraout_x8;
              lVar14 = extraout_x9;
              uVar24 = extraout_x10;
            }
          }
          if (lVar18 == 7) break;
          lVar14 = lVar14 + -4;
        }
      }
      *(int *)(uVar21 + 7) = (int)uVar24;
      if (((((uint)*(undefined8 *)((uVar21 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
          ((uVar24 & 1) != 0)) &&
         (((uint)*(undefined8 *)((unaff_x26 + (uVar24 & 0xffffffff) & 0xfffffffffffc0000) + 8) >> 1
          & 1) != 0)) {
        FUN_0133eb00(uVar21,uVar21 + 7,0,2);
      }
      *(uint *)(uVar21 - 1) = uVar17;
      if ((((uint)*(undefined8 *)((uVar21 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
         (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar17 & 0xfffffffffffc0000) + 8) >> 1 & 1) !=
          0)) {
        FUN_0133eb00(uVar21,uVar21 - 1,2,2);
      }
      lVar14 = uVar19 * 4 + 7;
      uVar19 = unaff_x26 + (ulong)*(uint *)(uVar21 + 7);
      *(int *)(uVar19 + lVar14) = iVar11;
      if (((uint)*(undefined8 *)((uVar19 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
        return param_3;
      }
      if ((param_3 & 1) == 0) {
        return param_3;
      }
      uVar20 = unaff_x26 + (param_3 & 0xffffffff);
      if (((uint)*(undefined8 *)((uVar20 & 0xfffffffffffc0000) + 8) >> 1 & 1) == 0) {
        return uVar20;
      }
      FUN_0133eb00(uVar19,uVar19 + lVar14,0,2);
      return uVar20;
    }
    goto LAB_013c8368;
  }
  if ((param_3 & 1) == 0) {
    *(int *)(uVar20 + uVar19 * 4 + 7) = iVar11;
    return param_3;
  }
  if (1 < bVar3) {
    lVar14 = uVar19 * 4 + 7;
    *(int *)(uVar20 + lVar14) = iVar11;
    if (((uint)*(undefined8 *)((uVar20 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
      return param_3;
    }
    if ((param_3 & 1) == 0) {
      return param_3;
    }
    uVar19 = unaff_x26 + (param_3 & 0xffffffff);
    if (((uint)*(undefined8 *)((uVar19 & 0xfffffffffffc0000) + 8) >> 1 & 1) == 0) {
      return uVar19;
    }
    FUN_0133eb00(uVar20,uVar20 + lVar14,0,2);
    return uVar19;
  }
  lVar14 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13);
  if (*(int *)(param_3 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x140)) {
    uVar21 = *(ulong *)((param_1 & 0xfffffffffffc0000) + 8);
    if (((uVar21 & 0x18) != 0) && (((uint)uVar21 >> 5 & 1) == 0)) {
      uVar21 = param_1 + 0x13 & 0xfffffffffffc0000;
      if (uVar21 == (**(ulong **)(unaff_x26 + 0x1428) & 0xfffffffffffc0000)) {
        if (param_1 + 0x13 < **(ulong **)(unaff_x26 + 0x1428)) goto LAB_013c7f98;
      }
      else if ((param_1 & 0xfffffffffffc0000) == uVar21) {
LAB_013c7f98:
        if (*(int *)(param_1 + 0xf) == (int)*(undefined8 *)(unaff_x26 + 0xcd8)) goto LAB_013c8368;
      }
    }
    if (iVar15 == *(int *)(lVar14 + 0x15f)) {
      uVar17 = *(uint *)(lVar14 + 0x16f);
    }
    else {
      if (iVar15 != *(int *)(lVar14 + 0x163)) goto LAB_013c8368;
      uVar17 = *(uint *)(lVar14 + 0x173);
    }
    iVar26 = iVar7 + *(int *)(uVar20 + 3) >> 1;
    uVar21 = (ulong)iVar26;
    if (uVar21 < 0x3fff) {
      if (0x3fffffe < (long)uVar21) {
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
      }
      if (uVar21 * 8 + 8 < 0x40000000) {
        puVar28 = *(ulong **)(unaff_x26 + 0x1428);
        puVar31 = (undefined4 *)*puVar28;
        if (puVar31 + uVar21 * 2 + 2 < (undefined4 *)puVar28[1]) {
          uVar22 = (long)puVar31 + 1;
          *puVar28 = (ulong)(puVar31 + uVar21 * 2 + 2);
          *puVar31 = (int)*(undefined8 *)(unaff_x26 + 0x1e8);
          puVar31[1] = iVar26 * 2;
          lVar14 = uVar21 * 4 + 7;
          if (lVar14 != 7) {
            lVar18 = uVar21 * 8 + 7;
            uVar30 = *(undefined8 *)(unaff_x26 + 0xa8);
            do {
              lVar14 = lVar14 + -4;
              iVar26 = iVar7 + *(int *)(uVar20 + lVar14);
              lVar18 = lVar18 + -8;
              if (iVar26 == (int)uVar30) {
                *(undefined8 *)(uVar22 + lVar18) = 0xfff7fffffff7ffff;
              }
              else {
                *(double *)(uVar22 + lVar18) = (double)(iVar26 >> 1);
              }
            } while (lVar14 != 7);
          }
          *(int *)(param_1 + 7) = (int)uVar22;
          if (((((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
              ((uVar22 & 1) != 0)) &&
             (((uint)*(undefined8 *)((unaff_x26 + (uVar22 & 0xffffffff) & 0xfffffffffffc0000) + 8)
               >> 1 & 1) != 0)) {
            FUN_0133eb00(param_1,param_1 + 7,0,2);
          }
          *(uint *)(param_1 - 1) = uVar17;
          if ((((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
             (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar17 & 0xfffffffffffc0000) + 8) >> 1 & 1)
              != 0)) {
            FUN_0133eb00(param_1,param_1 - 1,2,2);
          }
          *(double *)(unaff_x26 + (ulong)*(uint *)(param_1 + 7) + uVar19 * 8 + 7) =
               *(double *)(param_3 + 3) - unaff_d15;
          return param_3;
        }
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x1f88));
      }
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fc8));
    }
    goto LAB_013c8368;
  }
  uVar21 = *(ulong *)((param_1 & 0xfffffffffffc0000) + 8);
  if (((uVar21 & 0x18) != 0) && (((uint)uVar21 >> 5 & 1) == 0)) {
    uVar21 = param_1 + 0x13 & 0xfffffffffffc0000;
    if (uVar21 == (**(ulong **)(unaff_x26 + 0x1428) & 0xfffffffffffc0000)) {
      if (param_1 + 0x13 < **(ulong **)(unaff_x26 + 0x1428)) goto LAB_013c7ed0;
    }
    else if ((param_1 & 0xfffffffffffc0000) == uVar21) {
LAB_013c7ed0:
      if (*(int *)(param_1 + 0xf) == (int)*(undefined8 *)(unaff_x26 + 0xcd8)) goto LAB_013c8368;
    }
  }
  if (iVar15 == *(int *)(lVar14 + 0x15f)) {
    uVar17 = *(uint *)(lVar14 + 0x167);
  }
  else {
    if (iVar15 != *(int *)(lVar14 + 0x163)) {
LAB_013c8368:
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 9000));
    }
    uVar17 = *(uint *)(lVar14 + 0x16b);
  }
  *(uint *)(param_1 - 1) = uVar17;
  if ((((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
     (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar17 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0))
  {
    FUN_0133eb00(param_1,param_1 - 1,2,2);
    uVar20 = extraout_x8_00;
  }
  lVar14 = uVar19 * 4 + 7;
  *(int *)(uVar20 + lVar14) = iVar11;
  if (((((uint)*(undefined8 *)((uVar20 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
      ((param_3 & 1) != 0)) &&
     (param_3 = unaff_x26 + (param_3 & 0xffffffff),
     ((uint)*(undefined8 *)((param_3 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
    FUN_0133eb00(uVar20,uVar20 + lVar14,0,2);
  }
  return param_3;
}

