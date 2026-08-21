
/* WARNING: Removing unreachable block (ram,0x01384284) */
/* WARNING: Type propagation algorithm not settling */

ulong FUN_013833c0(ulong param_1,undefined8 param_2,ulong param_3,long param_4,undefined8 param_5)

{
  ulong uVar1;
  byte bVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulong extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar16;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong uVar17;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong uVar18;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long lVar19;
  long lVar20;
  long extraout_x12;
  long extraout_x12_00;
  ulong uVar21;
  ulong uVar22;
  ulong extraout_x14;
  long unaff_x26;
  long unaff_x27;
  double dVar23;
  double dVar24;
  
  lVar9 = (long)(int)param_5 * 2;
  uVar7 = unaff_x26 + (ulong)*(uint *)(param_4 + lVar9 + 0x1f);
  iVar5 = (int)param_1;
  if ((uVar7 & 1) == 0) {
    uVar7 = (long)(uVar7 << 0x20) >> 0x21;
    uVar11 = uVar7 & 0xfff;
    lVar9 = unaff_x26 +
            (ulong)*(uint *)(unaff_x26 +
                             (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13) +
                            0x273);
    if ((ulong)((long)((ulong)*(uint *)(lVar9 + 3) << 0x20) >> 0x21) <= uVar11 + 1) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0,0x138443c);
      (*UNRECOVERED_JUMPTABLE)();
    }
    uVar11 = unaff_x26 + (ulong)*(uint *)(lVar9 + uVar11 * 4 + 0xb);
    lVar9 = (uVar7 >> 0xc & 0x3ffff) * 4 + 7;
    *(int *)(uVar11 + lVar9) = iVar5;
    if (((uint)*(undefined8 *)((uVar11 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
      return param_1;
    }
    if ((param_1 & 1) == 0) {
      return param_1;
    }
    uVar7 = unaff_x26 + (param_1 & 0xffffffff);
    if (((uint)*(undefined8 *)((uVar7 & 0xfffffffffffc0000) + 8) >> 1 & 1) == 0) {
      return uVar7;
    }
    FUN_0133eb00(uVar11,uVar11 + lVar9,0,2);
    return uVar7;
  }
  if ((int)uVar7 == 3) {
    uVar7 = unaff_x26 + (ulong)*(uint *)(param_4 + lVar9 + 0x23);
    uVar13 = (uint)uVar7;
    if (uVar13 == (uint)*(undefined8 *)(unaff_x26 + 0xc08)) goto LAB_0138440c;
    uVar11 = unaff_x26 +
             (ulong)*(uint *)(unaff_x26 +
                              (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13)
                             + 0x13);
    iVar12 = iVar5 >> 1;
    if ((uVar7 & 1) == 0) {
      uVar13 = (int)uVar13 >> 1;
      uVar14 = uVar13 & 0xf;
      if (6 < uVar14) {
        if (uVar14 == 0xb) {
          uVar6 = thunk_FUN_01349b90(param_3);
          uVar7 = FUN_013fe560(uVar11,uVar6,param_1,uVar11);
          return uVar7;
        }
        if (uVar14 == 9) {
                    /* WARNING: Subroutine does not return */
          FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x1f58));
        }
        if (uVar14 == 10) {
                    /* WARNING: Subroutine does not return */
          FUN_013be7e0(5,*(undefined8 *)(unaff_x26 + 8000));
        }
        uVar7 = unaff_x26 + (ulong)*(uint *)(uVar11 + 3);
        if ((uVar7 & 1) == 0) {
          uVar7 = *(ulong *)(unaff_x26 + 0x410);
        }
        uVar11 = (ulong)(*(uint *)(param_3 + 3) >> 3);
        lVar9 = 0;
        while( true ) {
          uVar11 = uVar11 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar7 + 0xf) << 0x20) >> 0x21) - 1U
          ;
          lVar16 = uVar11 * 3;
          lVar20 = (lVar16 + 5) * 4;
          iVar12 = *(int *)(uVar7 + lVar20 + 7);
          if (iVar12 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) break;
          if (iVar12 == (int)param_3) {
            if ((*(int *)(uVar7 + lVar20 + 0xf) >> 1 & 9U) == 0) {
              if ((ulong)((long)((ulong)*(uint *)(uVar7 + 3) << 0x20) >> 0x21) <= lVar16 + 6U) {
                    /* WARNING: Does not return */
                UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0,0x13843f4);
                (*UNRECOVERED_JUMPTABLE)();
              }
              *(int *)(uVar7 + lVar20 + 0xb) = iVar5;
              if (((uint)*(undefined8 *)((uVar7 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
                return param_1;
              }
              if ((param_1 & 1) == 0) {
                return param_1;
              }
              uVar11 = unaff_x26 + (param_1 & 0xffffffff);
              if (((uint)*(undefined8 *)((uVar11 & 0xfffffffffffc0000) + 8) >> 1 & 1) == 0) {
                return uVar11;
              }
              FUN_0133eb00(uVar7,uVar7 + lVar20 + 0xb,0,2);
              return extraout_x8;
            }
            break;
          }
          lVar9 = lVar9 + 1;
          uVar11 = uVar11 + lVar9;
        }
        goto LAB_0138440c;
      }
      if (uVar14 == 3) {
        uVar7 = FUN_0133fcc0(1,unaff_x26 +
                               (ulong)*(uint *)(unaff_x26 +
                                                (ulong)*(uint *)(unaff_x26 +
                                                                 (ulong)*(uint *)(unaff_x26 +
                                                                                  (ulong)*(uint *)(
                                                  uVar11 - 1) + 0x17) +
                                                  ((ulong)(uVar13 >> 6) & 0x3ff) * 0xc + 0x17) + 7))
        ;
        return uVar7;
      }
      if (uVar14 == 4) {
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(5,*(undefined8 *)(unaff_x26 + 0x1f28));
      }
      uVar15 = uVar13 >> 0x11 & 7;
      if (uVar15 == 1) {
        if ((param_1 & 1) != 0) goto LAB_0138440c;
        if (((uVar13 >> 0x10 & 1) == 0) &&
           (uVar11 = unaff_x26 + (ulong)*(uint *)(uVar11 + 3), (uVar11 & 1) == 0)) {
          uVar11 = *(ulong *)(unaff_x26 + 0x168);
        }
        lVar9 = ((ulong)(uVar13 >> 0x14) & 0x7ff) * 4 + -1;
        if (uVar14 != 2) {
          *(int *)(uVar11 + lVar9) = iVar5;
          return param_1;
        }
        iVar12 = *(int *)(uVar11 + lVar9);
      }
      else if (uVar15 == 3) {
        if (((param_1 & 1) == 0) ||
           (((uVar14 != 2 &&
             (uVar7 = unaff_x26 +
                      (ulong)*(uint *)(unaff_x26 +
                                       (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar11 - 1) +
                                                       0x17) +
                                      ((ulong)(uVar13 >> 6) & 0x3ff) * 0xc + 0x17),
             uVar15 = (uint)uVar7, (uVar7 & 1) != 0)) &&
            ((uVar15 == 3 || (*(uint *)(param_1 - 1) != (uVar15 & 0xfffffffd)))))))
        goto LAB_0138440c;
        if (((uVar13 >> 0x10 & 1) == 0) &&
           (uVar11 = unaff_x26 + (ulong)*(uint *)(uVar11 + 3), (uVar11 & 1) == 0)) {
          uVar11 = *(ulong *)(unaff_x26 + 0x168);
        }
        lVar9 = ((ulong)(uVar13 >> 0x14) & 0x7ff) * 4 + -1;
        if (uVar14 != 2) {
          *(int *)(uVar11 + lVar9) = iVar5;
          if (((uint)*(undefined8 *)((uVar11 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
            return param_1;
          }
          if ((param_1 & 1) == 0) {
            return param_1;
          }
          uVar7 = unaff_x26 + (param_1 & 0xffffffff);
          if (((uint)*(undefined8 *)((uVar7 & 0xfffffffffffc0000) + 8) >> 1 & 1) == 0) {
            return uVar7;
          }
          FUN_0133eb00(uVar11,uVar11 + lVar9,0,2);
          return uVar7;
        }
        iVar12 = *(int *)(uVar11 + lVar9);
      }
      else {
        if (uVar15 != 4) {
          if ((param_1 & 1) == 0) {
            dVar23 = (double)iVar12;
          }
          else {
            if (*(int *)(param_1 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x140)) goto LAB_0138440c;
            dVar23 = *(double *)(param_1 + 3);
          }
          if ((*(int *)(unaff_x26 +
                        (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar11 - 1) + 0x17) +
                       ((ulong)(uVar13 >> 6) & 0x3ff) * 0xc + 0x13) >> 1 & 0x1c0U) == 0x80) {
            if (((uVar13 >> 0x10 & 1) == 0) &&
               (uVar11 = unaff_x26 + (ulong)*(uint *)(uVar11 + 3), (uVar11 & 1) == 0)) {
              uVar11 = *(ulong *)(unaff_x26 + 0x168);
            }
            lVar9 = unaff_x26 +
                    (ulong)*(uint *)(uVar11 + ((ulong)(uVar13 >> 0x14) & 0x7ff) * 4 + -1);
            if (uVar14 != 2) {
              *(double *)(lVar9 + 3) = dVar23;
              return param_1;
            }
            dVar24 = *(double *)(lVar9 + 3);
            if (dVar24 == dVar23) {
              if ((int)((ulong)dVar24 >> 0x20) == (int)((ulong)dVar23 >> 0x20)) {
                return param_1;
              }
            }
            else if ((NAN(dVar24)) && (NAN(dVar23))) {
              return param_1;
            }
          }
          goto LAB_0138440c;
        }
        if (((uVar13 >> 0x10 & 1) == 0) &&
           (uVar11 = unaff_x26 + (ulong)*(uint *)(uVar11 + 3), (uVar11 & 1) == 0)) {
          uVar11 = *(ulong *)(unaff_x26 + 0x168);
        }
        lVar9 = ((ulong)(uVar13 >> 0x14) & 0x7ff) * 4 + -1;
        if (uVar14 != 2) {
          *(int *)(uVar11 + lVar9) = iVar5;
          if (((uint)*(undefined8 *)((uVar11 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
            return param_1;
          }
          if ((param_1 & 1) == 0) {
            return param_1;
          }
          uVar7 = unaff_x26 + (param_1 & 0xffffffff);
          if (((uint)*(undefined8 *)((uVar7 & 0xfffffffffffc0000) + 8) >> 1 & 1) == 0) {
            return uVar7;
          }
          FUN_0133eb00(uVar11,uVar11 + lVar9,0,2);
          return uVar7;
        }
        iVar12 = *(int *)(uVar11 + lVar9);
      }
    }
    else {
      iVar3 = (int)unaff_x26;
      if ((uVar13 & 3) == 3) {
        if (uVar13 == 3) goto LAB_0138440c;
        uVar10 = uVar7 & 0xfffffffffffffffd;
        if (*(int *)(uVar10 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
          lVar9 = unaff_x26 + (ulong)*(uint *)(uVar10 + 0x1f);
          if ((((int)lVar9 == 0) || (*(int *)(lVar9 + 3) == 0)) &&
             ((*(uint *)(uVar10 + 0xb) >> 0x18 & 1) == 0)) {
            lVar9 = unaff_x26 + (ulong)*(uint *)(uVar10 + 0x17);
            lVar16 = (((ulong)(*(uint *)(uVar10 + 0xb) >> 10) & 0x3ff) * 3 + -3) * 4;
            uVar13 = *(int *)(lVar9 + lVar16 + 0x13) >> 1;
            uVar8 = (undefined4)uVar10;
            if ((uVar13 >> 1 & 1) == 0) {
              uVar14 = uVar13 >> 6 & 7;
              if (uVar14 == 1) {
                if ((param_1 & 1) == 0) goto LAB_01383b98;
              }
              else if (uVar14 == 2) {
                if (((param_1 & 1) == 0) ||
                   (*(int *)(param_1 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x140)))
                goto LAB_01383b98;
              }
              else if (uVar14 == 3) {
                if ((((param_1 & 1) != 0) &&
                    (uVar15 = iVar3 + *(int *)(lVar9 + lVar16 + 0x17), uVar15 != 4)) &&
                   ((uVar15 == 2 ||
                    ((uVar15 != 3 && (*(uint *)(param_1 - 1) == (uVar15 & 0xfffffffd)))))))
                goto LAB_01383b98;
              }
              else if (uVar14 != 0) {
LAB_01383b98:
                bVar2 = *(byte *)(uVar10 + 3);
                uVar17 = (ulong)*(byte *)(uVar10 + 4) + (((ulong)uVar13 & 0x1ff80000) >> 0x13);
                if (bVar2 <= uVar17) {
                  uVar7 = param_1;
                  if (uVar14 == 2) {
                    if ((param_1 & 1) == 0) {
                      dVar23 = (double)iVar12;
                    }
                    else {
                      dVar23 = *(double *)(param_1 + 3);
                    }
                    uVar7 = **(ulong **)(unaff_x26 + 0x1428);
                    uVar18 = uVar7 + 0xc;
                    if (uVar18 < **(ulong **)(unaff_x26 + 0x1430)) {
                      uVar7 = uVar7 + 1;
                      **(ulong **)(unaff_x26 + 0x1428) = uVar18;
                    }
                    else {
                      uVar7 = FUN_01348560(param_1,0xc);
                    }
                    *(int *)(uVar7 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
                    *(double *)(uVar7 + 3) = dVar23;
                  }
                  uVar18 = unaff_x26 + (ulong)*(uint *)(uVar11 + 3);
                  if ((uVar18 & 1) == 0) {
                    uVar13 = ((int)uVar18 >> 1) << 10;
                    uVar18 = *(ulong *)(unaff_x26 + 0x168);
                    uVar21 = 0;
                  }
                  else {
                    uVar14 = *(int *)(uVar18 + 3) >> 1;
                    uVar13 = uVar14 & 0x3ffffc00;
                    uVar21 = (ulong)(int)(uVar14 & 0x3ff);
                  }
                  uVar17 = uVar17 - bVar2;
                  uVar22 = uVar18;
                  if (uVar21 <= uVar17) {
                    uVar22 = **(ulong **)(unaff_x26 + 0x1428);
                    lVar9 = (uVar21 + 3) * 4;
                    uVar1 = uVar22 + lVar9 + 8;
                    if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
                      uVar22 = uVar22 + 1;
                      **(ulong **)(unaff_x26 + 0x1428) = uVar1;
                    }
                    else {
                      uVar22 = FUN_01348560();
                    }
                    uVar14 = (uint)(uVar21 + 3);
                    *(int *)(uVar22 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x248);
                    *(uint *)(uVar22 + 3) = uVar14 * 2;
                    lVar9 = lVar9 + 7;
                    lVar16 = uVar21 * 4 + 7;
                    if (lVar9 != lVar16) {
                      uVar6 = *(undefined8 *)(unaff_x26 + 0xa0);
                      do {
                        lVar9 = lVar9 + -4;
                        *(int *)(uVar22 + lVar9) = (int)uVar6;
                      } while (lVar9 != lVar16);
                    }
                    while (lVar16 != 7) {
                      lVar16 = lVar16 + -4;
                      *(undefined4 *)(uVar22 + lVar16) = *(undefined4 *)(uVar18 + lVar16);
                    }
                    *(uint *)(uVar22 + 3) = (uVar13 | uVar14) * 2;
                    *(int *)(uVar11 + 3) = (int)uVar22;
                    if (((((uint)*(undefined8 *)((uVar11 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0)
                        && ((uVar22 & 1) != 0)) &&
                       (uVar22 = unaff_x26 + (uVar22 & 0xffffffff),
                       ((uint)*(undefined8 *)((uVar22 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
                      FUN_0133eb00(uVar11,uVar11 + 3,0,2);
                      uVar11 = extraout_x9_02;
                      uVar7 = extraout_x10_00;
                      uVar22 = extraout_x14;
                    }
                  }
                  uVar13 = (uint)uVar10;
                  lVar9 = uVar17 * 4 + 7;
                  *(int *)(uVar22 + lVar9) = (int)uVar7;
                  if (((((uint)*(undefined8 *)((uVar22 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                      ((uVar7 & 1) != 0)) &&
                     (((uint)*(undefined8 *)
                              ((unaff_x26 + (uVar7 & 0xffffffff) & 0xfffffffffffc0000) + 8) >> 1 & 1
                      ) != 0)) {
                    FUN_0133eb00(uVar22,uVar22 + lVar9,0,2);
                    uVar11 = extraout_x9_01;
                  }
                  *(uint *)(uVar11 - 1) = uVar13;
                  if (((uint)*(undefined8 *)((uVar11 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
                    return param_1;
                  }
                  if (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar13 & 0xfffffffffffc0000) + 8)
                       >> 1 & 1) == 0) {
                    return param_1;
                  }
                  FUN_0133eb00(uVar11,uVar11 - 1,2,2);
                  return param_1;
                }
                lVar9 = uVar17 * 4 + -1;
                if (uVar14 != 2) {
                  *(undefined4 *)(uVar11 - 1) = uVar8;
                  if ((((uint)*(undefined8 *)((uVar11 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                     (((uint)*(undefined8 *)
                              ((unaff_x26 + (uVar7 & 0xfffffffd) & 0xfffffffffffc0000) + 8) >> 1 & 1
                      ) != 0)) {
                    FUN_0133eb00(uVar11,uVar11 - 1,2,2);
                    uVar11 = extraout_x9_00;
                  }
                  *(int *)(uVar11 + lVar9) = (int)param_1;
                  if (((uint)*(undefined8 *)((uVar11 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
                    return param_1;
                  }
                  if ((param_1 & 1) == 0) {
                    return param_1;
                  }
                  uVar7 = unaff_x26 + (param_1 & 0xffffffff);
                  if (((uint)*(undefined8 *)((uVar7 & 0xfffffffffffc0000) + 8) >> 1 & 1) == 0) {
                    return uVar7;
                  }
                  FUN_0133eb00(uVar11,uVar11 + lVar9,0,2);
                  return uVar7;
                }
                if ((param_1 & 1) == 0) {
                  dVar23 = (double)iVar12;
                }
                else {
                  dVar23 = *(double *)(param_1 + 3);
                }
                uVar17 = **(ulong **)(unaff_x26 + 0x1428);
                uVar10 = uVar17 + 0xc;
                if (uVar10 < **(ulong **)(unaff_x26 + 0x1430)) {
                  uVar17 = uVar17 + 1;
                  **(ulong **)(unaff_x26 + 0x1428) = uVar10;
                }
                else {
                  uVar17 = FUN_01348560(param_1,0xc);
                }
                *(int *)(uVar17 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
                *(double *)(uVar17 + 3) = dVar23;
                *(undefined4 *)(uVar11 - 1) = uVar8;
                if ((((uint)*(undefined8 *)((uVar11 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                   (((uint)*(undefined8 *)
                            ((unaff_x26 + (uVar7 & 0xfffffffd) & 0xfffffffffffc0000) + 8) >> 1 & 1)
                    != 0)) {
                  FUN_0133eb00(uVar11,uVar11 - 1,2,2);
                  uVar11 = extraout_x9;
                  uVar17 = extraout_x10;
                }
                *(int *)(uVar11 + lVar9) = (int)uVar17;
                if (((uint)*(undefined8 *)((uVar11 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
                  return param_1;
                }
                if ((uVar17 & 1) == 0) {
                  return param_1;
                }
                if (((uint)*(undefined8 *)
                            ((unaff_x26 + (uVar17 & 0xffffffff) & 0xfffffffffffc0000) + 8) >> 1 & 1)
                    == 0) {
                  return param_1;
                }
                FUN_0133eb00(uVar11,uVar11 + lVar9,0,2);
                return param_1;
              }
            }
            else if (iVar5 == *(int *)(lVar9 + lVar16 + 0x17)) {
              *(undefined4 *)(uVar11 - 1) = uVar8;
              if (((uint)*(undefined8 *)((uVar11 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
                return param_1;
              }
              if (((uint)*(undefined8 *)
                          ((unaff_x26 + (uVar7 & 0xfffffffd) & 0xfffffffffffc0000) + 8) >> 1 & 1) ==
                  0) {
                return param_1;
              }
              FUN_0133eb00(uVar11,uVar11 - 1,2,2);
              return param_1;
            }
          }
          goto LAB_0138440c;
        }
        uVar11 = unaff_x26 + (ulong)*(uint *)(uVar10 + 0xb);
        uVar13 = *(int *)(uVar10 + 7) >> 1;
        if ((uVar13 >> 3 & 1) != 0) goto LAB_0138440c;
        uVar13 = uVar13 >> 6 & 3;
        iVar12 = (int)uVar11;
        if (uVar13 != 1) {
          if (iVar12 != (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
            if (uVar13 == 3) {
LAB_01383a74:
              *(int *)(uVar10 + 0xb) = iVar5;
              if (((uint)*(undefined8 *)((uVar7 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
                return param_1;
              }
              if ((param_1 & 1) == 0) {
                return param_1;
              }
              uVar7 = unaff_x26 + (param_1 & 0xffffffff);
              if (((uint)*(undefined8 *)((uVar7 & 0xfffffffffffc0000) + 8) >> 1 & 1) == 0) {
                return uVar7;
              }
              FUN_0133eb00(uVar10,uVar10 + 0xb,0,2);
              return uVar7;
            }
            bVar4 = (param_1 & 1) != 0;
            if ((uVar11 & 1) == 0) {
              if (!bVar4) goto LAB_01383a74;
            }
            else if ((bVar4) && (*(int *)(uVar11 - 1) == *(int *)(param_1 - 1))) goto LAB_01383a74;
          }
          goto LAB_0138440c;
        }
      }
      else {
        if (*(int *)(uVar7 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x120)) {
          if (((long)*(int *)(uVar7 + 0x17) & 0x80000000U) == 0) {
            UNRECOVERED_JUMPTABLE = (code *)(uVar7 + 0x3f);
          }
          else {
            UNRECOVERED_JUMPTABLE =
                 *(code **)((long)*(int *)(uVar7 + 0x27) * 8 + unaff_x26 + 0x2c78);
          }
                    /* WARNING: Could not recover jumptable at 0x013839f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar7 = (*UNRECOVERED_JUMPTABLE)(param_1,uVar11);
          return uVar7;
        }
        lVar9 = unaff_x26 + (ulong)*(uint *)(uVar7 + 7);
        if (((int)lVar9 != 0) && (*(int *)(lVar9 + 3) != 0)) goto LAB_0138440c;
        uVar14 = iVar3 + *(int *)(uVar7 + 3) >> 1;
        uVar13 = uVar14 & 0xf;
        if (uVar13 == 8) {
          lVar9 = unaff_x26 + (ulong)*(uint *)(uVar11 - 1);
          if (((*(uint *)(lVar9 + 0xb) >> 0x14 & 1) != 0) &&
             ((unaff_x26 + (ulong)*(uint *)(lVar9 + 0x23) & 1) != 0)) {
            *(undefined8 *)(unaff_x26 + 0x40) = 0x1383798;
            *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
            (**(code **)(unaff_x26 + 0x11a0))(lVar9);
            *(undefined8 *)(unaff_x26 + 0x38) = 0;
          }
          uVar7 = unaff_x26 + (ulong)*(uint *)(uVar11 + 3);
          if ((uVar7 & 1) == 0) {
            uVar7 = *(ulong *)(unaff_x26 + 0x410);
          }
          uVar13 = iVar3 + *(int *)(uVar7 + 0xf);
          uVar11 = (long)((ulong)*(uint *)(uVar7 + 3) << 0x20) >> 0x21;
          if (uVar11 == 0) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0,0x1384270);
            (*UNRECOVERED_JUMPTABLE)();
          }
          uVar14 = iVar3 + *(int *)(uVar7 + 7) + 2;
          if (uVar14 + (uVar14 >> 1 & 0xfffffffe) <= uVar13) {
            if (uVar11 < 2) {
                    /* WARNING: Does not return */
              UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0,0x1384278);
              (*UNRECOVERED_JUMPTABLE)();
            }
            if ((uint)(iVar3 + *(int *)(uVar7 + 0xb)) <= (uVar13 - uVar14 >> 1 & 0xfffffffe)) {
              if (uVar11 < 4) {
                    /* WARNING: Does not return */
                UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0,0x1384280);
                (*UNRECOVERED_JUMPTABLE)();
              }
              lVar9 = unaff_x26 + (ulong)*(uint *)(uVar7 + 0x13);
              uVar13 = (int)lVar9 + 2;
              if (uVar13 < 0xffffff) {
                *(uint *)(uVar7 + 0x13) = uVar13;
                if ((long)((ulong)*(uint *)(uVar7 + 3) << 0x20) >> 0x21 == 0) {
                    /* WARNING: Does not return */
                  UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0,0x1384290);
                  (*UNRECOVERED_JUMPTABLE)();
                }
                *(uint *)(uVar7 + 7) = uVar14;
                uVar11 = (ulong)(*(uint *)(param_3 + 3) >> 3);
                lVar16 = 0;
                while( true ) {
                  uVar11 = uVar11 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar7 + 0xf) << 0x20) >>
                                    0x21) - 1U;
                  uVar10 = uVar11 * 3 + 5;
                  lVar19 = uVar10 * 4;
                  lVar20 = lVar19 + 7;
                  if ((*(int *)(uVar7 + lVar20) == (int)*(undefined8 *)(unaff_x26 + 0xa0)) ||
                     (*(int *)(uVar7 + lVar20) == (int)*(undefined8 *)(unaff_x26 + 0xa8))) break;
                  lVar16 = lVar16 + 1;
                  uVar11 = uVar11 + lVar16;
                }
                if (uVar10 < (ulong)((long)((ulong)*(uint *)(uVar7 + 3) << 0x20) >> 0x21)) {
                  *(int *)(uVar7 + lVar20) = (int)param_3;
                  if (((((uint)*(undefined8 *)((uVar7 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                      ((param_3 & 1) != 0)) &&
                     (param_3 = unaff_x26 + (param_3 & 0xffffffff),
                     ((uint)*(undefined8 *)((param_3 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
                    FUN_0133eb00(uVar7,uVar7 + lVar20,0,2);
                    lVar9 = extraout_x8_01;
                    uVar10 = extraout_x11_00;
                    lVar19 = extraout_x12_00;
                  }
                  if (uVar10 + 1 < (ulong)((long)((ulong)*(uint *)(uVar7 + 3) << 0x20) >> 0x21)) {
                    *(int *)(uVar7 + lVar19 + 0xb) = iVar5;
                    if (((((uint)*(undefined8 *)((uVar7 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0)
                        && ((param_1 & 1) != 0)) &&
                       (param_1 = unaff_x26 + (param_1 & 0xffffffff),
                       ((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
                      FUN_0133eb00(uVar7,uVar7 + lVar19 + 0xb,0,2);
                      lVar9 = extraout_x8_00;
                      uVar10 = extraout_x11;
                      lVar19 = extraout_x12;
                    }
                    uVar14 = (uint)(lVar9 << 8);
                    uVar13 = uVar14 | 0x180;
                    if ((*(int *)(param_3 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xf8)) &&
                       ((*(uint *)(param_3 + 7) & 1) != 0)) {
                      uVar13 = uVar14 | 0x1a0;
                    }
                    if (uVar10 + 2 < (ulong)((long)((ulong)*(uint *)(uVar7 + 3) << 0x20) >> 0x21)) {
                      *(uint *)(uVar7 + lVar19 + 0xf) = uVar13;
                      return param_1;
                    }
                    /* WARNING: Does not return */
                    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0,0x13842a8);
                    (*UNRECOVERED_JUMPTABLE)();
                  }
                    /* WARNING: Does not return */
                  UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0,0x13842a0);
                  (*UNRECOVERED_JUMPTABLE)();
                }
                    /* WARNING: Does not return */
                UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0,0x1384298);
                (*UNRECOVERED_JUMPTABLE)();
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x21a0));
        }
        if (uVar13 == 10) {
                    /* WARNING: Subroutine does not return */
          FUN_013be7e0(5,*(undefined8 *)(unaff_x26 + 8000));
        }
        uVar10 = unaff_x26 + (ulong)*(uint *)(uVar7 + 0xb);
        if ((int)uVar10 == 3) goto LAB_0138440c;
        uVar17 = uVar10 & 0xfffffffffffffffd;
        if (uVar13 != 7) {
          if (uVar13 == 3) {
            uVar7 = FUN_0133fcc0(1,unaff_x26 +
                                   (ulong)*(uint *)(unaff_x26 +
                                                    (ulong)*(uint *)(unaff_x26 +
                                                                     (ulong)*(uint *)(unaff_x26 +
                                                                                      (ulong)*(uint 
                                                  *)(uVar17 - 1) + 0x17) +
                                                  ((ulong)(uVar14 >> 6) & 0x3ff) * 0xc + 0x17) + 7))
            ;
            return uVar7;
          }
          if (uVar13 != 4) {
            if ((uVar13 != 5) && (uVar13 != 6)) {
              uVar6 = thunk_FUN_01349b90(param_3);
              uVar7 = FUN_013fe560(uVar17,uVar6,param_1,uVar11);
              return uVar7;
            }
            if ((uVar14 >> 4 & 1) == 0) {
              uVar14 = *(uint *)(uVar7 + 0xf);
            }
            else {
              uVar14 = *(uint *)(uVar7 + 0x13);
            }
            if ((int)(unaff_x26 + (ulong)uVar14) == 3) {
              uVar7 = 0;
            }
            else {
              uVar7 = unaff_x26 + (ulong)uVar14 & 0xfffffffffffffffd;
            }
            uVar10 = uVar11;
            if (uVar13 != 5) {
              uVar10 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar11 - 1) + 0xf);
            }
            uVar7 = FUN_01348140(uVar10,*(undefined8 *)
                                         (unaff_x26 + (ulong)*(uint *)(uVar17 + 7) + 3),1,
                                 unaff_x26 + (ulong)*(uint *)(uVar17 + 0xb),param_5,uVar7,uVar10,
                                 uVar11,param_1,uVar11);
            return uVar7;
          }
                    /* WARNING: Subroutine does not return */
          FUN_013be7e0(5,*(undefined8 *)(unaff_x26 + 0x1f28));
        }
        uVar7 = unaff_x26 + (ulong)*(uint *)(uVar17 + 0xb);
        uVar13 = *(int *)(uVar17 + 7) >> 1;
        if ((uVar13 >> 3 & 1) != 0) goto LAB_0138440c;
        uVar13 = uVar13 >> 6 & 3;
        iVar12 = (int)uVar7;
        if (uVar13 != 1) {
          if (iVar12 != (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
            if (uVar13 == 3) {
LAB_01383714:
              *(int *)(uVar17 + 0xb) = iVar5;
              if (((uint)*(undefined8 *)((uVar10 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
                return param_1;
              }
              if ((param_1 & 1) == 0) {
                return param_1;
              }
              uVar7 = unaff_x26 + (param_1 & 0xffffffff);
              if (((uint)*(undefined8 *)((uVar7 & 0xfffffffffffc0000) + 8) >> 1 & 1) == 0) {
                return uVar7;
              }
              FUN_0133eb00(uVar17,uVar17 + 0xb,0,2);
              return uVar7;
            }
            bVar4 = (param_1 & 1) != 0;
            if ((uVar7 & 1) == 0) {
              if (!bVar4) goto LAB_01383714;
            }
            else if ((bVar4) && (*(int *)(uVar7 - 1) == *(int *)(param_1 - 1))) goto LAB_01383714;
          }
          goto LAB_0138440c;
        }
      }
    }
  }
  else {
    uVar10 = uVar7 & 0xfffffffffffffffd;
    uVar11 = unaff_x26 + (ulong)*(uint *)(uVar10 + 0xb);
    uVar13 = *(int *)(uVar10 + 7) >> 1;
    if ((uVar13 >> 3 & 1) != 0) goto LAB_0138440c;
    uVar13 = uVar13 >> 6 & 3;
    iVar12 = (int)uVar11;
    if (uVar13 != 1) {
      if (iVar12 != (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
        if (uVar13 == 3) {
LAB_01383464:
          *(int *)(uVar10 + 0xb) = iVar5;
          if (((uint)*(undefined8 *)((uVar7 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
            return param_1;
          }
          if ((param_1 & 1) == 0) {
            return param_1;
          }
          uVar7 = unaff_x26 + (param_1 & 0xffffffff);
          if (((uint)*(undefined8 *)((uVar7 & 0xfffffffffffc0000) + 8) >> 1 & 1) == 0) {
            return uVar7;
          }
          FUN_0133eb00(uVar10,uVar10 + 0xb,0,2);
          return uVar7;
        }
        bVar4 = (param_1 & 1) != 0;
        if ((uVar11 & 1) == 0) {
          if (!bVar4) goto LAB_01383464;
        }
        else if ((bVar4) && (*(int *)(uVar11 - 1) == *(int *)(param_1 - 1))) goto LAB_01383464;
      }
      goto LAB_0138440c;
    }
  }
  if (iVar12 == iVar5) {
    return param_1;
  }
LAB_0138440c:
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(4,*(undefined8 *)(unaff_x26 + 0x1f30));
}

