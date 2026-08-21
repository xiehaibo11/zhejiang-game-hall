
ulong FUN_0137e420(ulong param_1,ulong param_2,ulong param_3,long param_4)

{
  int iVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  code *UNRECOVERED_JUMPTABLE_00;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  ushort uVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  int iVar25;
  int iVar26;
  ulong uVar27;
  ulong uVar28;
  long unaff_x26;
  long unaff_x27;
  double dVar29;
  
  if ((param_2 & 1) == 0) {
    lVar14 = *(long *)(unaff_x26 + 0x140);
  }
  else {
    lVar14 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
  }
  if ((*(uint *)(lVar14 + 0xb) >> 0x18 & 1) != 0) goto LAB_0137ffc8;
  uVar13 = *(ulong *)(unaff_x26 + 0xa0);
  uVar12 = (uint)uVar13;
  uVar18 = (uint)param_3;
  if ((uint)param_4 != uVar12) {
    lVar15 = (long)(int)param_1 * 2;
    lVar16 = unaff_x26 + (ulong)*(uint *)(param_4 + lVar15 + 0x1f);
    uVar17 = (uint)lVar16;
    if (uVar17 == ((uint)lVar14 | 2)) {
      uVar17 = *(uint *)(param_4 + lVar15 + 0x23);
LAB_0137e49c:
      uVar9 = unaff_x26 + (ulong)uVar17;
      uVar10 = param_2;
      uVar19 = uVar9;
      if ((uVar9 & 1) != 0) {
        if (*(int *)(uVar9 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x120)) {
          if (((long)*(int *)(uVar9 + 0x17) & 0x80000000U) == 0) {
            UNRECOVERED_JUMPTABLE_00 = (code *)(uVar9 + 0x3f);
          }
          else {
            UNRECOVERED_JUMPTABLE_00 =
                 *(code **)((long)*(int *)(uVar9 + 0x27) * 8 + unaff_x26 + 0x2c78);
          }
                    /* WARNING: Could not recover jumptable at 0x0137f31c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar13 = (*UNRECOVERED_JUMPTABLE_00)();
          return uVar13;
        }
        lVar16 = unaff_x26 + (ulong)*(uint *)(uVar9 + 7);
        lVar14 = 0;
        if (((int)lVar16 != 0) && (*(int *)(lVar16 + 3) != 0)) goto LAB_0137ffc8;
        uVar19 = unaff_x26 + (ulong)*(uint *)(uVar9 + 3);
        if (((long)(uVar19 << 0x20) >> 0x21 & 0x30U) != 0) {
          if (((uint)((int)uVar19 >> 1) >> 4 & 1) == 0) {
            uVar22 = unaff_x26 + (ulong)*(uint *)(param_2 + 3);
            if ((uVar22 & 1) == 0) {
              uVar22 = *(ulong *)(unaff_x26 + 0x410);
            }
            uVar21 = (ulong)(*(uint *)(param_3 + 3) >> 3);
            while( true ) {
              uVar21 = uVar21 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar22 + 0xf) << 0x20) >> 0x21)
                                - 1U;
              lVar16 = uVar21 * 3;
              lVar15 = (lVar16 + 5) * 4;
              uVar17 = *(uint *)(uVar22 + lVar15 + 7);
              if (uVar17 == uVar12) break;
              if (uVar17 == uVar18) {
                if ((ulong)((long)((ulong)*(uint *)(uVar22 + 3) << 0x20) >> 0x21) <= lVar16 + 6U) {
                    /* WARNING: Does not return */
                  UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(0,0x137f018);
                  (*UNRECOVERED_JUMPTABLE_00)();
                }
                uVar10 = unaff_x26 + (ulong)*(uint *)(uVar22 + lVar15 + 0xb);
                if ((*(int *)(uVar22 + lVar15 + 0xf) >> 1 & 1U) == 0) {
                  return uVar10;
                }
                if (*(int *)(uVar10 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xcc8)) {
                  lVar14 = unaff_x26 + (ulong)*(uint *)(uVar10 + 3);
                  lVar16 = unaff_x26 + (ulong)*(uint *)(lVar14 + -1);
                  if ((*(byte *)(lVar16 + 9) >> 1 & 1) != 0) {
                    uVar13 = FUN_0133fcc0(0,lVar14);
                    return uVar13;
                  }
                  if ((int)lVar16 != (int)*(undefined8 *)(unaff_x26 + 0xca8)) {
                    return uVar13;
                  }
                  if (*(int *)(lVar14 + 0x33) == (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
                    uVar13 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
                    iVar8 = *(int *)(uVar13 - 1);
                    while (iVar8 == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                      uVar13 = unaff_x26 + (ulong)*(uint *)(uVar13 + 0x13);
                      iVar8 = *(int *)(uVar13 - 1);
                    }
                    if ((uVar13 & 1) != 0) {
                      lVar16 = unaff_x26 + (ulong)*(uint *)(uVar13 - 1);
                      sVar3 = *(short *)(lVar16 + 7);
                      if (sVar3 != 0x439) {
                        if (sVar3 == 0x417) {
                          uVar13 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
                        }
                        else {
                          uVar13 = param_2;
                          if ((int)lVar16 == (int)*(undefined8 *)(unaff_x26 + 0xca8))
                          goto LAB_0137ffc8;
                        }
                      }
                      uVar20 = *(ushort *)
                                (unaff_x26 +
                                 (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar13 + 0xf) + -1) +
                                7);
                      if (0x87 < uVar20 && uVar20 < 0x92) {
                        uVar13 = FUN_01341080(param_1,lVar14,0);
                        return uVar13;
                      }
                    }
                  }
                }
                else {
                  lVar14 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
                  sVar3 = *(short *)(lVar14 + 7);
                  if (sVar3 == 0x423) {
                    if (*(int *)(uVar10 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x7b8)) {
                      return unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
                    }
                  }
                  else if (sVar3 == 0x439) {
                    if ((*(int *)(uVar10 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x908)) &&
                       ((((bVar2 = *(byte *)(lVar14 + 9), (bVar2 & 0xc0) == 0xc0 ||
                          ((*(uint *)(unaff_x26 + (ulong)*(uint *)(param_2 + 0xb) + 0x1b) & 0x1f) -
                           0xd < 4)) && ((bVar2 & 1) == 0)) &&
                        (uVar13 = unaff_x26 + (ulong)*(uint *)(param_2 + 0x1b),
                        (int)uVar13 != (int)*(undefined8 *)(unaff_x26 + 0xa8))))) {
                      if (*(int *)(uVar13 - 1) != (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                        return uVar13;
                      }
                      return unaff_x26 + (ulong)*(uint *)(uVar13 + 0xf);
                    }
                  }
                  else if (((sVar3 == 0x411) &&
                           (*(int *)(uVar10 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x7b8))) &&
                          ((uVar13 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb), (uVar13 & 1) != 0
                           && (*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar13 - 1) + 7) < 0x40))))
                  {
                    return (ulong)(uint)(*(int *)(uVar13 + 7) * 2);
                  }
                }
                goto LAB_0137ffc8;
              }
              lVar14 = lVar14 + 1;
              uVar21 = uVar21 + lVar14;
            }
          }
          else {
            uVar22 = unaff_x26 + (ulong)*(uint *)(uVar9 + 0xf);
            if ((int)uVar22 == 3) goto LAB_0137ffc8;
            uVar22 = uVar22 & 0xfffffffffffffffd;
            lVar14 = unaff_x26 +
                     (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13);
            if (((int)uVar22 != (int)lVar14) &&
               ((*(short *)(unaff_x26 + (ulong)*(uint *)(param_2 - 1) + 7) != 0xab ||
                (*(int *)(uVar22 + 0x27b) != *(int *)(lVar14 + 0x27b))))) goto LAB_0137ffc8;
          }
        }
        uVar22 = unaff_x26 + (ulong)*(uint *)(uVar9 + 0xb);
        if ((uVar22 & 1) == 0) {
          return uVar22;
        }
        if ((int)uVar22 != (int)*(undefined8 *)(unaff_x26 + 0xb0)) {
          if ((int)uVar22 == 3) goto LAB_0137ffc8;
          uVar10 = uVar22 & 0xfffffffffffffffd;
        }
      }
      uVar22 = (long)(uVar19 << 0x20) >> 0x21;
      uVar21 = uVar22 & 0xf;
      uVar17 = (int)uVar19 >> 1;
      if (uVar21 != 0) {
        if (uVar21 == 1) {
          if ((param_3 & 1) == 0) {
            uVar19 = (long)(param_3 << 0x20) >> 0x21;
          }
          else if (((*(short *)(unaff_x26 + (ulong)*(uint *)(param_3 - 1) + 7) != 0x42) ||
                   (uVar19 = (ulong)*(double *)(param_3 + 3),
                   *(double *)(param_3 + 3) != (double)(long)uVar19)) ||
                  (0x3ffffffffffffe < uVar19 + 0x1fffffffffffff)) goto LAB_0137ffc8;
          if (*(uint *)(uVar10 + 7) <= uVar19) {
            if (((uVar17 >> 6 & 1) != 0) && (*(int *)(*(long *)(unaff_x26 + 0xea8) + 0xb) != 0)) {
              return uVar13;
            }
            goto LAB_0137ffc8;
          }
          uVar20 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar10 - 1) + 7);
          uVar18 = (uint)uVar20;
          if ((uVar20 & 7) == 0) {
            param_1 = 0;
            lVar14 = 0;
LAB_0137e6e8:
            if ((int)param_1 == 0) {
              lVar16 = uVar10 + 0xb;
            }
            else {
              if ((uVar18 >> 4 & 1) != 0) goto LAB_0137fb48;
              lVar16 = *(long *)(uVar10 + 0x13);
            }
            if ((uVar18 >> 3 & 1) == 0) {
              uVar13 = (ulong)*(ushort *)(lVar16 + (uVar19 + lVar14) * 2);
            }
            else {
              uVar13 = (ulong)*(byte *)(lVar16 + uVar19 + lVar14);
            }
            if (0xff < (uint)uVar13) {
              uVar19 = **(ulong **)(unaff_x26 + 0x1428);
              uVar10 = uVar19 + 0x10;
              if (uVar10 < **(ulong **)(unaff_x26 + 0x1430)) {
                uVar19 = uVar19 + 1;
                **(ulong **)(unaff_x26 + 0x1428) = uVar10;
              }
              else {
                uVar19 = FUN_01348560(param_1,0x10);
              }
              *(int *)(uVar19 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x2e0);
              *(undefined4 *)(uVar19 + 7) = 1;
              *(undefined4 *)(uVar19 + 3) = 7;
              *(short *)(uVar19 + 0xb) = (short)uVar13;
              return uVar19;
            }
            lVar14 = uVar13 * 4 + 7;
            uVar10 = unaff_x26 + (ulong)*(uint *)(*(long *)(unaff_x26 + 0xf18) + lVar14);
            if ((uint)uVar10 != uVar12) {
              return uVar10;
            }
            uVar9 = **(ulong **)(unaff_x26 + 0x1428);
            uVar19 = uVar9 + 0x10;
            if (uVar19 < **(ulong **)(unaff_x26 + 0x1430)) {
              uVar9 = uVar9 + 1;
              **(ulong **)(unaff_x26 + 0x1428) = uVar19;
            }
            else {
              uVar9 = FUN_01348560(uVar10,0x10);
            }
            *(int *)(uVar9 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x100);
            *(undefined4 *)(uVar9 + 7) = 1;
            *(undefined4 *)(uVar9 + 3) = 7;
            *(char *)(uVar9 + 0xb) = (char)uVar13;
            uVar10 = *(ulong *)(unaff_x26 + 0xf18);
            if (uVar13 < (ulong)((long)((ulong)*(uint *)(uVar10 + 3) << 0x20) >> 0x21)) {
              *(int *)(uVar10 + lVar14) = (int)uVar9;
              if (((uint)*(undefined8 *)((uVar10 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
                return uVar9;
              }
              if ((uVar9 & 1) == 0) {
                return uVar9;
              }
              uVar13 = unaff_x26 + (uVar9 & 0xffffffff);
              if (((uint)*(undefined8 *)((uVar13 & 0xfffffffffffc0000) + 8) >> 1 & 1) == 0) {
                return uVar13;
              }
              FUN_0133eb00(uVar10,uVar10 + lVar14,0,2);
              return uVar13;
            }
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(0,0x137fcb0);
            (*UNRECOVERED_JUMPTABLE_00)();
          }
          lVar14 = 0;
          while( true ) {
            while( true ) {
              while (uVar17 = uVar18 & 7, uVar17 < 2) {
                if (uVar17 == 0) {
                  param_1 = 0;
                  goto LAB_0137e6e8;
                }
                if ((uVar17 != 1) ||
                   (*(int *)(uVar10 + 0xf) != (int)*(undefined8 *)(unaff_x26 + 200)))
                goto LAB_0137fb48;
                uVar10 = unaff_x26 + (ulong)*(uint *)(uVar10 + 0xb);
                uVar18 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar10 - 1) + 7);
              }
              if (uVar17 == 2) {
                param_1 = 1;
                goto LAB_0137e6e8;
              }
              if (uVar17 != 3) break;
              uVar13 = unaff_x26 + (ulong)*(uint *)(uVar10 + 0xb);
              lVar14 = lVar14 + ((long)((ulong)*(uint *)(uVar10 + 0xf) << 0x20) >> 0x21);
              uVar18 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar13 - 1) + 7);
              uVar10 = uVar13;
            }
            if (uVar17 != 5) break;
            uVar10 = unaff_x26 + (ulong)*(uint *)(uVar10 + 0xb);
            uVar18 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar10 - 1) + 7);
          }
LAB_0137fb48:
          if (0x3fffffff < uVar19) {
            uVar10 = **(ulong **)(unaff_x26 + 0x1428);
            uVar13 = uVar10 + 0xc;
            if (uVar13 < **(ulong **)(unaff_x26 + 0x1430)) {
              lVar14 = uVar10 + 1;
              **(ulong **)(unaff_x26 + 0x1428) = uVar13;
            }
            else {
              lVar14 = FUN_01348560(0,param_1,0xc);
            }
            *(int *)(lVar14 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
            *(double *)(lVar14 + 3) = (double)uVar19;
          }
                    /* WARNING: Subroutine does not return */
          FUN_013be7e0(0,2,*(undefined8 *)(unaff_x26 + 0x2580));
        }
        if (uVar21 == 4) {
          bVar7 = (uVar22 & 0x80) == 0;
          lVar14 = (uVar22 >> 8 & 0x7ff) * 4 + -1;
          if ((uVar17 >> 6 & 1) == 0) {
            uVar13 = unaff_x26 + (ulong)*(uint *)(uVar10 + 3);
            if ((uVar13 & 1) == 0) {
              uVar13 = *(ulong *)(unaff_x26 + 0x168);
            }
            uVar13 = unaff_x26 + (ulong)*(uint *)(uVar13 + lVar14);
            if (bVar7) {
              return uVar13;
            }
            if (((uVar13 & 1) == 0) ||
               (*(int *)(uVar13 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x140))) goto LAB_0137ffc8;
            dVar29 = *(double *)(uVar13 + 3);
            goto LAB_0137eb90;
          }
          if (bVar7) {
            return unaff_x26 + (ulong)*(uint *)(uVar10 + lVar14);
          }
          uVar13 = unaff_x26 + (ulong)*(uint *)(uVar10 + lVar14);
          if (((uVar13 & 1) != 0) &&
             (*(int *)(uVar13 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x140))) {
            dVar29 = *(double *)(uVar13 + 3);
            goto LAB_0137eb90;
          }
        }
        else {
          if (uVar21 == 5) {
            return uVar10;
          }
          if (uVar21 == 0xd) {
            return uVar13;
          }
          if (uVar21 == 2) {
            uVar10 = unaff_x26 + (ulong)*(uint *)(uVar10 + 3);
            if ((uVar10 & 1) == 0) {
              uVar10 = *(ulong *)(unaff_x26 + 0x410);
            }
            uVar19 = (ulong)(*(uint *)(param_3 + 3) >> 3);
            lVar14 = 0;
            while( true ) {
              uVar19 = uVar19 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar10 + 0xf) << 0x20) >> 0x21)
                                - 1U;
              lVar16 = uVar19 * 3;
              lVar15 = (lVar16 + 5) * 4;
              uVar17 = *(uint *)(uVar10 + lVar15 + 7);
              if (uVar17 == uVar12) break;
              if (uVar17 == uVar18) {
                if ((ulong)((long)((ulong)*(uint *)(uVar10 + 3) << 0x20) >> 0x21) <= lVar16 + 6U) {
                    /* WARNING: Does not return */
                  UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(0,0x137f8ec);
                  (*UNRECOVERED_JUMPTABLE_00)();
                }
                uVar19 = unaff_x26 + (ulong)*(uint *)(uVar10 + lVar15 + 0xb);
                if ((*(int *)(uVar10 + lVar15 + 0xf) >> 1 & 1U) == 0) {
                  return uVar19;
                }
                if (*(int *)(uVar19 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xcc8)) {
                  lVar14 = unaff_x26 + (ulong)*(uint *)(uVar19 + 3);
                  lVar16 = unaff_x26 + (ulong)*(uint *)(lVar14 + -1);
                  if ((*(byte *)(lVar16 + 9) >> 1 & 1) != 0) {
                    uVar13 = FUN_0133fcc0(0,lVar14);
                    return uVar13;
                  }
                  if ((int)lVar16 != (int)*(undefined8 *)(unaff_x26 + 0xca8)) {
                    return uVar13;
                  }
                  if (*(int *)(lVar14 + 0x33) == (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
                    uVar13 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
                    iVar8 = *(int *)(uVar13 - 1);
                    while (iVar8 == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                      uVar13 = unaff_x26 + (ulong)*(uint *)(uVar13 + 0x13);
                      iVar8 = *(int *)(uVar13 - 1);
                    }
                    if ((uVar13 & 1) != 0) {
                      lVar16 = unaff_x26 + (ulong)*(uint *)(uVar13 - 1);
                      sVar3 = *(short *)(lVar16 + 7);
                      if (sVar3 != 0x439) {
                        if (sVar3 == 0x417) {
                          uVar13 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
                        }
                        else {
                          uVar13 = param_2;
                          if ((int)lVar16 == (int)*(undefined8 *)(unaff_x26 + 0xca8)) break;
                        }
                      }
                      uVar20 = *(ushort *)
                                (unaff_x26 +
                                 (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar13 + 0xf) + -1) +
                                7);
                      if (0x87 < uVar20 && uVar20 < 0x92) {
                        uVar13 = FUN_01341080(param_1,lVar14,0);
                        return uVar13;
                      }
                    }
                  }
                }
                else {
                  lVar14 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
                  sVar3 = *(short *)(lVar14 + 7);
                  if (sVar3 == 0x423) {
                    if (*(int *)(uVar19 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x7b8)) {
                      return unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
                    }
                  }
                  else if (sVar3 == 0x439) {
                    if (((*(int *)(uVar19 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x908)) &&
                        (((bVar2 = *(byte *)(lVar14 + 9), (bVar2 & 0xc0) == 0xc0 ||
                          ((*(uint *)(unaff_x26 + (ulong)*(uint *)(param_2 + 0xb) + 0x1b) & 0x1f) -
                           0xd < 4)) && ((bVar2 & 1) == 0)))) &&
                       (uVar13 = unaff_x26 + (ulong)*(uint *)(param_2 + 0x1b),
                       (int)uVar13 != (int)*(undefined8 *)(unaff_x26 + 0xa8))) {
                      if (*(int *)(uVar13 - 1) != (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                        return uVar13;
                      }
                      return unaff_x26 + (ulong)*(uint *)(uVar13 + 0xf);
                    }
                  }
                  else if (((sVar3 == 0x411) &&
                           (*(int *)(uVar19 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x7b8))) &&
                          ((uVar13 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb), (uVar13 & 1) != 0
                           && (*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar13 - 1) + 7) < 0x40))))
                  {
                    return (ulong)(uint)(*(int *)(uVar13 + 7) * 2);
                  }
                }
                break;
              }
              lVar14 = lVar14 + 1;
              uVar19 = uVar19 + lVar14;
            }
          }
          else {
            if (uVar21 == 6) {
              uVar13 = FUN_0133fcc0(0,unaff_x26 +
                                      (ulong)*(uint *)(unaff_x26 +
                                                       (ulong)*(uint *)(unaff_x26 +
                                                                        (ulong)*(uint *)(unaff_x26 +
                                                                                         (ulong)*(
                                                  uint *)(uVar10 - 1) + 0x17) +
                                                  (uVar22 >> 6 & 0x3ff) * 0xc + 0x17) + 3));
              return uVar13;
            }
            if (uVar21 == 7) {
              uVar13 = FUN_01348300(uVar10,param_2,param_3,
                                    unaff_x26 +
                                    (ulong)*(uint *)(unaff_x26 +
                                                     (ulong)*(uint *)(unaff_x26 +
                                                                      (ulong)*(uint *)(uVar10 - 1) +
                                                                     0x17) +
                                                    (uVar22 >> 6 & 0x3ff) * 0xc + 0x17));
              return uVar13;
            }
            if ((uVar21 == 8) || (uVar21 == 9)) {
              if ((uVar17 >> 4 & 1) == 0) {
                uVar18 = *(uint *)(uVar9 + 0xf);
              }
              else {
                uVar18 = *(uint *)(uVar9 + 0x13);
              }
              if ((int)(unaff_x26 + (ulong)uVar18) != 3) {
                if (uVar21 != 8) {
                  param_2 = unaff_x26 +
                            (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(param_2 - 1) + 0xf);
                }
                uVar13 = FUN_01348140(param_2,*(undefined8 *)
                                               (unaff_x26 + (ulong)*(uint *)(uVar10 + 7) + 3),0,
                                      unaff_x26 + (ulong)*(uint *)(uVar10 + 0xb),
                                      unaff_x26 + (ulong)uVar18 & 0xfffffffffffffffd);
                return uVar13;
              }
                    /* WARNING: Does not return */
              UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(0,0x137f788);
              (*UNRECOVERED_JUMPTABLE_00)();
            }
            if (uVar21 != 3) {
              if (uVar21 == 0xb) {
                    /* WARNING: Subroutine does not return */
                FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2248));
              }
              if (uVar21 != 0xc) {
                if (uVar21 != 0xe) {
                    /* WARNING: Subroutine does not return */
                  FUN_013be7e0(5,*(undefined8 *)(unaff_x26 + 0x1f20));
                }
                uVar13 = uVar22 >> 6 & 0x1ffffff;
                lVar14 = unaff_x26 +
                         (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(param_2 + 0xb) + 3);
                if (uVar13 < (ulong)((long)((ulong)*(uint *)(lVar14 + 3) << 0x20) >> 0x21)) {
                  uVar13 = unaff_x26 +
                           (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(lVar14 + uVar13 * 4 + 7) +
                                           3);
                  if ((int)uVar13 != (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
                    return uVar13;
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x20b8));
                }
                    /* WARNING: Does not return */
                UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(0,0x137f3c4);
                (*UNRECOVERED_JUMPTABLE_00)();
              }
              if (((param_3 & 1) == 0) ||
                 (((uVar20 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(param_3 - 1) + 7),
                   uVar20 == 0x42 &&
                   (lVar14 = (long)*(double *)(param_3 + 3),
                   *(double *)(param_3 + 3) == (double)lVar14)) &&
                  (lVar14 + 0x1fffffffffffffU < 0x3fffffffffffff)))) goto LAB_0137f4d0;
              if (uVar20 != 0x40) {
                if (uVar20 < 0x40) {
                  if (((*(uint *)(param_3 + 3) & 0xc0000002) == 0) ||
                     ((*(uint *)(param_3 + 3) >> 1 & 1) == 0)) goto LAB_0137f4d0;
                  if ((uVar20 == 0x25) || (uVar20 == 0x2d)) {
                    param_3 = unaff_x26 + (ulong)*(uint *)(param_3 + 0xb);
                  }
                  else if ((uVar20 >> 5 & 1) != 0) goto LAB_0137f4d0;
                }
                else {
                  if (uVar20 != 0x43) {
LAB_0137f4d0:
                    /* WARNING: Subroutine does not return */
                    FUN_013be7e0(4,*(undefined8 *)(unaff_x26 + 0x2448));
                  }
                  param_3 = unaff_x26 + (ulong)*(uint *)(param_3 + 0xb);
                }
              }
              uVar13 = FUN_013fc180(uVar10,param_3,param_2,2);
              return uVar13;
            }
            uVar19 = unaff_x26 + (ulong)*(uint *)(uVar10 + 0xb);
            if ((int)uVar19 != (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
              if ((*(int *)(uVar10 + 7) >> 1 & 1U) == 0) {
                return uVar19;
              }
              if (*(int *)(uVar19 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xcc8)) {
                lVar14 = unaff_x26 + (ulong)*(uint *)(uVar19 + 3);
                lVar16 = unaff_x26 + (ulong)*(uint *)(lVar14 + -1);
                if ((*(byte *)(lVar16 + 9) >> 1 & 1) != 0) {
                  uVar13 = FUN_0133fcc0(0,lVar14);
                  return uVar13;
                }
                if ((int)lVar16 != (int)*(undefined8 *)(unaff_x26 + 0xca8)) {
                  return uVar13;
                }
                if (*(int *)(lVar14 + 0x33) == (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
                  uVar13 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
                  iVar8 = *(int *)(uVar13 - 1);
                  while (iVar8 == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                    uVar13 = unaff_x26 + (ulong)*(uint *)(uVar13 + 0x13);
                    iVar8 = *(int *)(uVar13 - 1);
                  }
                  if ((uVar13 & 1) != 0) {
                    lVar16 = unaff_x26 + (ulong)*(uint *)(uVar13 - 1);
                    sVar3 = *(short *)(lVar16 + 7);
                    if (sVar3 != 0x439) {
                      if (sVar3 == 0x417) {
                        uVar13 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
                      }
                      else {
                        uVar13 = param_2;
                        if ((int)lVar16 == (int)*(undefined8 *)(unaff_x26 + 0xca8))
                        goto LAB_0137ffc8;
                      }
                    }
                    uVar20 = *(ushort *)
                              (unaff_x26 +
                               (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar13 + 0xf) + -1) + 7
                              );
                    if (0x87 < uVar20 && uVar20 < 0x92) {
                      uVar13 = FUN_01341080(param_1,lVar14,0);
                      return uVar13;
                    }
                  }
                }
              }
              else {
                lVar14 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
                sVar3 = *(short *)(lVar14 + 7);
                if (sVar3 == 0x423) {
                  if (*(int *)(uVar19 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x7b8)) {
                    return unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
                  }
                }
                else if (sVar3 == 0x439) {
                  if (((*(int *)(uVar19 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x908)) &&
                      (((bVar2 = *(byte *)(lVar14 + 9), (bVar2 & 0xc0) == 0xc0 ||
                        ((*(uint *)(unaff_x26 + (ulong)*(uint *)(param_2 + 0xb) + 0x1b) & 0x1f) -
                         0xd < 4)) && ((bVar2 & 1) == 0)))) &&
                     (uVar13 = unaff_x26 + (ulong)*(uint *)(param_2 + 0x1b),
                     (int)uVar13 != (int)*(undefined8 *)(unaff_x26 + 0xa8))) {
                    if (*(int *)(uVar13 - 1) != (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                      return uVar13;
                    }
                    return unaff_x26 + (ulong)*(uint *)(uVar13 + 0xf);
                  }
                }
                else if (((sVar3 == 0x411) &&
                         (*(int *)(uVar19 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x7b8))) &&
                        ((uVar13 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb), (uVar13 & 1) != 0 &&
                         (*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar13 - 1) + 7) < 0x40)))) {
                  return (ulong)(uint)(*(int *)(uVar13 + 7) * 2);
                }
              }
            }
          }
        }
        goto LAB_0137ffc8;
      }
      if ((param_3 & 1) == 0) {
        uVar13 = (long)(param_3 << 0x20) >> 0x21;
      }
      else {
        uVar20 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(param_3 - 1) + 7);
        if (((uVar20 != 0x42) ||
            (uVar13 = (ulong)*(double *)(param_3 + 3),
            *(double *)(param_3 + 3) != (double)(long)uVar13)) ||
           (0x3ffffffffffffe < uVar13 + 0x1fffffffffffff)) {
          if (0x3f < uVar20) goto LAB_0137ffc8;
          *(undefined8 *)(unaff_x26 + 0x40) = 0x137e788;
          *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
          param_1 = (**(code **)(unaff_x26 + 0x1250))(param_3);
          *(undefined8 *)(unaff_x26 + 0x38) = 0;
          if ((int)param_1 == -1) goto LAB_0137ffc8;
          uVar13 = (ulong)(int)param_1;
        }
      }
      uVar18 = (uint)(uVar22 >> 9) & 0xff;
      if (uVar18 < 0xc) {
        lVar14 = unaff_x26 + (ulong)*(uint *)(uVar10 + 7);
        if ((uVar17 >> 7 & 1) == 0) {
          uVar12 = *(uint *)(lVar14 + 3);
        }
        else {
          uVar12 = *(uint *)(uVar10 + 0xb);
        }
        if (uVar13 < (ulong)((long)(unaff_x26 + (ulong)uVar12 << 0x20) >> 0x21)) {
          if (uVar18 < 6) {
            if (uVar18 < 3) {
              if ((uVar22 >> 9 & 0xff) == 0) goto LAB_0137e898;
              if (uVar18 != 1) {
                if (uVar18 != 2) goto LAB_0137fd08;
                goto LAB_0137e898;
              }
            }
            else if (uVar18 != 3) {
              if (uVar18 == 4) {
                dVar29 = *(double *)(lVar14 + uVar13 * 8 + 7);
                goto LAB_0137eb90;
              }
              if (uVar18 != 5) goto LAB_0137fd08;
              lVar16 = uVar13 * 8 + 7;
              if (*(long *)(lVar14 + lVar16) != -0x8000000080001) {
                dVar29 = *(double *)(lVar14 + lVar16);
                goto LAB_0137eb90;
              }
              goto LAB_0137ea3c;
            }
          }
          else if (uVar18 < 9) {
            if (uVar18 == 6) {
LAB_0137e898:
              return unaff_x26 + (ulong)*(uint *)(lVar14 + uVar13 * 4 + 7);
            }
            if (uVar18 != 7) {
              if (uVar18 != 8) goto LAB_0137fd08;
              goto LAB_0137e898;
            }
          }
          else if (uVar18 != 9) {
            if (uVar18 == 10) goto LAB_0137e898;
            if (uVar18 != 0xb) {
LAB_0137fd08:
                    /* WARNING: Does not return */
              UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(0,0x137fd0c);
              (*UNRECOVERED_JUMPTABLE_00)();
            }
          }
          uVar13 = unaff_x26 + (ulong)*(uint *)(lVar14 + uVar13 * 4 + 7);
          if ((int)uVar13 != (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
            return uVar13;
          }
LAB_0137ea3c:
          if (((uVar17 >> 8 & 1) != 0) && (*(int *)(*(long *)(unaff_x26 + 0xea8) + 0xb) != 0)) {
            return *(ulong *)(unaff_x26 + 0xa0);
          }
          goto LAB_0137ffc8;
        }
      }
      else if (uVar18 < 0x11) {
        if (uVar18 != 0xc) goto LAB_0137fd08;
        if (uVar13 < 0xffffffff) {
          lVar16 = unaff_x26 + (ulong)*(uint *)(uVar10 + 7);
          uVar18 = *(uint *)(lVar16 + 0xf);
          *(undefined8 *)(unaff_x26 + 0x40) = 0x137e95c;
          *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
          uVar10 = (**(code **)(unaff_x26 + 0x1080))();
          *(undefined8 *)(unaff_x26 + 0x38) = 0;
          uVar10 = uVar10 & 0xffffffff;
          lVar14 = 0;
          while( true ) {
            uVar10 = uVar10 & ((long)(unaff_x26 + (ulong)uVar18 << 0x20) >> 0x21) - 1U;
            lVar15 = uVar10 * 3;
            lVar24 = (lVar15 + 4) * 4;
            uVar19 = unaff_x26 + (ulong)*(uint *)(lVar16 + lVar24 + 7);
            if ((int)uVar19 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) break;
            if ((uVar19 & 1) == 0) {
              if ((long)(uVar19 << 0x20) >> 0x21 == uVar13) goto LAB_0137ea04;
            }
            else if (((int)uVar19 != (int)*(undefined8 *)(unaff_x26 + 0xa8)) &&
                    (*(double *)(uVar19 + 3) == (double)(long)uVar13)) {
LAB_0137ea04:
              if ((*(int *)(lVar16 + lVar24 + 0xf) >> 1 & 1U) == 0) {
                if (lVar15 + 5U < (ulong)((long)((ulong)*(uint *)(lVar16 + 3) << 0x20) >> 0x21)) {
                  return unaff_x26 + (ulong)*(uint *)(lVar16 + lVar24 + 0xb);
                }
                    /* WARNING: Does not return */
                UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(0,0x137fd40);
                (*UNRECOVERED_JUMPTABLE_00)();
              }
              goto LAB_0137ffc8;
            }
            lVar14 = lVar14 + 1;
            uVar10 = uVar10 + lVar14;
          }
          goto LAB_0137ea3c;
        }
      }
      else {
        if ((*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar10 + 0xb) + 0x1b) >> 2 & 1) != 0)
        goto LAB_0137ffc8;
        if (uVar13 < *(ulong *)(uVar10 + 0x1f)) {
          lVar14 = *(long *)(uVar10 + 0x27);
          uVar10 = (ulong)*(uint *)(uVar10 + 0x2f);
          if (uVar18 < 0x16) {
            if (uVar18 < 0x13) {
              if (uVar18 == 0x11) goto LAB_0137eb04;
              if (uVar18 == 0x12) {
                return (ulong)(uint)(*(char *)(lVar14 + uVar10 + uVar13) * 2);
              }
            }
            else {
              if (uVar18 == 0x13) {
                return (ulong)((uint)*(ushort *)(lVar14 + uVar10 + uVar13 * 2) * 2);
              }
              if (uVar18 == 0x14) {
                return (ulong)(uint)(*(short *)(lVar14 + uVar10 + uVar13 * 2) * 2);
              }
              if (uVar18 == 0x15) {
                uVar18 = *(uint *)(lVar14 + uVar10 + uVar13 * 4);
                if (uVar18 < 0x40000000) {
                  return (ulong)(uVar18 * 2);
                }
                uVar10 = **(ulong **)(unaff_x26 + 0x1428);
                uVar13 = uVar10 + 0xc;
                if (uVar13 < **(ulong **)(unaff_x26 + 0x1430)) {
                  uVar10 = uVar10 + 1;
                  **(ulong **)(unaff_x26 + 0x1428) = uVar13;
                }
                else {
                  uVar10 = FUN_01348560(param_1,0xc);
                }
                *(int *)(uVar10 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
                *(double *)(uVar10 + 3) = (double)uVar18;
                return uVar10;
              }
            }
          }
          else {
            if (uVar18 < 0x19) {
              if (uVar18 == 0x16) {
                iVar8 = *(int *)(lVar14 + uVar10 + uVar13 * 4);
                if (!SCARRY4(iVar8,iVar8)) {
                  return (long)(iVar8 * 2);
                }
                uVar10 = **(ulong **)(unaff_x26 + 0x1428);
                uVar13 = uVar10 + 0xc;
                if (uVar13 < **(ulong **)(unaff_x26 + 0x1430)) {
                  uVar10 = uVar10 + 1;
                  **(ulong **)(unaff_x26 + 0x1428) = uVar13;
                }
                else {
                  uVar10 = FUN_01348560(param_1,0xc);
                }
                *(int *)(uVar10 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
                *(double *)(uVar10 + 3) = (double)iVar8;
                return uVar10;
              }
              if (uVar18 == 0x17) {
                dVar29 = (double)*(float *)(lVar14 + uVar10 + uVar13 * 4);
              }
              else {
                if (uVar18 != 0x18) goto LAB_0137ffc8;
                dVar29 = *(double *)(lVar14 + uVar10 + uVar13 * 8);
              }
LAB_0137eb90:
              uVar10 = **(ulong **)(unaff_x26 + 0x1428);
              uVar13 = uVar10 + 0xc;
              if (uVar13 < **(ulong **)(unaff_x26 + 0x1430)) {
                uVar10 = uVar10 + 1;
                **(ulong **)(unaff_x26 + 0x1428) = uVar13;
              }
              else {
                uVar10 = FUN_01348560(param_1,0xc);
              }
              *(int *)(uVar10 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
              *(double *)(uVar10 + 3) = dVar29;
              return uVar10;
            }
            if (uVar18 == 0x19) {
LAB_0137eb04:
              return (ulong)((uint)*(byte *)(lVar14 + uVar10 + uVar13) * 2);
            }
            if (uVar18 == 0x1a) {
              lVar14 = *(long *)(lVar14 + uVar10 + uVar13 * 8);
              if (lVar14 != 0) {
                uVar13 = **(long **)(unaff_x26 + 0x1428) + 0x10;
                if (uVar13 < **(ulong **)(unaff_x26 + 0x1430)) {
                  uVar10 = **(long **)(unaff_x26 + 0x1428) + 1;
                  **(ulong **)(unaff_x26 + 0x1428) = uVar13;
                }
                else {
                  uVar10 = FUN_01348500(param_1,0x10);
                }
                *(int *)(uVar10 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x1c0);
                *(undefined4 *)(uVar10 + 3) = 2;
                *(long *)(uVar10 + 7) = lVar14;
                return uVar10;
              }
              uVar13 = **(long **)(unaff_x26 + 0x1428) + 8;
              if (uVar13 < **(ulong **)(unaff_x26 + 0x1430)) {
                uVar10 = **(long **)(unaff_x26 + 0x1428) + 1;
                **(ulong **)(unaff_x26 + 0x1428) = uVar13;
              }
              else {
                uVar10 = FUN_01348500(param_1,8);
              }
              *(int *)(uVar10 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x1c0);
              *(undefined4 *)(uVar10 + 3) = 0;
              return uVar10;
            }
            if (uVar18 == 0x1b) {
              lVar14 = *(long *)(lVar14 + uVar10 + uVar13 * 8);
              if (lVar14 == 0) {
                uVar13 = **(long **)(unaff_x26 + 0x1428) + 8;
                if (uVar13 < **(ulong **)(unaff_x26 + 0x1430)) {
                  uVar10 = **(long **)(unaff_x26 + 0x1428) + 1;
                  **(ulong **)(unaff_x26 + 0x1428) = uVar13;
                }
                else {
                  uVar10 = FUN_01348500(param_1,8);
                }
                *(int *)(uVar10 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x1c0);
                *(undefined4 *)(uVar10 + 3) = 0;
                return uVar10;
              }
              uVar13 = **(long **)(unaff_x26 + 0x1428) + 0x10;
              if (uVar13 < **(ulong **)(unaff_x26 + 0x1430)) {
                uVar10 = **(long **)(unaff_x26 + 0x1428) + 1;
                **(ulong **)(unaff_x26 + 0x1428) = uVar13;
              }
              else {
                uVar10 = FUN_01348500(param_1,0x10);
              }
              *(int *)(uVar10 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x1c0);
              if (lVar14 < 1) {
                *(undefined4 *)(uVar10 + 3) = 3;
                *(long *)(uVar10 + 7) = -lVar14;
                return uVar10;
              }
              *(undefined4 *)(uVar10 + 3) = 2;
              *(long *)(uVar10 + 7) = lVar14;
              return uVar10;
            }
          }
          goto LAB_0137ffc8;
        }
      }
      if ((uVar17 >> 6 & 1) != 0) {
        lVar14 = unaff_x26 + (ulong)*(uint *)(uVar10 - 1);
        if (*(short *)(lVar14 + 7) == 0x41b) {
LAB_0137fe78:
          return *(ulong *)(unaff_x26 + 0xa0);
        }
        if (uVar13 < 0xfffffffe) {
          do {
            lVar16 = unaff_x26 + (ulong)*(uint *)(lVar14 + 0xf);
            if ((int)lVar16 == (int)*(undefined8 *)(unaff_x26 + 0xb0)) goto LAB_0137fe78;
            lVar14 = unaff_x26 + (ulong)*(uint *)(lVar16 + -1);
          } while (((0x411 < *(ushort *)(lVar14 + 7)) ||
                   ((*(ushort *)(lVar14 + 7) == 0x411 &&
                    (*(int *)(lVar16 + 0xb) == (int)*(undefined8 *)(unaff_x26 + 200))))) &&
                  ((*(int *)(lVar16 + 7) == (int)*(undefined8 *)(unaff_x26 + 0x168) ||
                   (*(int *)(lVar16 + 7) == (int)*(undefined8 *)(unaff_x26 + 1000)))));
        }
      }
LAB_0137ffc8:
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(4,*(undefined8 *)(unaff_x26 + 0x1ed8));
    }
    if ((uVar17 & 3) != 1) goto LAB_0137ffc8;
    if (*(int *)(lVar16 + -1) == (int)*(undefined8 *)(unaff_x26 + 0x2b8)) {
      lVar15 = ((long)((ulong)*(uint *)(lVar16 + 3) << 0x20) >> 0x21) + -2;
      do {
        if ((int)unaff_x26 + *(int *)(lVar16 + lVar15 * 4 + 7) == ((uint)lVar14 | 2)) {
          uVar17 = *(uint *)(lVar16 + lVar15 * 4 + 0xb);
          goto LAB_0137e49c;
        }
        lVar15 = lVar15 + -2;
      } while (-1 < lVar15);
      goto LAB_0137ffc8;
    }
    if (uVar17 != (uint)*(undefined8 *)(unaff_x26 + 0xb88)) {
      if (uVar17 != (uint)*(undefined8 *)(unaff_x26 + 0xc08)) {
        if (uVar17 == uVar18) {
LAB_0137eef4:
          uVar13 = FUN_0134ad20(param_1,param_2,param_3);
          return uVar13;
        }
        if (((param_3 & 1) != 0) &&
           (((uVar20 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(param_3 - 1) + 7), uVar20 != 0x42 ||
             (lVar14 = (long)*(double *)(param_3 + 3), *(double *)(param_3 + 3) != (double)lVar14))
            || (0x3ffffffffffffe < lVar14 + 0x1fffffffffffffU)))) {
          if (uVar20 != 0x40) {
            if (uVar20 < 0x40) {
              if (((*(uint *)(param_3 + 3) & 0xc0000002) == 0) ||
                 ((*(uint *)(param_3 + 3) >> 1 & 1) == 0)) goto LAB_0137ffc8;
              if ((uVar20 == 0x25) || (uVar20 == 0x2d)) {
                param_3 = unaff_x26 + (ulong)*(uint *)(param_3 + 0xb);
              }
              else if ((uVar20 >> 5 & 1) != 0) {
                *(undefined8 *)(unaff_x26 + 0x40) = 0x137ee20;
                *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
                param_3 = (**(code **)(unaff_x26 + 0x1258))();
                *(undefined8 *)(unaff_x26 + 0x38) = 0;
                if ((param_3 & 1) == 0) goto LAB_0137ffc8;
              }
            }
            else {
              if (uVar20 != 0x43) goto LAB_0137ffc8;
              param_3 = unaff_x26 + (ulong)*(uint *)(param_3 + 0xb);
            }
          }
          if (uVar17 == (uint)param_3) goto LAB_0137eef4;
        }
      }
      goto LAB_0137ffc8;
    }
  }
  if ((param_2 & 1) == 0) goto LAB_01383118;
  uVar11 = *(undefined8 *)(unaff_x26 + 0xb0);
  iVar8 = (int)uVar11;
  uVar13 = *(ulong *)(unaff_x26 + 0xa0);
  if ((int)param_2 == (int)uVar13 || (int)param_2 == iVar8) goto LAB_01383118;
  if ((param_3 & 1) == 0) {
    uVar10 = (long)(param_3 << 0x20) >> 0x21;
  }
  else {
    uVar20 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(param_3 - 1) + 7);
    if (((uVar20 != 0x42) ||
        (uVar10 = (ulong)*(double *)(param_3 + 3), *(double *)(param_3 + 3) != (double)(long)uVar10)
        ) || (0x3ffffffffffffe < uVar10 + 0x1fffffffffffff)) {
      uVar10 = param_3;
      if (uVar20 != 0x40) {
        if (uVar20 < 0x40) {
          uVar18 = *(uint *)(param_3 + 3);
          if ((uVar18 & 0xc0000002) == 0) {
            uVar10 = (ulong)(uVar18 >> 3) & 0xffffff;
            goto LAB_013816c8;
          }
          if ((uVar18 >> 1 & 1) == 0) goto LAB_01381ce8;
          if ((uVar20 == 0x25) || (uVar20 == 0x2d)) {
            uVar10 = unaff_x26 + (ulong)*(uint *)(param_3 + 0xb);
          }
          else if ((uVar20 >> 5 & 1) != 0) {
LAB_01380250:
            *(undefined8 *)(unaff_x26 + 0x40) = 0x1380268;
            *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
            param_1 = (**(code **)(unaff_x26 + 0x1258))();
            *(undefined8 *)(unaff_x26 + 0x38) = 0;
            iVar8 = (int)param_1;
            if ((param_1 & 1) == 0) {
              uVar10 = (long)(param_1 << 0x20) >> 0x21;
              if ((uVar10 == 0xffffffffffffffff) || (uVar10 == 0xfffffffffffffffe))
              goto LAB_01383118;
              uVar11 = *(undefined8 *)(unaff_x26 + 0xb0);
              uVar13 = *(ulong *)(unaff_x26 + 0xa0);
              goto LAB_013816c8;
            }
            lVar14 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
            uVar20 = *(ushort *)(lVar14 + 7);
            if (uVar20 < 0x411) {
              if ((uVar20 == 0xa9) &&
                 ((*(int *)(param_1 - 1) != (int)*(undefined8 *)(unaff_x26 + 0xf8) ||
                  ((*(uint *)(param_1 + 7) & 1) == 0)))) {
                uVar13 = FUN_013fc180(param_2,param_1,param_2,2);
                return uVar13;
              }
              goto LAB_01383118;
            }
            if ((*(uint *)(lVar14 + 0xb) >> 0x15 & 1) == 0) {
              lVar16 = unaff_x26 + (ulong)*(uint *)(lVar14 + 0x17);
              uVar18 = *(uint *)(lVar14 + 0xb) >> 10 & 0x3ff;
              if (uVar18 != 0) {
                if (uVar18 < 0x21) {
                  lVar15 = (long)(int)uVar18 * 3;
                  do {
                    if (lVar15 == 0) goto LAB_013806bc;
                    lVar15 = lVar15 + -3;
                  } while (*(int *)(lVar16 + lVar15 * 4 + 0xf) != iVar8);
LAB_01380414:
                  uVar18 = *(int *)(lVar16 + lVar15 * 4 + 0x13) >> 1;
                  uVar13 = (ulong)uVar18;
                  if ((uVar18 >> 1 & 1) == 0) {
                    bVar7 = (uVar18 >> 6 & 7) == 2;
                    uVar10 = (ulong)*(byte *)(lVar14 + 4) + ((uVar13 & 0x1ff80000) >> 0x13);
                    if (uVar10 < *(byte *)(lVar14 + 3)) {
                      lVar14 = uVar10 * 4 + -1;
                      if (bVar7) {
                        uVar11 = *(undefined8 *)(unaff_x26 + (ulong)*(uint *)(param_2 + lVar14) + 3)
                        ;
                        goto LAB_013804a8;
                      }
                      uVar10 = unaff_x26 + (ulong)*(uint *)(param_2 + lVar14);
                    }
                    else {
                      uVar19 = unaff_x26 + (ulong)*(uint *)(param_2 + 3);
                      if ((uVar19 & 1) == 0) {
                        uVar19 = *(ulong *)(unaff_x26 + 0x168);
                      }
                      uVar10 = unaff_x26 +
                               (ulong)*(uint *)(uVar19 + (uVar10 - *(byte *)(lVar14 + 3)) * 4 + 7);
                      if (bVar7) {
                        uVar11 = *(undefined8 *)(uVar10 + 3);
LAB_013804a8:
                        uVar19 = **(ulong **)(unaff_x26 + 0x1428);
                        uVar10 = uVar19 + 0xc;
                        if (uVar10 < **(ulong **)(unaff_x26 + 0x1430)) {
                          **(ulong **)(unaff_x26 + 0x1428) = uVar10;
                          uVar10 = uVar19 + 1;
                        }
                        else {
                          param_1 = FUN_01348560(param_1,0xc);
                          uVar10 = param_1;
                        }
                        *(int *)(uVar10 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
                        *(undefined8 *)(uVar10 + 3) = uVar11;
                      }
                    }
                  }
                  else {
                    uVar10 = unaff_x26 + (ulong)*(uint *)(lVar16 + lVar15 * 4 + 0x17);
                  }
                  uVar19 = *(ulong *)(unaff_x26 + 0xa0);
LAB_01380588:
                  if ((uVar13 & 1) == 0) {
                    return uVar10;
                  }
                  if (*(int *)(uVar10 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xcc8)) {
                    lVar14 = unaff_x26 + (ulong)*(uint *)(uVar10 + 3);
                    lVar16 = unaff_x26 + (ulong)*(uint *)(lVar14 + -1);
                    if ((*(byte *)(lVar16 + 9) >> 1 & 1) != 0) {
                      uVar13 = FUN_0133fcc0();
                      return uVar13;
                    }
                    if ((int)lVar16 != (int)*(undefined8 *)(unaff_x26 + 0xca8)) {
                      return uVar19;
                    }
                    if (*(int *)(lVar14 + 0x33) == (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
                      uVar13 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
                      iVar8 = *(int *)(uVar13 - 1);
                      while (iVar8 == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                        uVar13 = unaff_x26 + (ulong)*(uint *)(uVar13 + 0x13);
                        iVar8 = *(int *)(uVar13 - 1);
                      }
                      if ((uVar13 & 1) != 0) {
                        lVar16 = unaff_x26 + (ulong)*(uint *)(uVar13 - 1);
                        sVar3 = *(short *)(lVar16 + 7);
                        if (sVar3 != 0x439) {
                          if (sVar3 == 0x417) {
                            uVar13 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
                          }
                          else {
                            uVar13 = param_2;
                            if ((int)lVar16 == (int)*(undefined8 *)(unaff_x26 + 0xca8))
                            goto LAB_01383118;
                          }
                        }
                        uVar20 = *(ushort *)
                                  (unaff_x26 +
                                   (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar13 + 0xf) + -1)
                                  + 7);
                        if (0x87 < uVar20 && uVar20 < 0x92) {
                          uVar13 = FUN_01341080(param_1,lVar14,0);
                          return uVar13;
                        }
                      }
                    }
                  }
                  else {
                    lVar14 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
                    sVar3 = *(short *)(lVar14 + 7);
                    if (sVar3 == 0x423) {
                      if (*(int *)(uVar10 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x7b8)) {
                        return unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
                      }
                    }
                    else if (sVar3 == 0x439) {
                      if ((*(int *)(uVar10 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x908)) &&
                         ((((bVar2 = *(byte *)(lVar14 + 9), (bVar2 & 0xc0) == 0xc0 ||
                            ((*(uint *)(unaff_x26 + (ulong)*(uint *)(param_2 + 0xb) + 0x1b) & 0x1f)
                             - 0xd < 4)) && ((bVar2 & 1) == 0)) &&
                          (uVar13 = unaff_x26 + (ulong)*(uint *)(param_2 + 0x1b),
                          (int)uVar13 != (int)*(undefined8 *)(unaff_x26 + 0xa8))))) {
                        if (*(int *)(uVar13 - 1) != (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                          return uVar13;
                        }
                        return unaff_x26 + (ulong)*(uint *)(uVar13 + 0xf);
                      }
                    }
                    else if (((sVar3 == 0x411) &&
                             (*(int *)(uVar10 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x7b8))) &&
                            ((uVar13 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb),
                             (uVar13 & 1) != 0 &&
                             (*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar13 - 1) + 7) < 0x40)))) {
                      return (ulong)(uint)(*(int *)(uVar13 + 7) * 2);
                    }
                  }
                  goto LAB_01383118;
                }
                iVar4 = *(short *)(lVar16 + 5) + -1;
                iVar26 = 0;
                iVar25 = iVar4;
                do {
                  iVar1 = iVar26 + ((uint)(iVar25 - iVar26) >> 1);
                  if (*(uint *)(unaff_x26 +
                                (ulong)*(uint *)(lVar16 + (long)(int)(((uint)(*(int *)(lVar16 + (
                                                  long)(iVar1 * 3) * 4 + 0x13) >> 1) >> 9 & 0x3ff) *
                                                  3) * 4 + 0xf) + 3) < *(uint *)(param_1 + 3)) {
                    iVar26 = iVar1 + 1;
                    iVar1 = iVar25;
                  }
                  iVar25 = iVar1;
                } while (iVar26 != iVar25);
                for (; iVar26 <= iVar4; iVar26 = iVar26 + 1) {
                  uVar12 = (uint)(*(int *)(lVar16 + (long)(iVar26 * 3) * 4 + 0x13) >> 1) >> 9 &
                           0x3ff;
                  lVar15 = (long)(int)(uVar12 * 3);
                  lVar24 = unaff_x26 + (ulong)*(uint *)(lVar16 + lVar15 * 4 + 0xf);
                  if (*(uint *)(lVar24 + 3) != *(uint *)(param_1 + 3)) break;
                  if ((int)lVar24 == iVar8) {
                    if (uVar12 < uVar18) goto LAB_01380414;
                    break;
                  }
                }
              }
            }
            else {
              uVar13 = unaff_x26 + (ulong)*(uint *)(param_2 + 3);
              if ((uVar13 & 1) == 0) {
                uVar13 = *(ulong *)(unaff_x26 + 0x410);
              }
              uVar10 = (ulong)(*(uint *)(param_1 + 3) >> 3);
              lVar16 = 0;
              uVar19 = *(ulong *)(unaff_x26 + 0xa0);
              while( true ) {
                uVar10 = uVar10 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar13 + 0xf) << 0x20) >>
                                  0x21) - 1U;
                lVar15 = uVar10 * 3;
                lVar24 = (lVar15 + 5) * 4;
                iVar26 = *(int *)(uVar13 + lVar24 + 7);
                if (iVar26 == (int)uVar19) break;
                if (iVar26 == iVar8) {
                  if ((ulong)((long)((ulong)*(uint *)(uVar13 + 3) << 0x20) >> 0x21) <= lVar15 + 6U)
                  {
                    /* WARNING: Does not return */
                    UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(0,0x1381e30);
                    (*UNRECOVERED_JUMPTABLE_00)();
                  }
                  uVar10 = unaff_x26 + (ulong)*(uint *)(uVar13 + lVar24 + 0xb);
                  uVar13 = (ulong)(uint)(*(int *)(uVar13 + lVar24 + 0xf) >> 1);
                  goto LAB_01380588;
                }
                lVar16 = lVar16 + 1;
                uVar10 = uVar10 + lVar16;
              }
            }
LAB_013806bc:
            if ((*(int *)(param_1 - 1) != (int)*(undefined8 *)(unaff_x26 + 0xf8)) ||
               ((*(uint *)(param_1 + 7) & 1) == 0)) {
              do {
                if (uVar20 == 0x41b) goto LAB_01383118;
                lVar16 = unaff_x26 + (ulong)*(uint *)(lVar14 + 0xf);
                if ((int)lVar16 == (int)*(undefined8 *)(unaff_x26 + 0xb0)) goto LAB_01380b94;
                lVar14 = unaff_x26 + (ulong)*(uint *)(lVar16 + -1);
                uVar20 = *(ushort *)(lVar14 + 7);
                if (uVar20 < 0x411) {
                  if ((uVar20 != 0xaa) || ((*(byte *)(lVar14 + 9) & 0x24) != 0)) goto LAB_01383118;
                  uVar13 = unaff_x26 + (ulong)*(uint *)(lVar16 + 3);
                  if ((uVar13 & 1) == 0) {
                    uVar13 = *(ulong *)(unaff_x26 + 0x410);
                  }
                  uVar10 = (ulong)(*(uint *)(param_1 + 3) >> 3);
                  lVar16 = 0;
                  while( true ) {
                    uVar10 = uVar10 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar13 + 0xf) << 0x20) >>
                                      0x21) - 1U;
                    uVar19 = uVar10 + 5;
                    lVar15 = unaff_x26 + (ulong)*(uint *)(uVar13 + uVar19 * 4 + 7);
                    uVar9 = *(ulong *)(unaff_x26 + 0xa0);
                    if ((int)lVar15 == (int)uVar9) break;
                    if (*(int *)(lVar15 + 3) == iVar8) {
                      if ((ulong)((long)((ulong)*(uint *)(uVar13 + 3) << 0x20) >> 0x21) <= uVar19) {
                    /* WARNING: Does not return */
                        UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(0,0x1381fc4);
                        (*UNRECOVERED_JUMPTABLE_00)();
                      }
                      uVar13 = unaff_x26 + (ulong)*(uint *)(lVar15 + 0xb);
                      if ((int)uVar13 != (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
                        uVar10 = (ulong)(uint)(*(int *)(lVar15 + 7) >> 1);
                        goto LAB_01380a68;
                      }
                      break;
                    }
                    lVar16 = lVar16 + 1;
                    uVar10 = uVar10 + lVar16;
                  }
                }
                else if ((*(uint *)(lVar14 + 0xb) >> 0x15 & 1) == 0) {
                  lVar15 = unaff_x26 + (ulong)*(uint *)(lVar14 + 0x17);
                  uVar18 = *(uint *)(lVar14 + 0xb) >> 10 & 0x3ff;
                  if (uVar18 != 0) {
                    if (uVar18 < 0x21) {
                      lVar23 = (long)(int)uVar18 * 3;
                      while (lVar23 != 0) {
                        lVar23 = lVar23 + -3;
                        if (*(int *)(lVar15 + lVar23 * 4 + 0xf) == iVar8) goto LAB_01380950;
                      }
                    }
                    else {
                      iVar4 = *(short *)(lVar15 + 5) + -1;
                      iVar26 = 0;
                      iVar25 = iVar4;
                      do {
                        iVar1 = iVar26 + ((uint)(iVar25 - iVar26) >> 1);
                        if (*(uint *)(unaff_x26 +
                                      (ulong)*(uint *)(lVar15 + (long)(int)(((uint)(*(int *)(lVar15 
                                                  + (long)(iVar1 * 3) * 4 + 0x13) >> 1) >> 9 & 0x3ff
                                                  ) * 3) * 4 + 0xf) + 3) < *(uint *)(param_1 + 3)) {
                          iVar26 = iVar1 + 1;
                          iVar1 = iVar25;
                        }
                        iVar25 = iVar1;
                      } while (iVar26 != iVar25);
                      for (; iVar26 <= iVar4; iVar26 = iVar26 + 1) {
                        uVar12 = (uint)(*(int *)(lVar15 + (long)(iVar26 * 3) * 4 + 0x13) >> 1) >> 9
                                 & 0x3ff;
                        lVar23 = (long)(int)(uVar12 * 3);
                        lVar24 = unaff_x26 + (ulong)*(uint *)(lVar15 + lVar23 * 4 + 0xf);
                        if (*(uint *)(lVar24 + 3) != *(uint *)(param_1 + 3)) break;
                        if ((int)lVar24 == iVar8) {
                          if (uVar12 < uVar18) goto LAB_01380950;
                          break;
                        }
                      }
                    }
                  }
                }
                else {
                  uVar10 = unaff_x26 + (ulong)*(uint *)(lVar16 + 3);
                  if ((uVar10 & 1) == 0) {
                    uVar10 = *(ulong *)(unaff_x26 + 0x410);
                  }
                  uVar13 = (ulong)(*(uint *)(param_1 + 3) >> 3);
                  lVar16 = 0;
                  while( true ) {
                    uVar13 = uVar13 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar10 + 0xf) << 0x20) >>
                                      0x21) - 1U;
                    lVar15 = uVar13 * 3;
                    lVar24 = (lVar15 + 5) * 4;
                    iVar26 = *(int *)(uVar10 + lVar24 + 7);
                    uVar9 = *(ulong *)(unaff_x26 + 0xa0);
                    if (iVar26 == (int)uVar9) break;
                    if (iVar26 == iVar8) {
                      if ((ulong)((long)((ulong)*(uint *)(uVar10 + 3) << 0x20) >> 0x21) <=
                          lVar15 + 6U) {
                    /* WARNING: Does not return */
                        UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(0,0x1381ff0);
                        (*UNRECOVERED_JUMPTABLE_00)();
                      }
                      uVar13 = unaff_x26 + (ulong)*(uint *)(uVar10 + lVar24 + 0xb);
                      uVar10 = (ulong)(uint)(*(int *)(uVar10 + lVar24 + 0xf) >> 1);
                      goto LAB_01380a68;
                    }
                    lVar16 = lVar16 + 1;
                    uVar13 = uVar13 + lVar16;
                  }
                }
              } while( true );
            }
            if ((*(uint *)(param_1 + 7) >> 4 & 1) == 0) {
LAB_01380b94:
              return *(ulong *)(unaff_x26 + 0xa0);
            }
            goto LAB_01383118;
          }
        }
        else {
          if (uVar20 != 0x43) {
LAB_01381ce8:
            param_3 = thunk_FUN_01349b90(param_3);
            if ((param_3 & 1) == 0) {
              uVar10 = (long)(param_3 << 0x20) >> 0x21;
            }
            else {
              uVar20 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(param_3 - 1) + 7);
              if (((uVar20 != 0x42) ||
                  (uVar10 = (ulong)*(double *)(param_3 + 3),
                  *(double *)(param_3 + 3) != (double)(long)uVar10)) ||
                 (0x3ffffffffffffe < uVar10 + 0x1fffffffffffff)) {
                uVar10 = param_3;
                if (uVar20 == 0x40) {
                  uVar13 = *(ulong *)(unaff_x26 + 0xa0);
                  iVar8 = (int)*(undefined8 *)(unaff_x26 + 0xb0);
                }
                else if (uVar20 < 0x40) {
                  uVar18 = *(uint *)(param_3 + 3);
                  if ((uVar18 & 0xc0000002) == 0) {
                    uVar10 = (ulong)(uVar18 >> 3) & 0xffffff;
                    uVar11 = *(undefined8 *)(unaff_x26 + 0xb0);
                    uVar13 = *(ulong *)(unaff_x26 + 0xa0);
                    param_1 = param_3;
                    goto LAB_013816c8;
                  }
                  if ((uVar18 >> 1 & 1) == 0) goto LAB_01383118;
                  if ((uVar20 == 0x25) || (uVar20 == 0x2d)) {
                    uVar13 = *(ulong *)(unaff_x26 + 0xa0);
                    iVar8 = (int)*(undefined8 *)(unaff_x26 + 0xb0);
                    uVar10 = unaff_x26 + (ulong)*(uint *)(param_3 + 0xb);
                  }
                  else {
                    if ((uVar20 >> 5 & 1) != 0) goto LAB_01380250;
                    uVar13 = *(ulong *)(unaff_x26 + 0xa0);
                    iVar8 = (int)*(undefined8 *)(unaff_x26 + 0xb0);
                  }
                }
                else {
                  if (uVar20 != 0x43) goto LAB_01383118;
                  uVar13 = *(ulong *)(unaff_x26 + 0xa0);
                  iVar8 = (int)*(undefined8 *)(unaff_x26 + 0xb0);
                  uVar10 = unaff_x26 + (ulong)*(uint *)(param_3 + 0xb);
                }
                goto LAB_01380bf0;
              }
            }
            uVar11 = *(undefined8 *)(unaff_x26 + 0xb0);
            uVar13 = *(ulong *)(unaff_x26 + 0xa0);
            param_1 = param_3;
            goto LAB_013816c8;
          }
          uVar10 = unaff_x26 + (ulong)*(uint *)(param_3 + 0xb);
        }
      }
LAB_01380bf0:
      uVar19 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
      uVar20 = *(ushort *)(uVar19 + 7);
      if (uVar20 < 0x411) {
        if ((uVar20 == 0xa9) &&
           ((*(int *)(uVar10 - 1) != (int)*(undefined8 *)(unaff_x26 + 0xf8) ||
            ((*(uint *)(uVar10 + 7) & 1) == 0)))) {
          uVar13 = FUN_013fc180(param_2,uVar10,param_2,2);
          return uVar13;
        }
        goto LAB_01383118;
      }
      uVar18 = (uint)uVar10;
      uVar12 = (uint)uVar13;
      if ((*(uint *)(uVar19 + 0xb) >> 0x15 & 1) == 0) {
        lVar14 = unaff_x26 + (ulong)*(uint *)(uVar19 + 0x17);
        uVar17 = *(uint *)(uVar19 + 0xb) >> 10 & 0x3ff;
        if (uVar17 != 0) {
          if (uVar17 < 0x21) {
            lVar16 = (long)(int)uVar17 * 3;
            do {
              if (lVar16 == 0) goto LAB_01380e18;
              lVar16 = lVar16 + -3;
            } while (*(uint *)(lVar14 + lVar16 * 4 + 0xf) != uVar18);
LAB_01380d2c:
            uVar18 = *(int *)(lVar14 + lVar16 * 4 + 0x13) >> 1;
            uVar9 = (ulong)uVar18;
            if ((uVar18 >> 1 & 1) == 0) {
              bVar7 = (uVar18 >> 6 & 7) == 2;
              uVar10 = (ulong)*(byte *)(uVar19 + 4) + ((uVar9 & 0x1ff80000) >> 0x13);
              if (uVar10 < *(byte *)(uVar19 + 3)) {
                lVar14 = uVar10 * 4 + -1;
                if (bVar7) {
                  uVar11 = *(undefined8 *)(unaff_x26 + (ulong)*(uint *)(param_2 + lVar14) + 3);
                  goto LAB_01380dcc;
                }
                uVar10 = unaff_x26 + (ulong)*(uint *)(param_2 + lVar14);
              }
              else {
                uVar22 = unaff_x26 + (ulong)*(uint *)(param_2 + 3);
                if ((uVar22 & 1) == 0) {
                  uVar22 = *(ulong *)(unaff_x26 + 0x168);
                }
                uVar10 = unaff_x26 +
                         (ulong)*(uint *)(uVar22 + (uVar10 - *(byte *)(uVar19 + 3)) * 4 + 7);
                if (bVar7) {
                  uVar11 = *(undefined8 *)(uVar10 + 3);
LAB_01380dcc:
                  uVar19 = **(ulong **)(unaff_x26 + 0x1428);
                  uVar10 = uVar19 + 0xc;
                  if (uVar10 < **(ulong **)(unaff_x26 + 0x1430)) {
                    **(ulong **)(unaff_x26 + 0x1428) = uVar10;
                    uVar10 = uVar19 + 1;
                  }
                  else {
                    param_1 = FUN_01348560(param_1,0xc,param_3,param_4,param_2);
                    uVar13 = *(ulong *)(unaff_x26 + 0xa0);
                    uVar10 = param_1;
                  }
                  *(int *)(uVar10 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
                  *(undefined8 *)(uVar10 + 3) = uVar11;
                }
              }
            }
            else {
              uVar10 = unaff_x26 + (ulong)*(uint *)(lVar14 + lVar16 * 4 + 0x17);
            }
LAB_01381094:
            if ((uVar9 & 1) == 0) {
              return uVar10;
            }
            if (*(int *)(uVar10 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xcc8)) {
              lVar14 = unaff_x26 + (ulong)*(uint *)(uVar10 + 3);
              lVar16 = unaff_x26 + (ulong)*(uint *)(lVar14 + -1);
              if ((*(byte *)(lVar16 + 9) >> 1 & 1) != 0) {
                uVar13 = FUN_0133fcc0(0);
                return uVar13;
              }
              if ((int)lVar16 != (int)*(undefined8 *)(unaff_x26 + 0xca8)) {
                return uVar13;
              }
              if (*(int *)(lVar14 + 0x33) == (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
                uVar13 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
                iVar8 = *(int *)(uVar13 - 1);
                while (iVar8 == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                  uVar13 = unaff_x26 + (ulong)*(uint *)(uVar13 + 0x13);
                  iVar8 = *(int *)(uVar13 - 1);
                }
                if ((uVar13 & 1) != 0) {
                  lVar16 = unaff_x26 + (ulong)*(uint *)(uVar13 - 1);
                  sVar3 = *(short *)(lVar16 + 7);
                  if (sVar3 != 0x439) {
                    if (sVar3 == 0x417) {
                      uVar13 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
                    }
                    else {
                      uVar13 = param_2;
                      if ((int)lVar16 == (int)*(undefined8 *)(unaff_x26 + 0xca8)) goto LAB_01383118;
                    }
                  }
                  uVar20 = *(ushort *)
                            (unaff_x26 +
                             (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar13 + 0xf) + -1) + 7);
                  if (0x87 < uVar20 && uVar20 < 0x92) {
                    uVar13 = FUN_01341080(param_1,lVar14,0);
                    return uVar13;
                  }
                }
              }
            }
            else {
              lVar14 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
              sVar3 = *(short *)(lVar14 + 7);
              if (sVar3 == 0x423) {
                if (*(int *)(uVar10 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x7b8)) {
                  return unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
                }
              }
              else if (sVar3 == 0x439) {
                if (((*(int *)(uVar10 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x908)) &&
                    (((bVar2 = *(byte *)(lVar14 + 9), (bVar2 & 0xc0) == 0xc0 ||
                      ((*(uint *)(unaff_x26 + (ulong)*(uint *)(param_2 + 0xb) + 0x1b) & 0x1f) - 0xd
                       < 4)) && ((bVar2 & 1) == 0)))) &&
                   (uVar13 = unaff_x26 + (ulong)*(uint *)(param_2 + 0x1b),
                   (int)uVar13 != (int)*(undefined8 *)(unaff_x26 + 0xa8))) {
                  if (*(int *)(uVar13 - 1) != (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                    return uVar13;
                  }
                  return unaff_x26 + (ulong)*(uint *)(uVar13 + 0xf);
                }
              }
              else if (((sVar3 == 0x411) &&
                       (*(int *)(uVar10 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x7b8))) &&
                      ((uVar13 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb), (uVar13 & 1) != 0 &&
                       (*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar13 - 1) + 7) < 0x40)))) {
                return (ulong)(uint)(*(int *)(uVar13 + 7) * 2);
              }
            }
            goto LAB_01383118;
          }
          iVar4 = *(short *)(lVar14 + 5) + -1;
          iVar26 = 0;
          iVar25 = iVar4;
          do {
            iVar1 = iVar26 + ((uint)(iVar25 - iVar26) >> 1);
            if (*(uint *)(unaff_x26 +
                          (ulong)*(uint *)(lVar14 + (long)(int)(((uint)(*(int *)(lVar14 + (long)(
                                                  iVar1 * 3) * 4 + 0x13) >> 1) >> 9 & 0x3ff) * 3) *
                                                  4 + 0xf) + 3) < *(uint *)(uVar10 + 3)) {
              iVar26 = iVar1 + 1;
              iVar1 = iVar25;
            }
            iVar25 = iVar1;
          } while (iVar26 != iVar25);
          for (; iVar26 <= iVar4; iVar26 = iVar26 + 1) {
            uVar5 = (uint)(*(int *)(lVar14 + (long)(iVar26 * 3) * 4 + 0x13) >> 1) >> 9 & 0x3ff;
            lVar16 = (long)(int)(uVar5 * 3);
            lVar15 = unaff_x26 + (ulong)*(uint *)(lVar14 + lVar16 * 4 + 0xf);
            if (*(uint *)(lVar15 + 3) != *(uint *)(uVar10 + 3)) break;
            if ((uint)lVar15 == uVar18) {
              if (uVar5 < uVar17) goto LAB_01380d2c;
              break;
            }
          }
        }
LAB_01380e18:
        if ((uint)param_4 != uVar12) {
          uVar5 = *(uint *)(uVar10 + 3);
          uVar6 = (uint)uVar19;
          uVar17 = uVar5 + (uVar6 ^ (uint)(uVar19 >> 0xd)) & 0x1ffc;
          lVar14 = (ulong)uVar17 * 3;
          lVar16 = *(long *)(unaff_x26 + 11000);
          if ((uVar18 == *(uint *)(lVar16 + lVar14)) && (uVar6 == *(uint *)(lVar16 + lVar14 + 8))) {
            uVar17 = *(uint *)(lVar16 + lVar14 + 4);
          }
          else {
            lVar14 = (ulong)((uVar17 - uVar18) + 0xa6e5 & 0x7fc) * 3;
            lVar16 = *(long *)(unaff_x26 + 0x2b10);
            if ((uVar18 != *(uint *)(lVar16 + lVar14)) || (uVar6 != *(uint *)(lVar16 + lVar14 + 8)))
            goto LAB_01380fb0;
            uVar17 = *(uint *)(lVar16 + lVar14 + 4);
          }
          uVar21 = unaff_x26 + (ulong)uVar17;
          uVar22 = param_2;
          uVar9 = uVar21;
          if ((uVar21 & 1) != 0) {
            if (*(int *)(uVar21 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x120)) {
              if (((long)*(int *)(uVar21 + 0x17) & 0x80000000U) == 0) {
                UNRECOVERED_JUMPTABLE_00 = (code *)(uVar21 + 0x3f);
              }
              else {
                UNRECOVERED_JUMPTABLE_00 =
                     *(code **)((long)*(int *)(uVar21 + 0x27) * 8 + unaff_x26 + 0x2c78);
              }
                    /* WARNING: Could not recover jumptable at 0x01382598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar13 = (*UNRECOVERED_JUMPTABLE_00)(param_1,param_2,uVar10);
              return uVar13;
            }
            lVar16 = unaff_x26 + (ulong)*(uint *)(uVar21 + 7);
            lVar14 = 0;
            if (((int)lVar16 != 0) && (*(int *)(lVar16 + 3) != 0)) goto LAB_01380fb0;
            uVar9 = unaff_x26 + (ulong)*(uint *)(uVar21 + 3);
            if (((long)(uVar9 << 0x20) >> 0x21 & 0x30U) != 0) {
              if (((uint)((int)uVar9 >> 1) >> 4 & 1) == 0) {
                uVar28 = unaff_x26 + (ulong)*(uint *)(param_2 + 3);
                uVar27 = (ulong)(uVar5 >> 3);
                if ((uVar28 & 1) == 0) {
                  uVar28 = *(ulong *)(unaff_x26 + 0x410);
                }
                while( true ) {
                  uVar27 = uVar27 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar28 + 0xf) << 0x20) >>
                                    0x21) - 1U;
                  lVar16 = uVar27 * 3;
                  lVar15 = (lVar16 + 5) * 4;
                  uVar17 = *(uint *)(uVar28 + lVar15 + 7);
                  if (uVar17 == uVar12) break;
                  if (uVar17 == uVar18) {
                    if ((ulong)((long)((ulong)*(uint *)(uVar28 + 3) << 0x20) >> 0x21) <= lVar16 + 6U
                       ) {
                    /* WARNING: Does not return */
                      UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(0,0x13822b8);
                      (*UNRECOVERED_JUMPTABLE_00)();
                    }
                    uVar10 = unaff_x26 + (ulong)*(uint *)(uVar28 + lVar15 + 0xb);
                    if ((*(int *)(uVar28 + lVar15 + 0xf) >> 1 & 1U) == 0) {
                      return uVar10;
                    }
                    if (*(int *)(uVar10 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xcc8)) {
                      lVar14 = unaff_x26 + (ulong)*(uint *)(uVar10 + 3);
                      lVar16 = unaff_x26 + (ulong)*(uint *)(lVar14 + -1);
                      if ((*(byte *)(lVar16 + 9) >> 1 & 1) != 0) {
                        uVar13 = FUN_0133fcc0(0);
                        return uVar13;
                      }
                      if ((int)lVar16 != (int)*(undefined8 *)(unaff_x26 + 0xca8)) {
                        return uVar13;
                      }
                      if (*(int *)(lVar14 + 0x33) == (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
                        iVar8 = *(int *)(uVar19 - 1);
                        while (iVar8 == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                          uVar19 = unaff_x26 + (ulong)*(uint *)(uVar19 + 0x13);
                          iVar8 = *(int *)(uVar19 - 1);
                        }
                        if ((uVar19 & 1) != 0) {
                          lVar16 = unaff_x26 + (ulong)*(uint *)(uVar19 - 1);
                          sVar3 = *(short *)(lVar16 + 7);
                          if (sVar3 != 0x439) {
                            if (sVar3 == 0x417) {
                              uVar19 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
                            }
                            else {
                              uVar19 = param_2;
                              if ((int)lVar16 == (int)*(undefined8 *)(unaff_x26 + 0xca8))
                              goto LAB_01380fb0;
                            }
                          }
                          uVar20 = *(ushort *)
                                    (unaff_x26 +
                                     (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar19 + 0xf) +
                                                     -1) + 7);
                          if (0x87 < uVar20 && uVar20 < 0x92) {
                            uVar13 = FUN_01341080(param_1,lVar14,0);
                            return uVar13;
                          }
                        }
                      }
                    }
                    else if (uVar20 == 0x423) {
                      if (*(int *)(uVar10 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x7b8)) {
                        return unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
                      }
                    }
                    else if (uVar20 == 0x439) {
                      if ((*(int *)(uVar10 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x908)) &&
                         (((((*(byte *)(uVar19 + 9) & 0xc0) == 0xc0 ||
                            ((*(uint *)(unaff_x26 + (ulong)*(uint *)(param_2 + 0xb) + 0x1b) & 0x1f)
                             - 0xd < 4)) && ((*(byte *)(uVar19 + 9) & 1) == 0)) &&
                          (uVar13 = unaff_x26 + (ulong)*(uint *)(param_2 + 0x1b),
                          (int)uVar13 != (int)*(undefined8 *)(unaff_x26 + 0xa8))))) {
                        if (*(int *)(uVar13 - 1) != (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                          return uVar13;
                        }
                        return unaff_x26 + (ulong)*(uint *)(uVar13 + 0xf);
                      }
                    }
                    else if (((uVar20 == 0x411) &&
                             (*(int *)(uVar10 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x7b8))) &&
                            ((uVar13 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb),
                             (uVar13 & 1) != 0 &&
                             (*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar13 - 1) + 7) < 0x40)))) {
                      return (ulong)(uint)(*(int *)(uVar13 + 7) * 2);
                    }
                    goto LAB_01380fb0;
                  }
                  lVar14 = lVar14 + 1;
                  uVar27 = uVar27 + lVar14;
                }
              }
              else {
                uVar28 = unaff_x26 + (ulong)*(uint *)(uVar21 + 0xf);
                if ((int)uVar28 == 3) goto LAB_01380fb0;
                uVar28 = uVar28 & 0xfffffffffffffffd;
                lVar14 = unaff_x26 +
                         (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13);
                if (((int)uVar28 != (int)lVar14) &&
                   ((uVar20 != 0xab || (*(int *)(uVar28 + 0x27b) != *(int *)(lVar14 + 0x27b)))))
                goto LAB_01380fb0;
              }
            }
            uVar28 = unaff_x26 + (ulong)*(uint *)(uVar21 + 0xb);
            if ((uVar28 & 1) == 0) {
              return uVar28;
            }
            if ((int)uVar28 != iVar8) {
              if ((int)uVar28 == 3) goto LAB_01380fb0;
              uVar22 = uVar28 & 0xfffffffffffffffd;
            }
          }
          uVar28 = (long)(uVar9 << 0x20) >> 0x21;
          uVar27 = uVar28 & 0xf;
          uVar17 = (int)uVar9 >> 1;
          if (uVar27 == 4) {
            bVar7 = (uVar28 & 0x80) == 0;
            lVar14 = (uVar28 >> 8 & 0x7ff) * 4 + -1;
            if ((uVar17 >> 6 & 1) == 0) {
              uVar13 = unaff_x26 + (ulong)*(uint *)(uVar22 + 3);
              if ((uVar13 & 1) == 0) {
                uVar13 = *(ulong *)(unaff_x26 + 0x168);
              }
              uVar13 = unaff_x26 + (ulong)*(uint *)(uVar13 + lVar14);
              if (bVar7) {
                return uVar13;
              }
              if (((uVar13 & 1) != 0) &&
                 (*(int *)(uVar13 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x140))) {
                uVar11 = *(undefined8 *)(uVar13 + 3);
LAB_01380f78:
                uVar10 = **(ulong **)(unaff_x26 + 0x1428);
                uVar13 = uVar10 + 0xc;
                if (uVar13 < **(ulong **)(unaff_x26 + 0x1430)) {
                  uVar10 = uVar10 + 1;
                  **(ulong **)(unaff_x26 + 0x1428) = uVar13;
                }
                else {
                  uVar10 = FUN_01348560(param_1,0xc);
                }
                *(int *)(uVar10 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
                *(undefined8 *)(uVar10 + 3) = uVar11;
                return uVar10;
              }
            }
            else {
              if (bVar7) {
                return unaff_x26 + (ulong)*(uint *)(uVar22 + lVar14);
              }
              uVar13 = unaff_x26 + (ulong)*(uint *)(uVar22 + lVar14);
              if (((uVar13 & 1) != 0) &&
                 (*(int *)(uVar13 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x140))) {
                uVar11 = *(undefined8 *)(uVar13 + 3);
                goto LAB_01380f78;
              }
            }
          }
          else {
            if (uVar27 == 5) {
              return uVar22;
            }
            if (uVar27 == 0xd) {
              return uVar13;
            }
            if (uVar27 == 2) {
              uVar10 = unaff_x26 + (ulong)*(uint *)(uVar22 + 3);
              uVar9 = (ulong)(uVar5 >> 3);
              if ((uVar10 & 1) == 0) {
                uVar10 = *(ulong *)(unaff_x26 + 0x410);
              }
              lVar14 = 0;
              while( true ) {
                uVar9 = uVar9 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar10 + 0xf) << 0x20) >> 0x21)
                                - 1U;
                lVar16 = uVar9 * 3;
                lVar15 = (lVar16 + 5) * 4;
                uVar17 = *(uint *)(uVar10 + lVar15 + 7);
                if (uVar17 == uVar12) break;
                if (uVar17 == uVar18) {
                  if ((ulong)((long)((ulong)*(uint *)(uVar10 + 3) << 0x20) >> 0x21) <= lVar16 + 6U)
                  {
                    /* WARNING: Does not return */
                    UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(0,0x1382a7c);
                    (*UNRECOVERED_JUMPTABLE_00)();
                  }
                  uVar9 = unaff_x26 + (ulong)*(uint *)(uVar10 + lVar15 + 0xb);
                  if ((*(int *)(uVar10 + lVar15 + 0xf) >> 1 & 1U) == 0) {
                    return uVar9;
                  }
                  if (*(int *)(uVar9 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xcc8)) {
                    lVar14 = unaff_x26 + (ulong)*(uint *)(uVar9 + 3);
                    lVar16 = unaff_x26 + (ulong)*(uint *)(lVar14 + -1);
                    if ((*(byte *)(lVar16 + 9) >> 1 & 1) != 0) {
                      uVar13 = FUN_0133fcc0(0);
                      return uVar13;
                    }
                    if ((int)lVar16 != (int)*(undefined8 *)(unaff_x26 + 0xca8)) {
                      return uVar13;
                    }
                    if (*(int *)(lVar14 + 0x33) == (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
                      iVar8 = *(int *)(uVar19 - 1);
                      while (iVar8 == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                        uVar19 = unaff_x26 + (ulong)*(uint *)(uVar19 + 0x13);
                        iVar8 = *(int *)(uVar19 - 1);
                      }
                      if ((uVar19 & 1) != 0) {
                        lVar16 = unaff_x26 + (ulong)*(uint *)(uVar19 - 1);
                        sVar3 = *(short *)(lVar16 + 7);
                        if (sVar3 != 0x439) {
                          if (sVar3 == 0x417) {
                            uVar19 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
                          }
                          else {
                            uVar19 = param_2;
                            if ((int)lVar16 == (int)*(undefined8 *)(unaff_x26 + 0xca8)) break;
                          }
                        }
                        uVar20 = *(ushort *)
                                  (unaff_x26 +
                                   (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar19 + 0xf) + -1)
                                  + 7);
                        if (0x87 < uVar20 && uVar20 < 0x92) {
                          uVar13 = FUN_01341080(param_1,lVar14,0);
                          return uVar13;
                        }
                      }
                    }
                  }
                  else if (uVar20 == 0x423) {
                    if (*(int *)(uVar9 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x7b8)) {
                      return unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
                    }
                  }
                  else if (uVar20 == 0x439) {
                    if (((*(int *)(uVar9 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x908)) &&
                        ((((*(byte *)(uVar19 + 9) & 0xc0) == 0xc0 ||
                          ((*(uint *)(unaff_x26 + (ulong)*(uint *)(param_2 + 0xb) + 0x1b) & 0x1f) -
                           0xd < 4)) && ((*(byte *)(uVar19 + 9) & 1) == 0)))) &&
                       (uVar13 = unaff_x26 + (ulong)*(uint *)(param_2 + 0x1b),
                       (int)uVar13 != (int)*(undefined8 *)(unaff_x26 + 0xa8))) {
                      if (*(int *)(uVar13 - 1) != (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                        return uVar13;
                      }
                      return unaff_x26 + (ulong)*(uint *)(uVar13 + 0xf);
                    }
                  }
                  else if (((uVar20 == 0x411) &&
                           (*(int *)(uVar9 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x7b8))) &&
                          ((uVar13 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb), (uVar13 & 1) != 0
                           && (*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar13 - 1) + 7) < 0x40))))
                  {
                    return (ulong)(uint)(*(int *)(uVar13 + 7) * 2);
                  }
                  break;
                }
                lVar14 = lVar14 + 1;
                uVar9 = uVar9 + lVar14;
              }
            }
            else {
              if (uVar27 == 6) {
                uVar13 = FUN_0133fcc0(0,unaff_x26 +
                                        (ulong)*(uint *)(unaff_x26 +
                                                         (ulong)*(uint *)(unaff_x26 +
                                                                          (ulong)*(uint *)(unaff_x26
                                                                                           + (ulong)
                                                  *(uint *)(uVar22 - 1) + 0x17) +
                                                  (uVar28 >> 6 & 0x3ff) * 0xc + 0x17) + 3));
                return uVar13;
              }
              if (uVar27 == 7) {
                uVar13 = FUN_01348300(uVar22,param_2,param_3,
                                      unaff_x26 +
                                      (ulong)*(uint *)(unaff_x26 +
                                                       (ulong)*(uint *)(unaff_x26 +
                                                                        (ulong)*(uint *)(uVar22 - 1)
                                                                       + 0x17) +
                                                      (uVar28 >> 6 & 0x3ff) * 0xc + 0x17));
                return uVar13;
              }
              if ((uVar27 == 8) || (uVar27 == 9)) {
                if ((uVar17 >> 4 & 1) == 0) {
                  uVar18 = *(uint *)(uVar21 + 0xf);
                }
                else {
                  uVar18 = *(uint *)(uVar21 + 0x13);
                }
                if ((int)(unaff_x26 + (ulong)uVar18) != 3) {
                  if (uVar27 != 8) {
                    param_2 = unaff_x26 + (ulong)*(uint *)(uVar19 + 0xf);
                  }
                  uVar13 = FUN_01348140(param_2,*(undefined8 *)
                                                 (unaff_x26 + (ulong)*(uint *)(uVar22 + 7) + 3),0,
                                        unaff_x26 + (ulong)*(uint *)(uVar22 + 0xb),
                                        unaff_x26 + (ulong)uVar18 & 0xfffffffffffffffd);
                  return uVar13;
                }
                    /* WARNING: Does not return */
                UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(0,0x1382928);
                (*UNRECOVERED_JUMPTABLE_00)();
              }
              if (uVar27 != 3) {
                if (uVar27 == 0xb) {
                    /* WARNING: Subroutine does not return */
                  FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2248));
                }
                if (uVar27 == 0xc) {
                  uVar13 = FUN_013fc180(uVar22,uVar10,param_2,2);
                  return uVar13;
                }
                if (uVar27 != 0xe) {
                    /* WARNING: Subroutine does not return */
                  FUN_013be7e0(5,*(undefined8 *)(unaff_x26 + 0x1f20));
                }
                uVar13 = uVar28 >> 6 & 0x1ffffff;
                lVar14 = unaff_x26 +
                         (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(param_2 + 0xb) + 3);
                if (uVar13 < (ulong)((long)((ulong)*(uint *)(lVar14 + 3) << 0x20) >> 0x21)) {
                  uVar13 = unaff_x26 +
                           (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(lVar14 + uVar13 * 4 + 7) +
                                           3);
                  if ((int)uVar13 != (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
                    return uVar13;
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x20b8));
                }
                    /* WARNING: Does not return */
                UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(0,0x1382640);
                (*UNRECOVERED_JUMPTABLE_00)();
              }
              uVar10 = unaff_x26 + (ulong)*(uint *)(uVar22 + 0xb);
              if ((int)uVar10 != (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
                if ((*(int *)(uVar22 + 7) >> 1 & 1U) == 0) {
                  return uVar10;
                }
                if (*(int *)(uVar10 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xcc8)) {
                  lVar14 = unaff_x26 + (ulong)*(uint *)(uVar10 + 3);
                  lVar16 = unaff_x26 + (ulong)*(uint *)(lVar14 + -1);
                  if ((*(byte *)(lVar16 + 9) >> 1 & 1) != 0) {
                    uVar13 = FUN_0133fcc0(0);
                    return uVar13;
                  }
                  if ((int)lVar16 != (int)*(undefined8 *)(unaff_x26 + 0xca8)) {
                    return uVar13;
                  }
                  if (*(int *)(lVar14 + 0x33) == (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
                    iVar8 = *(int *)(uVar19 - 1);
                    while (iVar8 == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                      uVar19 = unaff_x26 + (ulong)*(uint *)(uVar19 + 0x13);
                      iVar8 = *(int *)(uVar19 - 1);
                    }
                    if ((uVar19 & 1) != 0) {
                      lVar16 = unaff_x26 + (ulong)*(uint *)(uVar19 - 1);
                      sVar3 = *(short *)(lVar16 + 7);
                      if (sVar3 != 0x439) {
                        if (sVar3 == 0x417) {
                          uVar19 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
                        }
                        else {
                          uVar19 = param_2;
                          if ((int)lVar16 == (int)*(undefined8 *)(unaff_x26 + 0xca8))
                          goto LAB_01380fb0;
                        }
                      }
                      uVar20 = *(ushort *)
                                (unaff_x26 +
                                 (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar19 + 0xf) + -1) +
                                7);
                      if (0x87 < uVar20 && uVar20 < 0x92) {
                        uVar13 = FUN_01341080(param_1,lVar14,0);
                        return uVar13;
                      }
                    }
                  }
                }
                else if (uVar20 == 0x423) {
                  if (*(int *)(uVar10 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x7b8)) {
                    return unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
                  }
                }
                else if (uVar20 == 0x439) {
                  if (((*(int *)(uVar10 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x908)) &&
                      ((((*(byte *)(uVar19 + 9) & 0xc0) == 0xc0 ||
                        ((*(uint *)(unaff_x26 + (ulong)*(uint *)(param_2 + 0xb) + 0x1b) & 0x1f) -
                         0xd < 4)) && ((*(byte *)(uVar19 + 9) & 1) == 0)))) &&
                     (uVar13 = unaff_x26 + (ulong)*(uint *)(param_2 + 0x1b),
                     (int)uVar13 != (int)*(undefined8 *)(unaff_x26 + 0xa8))) {
                    if (*(int *)(uVar13 - 1) != (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
                      return uVar13;
                    }
                    return unaff_x26 + (ulong)*(uint *)(uVar13 + 0xf);
                  }
                }
                else if (((uVar20 == 0x411) &&
                         (*(int *)(uVar10 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x7b8))) &&
                        ((uVar13 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb), (uVar13 & 1) != 0 &&
                         (*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar13 - 1) + 7) < 0x40)))) {
                  return (ulong)(uint)(*(int *)(uVar13 + 7) * 2);
                }
              }
            }
          }
LAB_01380fb0:
                    /* WARNING: Subroutine does not return */
          FUN_013be7e0(4,*(undefined8 *)(unaff_x26 + 0x1ed8));
        }
        if ((*(int *)(uVar10 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xf8)) &&
           ((*(uint *)(uVar10 + 7) & 1) != 0)) goto LAB_01383118;
      }
      else {
        uVar9 = unaff_x26 + (ulong)*(uint *)(param_2 + 3);
        if ((uVar9 & 1) == 0) {
          uVar9 = *(ulong *)(unaff_x26 + 0x410);
        }
        uVar22 = (ulong)(*(uint *)(uVar10 + 3) >> 3);
        lVar14 = 0;
        while( true ) {
          uVar22 = uVar22 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar9 + 0xf) << 0x20) >> 0x21) - 1U
          ;
          lVar16 = uVar22 * 3;
          lVar15 = (lVar16 + 5) * 4;
          uVar17 = *(uint *)(uVar9 + lVar15 + 7);
          if (uVar17 == uVar12) break;
          if (uVar17 == uVar18) {
            if ((ulong)((long)((ulong)*(uint *)(uVar9 + 3) << 0x20) >> 0x21) <= lVar16 + 6U) {
                    /* WARNING: Does not return */
              UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(0,0x1382ccc);
              (*UNRECOVERED_JUMPTABLE_00)();
            }
            uVar10 = unaff_x26 + (ulong)*(uint *)(uVar9 + lVar15 + 0xb);
            uVar9 = (ulong)(uint)(*(int *)(uVar9 + lVar15 + 0xf) >> 1);
            goto LAB_01381094;
          }
          lVar14 = lVar14 + 1;
          uVar22 = uVar22 + lVar14;
        }
      }
      if ((*(int *)(uVar10 - 1) != (int)*(undefined8 *)(unaff_x26 + 0xf8)) ||
         ((*(uint *)(uVar10 + 7) & 1) == 0)) {
        do {
          if (uVar20 == 0x41b) goto LAB_01383118;
          lVar14 = unaff_x26 + (ulong)*(uint *)(uVar19 + 0xf);
          if ((int)lVar14 == iVar8) {
            return uVar13;
          }
          uVar19 = unaff_x26 + (ulong)*(uint *)(lVar14 + -1);
          uVar20 = *(ushort *)(uVar19 + 7);
          if (uVar20 < 0x411) {
            if ((uVar20 != 0xaa) || ((*(byte *)(uVar19 + 9) & 0x24) != 0)) goto LAB_01383118;
            uVar9 = unaff_x26 + (ulong)*(uint *)(lVar14 + 3);
            if ((uVar9 & 1) == 0) {
              uVar9 = *(ulong *)(unaff_x26 + 0x410);
            }
            uVar22 = (ulong)(*(uint *)(uVar10 + 3) >> 3);
            lVar14 = 0;
            while( true ) {
              uVar22 = uVar22 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar9 + 0xf) << 0x20) >> 0x21)
                                - 1U;
              uVar21 = uVar22 + 5;
              lVar16 = unaff_x26 + (ulong)*(uint *)(uVar9 + uVar21 * 4 + 7);
              if ((uint)lVar16 == uVar12) break;
              if (*(uint *)(lVar16 + 3) == uVar18) {
                if ((ulong)((long)((ulong)*(uint *)(uVar9 + 3) << 0x20) >> 0x21) <= uVar21) {
                    /* WARNING: Does not return */
                  UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(0,0x1382e2c);
                  (*UNRECOVERED_JUMPTABLE_00)();
                }
                uVar9 = unaff_x26 + (ulong)*(uint *)(lVar16 + 0xb);
                if ((int)uVar9 != (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
                  uVar10 = (ulong)(uint)(*(int *)(lVar16 + 7) >> 1);
                  goto LAB_0138154c;
                }
                break;
              }
              lVar14 = lVar14 + 1;
              uVar22 = uVar22 + lVar14;
            }
          }
          else if ((*(uint *)(uVar19 + 0xb) >> 0x15 & 1) == 0) {
            lVar16 = unaff_x26 + (ulong)*(uint *)(uVar19 + 0x17);
            uVar17 = *(uint *)(uVar19 + 0xb) >> 10 & 0x3ff;
            if (uVar17 != 0) {
              if (uVar17 < 0x21) {
                lVar24 = (long)(int)uVar17 * 3;
                while (lVar24 != 0) {
                  lVar24 = lVar24 + -3;
                  if (*(uint *)(lVar16 + lVar24 * 4 + 0xf) == uVar18) goto LAB_01381440;
                }
              }
              else {
                iVar4 = *(short *)(lVar16 + 5) + -1;
                iVar26 = 0;
                iVar25 = iVar4;
                do {
                  iVar1 = iVar26 + ((uint)(iVar25 - iVar26) >> 1);
                  if (*(uint *)(unaff_x26 +
                                (ulong)*(uint *)(lVar16 + (long)(int)(((uint)(*(int *)(lVar16 + (
                                                  long)(iVar1 * 3) * 4 + 0x13) >> 1) >> 9 & 0x3ff) *
                                                  3) * 4 + 0xf) + 3) < *(uint *)(uVar10 + 3)) {
                    iVar26 = iVar1 + 1;
                    iVar1 = iVar25;
                  }
                  iVar25 = iVar1;
                } while (iVar26 != iVar25);
                for (; iVar26 <= iVar4; iVar26 = iVar26 + 1) {
                  uVar5 = (uint)(*(int *)(lVar16 + (long)(iVar26 * 3) * 4 + 0x13) >> 1) >> 9 & 0x3ff
                  ;
                  lVar24 = (long)(int)(uVar5 * 3);
                  lVar15 = unaff_x26 + (ulong)*(uint *)(lVar16 + lVar24 * 4 + 0xf);
                  if (*(uint *)(lVar15 + 3) != *(uint *)(uVar10 + 3)) break;
                  if ((uint)lVar15 == uVar18) {
                    if (uVar5 < uVar17) goto LAB_01381440;
                    break;
                  }
                }
              }
            }
          }
          else {
            uVar22 = unaff_x26 + (ulong)*(uint *)(lVar14 + 3);
            if ((uVar22 & 1) == 0) {
              uVar22 = *(ulong *)(unaff_x26 + 0x410);
            }
            uVar9 = (ulong)(*(uint *)(uVar10 + 3) >> 3);
            lVar14 = 0;
            while( true ) {
              uVar9 = uVar9 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar22 + 0xf) << 0x20) >> 0x21) -
                              1U;
              lVar16 = uVar9 * 3;
              lVar15 = (lVar16 + 5) * 4;
              uVar17 = *(uint *)(uVar22 + lVar15 + 7);
              if (uVar17 == uVar12) break;
              if (uVar17 == uVar18) {
                if ((ulong)((long)((ulong)*(uint *)(uVar22 + 3) << 0x20) >> 0x21) <= lVar16 + 6U) {
                    /* WARNING: Does not return */
                  UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(0,0x1382e68);
                  (*UNRECOVERED_JUMPTABLE_00)();
                }
                uVar9 = unaff_x26 + (ulong)*(uint *)(uVar22 + lVar15 + 0xb);
                uVar10 = (ulong)(uint)(*(int *)(uVar22 + lVar15 + 0xf) >> 1);
                goto LAB_0138154c;
              }
              lVar14 = lVar14 + 1;
              uVar9 = uVar9 + lVar14;
            }
          }
        } while( true );
      }
      if ((*(uint *)(uVar10 + 7) >> 4 & 1) == 0) {
        return uVar13;
      }
      goto LAB_01383118;
    }
  }
LAB_013816c8:
  lVar14 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
  uVar20 = *(ushort *)(lVar14 + 7);
  if (uVar20 < 0x412) {
    if ((uVar20 < 0x40) && (uVar10 < *(uint *)(param_2 + 7))) {
      uVar13 = FUN_013edfa0(param_2,uVar10);
      return uVar13;
    }
    goto LAB_01383118;
  }
  bVar2 = *(byte *)(lVar14 + 10) >> 3;
  if (bVar2 < 0xc) {
    lVar16 = unaff_x26 + (ulong)*(uint *)(param_2 + 7);
    if (uVar20 == 0x423) {
      uVar18 = *(uint *)(param_2 + 0xb);
    }
    else {
      uVar18 = *(uint *)(lVar16 + 3);
    }
    if ((ulong)((long)(unaff_x26 + (ulong)uVar18 << 0x20) >> 0x21) <= uVar10) goto LAB_01381980;
    if (bVar2 < 6) {
      if (bVar2 < 3) {
        if (bVar2 == 0) goto LAB_013817b0;
        if (bVar2 != 1) {
          if (bVar2 != 2) goto LAB_01383118;
          goto LAB_013817b0;
        }
      }
      else if (bVar2 != 3) {
        param_2 = param_1;
        if (bVar2 == 4) {
          dVar29 = *(double *)(lVar16 + uVar10 * 8 + 7);
          goto LAB_01381af4;
        }
        if (bVar2 != 5) goto LAB_01383118;
        lVar15 = uVar10 * 8 + 7;
        if (*(long *)(lVar16 + lVar15) != -0x8000000080001) {
          dVar29 = *(double *)(lVar16 + lVar15);
          goto LAB_01381af4;
        }
        goto LAB_01381994;
      }
    }
    else if (bVar2 < 9) {
      if (bVar2 == 6) {
LAB_013817b0:
        return unaff_x26 + (ulong)*(uint *)(lVar16 + uVar10 * 4 + 7);
      }
      if (bVar2 != 7) {
        if (bVar2 != 8) goto LAB_01383118;
        goto LAB_013817b0;
      }
    }
    else if (bVar2 != 9) {
      if (bVar2 == 10) goto LAB_013817b0;
      if (bVar2 != 0xb) goto LAB_01383118;
    }
    uVar10 = unaff_x26 + (ulong)*(uint *)(lVar16 + uVar10 * 4 + 7);
    if ((int)uVar10 != (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
      return uVar10;
    }
  }
  else {
    if (bVar2 < 0x11) {
      if (bVar2 != 0xc) goto LAB_01383118;
      if (uVar10 < 0xffffffff) {
        lVar15 = unaff_x26 + (ulong)*(uint *)(param_2 + 7);
        uVar18 = *(uint *)(lVar15 + 0xf);
        *(undefined8 *)(unaff_x26 + 0x40) = 0x1381864;
        *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
        uVar19 = (**(code **)(unaff_x26 + 0x1080))();
        *(undefined8 *)(unaff_x26 + 0x38) = 0;
        uVar19 = uVar19 & 0xffffffff;
        lVar16 = 0;
        uVar13 = *(ulong *)(unaff_x26 + 0xa0);
        while( true ) {
          uVar19 = uVar19 & ((long)(unaff_x26 + (ulong)uVar18 << 0x20) >> 0x21) - 1U;
          lVar24 = uVar19 * 3;
          lVar23 = (lVar24 + 4) * 4;
          uVar9 = unaff_x26 + (ulong)*(uint *)(lVar15 + lVar23 + 7);
          if ((int)uVar9 == (int)uVar13) break;
          if ((uVar9 & 1) == 0) {
            if ((long)(uVar9 << 0x20) >> 0x21 == uVar10) goto LAB_0138190c;
          }
          else if (((int)uVar9 != (int)*(undefined8 *)(unaff_x26 + 0xa8)) &&
                  (*(double *)(uVar9 + 3) == (double)(long)uVar10)) {
LAB_0138190c:
            if ((*(int *)(lVar15 + lVar23 + 0xf) >> 1 & 1U) == 0) {
              if (lVar24 + 5U < (ulong)((long)((ulong)*(uint *)(lVar15 + 3) << 0x20) >> 0x21)) {
                return unaff_x26 + (ulong)*(uint *)(lVar15 + lVar23 + 0xb);
              }
                    /* WARNING: Does not return */
              UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(0,0x1382fa4);
              (*UNRECOVERED_JUMPTABLE_00)();
            }
            goto LAB_01383118;
          }
          lVar16 = lVar16 + 1;
          uVar19 = uVar19 + lVar16;
        }
        uVar11 = *(undefined8 *)(unaff_x26 + 0xb0);
        goto LAB_01381994;
      }
    }
    else {
      if ((*(uint *)(unaff_x26 + (ulong)*(uint *)(param_2 + 0xb) + 0x1b) >> 2 & 1) != 0)
      goto LAB_01383118;
      if (uVar10 < *(ulong *)(param_2 + 0x1f)) {
        lVar14 = *(long *)(param_2 + 0x27);
        uVar13 = (ulong)*(uint *)(param_2 + 0x2f);
        if (bVar2 < 0x16) {
          if (bVar2 < 0x13) {
            if (bVar2 == 0x11) goto LAB_01381a68;
            if (bVar2 == 0x12) {
              return (ulong)(uint)(*(char *)(lVar14 + uVar13 + uVar10) * 2);
            }
          }
          else {
            if (bVar2 == 0x13) {
              return (ulong)((uint)*(ushort *)(lVar14 + uVar13 + uVar10 * 2) * 2);
            }
            if (bVar2 == 0x14) {
              return (ulong)(uint)(*(short *)(lVar14 + uVar13 + uVar10 * 2) * 2);
            }
            if (bVar2 == 0x15) {
              uVar18 = *(uint *)(lVar14 + uVar13 + uVar10 * 4);
              if (uVar18 < 0x40000000) {
                return (ulong)(uVar18 * 2);
              }
              uVar10 = **(ulong **)(unaff_x26 + 0x1428);
              uVar13 = uVar10 + 0xc;
              if (uVar13 < **(ulong **)(unaff_x26 + 0x1430)) {
                uVar10 = uVar10 + 1;
                **(ulong **)(unaff_x26 + 0x1428) = uVar13;
              }
              else {
                uVar10 = FUN_01348560(param_2,0xc);
              }
              *(int *)(uVar10 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
              *(double *)(uVar10 + 3) = (double)uVar18;
              return uVar10;
            }
          }
        }
        else {
          if (bVar2 < 0x19) {
            if (bVar2 == 0x16) {
              iVar8 = *(int *)(lVar14 + uVar13 + uVar10 * 4);
              if (!SCARRY4(iVar8,iVar8)) {
                return (long)(iVar8 * 2);
              }
              uVar10 = **(ulong **)(unaff_x26 + 0x1428);
              uVar13 = uVar10 + 0xc;
              if (uVar13 < **(ulong **)(unaff_x26 + 0x1430)) {
                uVar10 = uVar10 + 1;
                **(ulong **)(unaff_x26 + 0x1428) = uVar13;
              }
              else {
                uVar10 = FUN_01348560(param_2,0xc);
              }
              *(int *)(uVar10 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
              *(double *)(uVar10 + 3) = (double)iVar8;
              return uVar10;
            }
            if (bVar2 == 0x17) {
              dVar29 = (double)*(float *)(lVar14 + uVar13 + uVar10 * 4);
            }
            else {
              if (bVar2 != 0x18) goto LAB_01383118;
              dVar29 = *(double *)(lVar14 + uVar13 + uVar10 * 8);
            }
LAB_01381af4:
            uVar10 = **(ulong **)(unaff_x26 + 0x1428);
            uVar13 = uVar10 + 0xc;
            if (uVar13 < **(ulong **)(unaff_x26 + 0x1430)) {
              uVar10 = uVar10 + 1;
              **(ulong **)(unaff_x26 + 0x1428) = uVar13;
            }
            else {
              uVar10 = FUN_01348560(param_2,0xc);
            }
            *(int *)(uVar10 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
            *(double *)(uVar10 + 3) = dVar29;
            return uVar10;
          }
          if (bVar2 == 0x19) {
LAB_01381a68:
            return (ulong)((uint)*(byte *)(lVar14 + uVar13 + uVar10) * 2);
          }
          if (bVar2 == 0x1a) {
            lVar14 = *(long *)(lVar14 + uVar13 + uVar10 * 8);
            if (lVar14 != 0) {
              uVar13 = **(long **)(unaff_x26 + 0x1428) + 0x10;
              if (uVar13 < **(ulong **)(unaff_x26 + 0x1430)) {
                uVar10 = **(long **)(unaff_x26 + 0x1428) + 1;
                **(ulong **)(unaff_x26 + 0x1428) = uVar13;
              }
              else {
                uVar10 = FUN_01348500(param_2,0x10);
              }
              *(int *)(uVar10 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x1c0);
              *(undefined4 *)(uVar10 + 3) = 2;
              *(long *)(uVar10 + 7) = lVar14;
              return uVar10;
            }
            uVar13 = **(long **)(unaff_x26 + 0x1428) + 8;
            if (uVar13 < **(ulong **)(unaff_x26 + 0x1430)) {
              uVar10 = **(long **)(unaff_x26 + 0x1428) + 1;
              **(ulong **)(unaff_x26 + 0x1428) = uVar13;
            }
            else {
              uVar10 = FUN_01348500(param_2,8);
            }
            *(int *)(uVar10 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x1c0);
            *(undefined4 *)(uVar10 + 3) = 0;
            return uVar10;
          }
          if (bVar2 == 0x1b) {
            lVar14 = *(long *)(lVar14 + uVar13 + uVar10 * 8);
            if (lVar14 == 0) {
              uVar13 = **(long **)(unaff_x26 + 0x1428) + 8;
              if (uVar13 < **(ulong **)(unaff_x26 + 0x1430)) {
                uVar10 = **(long **)(unaff_x26 + 0x1428) + 1;
                **(ulong **)(unaff_x26 + 0x1428) = uVar13;
              }
              else {
                uVar10 = FUN_01348500(param_2,8);
              }
              *(int *)(uVar10 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x1c0);
              *(undefined4 *)(uVar10 + 3) = 0;
              return uVar10;
            }
            uVar13 = **(long **)(unaff_x26 + 0x1428) + 0x10;
            if (uVar13 < **(ulong **)(unaff_x26 + 0x1430)) {
              uVar10 = **(long **)(unaff_x26 + 0x1428) + 1;
              **(ulong **)(unaff_x26 + 0x1428) = uVar13;
            }
            else {
              uVar10 = FUN_01348500(param_2,0x10);
            }
            *(int *)(uVar10 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x1c0);
            if (lVar14 < 1) {
              *(undefined4 *)(uVar10 + 3) = 3;
              *(long *)(uVar10 + 7) = -lVar14;
              return uVar10;
            }
            *(undefined4 *)(uVar10 + 3) = 2;
            *(long *)(uVar10 + 7) = lVar14;
            return uVar10;
          }
        }
        goto LAB_01383118;
      }
    }
LAB_01381980:
    if (uVar20 == 0x41b) {
      return uVar13;
    }
    if (0xfffffffd < uVar10) goto LAB_01383118;
  }
LAB_01381994:
  do {
    lVar16 = unaff_x26 + (ulong)*(uint *)(lVar14 + 0xf);
    if ((int)lVar16 == (int)uVar11) {
      return uVar13;
    }
    lVar14 = unaff_x26 + (ulong)*(uint *)(lVar16 + -1);
  } while (((0x411 < *(ushort *)(lVar14 + 7)) ||
           ((*(ushort *)(lVar14 + 7) == 0x411 &&
            (*(int *)(lVar16 + 0xb) == (int)*(undefined8 *)(unaff_x26 + 200))))) &&
          ((*(int *)(lVar16 + 7) == (int)*(undefined8 *)(unaff_x26 + 0x168) ||
           (*(int *)(lVar16 + 7) == (int)*(undefined8 *)(unaff_x26 + 1000)))));
LAB_01383118:
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2248));
LAB_01380950:
  uVar18 = *(int *)(lVar15 + lVar23 * 4 + 0x13) >> 1;
  uVar10 = (ulong)uVar18;
  if ((uVar18 >> 1 & 1) == 0) {
    bVar7 = (uVar18 >> 6 & 7) == 2;
    uVar13 = (ulong)*(byte *)(lVar14 + 4) + ((uVar10 & 0x1ff80000) >> 0x13);
    if (uVar13 < *(byte *)(lVar14 + 3)) {
      lVar14 = uVar13 * 4 + -1;
      if (bVar7) {
        uVar11 = *(undefined8 *)(unaff_x26 + (ulong)*(uint *)(lVar16 + lVar14) + 3);
        goto LAB_013809e4;
      }
      uVar13 = unaff_x26 + (ulong)*(uint *)(lVar16 + lVar14);
    }
    else {
      uVar19 = unaff_x26 + (ulong)*(uint *)(lVar16 + 3);
      if ((uVar19 & 1) == 0) {
        uVar19 = *(ulong *)(unaff_x26 + 0x168);
      }
      uVar13 = unaff_x26 + (ulong)*(uint *)(uVar19 + (uVar13 - *(byte *)(lVar14 + 3)) * 4 + 7);
      if (bVar7) {
        uVar11 = *(undefined8 *)(uVar13 + 3);
LAB_013809e4:
        uVar19 = **(ulong **)(unaff_x26 + 0x1428);
        uVar13 = uVar19 + 0xc;
        if (uVar13 < **(ulong **)(unaff_x26 + 0x1430)) {
          **(ulong **)(unaff_x26 + 0x1428) = uVar13;
          uVar13 = uVar19 + 1;
        }
        else {
          param_1 = FUN_01348560(param_1,0xc);
          uVar13 = param_1;
        }
        *(int *)(uVar13 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
        *(undefined8 *)(uVar13 + 3) = uVar11;
      }
    }
  }
  else {
    uVar13 = unaff_x26 + (ulong)*(uint *)(lVar15 + lVar23 * 4 + 0x17);
  }
  uVar9 = *(ulong *)(unaff_x26 + 0xa0);
LAB_01380a68:
  if ((uVar10 & 1) == 0) {
    return uVar13;
  }
  if (*(int *)(uVar13 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xcc8)) {
    lVar14 = unaff_x26 + (ulong)*(uint *)(uVar13 + 3);
    lVar16 = unaff_x26 + (ulong)*(uint *)(lVar14 + -1);
    if ((*(byte *)(lVar16 + 9) >> 1 & 1) != 0) {
      uVar13 = FUN_0133fcc0(0);
      return uVar13;
    }
    if ((int)lVar16 != (int)*(undefined8 *)(unaff_x26 + 0xca8)) {
      return uVar9;
    }
    if (*(int *)(lVar14 + 0x33) == (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
      uVar13 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
      iVar8 = *(int *)(uVar13 - 1);
      while (iVar8 == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
        uVar13 = unaff_x26 + (ulong)*(uint *)(uVar13 + 0x13);
        iVar8 = *(int *)(uVar13 - 1);
      }
      if ((uVar13 & 1) != 0) {
        lVar16 = unaff_x26 + (ulong)*(uint *)(uVar13 - 1);
        sVar3 = *(short *)(lVar16 + 7);
        if (sVar3 != 0x439) {
          if (sVar3 == 0x417) {
            uVar13 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
          }
          else {
            uVar13 = param_2;
            if ((int)lVar16 == (int)*(undefined8 *)(unaff_x26 + 0xca8)) goto LAB_01383118;
          }
        }
        uVar20 = *(ushort *)
                  (unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar13 + 0xf) + -1) + 7
                  );
        if (0x87 < uVar20 && uVar20 < 0x92) {
          uVar13 = FUN_01341080(param_1,lVar14,0);
          return uVar13;
        }
      }
    }
  }
  else {
    lVar14 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
    sVar3 = *(short *)(lVar14 + 7);
    if (sVar3 == 0x423) {
      if (*(int *)(uVar13 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x7b8)) {
        return unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
      }
    }
    else if (sVar3 == 0x439) {
      if (((*(int *)(uVar13 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x908)) &&
          (((bVar2 = *(byte *)(lVar14 + 9), (bVar2 & 0xc0) == 0xc0 ||
            ((*(uint *)(unaff_x26 + (ulong)*(uint *)(param_2 + 0xb) + 0x1b) & 0x1f) - 0xd < 4)) &&
           ((bVar2 & 1) == 0)))) &&
         (uVar13 = unaff_x26 + (ulong)*(uint *)(param_2 + 0x1b),
         (int)uVar13 != (int)*(undefined8 *)(unaff_x26 + 0xa8))) {
        if (*(int *)(uVar13 - 1) != (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
          return uVar13;
        }
        return unaff_x26 + (ulong)*(uint *)(uVar13 + 0xf);
      }
    }
    else if (((sVar3 == 0x411) && (*(int *)(uVar13 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x7b8)))
            && ((uVar13 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb), (uVar13 & 1) != 0 &&
                (*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar13 - 1) + 7) < 0x40)))) {
      return (ulong)(uint)(*(int *)(uVar13 + 7) * 2);
    }
  }
  goto LAB_01383118;
LAB_01381440:
  uVar18 = *(int *)(lVar16 + lVar24 * 4 + 0x13) >> 1;
  uVar10 = (ulong)uVar18;
  if ((uVar18 >> 1 & 1) != 0) {
    uVar9 = unaff_x26 + (ulong)*(uint *)(lVar16 + lVar24 * 4 + 0x17);
    goto LAB_0138154c;
  }
  bVar7 = (uVar18 >> 6 & 7) != 2;
  uVar9 = (ulong)*(byte *)(uVar19 + 4) + ((uVar10 & 0x1ff80000) >> 0x13);
  if (uVar9 < *(byte *)(uVar19 + 3)) {
    lVar16 = uVar9 * 4 + -1;
    if (bVar7) {
      uVar9 = unaff_x26 + (ulong)*(uint *)(lVar14 + lVar16);
      goto LAB_0138154c;
    }
    uVar11 = *(undefined8 *)(unaff_x26 + (ulong)*(uint *)(lVar14 + lVar16) + 3);
  }
  else {
    uVar22 = unaff_x26 + (ulong)*(uint *)(lVar14 + 3);
    if ((uVar22 & 1) == 0) {
      uVar22 = *(ulong *)(unaff_x26 + 0x168);
    }
    uVar9 = unaff_x26 + (ulong)*(uint *)(uVar22 + (uVar9 - *(byte *)(uVar19 + 3)) * 4 + 7);
    if (bVar7) goto LAB_0138154c;
    uVar11 = *(undefined8 *)(uVar9 + 3);
  }
  uVar9 = **(ulong **)(unaff_x26 + 0x1428);
  uVar19 = uVar9 + 0xc;
  if (uVar19 < **(ulong **)(unaff_x26 + 0x1430)) {
    **(ulong **)(unaff_x26 + 0x1428) = uVar19;
    uVar9 = uVar9 + 1;
  }
  else {
    param_1 = FUN_01348560(param_1,0xc);
    uVar13 = *(ulong *)(unaff_x26 + 0xa0);
    uVar9 = param_1;
  }
  *(int *)(uVar9 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
  *(undefined8 *)(uVar9 + 3) = uVar11;
LAB_0138154c:
  if ((uVar10 & 1) == 0) {
    return uVar9;
  }
  if (*(int *)(uVar9 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xcc8)) {
    lVar14 = unaff_x26 + (ulong)*(uint *)(uVar9 + 3);
    lVar16 = unaff_x26 + (ulong)*(uint *)(lVar14 + -1);
    if ((*(byte *)(lVar16 + 9) >> 1 & 1) != 0) {
      uVar13 = FUN_0133fcc0(0);
      return uVar13;
    }
    if ((int)lVar16 != (int)*(undefined8 *)(unaff_x26 + 0xca8)) {
      return uVar13;
    }
    if (*(int *)(lVar14 + 0x33) == (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
      uVar13 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
      iVar8 = *(int *)(uVar13 - 1);
      while (iVar8 == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
        uVar13 = unaff_x26 + (ulong)*(uint *)(uVar13 + 0x13);
        iVar8 = *(int *)(uVar13 - 1);
      }
      if ((uVar13 & 1) != 0) {
        lVar16 = unaff_x26 + (ulong)*(uint *)(uVar13 - 1);
        sVar3 = *(short *)(lVar16 + 7);
        if (sVar3 != 0x439) {
          if (sVar3 == 0x417) {
            uVar13 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
          }
          else {
            uVar13 = param_2;
            if ((int)lVar16 == (int)*(undefined8 *)(unaff_x26 + 0xca8)) goto LAB_01383118;
          }
        }
        uVar20 = *(ushort *)
                  (unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar13 + 0xf) + -1) + 7
                  );
        if (0x87 < uVar20 && uVar20 < 0x92) {
          uVar13 = FUN_01341080(param_1,lVar14,0);
          return uVar13;
        }
      }
    }
  }
  else {
    lVar14 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
    sVar3 = *(short *)(lVar14 + 7);
    if (sVar3 == 0x423) {
      if (*(int *)(uVar9 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x7b8)) {
        return unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
      }
    }
    else if (sVar3 == 0x439) {
      if ((*(int *)(uVar9 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x908)) &&
         ((((bVar2 = *(byte *)(lVar14 + 9), (bVar2 & 0xc0) == 0xc0 ||
            ((*(uint *)(unaff_x26 + (ulong)*(uint *)(param_2 + 0xb) + 0x1b) & 0x1f) - 0xd < 4)) &&
           ((bVar2 & 1) == 0)) &&
          (uVar13 = unaff_x26 + (ulong)*(uint *)(param_2 + 0x1b),
          (int)uVar13 != (int)*(undefined8 *)(unaff_x26 + 0xa8))))) {
        if (*(int *)(uVar13 - 1) != (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
          return uVar13;
        }
        return unaff_x26 + (ulong)*(uint *)(uVar13 + 0xf);
      }
    }
    else if (((sVar3 == 0x411) && (*(int *)(uVar9 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x7b8)))
            && ((uVar13 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb), (uVar13 & 1) != 0 &&
                (*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar13 - 1) + 7) < 0x40)))) {
      return (ulong)(uint)(*(int *)(uVar13 + 7) * 2);
    }
  }
  goto LAB_01383118;
}

