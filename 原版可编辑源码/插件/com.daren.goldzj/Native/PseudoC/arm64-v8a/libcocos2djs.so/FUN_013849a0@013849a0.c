
/* WARNING: Removing unreachable block (ram,0x013859a0) */
/* WARNING: Type propagation algorithm not settling */

ulong FUN_013849a0(ulong param_1,ulong param_2,ulong param_3,long param_4,undefined8 param_5)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  ulong extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  ulong uVar17;
  long lVar18;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong uVar19;
  ulong extraout_x11;
  ulong extraout_x11_00;
  ulong uVar20;
  long lVar21;
  ulong extraout_x12;
  ulong extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  ulong uVar22;
  ulong uVar23;
  ulong extraout_x15;
  long unaff_x26;
  long unaff_x27;
  double dVar24;
  double dVar25;
  
  bVar5 = (param_2 & 1) == 0;
  if (bVar5) {
    lVar16 = *(long *)(unaff_x26 + 0x140);
  }
  else {
    lVar16 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
  }
  if ((*(uint *)(lVar16 + 0xb) >> 0x18 & 1) != 0) goto LAB_01385b4c;
  iVar11 = (int)*(undefined8 *)(unaff_x26 + 0xa0);
  if ((int)param_4 == iVar11) {
    uVar8 = FUN_01350880();
    return uVar8;
  }
  lVar15 = (long)(int)param_5 * 2;
  lVar18 = unaff_x26 + (ulong)*(uint *)(param_4 + lVar15 + 0x1f);
  uVar13 = (uint)lVar18;
  iVar9 = (int)param_3;
  iVar3 = (int)unaff_x26;
  if (uVar13 == ((uint)lVar16 | 2)) {
    uVar8 = unaff_x26 + (ulong)*(uint *)(param_4 + lVar15 + 0x23);
  }
  else {
    if ((uVar13 & 3) != 1) goto LAB_01385b4c;
    if (*(int *)(lVar18 + -1) == (int)*(undefined8 *)(unaff_x26 + 0x2b8)) {
      lVar15 = ((long)((ulong)*(uint *)(lVar18 + 3) << 0x20) >> 0x21) + -2;
      do {
        if (iVar3 + *(int *)(lVar18 + lVar15 * 4 + 7) == ((uint)lVar16 | 2)) {
          uVar8 = unaff_x26 + (ulong)*(uint *)(lVar18 + lVar15 * 4 + 0xb);
          goto LAB_01384a24;
        }
        lVar15 = lVar15 + -2;
      } while (-1 < lVar15);
      goto LAB_01385b4c;
    }
    if ((uVar13 != (uint)*(undefined8 *)(unaff_x26 + 0xb88)) || (bVar5)) goto LAB_01385b4c;
    uVar8 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
    uVar12 = (uint)uVar8;
    uVar13 = *(int *)(param_3 + 3) + (uVar12 ^ (uint)(uVar8 >> 0xd)) & 0x1ffc;
    lVar16 = (ulong)uVar13 * 3;
    lVar18 = *(long *)(unaff_x26 + 0x2b28);
    if ((iVar9 == *(int *)(lVar18 + lVar16)) && (uVar12 == *(uint *)(lVar18 + lVar16 + 8))) {
      uVar8 = unaff_x26 + (ulong)*(uint *)(lVar18 + lVar16 + 4);
    }
    else {
      lVar16 = (ulong)((uVar13 - iVar9) + 0xa6e5 & 0x7fc) * 3;
      lVar18 = *(long *)(unaff_x26 + 0x2b40);
      if ((iVar9 != *(int *)(lVar18 + lVar16)) || (uVar12 != *(uint *)(lVar18 + lVar16 + 8)))
      goto LAB_01385b4c;
      uVar8 = unaff_x26 + (ulong)*(uint *)(lVar18 + lVar16 + 4);
    }
  }
LAB_01384a24:
  uVar13 = (uint)uVar8;
  iVar6 = (int)param_1;
  iVar2 = iVar6 >> 1;
  if ((uVar8 & 1) == 0) {
    uVar13 = (int)uVar13 >> 1;
    uVar12 = uVar13 & 0xf;
    if (6 < uVar12) {
      if (uVar12 == 0xb) {
        uVar7 = thunk_FUN_01349b90(param_3);
        uVar8 = FUN_013fe560(param_2,uVar7,param_1,param_2);
        return uVar8;
      }
      if (uVar12 == 9) {
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x1f58));
      }
      if (uVar12 == 10) {
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x1ef0));
      }
      uVar8 = unaff_x26 + (ulong)*(uint *)(param_2 + 3);
      if ((uVar8 & 1) == 0) {
        uVar8 = *(ulong *)(unaff_x26 + 0x410);
      }
      uVar17 = (ulong)(*(uint *)(param_3 + 3) >> 3);
      lVar16 = 0;
      while( true ) {
        uVar17 = uVar17 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar8 + 0xf) << 0x20) >> 0x21) - 1U;
        lVar18 = uVar17 * 3;
        lVar15 = (lVar18 + 5) * 4;
        iVar3 = *(int *)(uVar8 + lVar15 + 7);
        if (iVar3 == iVar11) break;
        if (iVar3 == iVar9) {
          if ((*(int *)(uVar8 + lVar15 + 0xf) >> 1 & 9U) == 0) {
            if ((ulong)((long)((ulong)*(uint *)(uVar8 + 3) << 0x20) >> 0x21) <= lVar18 + 6U) {
                    /* WARNING: Does not return */
              UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0,0x1385b20);
              (*UNRECOVERED_JUMPTABLE)();
            }
            *(int *)(uVar8 + lVar15 + 0xb) = iVar6;
            if (((uint)*(undefined8 *)((uVar8 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
              return param_1;
            }
            if ((param_1 & 1) == 0) {
              return param_1;
            }
            uVar17 = unaff_x26 + (param_1 & 0xffffffff);
            if (((uint)*(undefined8 *)((uVar17 & 0xfffffffffffc0000) + 8) >> 1 & 1) == 0) {
              return uVar17;
            }
            FUN_0133eb00(uVar8,uVar8 + lVar15 + 0xb,0,2);
            return uVar17;
          }
          break;
        }
        lVar16 = lVar16 + 1;
        uVar17 = uVar17 + lVar16;
      }
      goto LAB_01385b4c;
    }
    if (uVar12 == 3) {
      uVar8 = FUN_0133fcc0(1,unaff_x26 +
                             (ulong)*(uint *)(unaff_x26 +
                                              (ulong)*(uint *)(unaff_x26 +
                                                               (ulong)*(uint *)(unaff_x26 +
                                                                                (ulong)*(uint *)(
                                                  param_2 - 1) + 0x17) +
                                                  ((ulong)(uVar13 >> 6) & 0x3ff) * 0xc + 0x17) + 7))
      ;
      return uVar8;
    }
    if (uVar12 == 4) {
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(5,*(undefined8 *)(unaff_x26 + 0x1f28));
    }
    uVar14 = uVar13 >> 0x11 & 7;
    if (uVar14 == 1) {
      if ((param_1 & 1) != 0) goto LAB_01385b4c;
      if (((uVar13 >> 0x10 & 1) == 0) &&
         (param_2 = unaff_x26 + (ulong)*(uint *)(param_2 + 3), (param_2 & 1) == 0)) {
        param_2 = *(ulong *)(unaff_x26 + 0x168);
      }
      lVar16 = ((ulong)(uVar13 >> 0x14) & 0x7ff) * 4 + -1;
      if (uVar12 != 2) {
        *(int *)(param_2 + lVar16) = iVar6;
        return param_1;
      }
      iVar11 = *(int *)(param_2 + lVar16);
    }
    else if (uVar14 == 3) {
      if (((param_1 & 1) == 0) ||
         (((uVar12 != 2 &&
           (uVar8 = unaff_x26 +
                    (ulong)*(uint *)(unaff_x26 +
                                     (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(param_2 - 1) +
                                                     0x17) +
                                    ((ulong)(uVar13 >> 6) & 0x3ff) * 0xc + 0x17),
           uVar14 = (uint)uVar8, (uVar8 & 1) != 0)) &&
          ((uVar14 == 3 || (*(uint *)(param_1 - 1) != (uVar14 & 0xfffffffd))))))) goto LAB_01385b4c;
      if (((uVar13 >> 0x10 & 1) == 0) &&
         (param_2 = unaff_x26 + (ulong)*(uint *)(param_2 + 3), (param_2 & 1) == 0)) {
        param_2 = *(ulong *)(unaff_x26 + 0x168);
      }
      lVar16 = ((ulong)(uVar13 >> 0x14) & 0x7ff) * 4 + -1;
      if (uVar12 != 2) {
        *(int *)(param_2 + lVar16) = iVar6;
        if (((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
          return param_1;
        }
        if ((param_1 & 1) == 0) {
          return param_1;
        }
        uVar8 = unaff_x26 + (param_1 & 0xffffffff);
        if (((uint)*(undefined8 *)((uVar8 & 0xfffffffffffc0000) + 8) >> 1 & 1) == 0) {
          return uVar8;
        }
        FUN_0133eb00(param_2,param_2 + lVar16,0,2);
        return uVar8;
      }
      iVar11 = *(int *)(param_2 + lVar16);
    }
    else {
      if (uVar14 != 4) {
        if ((param_1 & 1) == 0) {
          dVar24 = (double)iVar2;
        }
        else {
          if (*(int *)(param_1 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x140)) goto LAB_01385b4c;
          dVar24 = *(double *)(param_1 + 3);
        }
        if ((*(int *)(unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(param_2 - 1) + 0x17)
                     + ((ulong)(uVar13 >> 6) & 0x3ff) * 0xc + 0x13) >> 1 & 0x1c0U) == 0x80) {
          if (((uVar13 >> 0x10 & 1) == 0) &&
             (param_2 = unaff_x26 + (ulong)*(uint *)(param_2 + 3), (param_2 & 1) == 0)) {
            param_2 = *(ulong *)(unaff_x26 + 0x168);
          }
          lVar16 = unaff_x26 +
                   (ulong)*(uint *)(param_2 + ((ulong)(uVar13 >> 0x14) & 0x7ff) * 4 + -1);
          if (uVar12 != 2) {
            *(double *)(lVar16 + 3) = dVar24;
            return param_1;
          }
          dVar25 = *(double *)(lVar16 + 3);
          if (dVar25 == dVar24) {
            if ((int)((ulong)dVar25 >> 0x20) == (int)((ulong)dVar24 >> 0x20)) {
              return param_1;
            }
          }
          else if ((NAN(dVar25)) && (NAN(dVar24))) {
            return param_1;
          }
        }
        goto LAB_01385b4c;
      }
      if (((uVar13 >> 0x10 & 1) == 0) &&
         (param_2 = unaff_x26 + (ulong)*(uint *)(param_2 + 3), (param_2 & 1) == 0)) {
        param_2 = *(ulong *)(unaff_x26 + 0x168);
      }
      lVar16 = ((ulong)(uVar13 >> 0x14) & 0x7ff) * 4 + -1;
      if (uVar12 != 2) {
        *(int *)(param_2 + lVar16) = iVar6;
        if (((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
          return param_1;
        }
        if ((param_1 & 1) == 0) {
          return param_1;
        }
        uVar8 = unaff_x26 + (param_1 & 0xffffffff);
        if (((uint)*(undefined8 *)((uVar8 & 0xfffffffffffc0000) + 8) >> 1 & 1) == 0) {
          return uVar8;
        }
        FUN_0133eb00(param_2,param_2 + lVar16,0,2);
        return uVar8;
      }
      iVar11 = *(int *)(param_2 + lVar16);
    }
  }
  else if ((uVar13 & 3) == 3) {
    if (uVar13 == 3) goto LAB_01385b4c;
    uVar17 = uVar8 & 0xfffffffffffffffd;
    if (*(int *)(uVar17 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
      lVar16 = unaff_x26 + (ulong)*(uint *)(uVar17 + 0x1f);
      if ((((int)lVar16 == 0) || (*(int *)(lVar16 + 3) == 0)) &&
         ((*(uint *)(uVar17 + 0xb) >> 0x18 & 1) == 0)) {
        lVar16 = unaff_x26 + (ulong)*(uint *)(uVar17 + 0x17);
        lVar18 = (((ulong)(*(uint *)(uVar17 + 0xb) >> 10) & 0x3ff) * 3 + -3) * 4;
        uVar13 = *(int *)(lVar16 + lVar18 + 0x13) >> 1;
        uVar10 = (undefined4)uVar17;
        if ((uVar13 >> 1 & 1) == 0) {
          uVar12 = uVar13 >> 6 & 7;
          if (uVar12 == 1) {
            if ((param_1 & 1) == 0) goto LAB_01385200;
          }
          else if (uVar12 == 2) {
            if (((param_1 & 1) == 0) ||
               (*(int *)(param_1 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x140)))
            goto LAB_01385200;
          }
          else if (uVar12 == 3) {
            if ((((param_1 & 1) != 0) &&
                (uVar14 = iVar3 + *(int *)(lVar16 + lVar18 + 0x17), uVar14 != 4)) &&
               ((uVar14 == 2 || ((uVar14 != 3 && (*(uint *)(param_1 - 1) == (uVar14 & 0xfffffffd))))
                ))) goto LAB_01385200;
          }
          else if (uVar12 != 0) {
LAB_01385200:
            bVar4 = *(byte *)(uVar17 + 3);
            uVar20 = (ulong)*(byte *)(uVar17 + 4) + (((ulong)uVar13 & 0x1ff80000) >> 0x13);
            if (bVar4 <= uVar20) {
              uVar8 = param_1;
              if (uVar12 == 2) {
                if ((param_1 & 1) == 0) {
                  dVar24 = (double)iVar2;
                }
                else {
                  dVar24 = *(double *)(param_1 + 3);
                }
                uVar8 = **(ulong **)(unaff_x26 + 0x1428);
                uVar19 = uVar8 + 0xc;
                if (uVar19 < **(ulong **)(unaff_x26 + 0x1430)) {
                  uVar8 = uVar8 + 1;
                  **(ulong **)(unaff_x26 + 0x1428) = uVar19;
                }
                else {
                  uVar8 = FUN_01348560(param_1,0xc);
                  iVar11 = (int)*(undefined8 *)(unaff_x26 + 0xa0);
                }
                *(int *)(uVar8 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
                *(double *)(uVar8 + 3) = dVar24;
              }
              uVar19 = unaff_x26 + (ulong)*(uint *)(param_2 + 3);
              if ((uVar19 & 1) == 0) {
                uVar13 = ((int)uVar19 >> 1) << 10;
                uVar19 = *(ulong *)(unaff_x26 + 0x168);
                uVar22 = 0;
              }
              else {
                uVar12 = *(int *)(uVar19 + 3) >> 1;
                uVar13 = uVar12 & 0x3ffffc00;
                uVar22 = (ulong)(int)(uVar12 & 0x3ff);
              }
              uVar20 = uVar20 - bVar4;
              uVar23 = uVar19;
              if (uVar22 <= uVar20) {
                uVar23 = **(ulong **)(unaff_x26 + 0x1428);
                lVar16 = (uVar22 + 3) * 4;
                uVar1 = uVar23 + lVar16 + 8;
                if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
                  uVar23 = uVar23 + 1;
                  **(ulong **)(unaff_x26 + 0x1428) = uVar1;
                }
                else {
                  uVar23 = FUN_01348560();
                  iVar11 = (int)*(undefined8 *)(unaff_x26 + 0xa0);
                }
                uVar12 = (uint)(uVar22 + 3);
                *(int *)(uVar23 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x248);
                *(uint *)(uVar23 + 3) = uVar12 * 2;
                lVar16 = lVar16 + 7;
                lVar18 = uVar22 * 4 + 7;
                while (lVar16 != lVar18) {
                  lVar16 = lVar16 + -4;
                  *(int *)(uVar23 + lVar16) = iVar11;
                }
                while (lVar18 != 7) {
                  lVar18 = lVar18 + -4;
                  *(undefined4 *)(uVar23 + lVar18) = *(undefined4 *)(uVar19 + lVar18);
                }
                *(uint *)(uVar23 + 3) = (uVar13 | uVar12) * 2;
                *(int *)(param_2 + 3) = (int)uVar23;
                if (((((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                    ((uVar23 & 1) != 0)) &&
                   (uVar23 = unaff_x26 + (uVar23 & 0xffffffff),
                   ((uint)*(undefined8 *)((uVar23 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
                  FUN_0133eb00(param_2,param_2 + 3,0,2);
                  uVar8 = extraout_x10_00;
                  uVar23 = extraout_x15;
                  param_2 = extraout_x12_00;
                }
              }
              uVar13 = (uint)uVar17;
              lVar16 = uVar20 * 4 + 7;
              *(int *)(uVar23 + lVar16) = (int)uVar8;
              if (((((uint)*(undefined8 *)((uVar23 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                  ((uVar8 & 1) != 0)) &&
                 (((uint)*(undefined8 *)
                          ((unaff_x26 + (uVar8 & 0xffffffff) & 0xfffffffffffc0000) + 8) >> 1 & 1) !=
                  0)) {
                FUN_0133eb00(uVar23,uVar23 + lVar16,0,2);
                param_2 = extraout_x12;
              }
              *(uint *)(param_2 - 1) = uVar13;
              if (((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
                return param_1;
              }
              if (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar13 & 0xfffffffffffc0000) + 8) >> 1
                  & 1) == 0) {
                return param_1;
              }
              FUN_0133eb00(param_2,param_2 - 1,2,2);
              return param_1;
            }
            lVar16 = uVar20 * 4 + -1;
            if (uVar12 != 2) {
              *(undefined4 *)(param_2 - 1) = uVar10;
              if ((((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                 (((uint)*(undefined8 *)
                          ((unaff_x26 + (uVar8 & 0xfffffffd) & 0xfffffffffffc0000) + 8) >> 1 & 1) !=
                  0)) {
                FUN_0133eb00(param_2,param_2 - 1,2,2);
              }
              *(int *)(param_2 + lVar16) = (int)param_1;
              if (((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
                return param_1;
              }
              if ((param_1 & 1) == 0) {
                return param_1;
              }
              uVar8 = unaff_x26 + (param_1 & 0xffffffff);
              if (((uint)*(undefined8 *)((uVar8 & 0xfffffffffffc0000) + 8) >> 1 & 1) == 0) {
                return uVar8;
              }
              FUN_0133eb00(param_2,param_2 + lVar16,0,2);
              return uVar8;
            }
            if ((param_1 & 1) == 0) {
              dVar24 = (double)iVar2;
            }
            else {
              dVar24 = *(double *)(param_1 + 3);
            }
            uVar20 = **(ulong **)(unaff_x26 + 0x1428);
            uVar17 = uVar20 + 0xc;
            if (uVar17 < **(ulong **)(unaff_x26 + 0x1430)) {
              uVar20 = uVar20 + 1;
              **(ulong **)(unaff_x26 + 0x1428) = uVar17;
            }
            else {
              uVar20 = FUN_01348560(param_2,param_1,0xc);
            }
            *(int *)(uVar20 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
            *(double *)(uVar20 + 3) = dVar24;
            *(undefined4 *)(param_2 - 1) = uVar10;
            if ((((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
               (((uint)*(undefined8 *)((unaff_x26 + (uVar8 & 0xfffffffd) & 0xfffffffffffc0000) + 8)
                 >> 1 & 1) != 0)) {
              FUN_0133eb00(param_2,param_2 - 1,2,2);
              uVar20 = extraout_x9;
              param_2 = extraout_x10;
            }
            *(int *)(param_2 + lVar16) = (int)uVar20;
            if (((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
              return param_1;
            }
            if ((uVar20 & 1) == 0) {
              return param_1;
            }
            if (((uint)*(undefined8 *)((unaff_x26 + (uVar20 & 0xffffffff) & 0xfffffffffffc0000) + 8)
                 >> 1 & 1) == 0) {
              return param_1;
            }
            FUN_0133eb00(param_2,param_2 + lVar16,0,2);
            return param_1;
          }
        }
        else if (iVar6 == *(int *)(lVar16 + lVar18 + 0x17)) {
          *(undefined4 *)(param_2 - 1) = uVar10;
          if (((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
            return param_1;
          }
          if (((uint)*(undefined8 *)((unaff_x26 + (uVar8 & 0xfffffffd) & 0xfffffffffffc0000) + 8) >>
               1 & 1) == 0) {
            return param_1;
          }
          FUN_0133eb00(param_2,param_2 - 1,2,2);
          return param_1;
        }
      }
      goto LAB_01385b4c;
    }
    uVar20 = unaff_x26 + (ulong)*(uint *)(uVar17 + 0xb);
    uVar13 = *(int *)(uVar17 + 7) >> 1;
    if ((uVar13 >> 3 & 1) != 0) goto LAB_01385b4c;
    uVar13 = uVar13 >> 6 & 3;
    iVar11 = (int)uVar20;
    if (uVar13 != 1) {
      if (iVar11 != (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
        if (uVar13 == 3) {
LAB_013850dc:
          *(int *)(uVar17 + 0xb) = iVar6;
          if (((uint)*(undefined8 *)((uVar8 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
            return param_1;
          }
          if ((param_1 & 1) == 0) {
            return param_1;
          }
          uVar8 = unaff_x26 + (param_1 & 0xffffffff);
          if (((uint)*(undefined8 *)((uVar8 & 0xfffffffffffc0000) + 8) >> 1 & 1) == 0) {
            return uVar8;
          }
          FUN_0133eb00(uVar17,uVar17 + 0xb,0,2);
          return uVar8;
        }
        bVar5 = (param_1 & 1) != 0;
        if ((uVar20 & 1) == 0) {
          if (!bVar5) goto LAB_013850dc;
        }
        else if ((bVar5) && (*(int *)(uVar20 - 1) == *(int *)(param_1 - 1))) goto LAB_013850dc;
      }
      goto LAB_01385b4c;
    }
  }
  else {
    if (*(int *)(uVar8 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x120)) {
      if (((long)*(int *)(uVar8 + 0x17) & 0x80000000U) == 0) {
        UNRECOVERED_JUMPTABLE = (code *)(uVar8 + 0x3f);
      }
      else {
        UNRECOVERED_JUMPTABLE = *(code **)((long)*(int *)(uVar8 + 0x27) * 8 + unaff_x26 + 0x2c78);
      }
                    /* WARNING: Could not recover jumptable at 0x0138505c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar8 = (*UNRECOVERED_JUMPTABLE)();
      return uVar8;
    }
    lVar18 = unaff_x26 + (ulong)*(uint *)(uVar8 + 7);
    lVar16 = 0;
    if (((int)lVar18 != 0) && (*(int *)(lVar18 + 3) != 0)) goto LAB_01385b4c;
    uVar13 = iVar3 + *(int *)(uVar8 + 3) >> 1;
    if ((uVar13 & 0x30) != 0) {
      if ((uVar13 >> 4 & 1) == 0) {
        uVar17 = unaff_x26 + (ulong)*(uint *)(param_2 + 3);
        if ((uVar17 & 1) == 0) {
          uVar17 = *(ulong *)(unaff_x26 + 0x410);
        }
        uVar20 = (ulong)(*(uint *)(param_3 + 3) >> 3);
        while( true ) {
          uVar20 = uVar20 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar17 + 0xf) << 0x20) >> 0x21) -
                            1U;
          lVar18 = uVar20 * 3;
          lVar15 = (lVar18 + 5) * 4;
          iVar2 = *(int *)(uVar17 + lVar15 + 7);
          if (iVar2 == iVar11) break;
          if (iVar2 == iVar9) {
            if ((*(int *)(uVar17 + lVar15 + 0xf) >> 1 & 9U) == 0) {
              if ((ulong)((long)((ulong)*(uint *)(uVar17 + 3) << 0x20) >> 0x21) <= lVar18 + 6U) {
                    /* WARNING: Does not return */
                UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0,0x1385978);
                (*UNRECOVERED_JUMPTABLE)();
              }
              *(int *)(uVar17 + lVar15 + 0xb) = iVar6;
              if (((uint)*(undefined8 *)((uVar17 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
                return param_1;
              }
              if ((param_1 & 1) == 0) {
                return param_1;
              }
              uVar8 = unaff_x26 + (param_1 & 0xffffffff);
              if (((uint)*(undefined8 *)((uVar8 & 0xfffffffffffc0000) + 8) >> 1 & 1) == 0) {
                return uVar8;
              }
              FUN_0133eb00(uVar17,uVar17 + lVar15 + 0xb,0,2);
              return uVar8;
            }
            goto LAB_01385b4c;
          }
          lVar16 = lVar16 + 1;
          uVar20 = uVar20 + lVar16;
        }
      }
      else {
        uVar17 = unaff_x26 + (ulong)*(uint *)(uVar8 + 0xf);
        if ((int)uVar17 == 3) goto LAB_01385b4c;
        uVar17 = uVar17 & 0xfffffffffffffffd;
        lVar16 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13);
        if (((int)uVar17 != (int)lVar16) &&
           ((*(short *)(unaff_x26 + (ulong)*(uint *)(param_2 - 1) + 7) != 0xab ||
            (*(int *)(uVar17 + 0x27b) != *(int *)(lVar16 + 0x27b))))) goto LAB_01385b4c;
      }
    }
    uVar12 = uVar13 & 0xf;
    if (uVar12 == 8) {
      lVar16 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
      if (((*(uint *)(lVar16 + 0xb) >> 0x14 & 1) != 0) &&
         ((unaff_x26 + (ulong)*(uint *)(lVar16 + 0x23) & 1) != 0)) {
        *(undefined8 *)(unaff_x26 + 0x40) = 0x1384e10;
        *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
        (**(code **)(unaff_x26 + 0x11a0))(lVar16);
        *(undefined8 *)(unaff_x26 + 0x38) = 0;
        iVar11 = (int)*(undefined8 *)(unaff_x26 + 0xa0);
      }
      uVar8 = unaff_x26 + (ulong)*(uint *)(param_2 + 3);
      if ((uVar8 & 1) == 0) {
        uVar8 = *(ulong *)(unaff_x26 + 0x410);
      }
      uVar13 = iVar3 + *(int *)(uVar8 + 0xf);
      uVar17 = (long)((ulong)*(uint *)(uVar8 + 3) << 0x20) >> 0x21;
      if (uVar17 == 0) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0,0x138598c);
        (*UNRECOVERED_JUMPTABLE)();
      }
      uVar12 = iVar3 + *(int *)(uVar8 + 7) + 2;
      if (uVar12 + (uVar12 >> 1 & 0xfffffffe) <= uVar13) {
        if (uVar17 < 2) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0,0x1385994);
          (*UNRECOVERED_JUMPTABLE)();
        }
        if ((uint)(iVar3 + *(int *)(uVar8 + 0xb)) <= (uVar13 - uVar12 >> 1 & 0xfffffffe)) {
          if (uVar17 < 4) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0,0x138599c);
            (*UNRECOVERED_JUMPTABLE)();
          }
          lVar16 = unaff_x26 + (ulong)*(uint *)(uVar8 + 0x13);
          uVar13 = (int)lVar16 + 2;
          if (uVar13 < 0xffffff) {
            *(uint *)(uVar8 + 0x13) = uVar13;
            if ((long)((ulong)*(uint *)(uVar8 + 3) << 0x20) >> 0x21 == 0) {
                    /* WARNING: Does not return */
              UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0,0x13859ac);
              (*UNRECOVERED_JUMPTABLE)();
            }
            *(uint *)(uVar8 + 7) = uVar12;
            uVar17 = (ulong)(*(uint *)(param_3 + 3) >> 3);
            lVar18 = 0;
            while( true ) {
              uVar17 = uVar17 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar8 + 0xf) << 0x20) >> 0x21)
                                - 1U;
              uVar20 = uVar17 * 3 + 5;
              lVar21 = uVar20 * 4;
              lVar15 = lVar21 + 7;
              if ((*(int *)(uVar8 + lVar15) == iVar11) ||
                 (*(int *)(uVar8 + lVar15) == (int)*(undefined8 *)(unaff_x26 + 0xa8))) break;
              lVar18 = lVar18 + 1;
              uVar17 = uVar17 + lVar18;
            }
            if ((ulong)((long)((ulong)*(uint *)(uVar8 + 3) << 0x20) >> 0x21) <= uVar20) {
                    /* WARNING: Does not return */
              UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0,0x13859b4);
              (*UNRECOVERED_JUMPTABLE)();
            }
            *(int *)(uVar8 + lVar15) = iVar9;
            if (((((uint)*(undefined8 *)((uVar8 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                ((param_3 & 1) != 0)) &&
               (param_3 = unaff_x26 + (param_3 & 0xffffffff),
               ((uint)*(undefined8 *)((param_3 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
              FUN_0133eb00(uVar8,uVar8 + lVar15,0,2);
              lVar16 = extraout_x9_01;
              uVar20 = extraout_x11_00;
              lVar21 = extraout_x12_02;
            }
            if ((ulong)((long)((ulong)*(uint *)(uVar8 + 3) << 0x20) >> 0x21) <= uVar20 + 1) {
                    /* WARNING: Does not return */
              UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0,0x13859bc);
              (*UNRECOVERED_JUMPTABLE)();
            }
            *(int *)(uVar8 + lVar21 + 0xb) = iVar6;
            if (((((uint)*(undefined8 *)((uVar8 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                ((param_1 & 1) != 0)) &&
               (param_1 = unaff_x26 + (param_1 & 0xffffffff),
               ((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
              FUN_0133eb00(uVar8,uVar8 + lVar21 + 0xb,0,2);
              lVar16 = extraout_x9_00;
              uVar20 = extraout_x11;
              lVar21 = extraout_x12_01;
            }
            uVar12 = (uint)(lVar16 << 8);
            uVar13 = uVar12 | 0x180;
            if ((*(int *)(param_3 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xf8)) &&
               ((*(uint *)(param_3 + 7) & 1) != 0)) {
              uVar13 = uVar12 | 0x1a0;
            }
            if (uVar20 + 2 < (ulong)((long)((ulong)*(uint *)(uVar8 + 3) << 0x20) >> 0x21)) {
              *(uint *)(uVar8 + lVar21 + 0xf) = uVar13;
              return param_1;
            }
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0,0x13859c4);
            (*UNRECOVERED_JUMPTABLE)();
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x21a0));
    }
    if (uVar12 == 10) {
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x1ef0));
    }
    uVar17 = unaff_x26 + (ulong)*(uint *)(uVar8 + 0xb);
    if ((int)uVar17 == 3) goto LAB_01385b4c;
    uVar20 = uVar17 & 0xfffffffffffffffd;
    if (uVar12 != 7) {
      if (uVar12 == 3) {
        uVar8 = FUN_0133fcc0(1,unaff_x26 +
                               (ulong)*(uint *)(unaff_x26 +
                                                (ulong)*(uint *)(unaff_x26 +
                                                                 (ulong)*(uint *)(unaff_x26 +
                                                                                  (ulong)*(uint *)(
                                                  uVar20 - 1) + 0x17) +
                                                  ((ulong)(uVar13 >> 6) & 0x3ff) * 0xc + 0x17) + 7))
        ;
        return uVar8;
      }
      if (uVar12 != 4) {
        if ((uVar12 != 5) && (uVar12 != 6)) {
          uVar7 = thunk_FUN_01349b90(param_3,param_2,param_1);
          uVar8 = FUN_013fe560(uVar20,uVar7,param_1,param_2);
          return uVar8;
        }
        if ((uVar13 >> 4 & 1) == 0) {
          uVar13 = *(uint *)(uVar8 + 0xf);
        }
        else {
          uVar13 = *(uint *)(uVar8 + 0x13);
        }
        if ((int)(unaff_x26 + (ulong)uVar13) == 3) {
          uVar8 = 0;
        }
        else {
          uVar8 = unaff_x26 + (ulong)uVar13 & 0xfffffffffffffffd;
        }
        uVar7 = *(undefined8 *)(unaff_x26 + (ulong)*(uint *)(uVar20 + 7) + 3);
        uVar17 = param_2;
        if (uVar12 != 5) {
          uVar17 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(param_2 - 1) + 0xf);
        }
        uVar8 = FUN_01348140(uVar17,uVar7,1,unaff_x26 + (ulong)*(uint *)(uVar20 + 0xb),param_5,uVar8
                             ,uVar7,uVar17,param_1,param_2);
        return uVar8;
      }
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(5,*(undefined8 *)(unaff_x26 + 0x1f28));
    }
    uVar8 = unaff_x26 + (ulong)*(uint *)(uVar20 + 0xb);
    uVar13 = *(int *)(uVar20 + 7) >> 1;
    if ((uVar13 >> 3 & 1) != 0) goto LAB_01385b4c;
    uVar13 = uVar13 >> 6 & 3;
    iVar11 = (int)uVar8;
    if (uVar13 != 1) {
      if (iVar11 != (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
        if (uVar13 == 3) {
LAB_01384d94:
          *(int *)(uVar20 + 0xb) = iVar6;
          if (((uint)*(undefined8 *)((uVar17 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
            return param_1;
          }
          if ((param_1 & 1) == 0) {
            return param_1;
          }
          uVar8 = unaff_x26 + (param_1 & 0xffffffff);
          if (((uint)*(undefined8 *)((uVar8 & 0xfffffffffffc0000) + 8) >> 1 & 1) == 0) {
            return uVar8;
          }
          FUN_0133eb00(uVar20,uVar20 + 0xb,0,2);
          return uVar8;
        }
        bVar5 = (param_1 & 1) != 0;
        if ((uVar8 & 1) == 0) {
          if (!bVar5) goto LAB_01384d94;
        }
        else if ((bVar5) && (*(int *)(uVar8 - 1) == *(int *)(param_1 - 1))) goto LAB_01384d94;
      }
      goto LAB_01385b4c;
    }
  }
  if (iVar11 == iVar6) {
    return param_1;
  }
LAB_01385b4c:
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(5,*(undefined8 *)(unaff_x26 + 0x1f48));
}

