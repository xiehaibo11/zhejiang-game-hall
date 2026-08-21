
/* WARNING: Removing unreachable block (ram,0x0138b6fc) */
/* WARNING: Removing unreachable block (ram,0x0138b724) */
/* WARNING: Removing unreachable block (ram,0x0138b718) */
/* WARNING: Removing unreachable block (ram,0x0138b730) */

undefined8 FUN_0138a3c0(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  int iVar1;
  ushort uVar2;
  ulong uVar3;
  int iVar4;
  bool bVar5;
  byte bVar6;
  code *UNRECOVERED_JUMPTABLE;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ushort uVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  int iVar21;
  int iVar22;
  long unaff_x26;
  long unaff_x27;
  
  if ((param_2 & 1) == 0) {
    lVar18 = *(long *)(unaff_x26 + 0x140);
  }
  else {
    lVar18 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
  }
  if ((*(uint *)(lVar18 + 0xb) >> 0x18 & 1) != 0) goto LAB_0138ae1c;
  uVar12 = (uint)*(undefined8 *)(unaff_x26 + 0xa0);
  uVar13 = (uint)param_3;
  if ((uint)param_4 != uVar12) {
    lVar15 = (long)(int)param_1 * 2;
    lVar14 = unaff_x26 + (ulong)*(uint *)(param_4 + lVar15 + 0x1f);
    uVar16 = (uint)lVar14;
    if (uVar16 == ((uint)lVar18 | 2)) {
      uVar16 = *(uint *)(param_4 + lVar15 + 0x23);
LAB_0138a43c:
      uVar9 = unaff_x26 + (ulong)uVar16;
      uVar10 = param_2;
      if ((uVar9 & 1) != 0) {
        if (*(int *)(uVar9 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x120)) {
          if (((long)*(int *)(uVar9 + 0x17) & 0x80000000U) == 0) {
            UNRECOVERED_JUMPTABLE = (code *)(uVar9 + 0x3f);
          }
          else {
            UNRECOVERED_JUMPTABLE =
                 *(code **)((long)*(int *)(uVar9 + 0x27) * 8 + unaff_x26 + 0x2c78);
          }
                    /* WARNING: Could not recover jumptable at 0x0138ac50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar8 = (*UNRECOVERED_JUMPTABLE)();
          return uVar8;
        }
        lVar14 = unaff_x26 + (ulong)*(uint *)(uVar9 + 7);
        lVar18 = 0;
        if (((int)lVar14 != 0) && (*(int *)(lVar14 + 3) != 0)) goto LAB_0138ae1c;
        uVar3 = unaff_x26 + (ulong)*(uint *)(uVar9 + 3);
        if (((long)(uVar3 << 0x20) >> 0x21 & 0x30U) != 0) {
          if (((uint)((int)uVar3 >> 1) >> 4 & 1) == 0) {
            uVar17 = unaff_x26 + (ulong)*(uint *)(param_2 + 3);
            if ((uVar17 & 1) == 0) {
              uVar17 = *(ulong *)(unaff_x26 + 0x410);
            }
            uVar19 = (ulong)(*(uint *)(param_3 + 3) >> 3);
            while( true ) {
              uVar19 = uVar19 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar17 + 0xf) << 0x20) >> 0x21)
                                - 1U;
              uVar16 = *(uint *)(uVar17 + (uVar19 * 3 + 5) * 4 + 7);
              if (uVar16 == uVar12) break;
              if (uVar16 == uVar13) {
                return *(undefined8 *)(unaff_x26 + 0xb8);
              }
              lVar18 = lVar18 + 1;
              uVar19 = uVar19 + lVar18;
            }
          }
          else {
            uVar17 = unaff_x26 + (ulong)*(uint *)(uVar9 + 0xf);
            if ((int)uVar17 == 3) goto LAB_0138ae1c;
            uVar17 = uVar17 & 0xfffffffffffffffd;
            lVar18 = unaff_x26 +
                     (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13);
            if (((int)uVar17 != (int)lVar18) &&
               ((*(short *)(unaff_x26 + (ulong)*(uint *)(param_2 - 1) + 7) != 0xab ||
                (*(int *)(uVar17 + 0x27b) != *(int *)(lVar18 + 0x27b))))) goto LAB_0138ae1c;
          }
        }
        uVar17 = unaff_x26 + (ulong)*(uint *)(uVar9 + 0xb);
        if ((uVar17 & 1) == 0) {
          return *(undefined8 *)(unaff_x26 + 0xb8);
        }
        uVar9 = uVar3;
        if ((int)uVar17 != (int)*(undefined8 *)(unaff_x26 + 0xb0)) {
          if ((int)uVar17 == 3) goto LAB_0138ae1c;
          uVar10 = uVar17 & 0xfffffffffffffffd;
        }
      }
      uVar3 = (long)(uVar9 << 0x20) >> 0x21;
      uVar17 = uVar3 & 0xf;
      if (uVar17 != 0) {
        if ((uVar17 == 4) || (uVar17 == 5)) {
LAB_0138a57c:
          return *(undefined8 *)(unaff_x26 + 0xb8);
        }
        if (uVar17 == 0xd) {
          return *(undefined8 *)(unaff_x26 + 0xc0);
        }
        if (uVar17 == 2) {
          uVar10 = unaff_x26 + (ulong)*(uint *)(uVar10 + 3);
          if ((uVar10 & 1) == 0) {
            uVar10 = *(ulong *)(unaff_x26 + 0x410);
          }
          uVar9 = (ulong)(*(uint *)(param_3 + 3) >> 3);
          lVar18 = 0;
          while( true ) {
            uVar9 = uVar9 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar10 + 0xf) << 0x20) >> 0x21) -
                            1U;
            uVar16 = *(uint *)(uVar10 + (uVar9 * 3 + 5) * 4 + 7);
            if (uVar16 == uVar12) break;
            if (uVar16 == uVar13) {
              return *(undefined8 *)(unaff_x26 + 0xb8);
            }
            lVar18 = lVar18 + 1;
            uVar9 = uVar9 + lVar18;
          }
        }
        else {
          if ((((uVar17 == 6) || (uVar17 == 7)) || (uVar17 == 8)) || (uVar17 == 9))
          goto LAB_0138a57c;
          if (uVar17 == 0xb) {
                    /* WARNING: Subroutine does not return */
            FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2260));
          }
          if (uVar17 != 3) {
            uVar8 = FUN_01369d20(param_2,param_3);
            return uVar8;
          }
          if (*(int *)(uVar10 + 0xb) != (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
            return *(undefined8 *)(unaff_x26 + 0xb8);
          }
        }
        goto LAB_0138ae1c;
      }
      if ((param_3 & 1) == 0) {
        uVar17 = (long)(param_3 << 0x20) >> 0x21;
      }
      else {
        uVar11 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(param_3 - 1) + 7);
        if (((uVar11 != 0x42) ||
            (uVar17 = (ulong)*(double *)(param_3 + 3),
            *(double *)(param_3 + 3) != (double)(long)uVar17)) ||
           (0x3ffffffffffffe < uVar17 + 0x1fffffffffffff)) {
          if (0x3f < uVar11) goto LAB_0138ae1c;
          *(undefined8 *)(unaff_x26 + 0x40) = 0x138a5dc;
          *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
          iVar7 = (**(code **)(unaff_x26 + 0x1250))(param_3);
          *(undefined8 *)(unaff_x26 + 0x38) = 0;
          if (iVar7 == -1) goto LAB_0138ae1c;
          uVar17 = (ulong)iVar7;
        }
      }
      uVar3 = uVar3 >> 9;
      uVar13 = (uint)uVar3 & 0xff;
      uVar12 = (int)uVar9 >> 1;
      if (uVar13 < 0xc) {
        lVar18 = unaff_x26 + (ulong)*(uint *)(uVar10 + 7);
        if ((uVar12 >> 7 & 1) == 0) {
          uVar16 = *(uint *)(lVar18 + 3);
        }
        else {
          uVar16 = *(uint *)(uVar10 + 0xb);
        }
        if (uVar17 < (ulong)((long)(unaff_x26 + (ulong)uVar16 << 0x20) >> 0x21)) {
          if (uVar13 < 6) {
            if (uVar13 < 3) {
              if ((uVar3 & 0xff) == 0) goto LAB_0138a6ec;
              if (uVar13 != 1) {
                if (uVar13 != 2) goto LAB_0138ac7c;
                goto LAB_0138a6ec;
              }
            }
            else if (uVar13 != 3) {
              if (uVar13 == 4) {
                return *(undefined8 *)(unaff_x26 + 0xb8);
              }
              if (uVar13 != 5) {
LAB_0138ac7c:
                    /* WARNING: Does not return */
                UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0,0x138ac80);
                (*UNRECOVERED_JUMPTABLE)();
              }
              if (*(long *)(lVar18 + uVar17 * 8 + 7) != -0x8000000080001) {
                return *(undefined8 *)(unaff_x26 + 0xb8);
              }
              goto LAB_0138a878;
            }
          }
          else if (uVar13 < 9) {
            if (uVar13 == 6) {
LAB_0138a6ec:
              return *(undefined8 *)(unaff_x26 + 0xb8);
            }
            if (uVar13 != 7) {
              if (uVar13 != 8) goto LAB_0138ac7c;
              goto LAB_0138a6ec;
            }
          }
          else if (uVar13 != 9) {
            if (uVar13 == 10) goto LAB_0138a6ec;
            if (uVar13 != 0xb) goto LAB_0138ac7c;
          }
          if (*(int *)(lVar18 + uVar17 * 4 + 7) != (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
            return *(undefined8 *)(unaff_x26 + 0xb8);
          }
LAB_0138a878:
          if (((uVar12 >> 8 & 1) != 0) && (*(int *)(*(long *)(unaff_x26 + 0xea8) + 0xb) != 0)) {
            return *(undefined8 *)(unaff_x26 + 0xc0);
          }
          goto LAB_0138ae1c;
        }
      }
      else if (uVar13 < 0x11) {
        if (uVar13 != 0xc) goto LAB_0138ac7c;
        if (uVar17 < 0xffffffff) {
          lVar14 = unaff_x26 + (ulong)*(uint *)(uVar10 + 7);
          uVar13 = *(uint *)(lVar14 + 0xf);
          *(undefined8 *)(unaff_x26 + 0x40) = 0x138a7a0;
          *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
          uVar10 = (**(code **)(unaff_x26 + 0x1080))();
          *(undefined8 *)(unaff_x26 + 0x38) = 0;
          uVar10 = uVar10 & 0xffffffff;
          lVar18 = 0;
          while( true ) {
            uVar10 = uVar10 & ((long)(unaff_x26 + (ulong)uVar13 << 0x20) >> 0x21) - 1U;
            lVar15 = uVar10 * 3;
            lVar20 = (lVar15 + 4) * 4;
            uVar9 = unaff_x26 + (ulong)*(uint *)(lVar14 + lVar20 + 7);
            if ((int)uVar9 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) break;
            if ((uVar9 & 1) == 0) {
              if ((long)(uVar9 << 0x20) >> 0x21 == uVar17) goto LAB_0138a848;
            }
            else if (((int)uVar9 != (int)*(undefined8 *)(unaff_x26 + 0xa8)) &&
                    (*(double *)(uVar9 + 3) == (double)(long)uVar17)) {
LAB_0138a848:
              if ((*(int *)(lVar14 + lVar20 + 0xf) >> 1 & 1U) == 0) {
                if (lVar15 + 5U < (ulong)((long)((ulong)*(uint *)(lVar14 + 3) << 0x20) >> 0x21)) {
                  return *(undefined8 *)(unaff_x26 + 0xb8);
                }
                    /* WARNING: Does not return */
                UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0,0x138acb4);
                (*UNRECOVERED_JUMPTABLE)();
              }
              goto LAB_0138ae1c;
            }
            lVar18 = lVar18 + 1;
            uVar10 = uVar10 + lVar18;
          }
          goto LAB_0138a878;
        }
      }
      else {
        if ((*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar10 + 0xb) + 0x1b) >> 2 & 1) != 0)
        goto LAB_0138ae1c;
        if (uVar17 < *(ulong *)(uVar10 + 0x1f)) {
          return *(undefined8 *)(unaff_x26 + 0xb8);
        }
      }
      if ((uVar12 >> 6 & 1) != 0) {
        lVar18 = unaff_x26 + (ulong)*(uint *)(uVar10 - 1);
        if (*(short *)(lVar18 + 7) == 0x41b) {
LAB_0138adec:
          return *(undefined8 *)(unaff_x26 + 0xc0);
        }
        if (uVar17 < 0xfffffffe) {
          do {
            lVar14 = unaff_x26 + (ulong)*(uint *)(lVar18 + 0xf);
            if ((int)lVar14 == (int)*(undefined8 *)(unaff_x26 + 0xb0)) goto LAB_0138adec;
            lVar18 = unaff_x26 + (ulong)*(uint *)(lVar14 + -1);
          } while (((0x411 < *(ushort *)(lVar18 + 7)) ||
                   ((*(ushort *)(lVar18 + 7) == 0x411 &&
                    (*(int *)(lVar14 + 0xb) == (int)*(undefined8 *)(unaff_x26 + 200))))) &&
                  ((*(int *)(lVar14 + 7) == (int)*(undefined8 *)(unaff_x26 + 0x168) ||
                   (*(int *)(lVar14 + 7) == (int)*(undefined8 *)(unaff_x26 + 1000)))));
        }
      }
LAB_0138ae1c:
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(4,*(undefined8 *)(unaff_x26 + 0x1f68));
    }
    if ((uVar16 & 3) != 1) goto LAB_0138ae1c;
    if (*(int *)(lVar14 + -1) == (int)*(undefined8 *)(unaff_x26 + 0x2b8)) {
      lVar15 = ((long)((ulong)*(uint *)(lVar14 + 3) << 0x20) >> 0x21) + -2;
      do {
        if ((int)unaff_x26 + *(int *)(lVar14 + lVar15 * 4 + 7) == ((uint)lVar18 | 2)) {
          uVar16 = *(uint *)(lVar14 + lVar15 * 4 + 0xb);
          goto LAB_0138a43c;
        }
        lVar15 = lVar15 + -2;
      } while (-1 < lVar15);
      goto LAB_0138ae1c;
    }
    if (uVar16 != (uint)*(undefined8 *)(unaff_x26 + 0xb88)) {
      if (uVar16 != (uint)*(undefined8 *)(unaff_x26 + 0xc08)) {
        if (uVar16 == uVar13) {
LAB_0138aa84:
          uVar8 = FUN_01368e60(param_1,param_2,param_3);
          return uVar8;
        }
        if (((param_3 & 1) != 0) &&
           (((uVar11 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(param_3 - 1) + 7), uVar11 != 0x42 ||
             (lVar18 = (long)*(double *)(param_3 + 3), *(double *)(param_3 + 3) != (double)lVar18))
            || (0x3ffffffffffffe < lVar18 + 0x1fffffffffffffU)))) {
          if (uVar11 != 0x40) {
            if (uVar11 < 0x40) {
              if (((*(uint *)(param_3 + 3) & 0xc0000002) == 0) ||
                 ((*(uint *)(param_3 + 3) >> 1 & 1) == 0)) goto LAB_0138ae1c;
              if ((uVar11 == 0x25) || (uVar11 == 0x2d)) {
                param_3 = unaff_x26 + (ulong)*(uint *)(param_3 + 0xb);
              }
              else if ((uVar11 >> 5 & 1) != 0) {
                *(undefined8 *)(unaff_x26 + 0x40) = 0x138a9b0;
                *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
                param_3 = (**(code **)(unaff_x26 + 0x1258))();
                *(undefined8 *)(unaff_x26 + 0x38) = 0;
                if ((param_3 & 1) == 0) goto LAB_0138ae1c;
              }
            }
            else {
              if (uVar11 != 0x43) goto LAB_0138ae1c;
              param_3 = unaff_x26 + (ulong)*(uint *)(param_3 + 0xb);
            }
          }
          if (uVar16 == (uint)param_3) goto LAB_0138aa84;
        }
      }
      goto LAB_0138ae1c;
    }
  }
  if ((param_2 & 1) != 0) {
    lVar18 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
    uVar11 = *(ushort *)(lVar18 + 7);
    if (0xa8 < uVar11) {
      if (uVar11 == 0xa9) {
        lVar18 = thunk_FUN_01349b90(param_3);
        if ((*(int *)(lVar18 + -1) == (int)*(undefined8 *)(unaff_x26 + 0xf8)) &&
           ((*(uint *)(lVar18 + 7) & 1) != 0)) {
LAB_0138b698:
          uVar8 = *(undefined8 *)(unaff_x26 + 0xc0);
        }
        else {
          uVar8 = FUN_013fd060(param_2,lVar18);
        }
      }
      else {
        if ((param_3 & 1) == 0) {
          uVar10 = (long)(param_3 << 0x20) >> 0x21;
        }
        else {
          uVar2 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(param_3 - 1) + 7);
          if (((uVar2 != 0x42) ||
              (uVar10 = (ulong)*(double *)(param_3 + 3),
              *(double *)(param_3 + 3) != (double)(long)uVar10)) ||
             (0x3ffffffffffffe < uVar10 + 0x1fffffffffffff)) {
            if (uVar2 == 0x40) {
LAB_0138af60:
              do {
                iVar7 = (int)param_3;
                if (uVar11 < 0x411) {
                  if ((uVar11 != 0xaa) || ((*(byte *)(lVar18 + 9) & 0x24) != 0)) goto LAB_0138b7cc;
                  uVar10 = unaff_x26 + (ulong)*(uint *)(param_2 + 3);
                  if ((uVar10 & 1) == 0) {
                    uVar10 = *(ulong *)(unaff_x26 + 0x410);
                  }
                  uVar9 = (ulong)(*(uint *)(param_3 + 3) >> 3);
                  lVar14 = 0;
                  while( true ) {
                    uVar9 = uVar9 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar10 + 0xf) << 0x20) >>
                                    0x21) - 1U;
                    uVar3 = uVar9 + 5;
                    lVar15 = unaff_x26 + (ulong)*(uint *)(uVar10 + uVar3 * 4 + 7);
                    if ((int)lVar15 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) break;
                    if (*(int *)(lVar15 + 3) == iVar7) {
                      if ((ulong)((long)((ulong)*(uint *)(uVar10 + 3) << 0x20) >> 0x21) <= uVar3) {
                    /* WARNING: Does not return */
                        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0,0x138b6b8);
                        (*UNRECOVERED_JUMPTABLE)();
                      }
                      if (*(int *)(lVar15 + 0xb) != (int)*(undefined8 *)(unaff_x26 + 0xa8))
                      goto LAB_0138b688;
                      break;
                    }
                    lVar14 = lVar14 + 1;
                    uVar9 = uVar9 + lVar14;
                  }
                }
                else if ((*(uint *)(lVar18 + 0xb) >> 0x15 & 1) == 0) {
                  lVar14 = unaff_x26 + (ulong)*(uint *)(lVar18 + 0x17);
                  uVar13 = *(uint *)(lVar18 + 0xb) >> 10 & 0x3ff;
                  if (uVar13 != 0) {
                    if (uVar13 < 0x21) {
                      lVar15 = (long)(int)uVar13 * 3;
                      while (lVar15 != 0) {
                        lVar15 = lVar15 + -3;
                        if (*(int *)(lVar14 + lVar15 * 4 + 0xf) == iVar7) goto LAB_0138b688;
                      }
                    }
                    else {
                      iVar4 = *(short *)(lVar14 + 5) + -1;
                      iVar22 = 0;
                      iVar21 = iVar4;
                      do {
                        iVar1 = iVar22 + ((uint)(iVar21 - iVar22) >> 1);
                        if (*(uint *)(unaff_x26 +
                                      (ulong)*(uint *)(lVar14 + (long)(int)(((uint)(*(int *)(lVar14 
                                                  + (long)(iVar1 * 3) * 4 + 0x13) >> 1) >> 9 & 0x3ff
                                                  ) * 3) * 4 + 0xf) + 3) < *(uint *)(param_3 + 3)) {
                          iVar22 = iVar1 + 1;
                          iVar1 = iVar21;
                        }
                        iVar21 = iVar1;
                      } while (iVar22 != iVar21);
                      for (; iVar22 <= iVar4; iVar22 = iVar22 + 1) {
                        uVar12 = (uint)(*(int *)(lVar14 + (long)(iVar22 * 3) * 4 + 0x13) >> 1) >> 9
                                 & 0x3ff;
                        lVar15 = unaff_x26 +
                                 (ulong)*(uint *)(lVar14 + (long)(int)(uVar12 * 3) * 4 + 0xf);
                        if (*(uint *)(lVar15 + 3) != *(uint *)(param_3 + 3)) break;
                        if ((int)lVar15 == iVar7) {
                          if (uVar12 < uVar13) goto LAB_0138b688;
                          break;
                        }
                      }
                    }
                  }
                }
                else {
                  uVar10 = unaff_x26 + (ulong)*(uint *)(param_2 + 3);
                  if ((uVar10 & 1) == 0) {
                    uVar10 = *(ulong *)(unaff_x26 + 0x410);
                  }
                  uVar9 = (ulong)(*(uint *)(param_3 + 3) >> 3);
                  lVar14 = 0;
                  while( true ) {
                    uVar9 = uVar9 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar10 + 0xf) << 0x20) >>
                                    0x21) - 1U;
                    iVar22 = *(int *)(uVar10 + (uVar9 * 3 + 5) * 4 + 7);
                    if (iVar22 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) break;
                    if (iVar22 == iVar7) goto LAB_0138b688;
                    lVar14 = lVar14 + 1;
                    uVar9 = uVar9 + lVar14;
                  }
                }
                if (uVar11 == 0x41b) {
                  uVar11 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(param_3 - 1) + 7);
                  uVar13 = (uint)uVar11;
                  if (((uVar11 < 0x40) && (iVar7 = *(int *)(param_3 + 7) * 2, iVar7 != 0)) &&
                     (iVar7 < 0x31)) {
                    uVar10 = param_3;
                    if ((uVar11 & 7) == 0) {
                      lVar14 = 0;
                      bVar5 = false;
                    }
                    else {
                      lVar14 = 0;
                      while( true ) {
                        while (uVar12 = uVar13 & 7, uVar12 < 2) {
                          if (uVar12 == 0) {
                            bVar5 = false;
                            goto LAB_0138b2d4;
                          }
                          if ((uVar12 != 1) ||
                             (*(int *)(uVar10 + 0xf) != (int)*(undefined8 *)(unaff_x26 + 200)))
                          goto LAB_0138b748;
                          uVar10 = unaff_x26 + (ulong)*(uint *)(uVar10 + 0xb);
                          uVar13 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar10 - 1) + 7);
                        }
                        if (uVar12 == 2) break;
                        if (uVar12 == 3) {
                          uVar9 = unaff_x26 + (ulong)*(uint *)(uVar10 + 0xb);
                          lVar14 = lVar14 + ((long)((ulong)*(uint *)(uVar10 + 0xf) << 0x20) >> 0x21)
                          ;
                          uVar13 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar9 - 1) + 7);
                          uVar10 = uVar9;
                        }
                        else {
                          if (uVar12 != 5) goto LAB_0138b748;
                          uVar10 = unaff_x26 + (ulong)*(uint *)(uVar10 + 0xb);
                          uVar13 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar10 - 1) + 7);
                        }
                      }
                      bVar5 = true;
                    }
LAB_0138b2d4:
                    if (bVar5) {
                      if ((uVar13 >> 4 & 1) != 0) {
LAB_0138b748:
                    /* WARNING: Subroutine does not return */
                        FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2580),unaff_x27);
                      }
                      lVar15 = *(long *)(uVar10 + 0x13);
                    }
                    else {
                      lVar15 = uVar10 + 0xb;
                    }
                    if ((uVar13 >> 3 & 1) == 0) {
                      uVar11 = *(ushort *)(lVar15 + lVar14 * 2);
                    }
                    else {
                      uVar11 = (ushort)*(byte *)(lVar15 + lVar14);
                    }
                    if (((uVar11 == 0x2d) || (uVar11 == 0x49)) ||
                       ((uVar11 == 0x4e || ((0x2f < uVar11 && (uVar11 < 0x3a))))))
                    goto LAB_0138b7cc;
                  }
                }
                param_2 = unaff_x26 + (ulong)*(uint *)(lVar18 + 0xf);
                if ((int)param_2 == (int)*(undefined8 *)(unaff_x26 + 0xb0)) goto LAB_0138b698;
                lVar18 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
                uVar11 = *(ushort *)(lVar18 + 7);
              } while( true );
            }
            if (0x3f < uVar2) {
              if (uVar2 != 0x43) goto LAB_0138b7cc;
              param_3 = unaff_x26 + (ulong)*(uint *)(param_3 + 0xb);
              goto LAB_0138af60;
            }
            uVar13 = *(uint *)(param_3 + 3);
            if ((uVar13 & 0xc0000002) != 0) {
              if ((uVar13 >> 1 & 1) == 0) goto LAB_0138b7cc;
              if ((uVar2 == 0x25) || (uVar2 == 0x2d)) {
                param_3 = unaff_x26 + (ulong)*(uint *)(param_3 + 0xb);
              }
              else if ((uVar2 >> 5 & 1) != 0) goto LAB_0138b7cc;
              goto LAB_0138af60;
            }
            uVar10 = (ulong)(uVar13 >> 3) & 0xffffff;
          }
        }
        while( true ) {
          if (uVar11 < 0x411) goto LAB_0138b7cc;
          bVar6 = *(byte *)(lVar18 + 10) >> 3;
          if (0xe < bVar6) break;
          if (bVar6 < 6) {
            if (bVar6 < 3) {
              if (((bVar6 == 0) || (bVar6 == 1)) || (bVar6 == 2)) goto LAB_0138b500;
              goto LAB_0138b7cc;
            }
            if (bVar6 == 3) goto LAB_0138b500;
            if ((bVar6 != 4) && (bVar6 != 5)) goto LAB_0138b7cc;
            lVar14 = unaff_x26 + (ulong)*(uint *)(param_2 + 7);
            if (uVar10 < (ulong)((long)((ulong)*(uint *)(lVar14 + 3) << 0x20) >> 0x21)) {
              if (*(long *)(lVar14 + uVar10 * 8 + 7) == -0x8000000080001) goto LAB_0138b650;
              goto LAB_0138b688;
            }
LAB_0138b518:
            if (0xfffffffe < uVar10) goto LAB_0138b7cc;
          }
          else if (bVar6 < 9) {
            if (((bVar6 != 6) && (bVar6 != 7)) && (bVar6 != 8)) goto LAB_0138b7cc;
LAB_0138b500:
            lVar14 = unaff_x26 + (ulong)*(uint *)(param_2 + 7);
            if ((ulong)((long)((ulong)*(uint *)(lVar14 + 3) << 0x20) >> 0x21) <= uVar10)
            goto LAB_0138b518;
            if (*(int *)(lVar14 + uVar10 * 4 + 7) != (int)*(undefined8 *)(unaff_x26 + 0xa8))
            goto LAB_0138b688;
          }
          else {
            if (bVar6 < 0xb) {
              if ((bVar6 == 9) || (bVar6 == 10)) goto LAB_0138b500;
              goto LAB_0138b7cc;
            }
            if (bVar6 == 0xb) goto LAB_0138b500;
            if (bVar6 != 0xc) goto LAB_0138b7cc;
LAB_0138b558:
            if (0xfffffffe < uVar10) goto LAB_0138b7cc;
            lVar15 = unaff_x26 + (ulong)*(uint *)(param_2 + 7);
            uVar13 = *(uint *)(lVar15 + 0xf);
            *(undefined8 *)(unaff_x26 + 0x40) = 0x138b594;
            *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
            uVar9 = (**(code **)(unaff_x26 + 0x1080))();
            *(undefined8 *)(unaff_x26 + 0x38) = 0;
            uVar9 = uVar9 & 0xffffffff;
            lVar14 = 0;
            while( true ) {
              uVar9 = uVar9 & ((long)(unaff_x26 + (ulong)uVar13 << 0x20) >> 0x21) - 1U;
              uVar3 = unaff_x26 + (ulong)*(uint *)(lVar15 + (uVar9 * 3 + 4) * 4 + 7);
              if ((int)uVar3 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) break;
              if ((uVar3 & 1) == 0) {
                if ((long)(uVar3 << 0x20) >> 0x21 == uVar10) goto LAB_0138b688;
              }
              else if (((int)uVar3 != (int)*(undefined8 *)(unaff_x26 + 0xa8)) &&
                      (*(double *)(uVar3 + 3) == (double)(long)uVar10)) goto LAB_0138b688;
              lVar14 = lVar14 + 1;
              uVar9 = uVar9 + lVar14;
            }
          }
LAB_0138b650:
          param_2 = unaff_x26 + (ulong)*(uint *)(lVar18 + 0xf);
          if ((int)param_2 == (int)*(undefined8 *)(unaff_x26 + 0xb0)) goto LAB_0138b698;
          lVar18 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
          uVar11 = *(ushort *)(lVar18 + 7);
        }
        if (bVar6 < 0x16) {
          if (bVar6 < 0x12) {
            if (bVar6 == 0xf) {
              if (*(uint *)(unaff_x26 + (ulong)*(uint *)(param_2 + 0xb) + 7) <= uVar10)
              goto LAB_0138b500;
              goto LAB_0138b688;
            }
            if (bVar6 == 0x10) {
              if (*(uint *)(unaff_x26 + (ulong)*(uint *)(param_2 + 0xb) + 7) <= uVar10)
              goto LAB_0138b558;
              goto LAB_0138b688;
            }
            if (bVar6 != 0x11) goto LAB_0138b7cc;
          }
          else if (bVar6 < 0x14) {
            if ((bVar6 != 0x12) && (bVar6 != 0x13)) goto LAB_0138b7cc;
          }
          else if ((bVar6 != 0x14) && (bVar6 != 0x15)) goto LAB_0138b7cc;
        }
        else if (bVar6 < 0x19) {
          if (((bVar6 != 0x16) && (bVar6 != 0x17)) && (bVar6 != 0x18)) goto LAB_0138b7cc;
        }
        else if (bVar6 < 0x1b) {
          if ((bVar6 != 0x19) && (bVar6 != 0x1a)) goto LAB_0138b7cc;
        }
        else if (bVar6 != 0x1b) {
          if (bVar6 == 0x1c) goto LAB_0138b650;
          goto LAB_0138b7cc;
        }
        if (((*(uint *)(unaff_x26 + (ulong)*(uint *)(param_2 + 0xb) + 0x1b) >> 2 & 1) != 0) ||
           (*(ulong *)(param_2 + 0x1f) <= uVar10)) goto LAB_0138b698;
LAB_0138b688:
        uVar8 = *(undefined8 *)(unaff_x26 + 0xb8);
      }
      return uVar8;
    }
  }
LAB_0138b7cc:
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2260));
}

