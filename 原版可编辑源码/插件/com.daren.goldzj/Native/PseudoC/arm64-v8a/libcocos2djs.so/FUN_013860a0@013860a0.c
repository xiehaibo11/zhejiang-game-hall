
/* WARNING: Removing unreachable block (ram,0x013871f0) */
/* WARNING: Type propagation algorithm not settling */

ulong FUN_013860a0(ulong param_1,ulong param_2,ulong param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  ulong uVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined8 uVar10;
  int iVar11;
  long lVar12;
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
  ulong extraout_x8_09;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar16;
  ulong extraout_x9;
  ulong extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  ulong extraout_x10;
  ulong uVar17;
  long lVar18;
  ulong extraout_x11;
  long lVar19;
  ulong uVar20;
  ulong extraout_x12;
  ulong extraout_x12_00;
  long lVar21;
  ulong extraout_x13;
  ulong extraout_x13_00;
  long extraout_x13_01;
  long extraout_x13_02;
  ulong uVar22;
  ulong uVar23;
  long unaff_x26;
  long unaff_x27;
  double dVar24;
  double dVar25;
  
  if ((param_2 & 1) == 0) {
    lVar19 = *(long *)(unaff_x26 + 0x140);
  }
  else {
    lVar19 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
  }
  if ((*(uint *)(lVar19 + 0xb) >> 0x18 & 1) != 0) goto LAB_013873d4;
  uVar9 = (uint)*(undefined8 *)(unaff_x26 + 0xa0);
  if ((uint)param_4 == uVar9) {
LAB_013873c4:
    uVar7 = FUN_0134baa0();
    return uVar7;
  }
  lVar12 = (long)(int)param_5 * 2;
  lVar18 = unaff_x26 + (ulong)*(uint *)(param_4 + lVar12 + 0x1f);
  uVar13 = (uint)lVar19;
  uVar15 = (uint)lVar18;
  uVar14 = (uint)param_3;
  iVar11 = (int)unaff_x26;
  if (uVar15 != (uVar13 | 2)) {
    if ((uVar15 & 3) == 1) {
      if (*(int *)(lVar18 + -1) == (int)*(undefined8 *)(unaff_x26 + 0x2b8)) {
        lVar19 = ((long)((ulong)*(uint *)(lVar18 + 3) << 0x20) >> 0x21) + -2;
        do {
          if (iVar11 + *(int *)(lVar18 + lVar19 * 4 + 7) == (uVar13 | 2)) {
            uVar7 = unaff_x26 + (ulong)*(uint *)(lVar18 + lVar19 * 4 + 0xb);
            goto LAB_01386118;
          }
          lVar19 = lVar19 + -2;
        } while (-1 < lVar19);
      }
      else {
        if (uVar15 == (uint)*(undefined8 *)(unaff_x26 + 0xb88)) goto LAB_013873c4;
        if (uVar15 == uVar14) {
          lVar19 = unaff_x26 + (ulong)*(uint *)(param_4 + lVar12 + 0x23);
          lVar18 = ((long)((ulong)*(uint *)(lVar19 + 3) << 0x20) >> 0x21) + -2;
          do {
            if (iVar11 + *(int *)(lVar19 + lVar18 * 4 + 7) == (uVar13 | 2)) {
              uVar7 = unaff_x26 + (ulong)*(uint *)(lVar19 + lVar18 * 4 + 0xb);
              goto LAB_01386118;
            }
            lVar18 = lVar18 + -2;
          } while (-1 < lVar18);
        }
      }
    }
    goto LAB_013873d4;
  }
  uVar7 = unaff_x26 + (ulong)*(uint *)(param_4 + lVar12 + 0x23);
LAB_01386118:
  uVar13 = (uint)uVar7;
  iVar6 = (int)param_1;
  iVar2 = iVar6 >> 1;
  if ((uVar7 & 1) == 0) {
    uVar13 = (int)uVar13 >> 1;
    uVar15 = uVar13 & 0xf;
    if (6 < uVar15) {
      if (uVar15 != 0xb) {
        if (uVar15 == 9) {
                    /* WARNING: Subroutine does not return */
          FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x1f58));
        }
        if (uVar15 == 10) {
                    /* WARNING: Subroutine does not return */
          FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x1ef0));
        }
        uVar7 = unaff_x26 + (ulong)*(uint *)(param_2 + 3);
        if ((uVar7 & 1) == 0) {
          uVar7 = *(ulong *)(unaff_x26 + 0x410);
        }
        uVar16 = (ulong)(*(uint *)(param_3 + 3) >> 3);
        lVar19 = 0;
        while( true ) {
          uVar16 = uVar16 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar7 + 0xf) << 0x20) >> 0x21) - 1U
          ;
          lVar18 = uVar16 * 3;
          lVar12 = (lVar18 + 5) * 4;
          uVar13 = *(uint *)(uVar7 + lVar12 + 7);
          if (uVar13 == uVar9) break;
          if (uVar13 == uVar14) {
            if ((*(int *)(uVar7 + lVar12 + 0xf) >> 1 & 9U) == 0) {
              if ((ulong)((long)((ulong)*(uint *)(uVar7 + 3) << 0x20) >> 0x21) <= lVar18 + 6U) {
                    /* WARNING: Does not return */
                UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0,0x1387370);
                (*UNRECOVERED_JUMPTABLE)();
              }
              *(int *)(uVar7 + lVar12 + 0xb) = iVar6;
              if (((uint)*(undefined8 *)((uVar7 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
                return param_1;
              }
              if ((param_1 & 1) == 0) {
                return param_1;
              }
              uVar16 = unaff_x26 + (param_1 & 0xffffffff);
              if (((uint)*(undefined8 *)((uVar16 & 0xfffffffffffc0000) + 8) >> 1 & 1) == 0) {
                return uVar16;
              }
              FUN_0133eb00(uVar7,uVar7 + lVar12 + 0xb,0,2);
              return extraout_x8;
            }
            break;
          }
          lVar19 = lVar19 + 1;
          uVar16 = uVar16 + lVar19;
        }
        goto LAB_013873d4;
      }
      if (((param_3 & 1) == 0) ||
         (((uVar4 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(param_3 - 1) + 7), uVar4 == 0x42 &&
           (lVar19 = (long)*(double *)(param_3 + 3), *(double *)(param_3 + 3) == (double)lVar19)) &&
          (lVar19 + 0x1fffffffffffffU < 0x3fffffffffffff)))) goto LAB_01387398;
      if (uVar4 != 0x40) {
        if (uVar4 < 0x40) {
          if (((*(uint *)(param_3 + 3) & 0xc0000002) == 0) ||
             ((*(uint *)(param_3 + 3) >> 1 & 1) == 0)) {
LAB_01387398:
                    /* WARNING: Subroutine does not return */
            FUN_013be7e0(4,*(undefined8 *)(unaff_x26 + 0x2450));
          }
          if ((uVar4 == 0x25) || (uVar4 == 0x2d)) {
            param_3 = unaff_x26 + (ulong)*(uint *)(param_3 + 0xb);
          }
          else if ((uVar4 >> 5 & 1) != 0) goto LAB_01387398;
        }
        else {
          if (uVar4 != 0x43) goto LAB_01387398;
          param_3 = unaff_x26 + (ulong)*(uint *)(param_3 + 0xb);
        }
      }
      FUN_013fe560(param_2,param_3,param_1,param_2);
      return param_1;
    }
    if (uVar15 == 3) {
      uVar7 = FUN_0133fcc0(1,unaff_x26 +
                             (ulong)*(uint *)(unaff_x26 +
                                              (ulong)*(uint *)(unaff_x26 +
                                                               (ulong)*(uint *)(unaff_x26 +
                                                                                (ulong)*(uint *)(
                                                  param_2 - 1) + 0x17) +
                                                  ((ulong)(uVar13 >> 6) & 0x3ff) * 0xc + 0x17) + 7))
      ;
      return uVar7;
    }
    if (uVar15 == 4) {
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(5,*(undefined8 *)(unaff_x26 + 0x1f28));
    }
    uVar9 = uVar13 >> 0x11 & 7;
    if (uVar9 == 1) {
      if ((param_1 & 1) != 0) goto LAB_013873d4;
      if (((uVar13 >> 0x10 & 1) == 0) &&
         (param_2 = unaff_x26 + (ulong)*(uint *)(param_2 + 3), (param_2 & 1) == 0)) {
        param_2 = *(ulong *)(unaff_x26 + 0x168);
      }
      lVar19 = ((ulong)(uVar13 >> 0x14) & 0x7ff) * 4 + -1;
      if (uVar15 != 2) {
        *(int *)(param_2 + lVar19) = iVar6;
        return param_1;
      }
      iVar11 = *(int *)(param_2 + lVar19);
    }
    else if (uVar9 == 3) {
      if (((param_1 & 1) == 0) ||
         (((uVar15 != 2 &&
           (uVar7 = unaff_x26 +
                    (ulong)*(uint *)(unaff_x26 +
                                     (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(param_2 - 1) +
                                                     0x17) +
                                    ((ulong)(uVar13 >> 6) & 0x3ff) * 0xc + 0x17),
           uVar9 = (uint)uVar7, (uVar7 & 1) != 0)) &&
          ((uVar9 == 3 || (*(uint *)(param_1 - 1) != (uVar9 & 0xfffffffd))))))) goto LAB_013873d4;
      if (((uVar13 >> 0x10 & 1) == 0) &&
         (param_2 = unaff_x26 + (ulong)*(uint *)(param_2 + 3), (param_2 & 1) == 0)) {
        param_2 = *(ulong *)(unaff_x26 + 0x168);
      }
      lVar19 = ((ulong)(uVar13 >> 0x14) & 0x7ff) * 4 + -1;
      if (uVar15 != 2) {
        *(int *)(param_2 + lVar19) = iVar6;
        if (((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
          return param_1;
        }
        if ((param_1 & 1) == 0) {
          return param_1;
        }
        uVar7 = unaff_x26 + (param_1 & 0xffffffff);
        if (((uint)*(undefined8 *)((uVar7 & 0xfffffffffffc0000) + 8) >> 1 & 1) == 0) {
          return uVar7;
        }
        FUN_0133eb00(param_2,param_2 + lVar19,0,2);
        return uVar7;
      }
      iVar11 = *(int *)(param_2 + lVar19);
    }
    else {
      if (uVar9 != 4) {
        if ((param_1 & 1) == 0) {
          dVar24 = (double)iVar2;
        }
        else {
          if (*(int *)(param_1 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x140)) goto LAB_013873d4;
          dVar24 = *(double *)(param_1 + 3);
        }
        if ((*(int *)(unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(param_2 - 1) + 0x17)
                     + ((ulong)(uVar13 >> 6) & 0x3ff) * 0xc + 0x13) >> 1 & 0x1c0U) == 0x80) {
          if (((uVar13 >> 0x10 & 1) == 0) &&
             (param_2 = unaff_x26 + (ulong)*(uint *)(param_2 + 3), (param_2 & 1) == 0)) {
            param_2 = *(ulong *)(unaff_x26 + 0x168);
          }
          lVar19 = unaff_x26 +
                   (ulong)*(uint *)(param_2 + ((ulong)(uVar13 >> 0x14) & 0x7ff) * 4 + -1);
          if (uVar15 != 2) {
            *(double *)(lVar19 + 3) = dVar24;
            return param_1;
          }
          dVar25 = *(double *)(lVar19 + 3);
          if (dVar25 == dVar24) {
            if ((int)((ulong)dVar25 >> 0x20) == (int)((ulong)dVar24 >> 0x20)) {
              return param_1;
            }
          }
          else if ((NAN(dVar25)) && (NAN(dVar24))) {
            return param_1;
          }
        }
        goto LAB_013873d4;
      }
      if (((uVar13 >> 0x10 & 1) == 0) &&
         (param_2 = unaff_x26 + (ulong)*(uint *)(param_2 + 3), (param_2 & 1) == 0)) {
        param_2 = *(ulong *)(unaff_x26 + 0x168);
      }
      lVar19 = ((ulong)(uVar13 >> 0x14) & 0x7ff) * 4 + -1;
      if (uVar15 != 2) {
        *(int *)(param_2 + lVar19) = iVar6;
        if (((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
          return param_1;
        }
        if ((param_1 & 1) == 0) {
          return param_1;
        }
        uVar7 = unaff_x26 + (param_1 & 0xffffffff);
        if (((uint)*(undefined8 *)((uVar7 & 0xfffffffffffc0000) + 8) >> 1 & 1) == 0) {
          return uVar7;
        }
        FUN_0133eb00(param_2,param_2 + lVar19,0,2);
        return uVar7;
      }
      iVar11 = *(int *)(param_2 + lVar19);
    }
  }
  else if ((uVar13 & 3) == 3) {
    if (uVar13 == 3) goto LAB_013873d4;
    uVar16 = uVar7 & 0xfffffffffffffffd;
    if (*(int *)(uVar16 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
      lVar19 = unaff_x26 + (ulong)*(uint *)(uVar16 + 0x1f);
      if ((((int)lVar19 == 0) || (*(int *)(lVar19 + 3) == 0)) &&
         ((*(uint *)(uVar16 + 0xb) >> 0x18 & 1) == 0)) {
        lVar19 = unaff_x26 + (ulong)*(uint *)(uVar16 + 0x17);
        lVar18 = (((ulong)(*(uint *)(uVar16 + 0xb) >> 10) & 0x3ff) * 3 + -3) * 4;
        uVar14 = *(int *)(lVar19 + lVar18 + 0x13) >> 1;
        uVar8 = (undefined4)uVar16;
        if ((uVar14 >> 1 & 1) == 0) {
          uVar13 = uVar14 >> 6 & 7;
          if (uVar13 == 1) {
            if ((param_1 & 1) == 0) goto LAB_013869e8;
          }
          else if (uVar13 == 2) {
            if (((param_1 & 1) == 0) ||
               (*(int *)(param_1 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x140)))
            goto LAB_013869e8;
          }
          else if (uVar13 == 3) {
            if ((((param_1 & 1) != 0) &&
                (uVar15 = iVar11 + *(int *)(lVar19 + lVar18 + 0x17), uVar15 != 4)) &&
               ((uVar15 == 2 || ((uVar15 != 3 && (*(uint *)(param_1 - 1) == (uVar15 & 0xfffffffd))))
                ))) goto LAB_013869e8;
          }
          else if (uVar13 != 0) {
LAB_013869e8:
            bVar3 = *(byte *)(uVar16 + 3);
            uVar17 = (ulong)*(byte *)(uVar16 + 4) + (((ulong)uVar14 & 0x1ff80000) >> 0x13);
            if (bVar3 <= uVar17) {
              uVar7 = param_1;
              if (uVar13 == 2) {
                if ((param_1 & 1) == 0) {
                  dVar24 = (double)iVar2;
                }
                else {
                  dVar24 = *(double *)(param_1 + 3);
                }
                uVar7 = **(ulong **)(unaff_x26 + 0x1428);
                uVar20 = uVar7 + 0xc;
                if (uVar20 < **(ulong **)(unaff_x26 + 0x1430)) {
                  uVar7 = uVar7 + 1;
                  **(ulong **)(unaff_x26 + 0x1428) = uVar20;
                }
                else {
                  uVar7 = FUN_01348560(param_1,0xc);
                  uVar9 = (uint)*(undefined8 *)(unaff_x26 + 0xa0);
                }
                *(int *)(uVar7 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
                *(double *)(uVar7 + 3) = dVar24;
              }
              uVar20 = unaff_x26 + (ulong)*(uint *)(param_2 + 3);
              if ((uVar20 & 1) == 0) {
                uVar14 = ((int)uVar20 >> 1) << 10;
                uVar20 = *(ulong *)(unaff_x26 + 0x168);
                uVar22 = 0;
              }
              else {
                uVar13 = *(int *)(uVar20 + 3) >> 1;
                uVar14 = uVar13 & 0x3ffffc00;
                uVar22 = (ulong)(int)(uVar13 & 0x3ff);
              }
              uVar17 = uVar17 - bVar3;
              uVar23 = uVar20;
              if (uVar22 <= uVar17) {
                uVar23 = **(ulong **)(unaff_x26 + 0x1428);
                lVar19 = (uVar22 + 3) * 4;
                uVar1 = uVar23 + lVar19 + 8;
                if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
                  uVar23 = uVar23 + 1;
                  **(ulong **)(unaff_x26 + 0x1428) = uVar1;
                }
                else {
                  uVar23 = FUN_01348560();
                  uVar9 = (uint)*(undefined8 *)(unaff_x26 + 0xa0);
                }
                uVar13 = (uint)(uVar22 + 3);
                *(int *)(uVar23 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x248);
                *(uint *)(uVar23 + 3) = uVar13 * 2;
                lVar19 = lVar19 + 7;
                lVar18 = uVar22 * 4 + 7;
                while (lVar19 != lVar18) {
                  lVar19 = lVar19 + -4;
                  *(uint *)(uVar23 + lVar19) = uVar9;
                }
                while (lVar18 != 7) {
                  lVar18 = lVar18 + -4;
                  *(undefined4 *)(uVar23 + lVar18) = *(undefined4 *)(uVar20 + lVar18);
                }
                *(uint *)(uVar23 + 3) = (uVar14 | uVar13) * 2;
                *(int *)(param_2 + 3) = (int)uVar23;
                if (((((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                    ((uVar23 & 1) != 0)) &&
                   (uVar23 = unaff_x26 + (uVar23 & 0xffffffff),
                   ((uint)*(undefined8 *)((uVar23 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
                  FUN_0133eb00(param_2,param_2 + 3,0,2);
                  param_1 = extraout_x8_06;
                  uVar17 = extraout_x9_00;
                  uVar7 = extraout_x11;
                  param_2 = extraout_x13_00;
                }
              }
              uVar9 = (uint)uVar16;
              lVar19 = uVar17 * 4 + 7;
              *(int *)(uVar23 + lVar19) = (int)uVar7;
              if (((((uint)*(undefined8 *)((uVar23 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                  ((uVar7 & 1) != 0)) &&
                 (((uint)*(undefined8 *)
                          ((unaff_x26 + (uVar7 & 0xffffffff) & 0xfffffffffffc0000) + 8) >> 1 & 1) !=
                  0)) {
                FUN_0133eb00(uVar23,uVar23 + lVar19,0,2);
                param_1 = extraout_x8_05;
                param_2 = extraout_x13;
              }
              *(uint *)(param_2 - 1) = uVar9;
              if (((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
                return param_1;
              }
              if (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar9 & 0xfffffffffffc0000) + 8) >> 1 &
                  1) == 0) {
                return param_1;
              }
              FUN_0133eb00(param_2,param_2 - 1,2,2);
              return extraout_x8_04;
            }
            lVar19 = uVar17 * 4 + -1;
            if (uVar13 != 2) {
              *(undefined4 *)(param_2 - 1) = uVar8;
              if ((((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                 (((uint)*(undefined8 *)
                          ((unaff_x26 + (uVar7 & 0xfffffffd) & 0xfffffffffffc0000) + 8) >> 1 & 1) !=
                  0)) {
                FUN_0133eb00(param_2,param_2 - 1,2,2);
                param_1 = extraout_x8_03;
              }
              *(int *)(param_2 + lVar19) = (int)param_1;
              if (((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
                return param_1;
              }
              if ((param_1 & 1) == 0) {
                return param_1;
              }
              uVar7 = unaff_x26 + (param_1 & 0xffffffff);
              if (((uint)*(undefined8 *)((uVar7 & 0xfffffffffffc0000) + 8) >> 1 & 1) == 0) {
                return uVar7;
              }
              FUN_0133eb00(param_2,param_2 + lVar19,0,2);
              return extraout_x8_02;
            }
            if ((param_1 & 1) == 0) {
              dVar24 = (double)iVar2;
            }
            else {
              dVar24 = *(double *)(param_1 + 3);
            }
            uVar17 = **(ulong **)(unaff_x26 + 0x1428);
            uVar16 = uVar17 + 0xc;
            if (uVar16 < **(ulong **)(unaff_x26 + 0x1430)) {
              uVar17 = uVar17 + 1;
              **(ulong **)(unaff_x26 + 0x1428) = uVar16;
            }
            else {
              uVar17 = FUN_01348560(param_1,0xc);
            }
            *(int *)(uVar17 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
            *(double *)(uVar17 + 3) = dVar24;
            *(undefined4 *)(param_2 - 1) = uVar8;
            if ((((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
               (((uint)*(undefined8 *)((unaff_x26 + (uVar7 & 0xfffffffd) & 0xfffffffffffc0000) + 8)
                 >> 1 & 1) != 0)) {
              FUN_0133eb00(param_2,param_2 - 1,2,2);
              param_1 = extraout_x8_01;
              param_2 = extraout_x9;
              uVar17 = extraout_x10;
            }
            *(int *)(param_2 + lVar19) = (int)uVar17;
            if (((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
              return param_1;
            }
            if ((uVar17 & 1) == 0) {
              return param_1;
            }
            if (((uint)*(undefined8 *)((unaff_x26 + (uVar17 & 0xffffffff) & 0xfffffffffffc0000) + 8)
                 >> 1 & 1) == 0) {
              return param_1;
            }
            FUN_0133eb00(param_2,param_2 + lVar19,0,2);
            return extraout_x8_00;
          }
        }
        else if (iVar6 == *(int *)(lVar19 + lVar18 + 0x17)) {
          *(undefined4 *)(param_2 - 1) = uVar8;
          if (((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
            return param_1;
          }
          if (((uint)*(undefined8 *)((unaff_x26 + (uVar7 & 0xfffffffd) & 0xfffffffffffc0000) + 8) >>
               1 & 1) == 0) {
            return param_1;
          }
          FUN_0133eb00(param_2,param_2 - 1,2,2);
          return extraout_x8_07;
        }
      }
      goto LAB_013873d4;
    }
    uVar17 = unaff_x26 + (ulong)*(uint *)(uVar16 + 0xb);
    uVar9 = *(int *)(uVar16 + 7) >> 1;
    if ((uVar9 >> 3 & 1) != 0) goto LAB_013873d4;
    uVar9 = uVar9 >> 6 & 3;
    iVar11 = (int)uVar17;
    if (uVar9 != 1) {
      if (iVar11 != (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
        if (uVar9 == 3) {
LAB_013868c4:
          *(int *)(uVar16 + 0xb) = iVar6;
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
          FUN_0133eb00(uVar16,uVar16 + 0xb,0,2);
          return extraout_x8_08;
        }
        bVar5 = (param_1 & 1) != 0;
        if ((uVar17 & 1) == 0) {
          if (!bVar5) goto LAB_013868c4;
        }
        else if ((bVar5) && (*(int *)(uVar17 - 1) == *(int *)(param_1 - 1))) goto LAB_013868c4;
      }
      goto LAB_013873d4;
    }
  }
  else {
    if (*(int *)(uVar7 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x120)) {
      if (((long)*(int *)(uVar7 + 0x17) & 0x80000000U) == 0) {
        UNRECOVERED_JUMPTABLE = (code *)(uVar7 + 0x3f);
      }
      else {
        UNRECOVERED_JUMPTABLE = *(code **)((long)*(int *)(uVar7 + 0x27) * 8 + unaff_x26 + 0x2c78);
      }
                    /* WARNING: Could not recover jumptable at 0x01386844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (*UNRECOVERED_JUMPTABLE)();
      return uVar7;
    }
    lVar19 = unaff_x26 + (ulong)*(uint *)(uVar7 + 7);
    if (((int)lVar19 != 0) && (*(int *)(lVar19 + 3) != 0)) goto LAB_013873d4;
    uVar16 = unaff_x26 + (ulong)*(uint *)(uVar7 + 3);
    if ((uVar16 & 1) != 0) {
      if (*(int *)(uVar7 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xdf8)) {
        if (((long)*(int *)(uVar16 + 0x17) & 0x80000000U) == 0) {
          UNRECOVERED_JUMPTABLE = (code *)(uVar16 + 0x3f);
        }
        else {
          UNRECOVERED_JUMPTABLE = *(code **)((long)*(int *)(uVar16 + 0x27) * 8 + unaff_x26 + 0x2c78)
          ;
        }
                    /* WARNING: Could not recover jumptable at 0x013861f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar7 = (*UNRECOVERED_JUMPTABLE)();
        return uVar7;
      }
      uVar7 = unaff_x26 + (ulong)*(uint *)(uVar7 + 0xb);
      if (((int)uVar7 != 3) && ((*(uint *)((uVar7 & 0xfffffffffffffffd) + 0xb) >> 0x18 & 1) == 0)) {
        if (((long)*(int *)(uVar16 + 0x17) & 0x80000000U) == 0) {
          UNRECOVERED_JUMPTABLE = (code *)(uVar16 + 0x3f);
        }
        else {
          UNRECOVERED_JUMPTABLE = *(code **)((long)*(int *)(uVar16 + 0x27) * 8 + unaff_x26 + 0x2c78)
          ;
        }
                    /* WARNING: Could not recover jumptable at 0x013861c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar7 = (*UNRECOVERED_JUMPTABLE)();
        return uVar7;
      }
      goto LAB_013873d4;
    }
    uVar13 = (int)uVar16 >> 1;
    if ((uVar13 & 0x30) != 0) {
      if ((uVar13 >> 4 & 1) == 0) {
        uVar16 = unaff_x26 + (ulong)*(uint *)(param_2 + 3);
        if ((uVar16 & 1) == 0) {
          uVar16 = *(ulong *)(unaff_x26 + 0x410);
        }
        uVar17 = (ulong)(*(uint *)(param_3 + 3) >> 3);
        lVar19 = 0;
        while( true ) {
          uVar17 = uVar17 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar16 + 0xf) << 0x20) >> 0x21) -
                            1U;
          lVar18 = uVar17 * 3;
          lVar12 = (lVar18 + 5) * 4;
          uVar15 = *(uint *)(uVar16 + lVar12 + 7);
          if (uVar15 == uVar9) break;
          if (uVar15 == uVar14) {
            if ((*(int *)(uVar16 + lVar12 + 0xf) >> 1 & 9U) == 0) {
              if ((ulong)((long)((ulong)*(uint *)(uVar16 + 3) << 0x20) >> 0x21) <= lVar18 + 6U) {
                    /* WARNING: Does not return */
                UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0,0x1387188);
                (*UNRECOVERED_JUMPTABLE)();
              }
              *(int *)(uVar16 + lVar12 + 0xb) = iVar6;
              if (((uint)*(undefined8 *)((uVar16 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
                return param_1;
              }
              if ((param_1 & 1) == 0) {
                return param_1;
              }
              uVar7 = unaff_x26 + (param_1 & 0xffffffff);
              if (((uint)*(undefined8 *)((uVar7 & 0xfffffffffffc0000) + 8) >> 1 & 1) == 0) {
                return uVar7;
              }
              FUN_0133eb00(uVar16,uVar16 + lVar12 + 0xb,0,2);
              return uVar7;
            }
            goto LAB_013873d4;
          }
          lVar19 = lVar19 + 1;
          uVar17 = uVar17 + lVar19;
        }
      }
      else {
        uVar16 = unaff_x26 + (ulong)*(uint *)(uVar7 + 0xf);
        if ((int)uVar16 == 3) goto LAB_013873d4;
        uVar16 = uVar16 & 0xfffffffffffffffd;
        lVar19 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13);
        if (((int)uVar16 != (int)lVar19) &&
           ((*(short *)(unaff_x26 + (ulong)*(uint *)(param_2 - 1) + 7) != 0xab ||
            (*(int *)(uVar16 + 0x27b) != *(int *)(lVar19 + 0x27b))))) goto LAB_013873d4;
      }
    }
    uVar15 = uVar13 & 0xf;
    if (uVar15 == 8) {
      lVar19 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
      if (((*(uint *)(lVar19 + 0xb) >> 0x14 & 1) != 0) &&
         ((unaff_x26 + (ulong)*(uint *)(lVar19 + 0x23) & 1) != 0)) {
        *(undefined8 *)(unaff_x26 + 0x40) = 0x1386600;
        *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
        (**(code **)(unaff_x26 + 0x11a0))(lVar19);
        *(undefined8 *)(unaff_x26 + 0x38) = 0;
        uVar9 = (uint)*(undefined8 *)(unaff_x26 + 0xa0);
      }
      uVar7 = unaff_x26 + (ulong)*(uint *)(param_2 + 3);
      if ((uVar7 & 1) == 0) {
        uVar7 = *(ulong *)(unaff_x26 + 0x410);
      }
      uVar13 = iVar11 + *(int *)(uVar7 + 0xf);
      uVar16 = (long)((ulong)*(uint *)(uVar7 + 3) << 0x20) >> 0x21;
      if (uVar16 == 0) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0,0x13871dc);
        (*UNRECOVERED_JUMPTABLE)();
      }
      uVar15 = iVar11 + *(int *)(uVar7 + 7) + 2;
      if (uVar15 + (uVar15 >> 1 & 0xfffffffe) <= uVar13) {
        if (uVar16 < 2) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0,0x13871e4);
          (*UNRECOVERED_JUMPTABLE)();
        }
        if ((uint)(iVar11 + *(int *)(uVar7 + 0xb)) <= (uVar13 - uVar15 >> 1 & 0xfffffffe)) {
          if (uVar16 < 4) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0,0x13871ec);
            (*UNRECOVERED_JUMPTABLE)();
          }
          lVar19 = unaff_x26 + (ulong)*(uint *)(uVar7 + 0x13);
          uVar13 = (int)lVar19 + 2;
          if (uVar13 < 0xffffff) {
            *(uint *)(uVar7 + 0x13) = uVar13;
            if ((long)((ulong)*(uint *)(uVar7 + 3) << 0x20) >> 0x21 == 0) {
                    /* WARNING: Does not return */
              UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0,0x13871fc);
              (*UNRECOVERED_JUMPTABLE)();
            }
            *(uint *)(uVar7 + 7) = uVar15;
            uVar16 = (ulong)(*(uint *)(param_3 + 3) >> 3);
            lVar18 = 0;
            while( true ) {
              uVar16 = uVar16 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar7 + 0xf) << 0x20) >> 0x21)
                                - 1U;
              uVar17 = uVar16 * 3 + 5;
              lVar21 = uVar17 * 4;
              lVar12 = lVar21 + 7;
              if ((*(uint *)(uVar7 + lVar12) == uVar9) ||
                 (*(uint *)(uVar7 + lVar12) == (uint)*(undefined8 *)(unaff_x26 + 0xa8))) break;
              lVar18 = lVar18 + 1;
              uVar16 = uVar16 + lVar18;
            }
            if ((ulong)((long)((ulong)*(uint *)(uVar7 + 3) << 0x20) >> 0x21) <= uVar17) {
                    /* WARNING: Does not return */
              UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0,0x1387204);
              (*UNRECOVERED_JUMPTABLE)();
            }
            *(uint *)(uVar7 + lVar12) = uVar14;
            if (((((uint)*(undefined8 *)((uVar7 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                ((param_3 & 1) != 0)) &&
               (param_3 = unaff_x26 + (param_3 & 0xffffffff),
               ((uint)*(undefined8 *)((param_3 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
              FUN_0133eb00(uVar7,uVar7 + lVar12,0,2);
              lVar19 = extraout_x9_02;
              uVar17 = extraout_x12_00;
              lVar21 = extraout_x13_02;
            }
            if ((ulong)((long)((ulong)*(uint *)(uVar7 + 3) << 0x20) >> 0x21) <= uVar17 + 1) {
                    /* WARNING: Does not return */
              UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0,0x138720c);
              (*UNRECOVERED_JUMPTABLE)();
            }
            *(int *)(uVar7 + lVar21 + 0xb) = iVar6;
            if (((((uint)*(undefined8 *)((uVar7 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                ((param_1 & 1) != 0)) &&
               (param_1 = unaff_x26 + (param_1 & 0xffffffff),
               ((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
              FUN_0133eb00(uVar7,uVar7 + lVar21 + 0xb,0,2);
              param_1 = extraout_x8_09;
              lVar19 = extraout_x9_01;
              uVar17 = extraout_x12;
              lVar21 = extraout_x13_01;
            }
            uVar14 = (uint)(lVar19 << 8);
            uVar9 = uVar14 | 0x180;
            if ((*(int *)(param_3 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xf8)) &&
               ((*(uint *)(param_3 + 7) & 1) != 0)) {
              uVar9 = uVar14 | 0x1a0;
            }
            if (uVar17 + 2 < (ulong)((long)((ulong)*(uint *)(uVar7 + 3) << 0x20) >> 0x21)) {
              *(uint *)(uVar7 + lVar21 + 0xf) = uVar9;
              return param_1;
            }
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0,0x1387214);
            (*UNRECOVERED_JUMPTABLE)();
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x21a0));
    }
    if (uVar15 == 10) {
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x1ef0));
    }
    uVar16 = unaff_x26 + (ulong)*(uint *)(uVar7 + 0xb);
    if ((int)uVar16 == 3) goto LAB_013873d4;
    uVar17 = uVar16 & 0xfffffffffffffffd;
    if (uVar15 != 7) {
      if (uVar15 == 3) {
        uVar7 = FUN_0133fcc0(1,unaff_x26 +
                               (ulong)*(uint *)(unaff_x26 +
                                                (ulong)*(uint *)(unaff_x26 +
                                                                 (ulong)*(uint *)(unaff_x26 +
                                                                                  (ulong)*(uint *)(
                                                  uVar17 - 1) + 0x17) +
                                                  ((ulong)(uVar13 >> 6) & 0x3ff) * 0xc + 0x17) + 7))
        ;
        return uVar7;
      }
      if (uVar15 == 4) {
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(5,*(undefined8 *)(unaff_x26 + 0x1f28));
      }
      if ((uVar15 == 5) || (uVar15 == 6)) {
        if ((uVar13 >> 4 & 1) == 0) {
          uVar9 = *(uint *)(uVar7 + 0xf);
        }
        else {
          uVar9 = *(uint *)(uVar7 + 0x13);
        }
        if ((int)(unaff_x26 + (ulong)uVar9) == 3) {
          uVar7 = 0;
        }
        else {
          uVar7 = unaff_x26 + (ulong)uVar9 & 0xfffffffffffffffd;
        }
        uVar10 = *(undefined8 *)(unaff_x26 + (ulong)*(uint *)(uVar17 + 7) + 3);
        uVar16 = param_2;
        if (uVar15 != 5) {
          uVar16 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(param_2 - 1) + 0xf);
        }
        uVar7 = FUN_01348140(uVar16,uVar10,1,unaff_x26 + (ulong)*(uint *)(uVar17 + 0xb),param_5,
                             param_6,uVar7,uVar10,param_1,param_2);
        return uVar7;
      }
      if (((param_3 & 1) == 0) ||
         (((uVar4 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(param_3 - 1) + 7), uVar4 == 0x42 &&
           (lVar19 = (long)*(double *)(param_3 + 3), *(double *)(param_3 + 3) == (double)lVar19)) &&
          (lVar19 + 0x1fffffffffffffU < 0x3fffffffffffff)))) goto LAB_013871a8;
      if (uVar4 != 0x40) {
        if (uVar4 < 0x40) {
          if (((*(uint *)(param_3 + 3) & 0xc0000002) == 0) ||
             ((*(uint *)(param_3 + 3) >> 1 & 1) == 0)) {
LAB_013871a8:
                    /* WARNING: Subroutine does not return */
            FUN_013be7e0(4,*(undefined8 *)(unaff_x26 + 0x2450));
          }
          if ((uVar4 == 0x25) || (uVar4 == 0x2d)) {
            param_3 = unaff_x26 + (ulong)*(uint *)(param_3 + 0xb);
          }
          else if ((uVar4 >> 5 & 1) != 0) goto LAB_013871a8;
        }
        else {
          if (uVar4 != 0x43) goto LAB_013871a8;
          param_3 = unaff_x26 + (ulong)*(uint *)(param_3 + 0xb);
        }
      }
      FUN_013fe560(uVar17,param_3,param_1,param_2,param_5,param_6,param_1);
      return param_1;
    }
    uVar7 = unaff_x26 + (ulong)*(uint *)(uVar17 + 0xb);
    uVar9 = *(int *)(uVar17 + 7) >> 1;
    if ((uVar9 >> 3 & 1) != 0) goto LAB_013873d4;
    uVar9 = uVar9 >> 6 & 3;
    iVar11 = (int)uVar7;
    if (uVar9 != 1) {
      if (iVar11 != (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
        if (uVar9 == 3) {
LAB_01386588:
          *(int *)(uVar17 + 0xb) = iVar6;
          if (((uint)*(undefined8 *)((uVar16 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
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
        bVar5 = (param_1 & 1) != 0;
        if ((uVar7 & 1) == 0) {
          if (!bVar5) goto LAB_01386588;
        }
        else if ((bVar5) && (*(int *)(uVar7 - 1) == *(int *)(param_1 - 1))) goto LAB_01386588;
      }
      goto LAB_013873d4;
    }
  }
  if (iVar11 == iVar6) {
    return param_1;
  }
LAB_013873d4:
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(5,*(undefined8 *)(unaff_x26 + 0x1ee0));
}

