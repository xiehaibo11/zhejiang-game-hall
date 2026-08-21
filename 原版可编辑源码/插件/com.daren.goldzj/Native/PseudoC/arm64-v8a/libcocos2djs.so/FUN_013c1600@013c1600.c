
/* WARNING: Removing unreachable block (ram,0x013c1e38) */
/* WARNING: Removing unreachable block (ram,0x013c1e5c) */
/* WARNING: Removing unreachable block (ram,0x013c1e4c) */
/* WARNING: Removing unreachable block (ram,0x013c1e68) */

ulong FUN_013c1600(long param_1,ulong param_2,ulong param_3,undefined8 param_4)

{
  int iVar1;
  byte bVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  code *pcVar7;
  bool bVar8;
  long lVar9;
  ushort uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  int iVar18;
  undefined4 uVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  int iVar23;
  long unaff_x26;
  int iVar24;
  undefined8 uVar25;
  
  if ((param_3 & 1) != 0) {
    lVar12 = unaff_x26 + (ulong)*(uint *)(param_1 + -1);
    uVar10 = *(ushort *)(lVar12 + 7);
    if (0xa8 < uVar10) {
      if (uVar10 == 0xa9) {
        lVar12 = thunk_FUN_01349b90(param_2);
        if ((*(int *)(lVar12 + -1) != (int)*(undefined8 *)(unaff_x26 + 0xf8)) ||
           ((*(uint *)(lVar12 + 7) & 1) == 0)) {
          uVar17 = FUN_013fc180(param_1,lVar12,param_3,param_4);
          return uVar17;
        }
      }
      else if (((param_2 & 1) != 0) &&
              (((uVar3 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(param_2 - 1) + 7), uVar3 != 0x42
                || (lVar15 = (long)*(double *)(param_2 + 3),
                   *(double *)(param_2 + 3) != (double)lVar15)) ||
               (0x3ffffffffffffe < lVar15 + 0x1fffffffffffffU)))) {
        if (uVar3 == 0x40) {
LAB_013c16d4:
          uVar17 = *(ulong *)(unaff_x26 + 0xa0);
          iVar18 = (int)*(undefined8 *)(unaff_x26 + 0xa8);
          uVar19 = (undefined4)*(undefined8 *)(unaff_x26 + 0x140);
          lVar15 = param_1;
          do {
            iVar14 = (int)param_2;
            if (uVar10 < 0x411) {
              if ((uVar10 != 0xaa) || ((*(byte *)(lVar12 + 9) & 0x24) != 0)) goto LAB_013c1d9c;
              uVar13 = unaff_x26 + (ulong)*(uint *)(lVar15 + 3);
              if ((uVar13 & 1) == 0) {
                uVar13 = *(ulong *)(unaff_x26 + 0x410);
              }
              uVar16 = (ulong)(*(uint *)(param_2 + 3) >> 3);
              lVar15 = 0;
              while( true ) {
                uVar16 = uVar16 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar13 + 0xf) << 0x20) >>
                                  0x21) - 1U;
                uVar11 = uVar16 + 5;
                lVar22 = unaff_x26 + (ulong)*(uint *)(uVar13 + uVar11 * 4 + 7);
                if ((int)lVar22 == (int)uVar17) break;
                if (*(int *)(lVar22 + 3) == iVar14) {
                  if ((ulong)((long)((ulong)*(uint *)(uVar13 + 3) << 0x20) >> 0x21) <= uVar11) {
                    /* WARNING: Does not return */
                    pcVar7 = (code *)SoftwareBreakpoint(0,0x13c1ddc);
                    (*pcVar7)();
                  }
                  uVar13 = unaff_x26 + (ulong)*(uint *)(lVar22 + 0xb);
                  if ((int)uVar13 != iVar18) {
                    uVar16 = (ulong)(uint)(*(int *)(lVar22 + 7) >> 1);
                    goto LAB_013c1c3c;
                  }
                  break;
                }
                lVar15 = lVar15 + 1;
                uVar16 = uVar16 + lVar15;
              }
            }
            else if ((*(uint *)(lVar12 + 0xb) >> 0x15 & 1) == 0) {
              lVar22 = unaff_x26 + (ulong)*(uint *)(lVar12 + 0x17);
              uVar20 = *(uint *)(lVar12 + 0xb) >> 10 & 0x3ff;
              if (uVar20 != 0) {
                if (uVar20 < 0x21) {
                  lVar21 = (long)(int)uVar20 * 3;
                  while (lVar21 != 0) {
                    lVar21 = lVar21 + -3;
                    lVar9 = param_1;
                    if (*(int *)(lVar22 + lVar21 * 4 + 0xf) == iVar14) goto LAB_013c1b24;
                  }
                }
                else {
                  iVar5 = *(short *)(lVar22 + 5) + -1;
                  iVar24 = 0;
                  iVar23 = iVar5;
                  do {
                    iVar1 = iVar24 + ((uint)(iVar23 - iVar24) >> 1);
                    if (*(uint *)(unaff_x26 +
                                  (ulong)*(uint *)(lVar22 + (long)(int)(((uint)(*(int *)(lVar22 + (
                                                  long)(iVar1 * 3) * 4 + 0x13) >> 1) >> 9 & 0x3ff) *
                                                  3) * 4 + 0xf) + 3) < *(uint *)(param_2 + 3)) {
                      iVar24 = iVar1 + 1;
                      iVar1 = iVar23;
                    }
                    iVar23 = iVar1;
                  } while (iVar24 != iVar23);
                  for (; iVar24 <= iVar5; iVar24 = iVar24 + 1) {
                    uVar6 = (uint)(*(int *)(lVar22 + (long)(iVar24 * 3) * 4 + 0x13) >> 1) >> 9 &
                            0x3ff;
                    lVar9 = (long)(int)(uVar6 * 3);
                    lVar21 = unaff_x26 + (ulong)*(uint *)(lVar22 + lVar9 * 4 + 0xf);
                    if (*(uint *)(lVar21 + 3) != *(uint *)(param_2 + 3)) break;
                    if ((int)lVar21 == iVar14) {
                      lVar21 = lVar9;
                      if (uVar6 < uVar20) goto LAB_013c1b24;
                      break;
                    }
                  }
                }
              }
            }
            else {
              uVar16 = unaff_x26 + (ulong)*(uint *)(lVar15 + 3);
              if ((uVar16 & 1) == 0) {
                uVar16 = *(ulong *)(unaff_x26 + 0x410);
              }
              uVar13 = (ulong)(*(uint *)(param_2 + 3) >> 3);
              lVar15 = 0;
              while( true ) {
                uVar13 = uVar13 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar16 + 0xf) << 0x20) >>
                                  0x21) - 1U;
                lVar22 = uVar13 * 3;
                lVar21 = (lVar22 + 5) * 4;
                iVar24 = *(int *)(uVar16 + lVar21 + 7);
                if (iVar24 == (int)uVar17) break;
                if (iVar24 == iVar14) {
                  if ((ulong)((long)((ulong)*(uint *)(uVar16 + 3) << 0x20) >> 0x21) <= lVar22 + 6U)
                  {
                    /* WARNING: Does not return */
                    pcVar7 = (code *)SoftwareBreakpoint(0,0x13c1f40);
                    (*pcVar7)();
                  }
                  uVar13 = unaff_x26 + (ulong)*(uint *)(uVar16 + lVar21 + 0xb);
                  uVar16 = (ulong)(uint)(*(int *)(uVar16 + lVar21 + 0xf) >> 1);
                  goto LAB_013c1c3c;
                }
                lVar15 = lVar15 + 1;
                uVar13 = uVar13 + lVar15;
              }
            }
            if (uVar10 == 0x41b) {
              uVar10 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(param_2 - 1) + 7);
              uVar20 = (uint)uVar10;
              if (((uVar10 < 0x40) && (iVar14 = *(int *)(param_2 + 7) * 2, iVar14 != 0)) &&
                 (iVar14 < 0x31)) {
                uVar13 = param_2;
                if ((uVar10 & 7) == 0) {
                  lVar15 = 0;
                  bVar8 = false;
                }
                else {
                  lVar15 = 0;
                  uVar20 = (uint)uVar10;
                  while( true ) {
                    while( true ) {
                      uVar6 = uVar20 & 7;
                      if (1 < uVar6) break;
                      if ((uVar20 & 7) == 0) {
                        bVar8 = false;
                        goto LAB_013c1abc;
                      }
                      if ((uVar6 != 1) ||
                         (*(int *)(uVar13 + 0xf) != (int)*(undefined8 *)(unaff_x26 + 200)))
                      goto LAB_013c1e80;
                      uVar13 = unaff_x26 + (ulong)*(uint *)(uVar13 + 0xb);
                      uVar20 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar13 - 1) + 7);
                    }
                    if (uVar6 == 2) break;
                    if (uVar6 == 3) {
                      uVar16 = unaff_x26 + (ulong)*(uint *)(uVar13 + 0xb);
                      lVar15 = lVar15 + ((long)((ulong)*(uint *)(uVar13 + 0xf) << 0x20) >> 0x21);
                      uVar20 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar16 - 1) + 7);
                      uVar13 = uVar16;
                    }
                    else {
                      if (uVar6 != 5) goto LAB_013c1e80;
                      uVar13 = unaff_x26 + (ulong)*(uint *)(uVar13 + 0xb);
                      uVar20 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar13 - 1) + 7);
                    }
                  }
                  bVar8 = true;
                }
LAB_013c1abc:
                if (bVar8) {
                  if ((uVar20 >> 4 & 1) != 0) {
LAB_013c1e80:
                    /* WARNING: Subroutine does not return */
                    FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2580));
                  }
                  lVar22 = *(long *)(uVar13 + 0x13);
                }
                else {
                  lVar22 = uVar13 + 0xb;
                }
                if ((uVar20 >> 3 & 1) == 0) {
                  uVar10 = *(ushort *)(lVar22 + lVar15 * 2);
                }
                else {
                  uVar10 = (ushort)*(byte *)(lVar22 + lVar15);
                }
                if ((((uVar10 == 0x2d) || (uVar10 == 0x49)) || (uVar10 == 0x4e)) ||
                   ((0x2f < uVar10 && (uVar10 < 0x3a)))) goto LAB_013c1d9c;
              }
            }
            lVar15 = unaff_x26 + (ulong)*(uint *)(lVar12 + 0xf);
            if ((int)lVar15 == (int)*(undefined8 *)(unaff_x26 + 0xb0)) {
              if ((int)param_4 != 0) {
                return uVar17;
              }
                    /* WARNING: Subroutine does not return */
              FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x20b8));
            }
            lVar12 = unaff_x26 + (ulong)*(uint *)(lVar15 + -1);
            uVar10 = *(ushort *)(lVar12 + 7);
          } while( true );
        }
        if (uVar3 < 0x40) {
          if (((*(uint *)(param_2 + 3) & 0xc0000002) != 0) &&
             ((*(uint *)(param_2 + 3) >> 1 & 1) != 0)) {
            if ((uVar3 == 0x25) || (uVar3 == 0x2d)) {
              param_2 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
            }
            else if ((uVar3 >> 5 & 1) != 0) goto LAB_013c1d9c;
            goto LAB_013c16d4;
          }
        }
        else if (uVar3 == 0x43) {
          param_2 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
          goto LAB_013c16d4;
        }
      }
    }
  }
  goto LAB_013c1d9c;
LAB_013c1b24:
  uVar20 = *(int *)(lVar22 + lVar21 * 4 + 0x13) >> 1;
  uVar16 = (ulong)uVar20;
  if ((uVar20 >> 1 & 1) == 0) {
    bVar8 = (uVar20 >> 6 & 7) == 2;
    uVar13 = (ulong)*(byte *)(lVar12 + 4) + ((uVar16 & 0x1ff80000) >> 0x13);
    if (uVar13 < *(byte *)(lVar12 + 3)) {
      lVar12 = uVar13 * 4 + -1;
      if (bVar8) {
        uVar25 = *(undefined8 *)(unaff_x26 + (ulong)*(uint *)(lVar15 + lVar12) + 3);
        goto LAB_013c1bb8;
      }
      uVar13 = unaff_x26 + (ulong)*(uint *)(lVar15 + lVar12);
    }
    else {
      uVar11 = unaff_x26 + (ulong)*(uint *)(lVar15 + 3);
      if ((uVar11 & 1) == 0) {
        uVar11 = *(ulong *)(unaff_x26 + 0x168);
      }
      uVar13 = unaff_x26 + (ulong)*(uint *)(uVar11 + (uVar13 - *(byte *)(lVar12 + 3)) * 4 + 7);
      if (bVar8) {
        uVar25 = *(undefined8 *)(uVar13 + 3);
LAB_013c1bb8:
        uVar13 = **(ulong **)(unaff_x26 + 0x1428);
        uVar11 = uVar13 + 0xc;
        if (uVar11 < **(ulong **)(unaff_x26 + 0x1430)) {
          uVar13 = uVar13 + 1;
          **(ulong **)(unaff_x26 + 0x1428) = uVar11;
        }
        else {
          uVar13 = FUN_01348560(lVar9,0xc);
          uVar17 = *(ulong *)(unaff_x26 + 0xa0);
          iVar18 = (int)*(undefined8 *)(unaff_x26 + 0xa8);
          uVar19 = (undefined4)*(undefined8 *)(unaff_x26 + 0x140);
        }
        *(undefined4 *)(uVar13 - 1) = uVar19;
        *(undefined8 *)(uVar13 + 3) = uVar25;
      }
    }
  }
  else {
    uVar13 = unaff_x26 + (ulong)*(uint *)(lVar22 + lVar21 * 4 + 0x17);
  }
LAB_013c1c3c:
  if ((uVar16 & 1) == 0) {
    return uVar13;
  }
  if (*(int *)(uVar13 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xcc8)) {
    lVar12 = unaff_x26 + (ulong)*(uint *)(uVar13 + 3);
    lVar15 = unaff_x26 + (ulong)*(uint *)(lVar12 + -1);
    if ((*(byte *)(lVar15 + 9) >> 1 & 1) != 0) {
      uVar17 = FUN_0133fcc0(0,lVar12);
      return uVar17;
    }
    iVar14 = (int)*(undefined8 *)(unaff_x26 + 0xca8);
    if ((int)lVar15 != iVar14) {
      return uVar17;
    }
    if (*(int *)(lVar12 + 0x33) == iVar18) {
      uVar17 = unaff_x26 + (ulong)*(uint *)(param_3 - 1);
      iVar18 = *(int *)(uVar17 - 1);
      while (iVar18 == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
        uVar17 = unaff_x26 + (ulong)*(uint *)(uVar17 + 0x13);
        iVar18 = *(int *)(uVar17 - 1);
      }
      if ((uVar17 & 1) != 0) {
        lVar15 = unaff_x26 + (ulong)*(uint *)(uVar17 - 1);
        sVar4 = *(short *)(lVar15 + 7);
        if (sVar4 != 0x439) {
          if (sVar4 == 0x417) {
            uVar17 = unaff_x26 + (ulong)*(uint *)(param_3 + 0xb);
          }
          else {
            uVar17 = param_3;
            if ((int)lVar15 == iVar14) goto LAB_013c1d9c;
          }
        }
        uVar10 = *(ushort *)
                  (unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar17 + 0xf) + -1) + 7
                  );
        if (0x87 < uVar10 && uVar10 < 0x92) {
          uVar17 = FUN_01341080(param_1,lVar12,0);
          return uVar17;
        }
      }
    }
  }
  else {
    lVar12 = unaff_x26 + (ulong)*(uint *)(param_3 - 1);
    sVar4 = *(short *)(lVar12 + 7);
    if (sVar4 == 0x423) {
      if (*(int *)(uVar13 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x7b8)) {
        return unaff_x26 + (ulong)*(uint *)(param_3 + 0xb);
      }
    }
    else if (sVar4 == 0x439) {
      if ((*(int *)(uVar13 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x908)) &&
         ((((bVar2 = *(byte *)(lVar12 + 9), (bVar2 & 0xc0) == 0xc0 ||
            ((*(uint *)(unaff_x26 + (ulong)*(uint *)(param_3 + 0xb) + 0x1b) & 0x1f) - 0xd < 4)) &&
           ((bVar2 & 1) == 0)) &&
          (uVar17 = unaff_x26 + (ulong)*(uint *)(param_3 + 0x1b), (int)uVar17 != iVar18)))) {
        if (*(int *)(uVar17 - 1) != (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
          return uVar17;
        }
        return unaff_x26 + (ulong)*(uint *)(uVar17 + 0xf);
      }
    }
    else if (((sVar4 == 0x411) && (*(int *)(uVar13 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x7b8)))
            && ((uVar17 = unaff_x26 + (ulong)*(uint *)(param_3 + 0xb), (uVar17 & 1) != 0 &&
                (*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar17 - 1) + 7) < 0x40)))) {
      return (ulong)(uint)(*(int *)(uVar17 + 7) * 2);
    }
  }
LAB_013c1d9c:
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(4,*(undefined8 *)(unaff_x26 + 0x2448));
}

