
/* WARNING: Removing unreachable block (ram,0x013c1350) */
/* WARNING: Removing unreachable block (ram,0x013c1374) */
/* WARNING: Removing unreachable block (ram,0x013c1364) */
/* WARNING: Removing unreachable block (ram,0x013c1380) */

ulong FUN_013c0ba0(ulong param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  byte bVar3;
  ushort uVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  code *pcVar8;
  bool bVar9;
  ulong uVar10;
  long lVar11;
  ushort uVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  int iVar18;
  undefined4 uVar19;
  uint uVar20;
  int iVar21;
  long lVar22;
  long unaff_x26;
  int iVar23;
  undefined8 uVar24;
  
  if ((param_1 & 1) != 0) {
    lVar13 = unaff_x26 + (ulong)*(uint *)(param_1 - 1);
    uVar12 = *(ushort *)(lVar13 + 7);
    if (0xa8 < uVar12) {
      if (uVar12 == 0xa9) {
        uVar24 = thunk_FUN_01349b90(param_2);
        uVar10 = FUN_013fc180(param_1,uVar24,param_1,2);
        return uVar10;
      }
      if (((param_2 & 1) != 0) &&
         (((uVar4 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(param_2 - 1) + 7), uVar4 != 0x42 ||
           (lVar15 = (long)*(double *)(param_2 + 3), *(double *)(param_2 + 3) != (double)lVar15)) ||
          (0x3ffffffffffffe < lVar15 + 0x1fffffffffffffU)))) {
        if (uVar4 == 0x40) {
LAB_013c0c6c:
          uVar17 = *(ulong *)(unaff_x26 + 0xa0);
          iVar18 = (int)*(undefined8 *)(unaff_x26 + 0xa8);
          uVar19 = (undefined4)*(undefined8 *)(unaff_x26 + 0x140);
          uVar10 = param_1;
          do {
            iVar14 = (int)param_2;
            if (uVar12 < 0x411) {
              if ((uVar12 != 0xaa) || ((*(byte *)(lVar13 + 9) & 0x24) != 0)) goto LAB_013c12bc;
              uVar10 = unaff_x26 + (ulong)*(uint *)(uVar10 + 3);
              if ((uVar10 & 1) == 0) {
                uVar10 = *(ulong *)(unaff_x26 + 0x410);
              }
              uVar16 = (ulong)(*(uint *)(param_2 + 3) >> 3);
              lVar15 = 0;
              while( true ) {
                uVar16 = uVar16 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar10 + 0xf) << 0x20) >>
                                  0x21) - 1U;
                uVar2 = uVar16 + 5;
                lVar11 = unaff_x26 + (ulong)*(uint *)(uVar10 + uVar2 * 4 + 7);
                if ((int)lVar11 == (int)uVar17) break;
                if (*(int *)(lVar11 + 3) == iVar14) {
                  if ((ulong)((long)((ulong)*(uint *)(uVar10 + 3) << 0x20) >> 0x21) <= uVar2) {
                    /* WARNING: Does not return */
                    pcVar8 = (code *)SoftwareBreakpoint(0,0x13c12f4);
                    (*pcVar8)();
                  }
                  uVar10 = unaff_x26 + (ulong)*(uint *)(lVar11 + 0xb);
                  if ((int)uVar10 != iVar18) {
                    uVar16 = (ulong)(uint)(*(int *)(lVar11 + 7) >> 1);
                    goto LAB_013c1188;
                  }
                  break;
                }
                lVar15 = lVar15 + 1;
                uVar16 = uVar16 + lVar15;
              }
            }
            else if ((*(uint *)(lVar13 + 0xb) >> 0x15 & 1) == 0) {
              lVar15 = unaff_x26 + (ulong)*(uint *)(lVar13 + 0x17);
              uVar20 = *(uint *)(lVar13 + 0xb) >> 10 & 0x3ff;
              if (uVar20 != 0) {
                if (uVar20 < 0x21) {
                  lVar11 = (long)(int)uVar20 * 3;
                  while (lVar11 != 0) {
                    lVar11 = lVar11 + -3;
                    if (*(int *)(lVar15 + lVar11 * 4 + 0xf) == iVar14) goto LAB_013c1078;
                  }
                }
                else {
                  iVar6 = *(short *)(lVar15 + 5) + -1;
                  iVar23 = 0;
                  iVar21 = iVar6;
                  do {
                    iVar1 = iVar23 + ((uint)(iVar21 - iVar23) >> 1);
                    if (*(uint *)(unaff_x26 +
                                  (ulong)*(uint *)(lVar15 + (long)(int)(((uint)(*(int *)(lVar15 + (
                                                  long)(iVar1 * 3) * 4 + 0x13) >> 1) >> 9 & 0x3ff) *
                                                  3) * 4 + 0xf) + 3) < *(uint *)(param_2 + 3)) {
                      iVar23 = iVar1 + 1;
                      iVar1 = iVar21;
                    }
                    iVar21 = iVar1;
                  } while (iVar23 != iVar21);
                  for (; iVar23 <= iVar6; iVar23 = iVar23 + 1) {
                    uVar7 = (uint)(*(int *)(lVar15 + (long)(iVar23 * 3) * 4 + 0x13) >> 1) >> 9 &
                            0x3ff;
                    lVar11 = (long)(int)(uVar7 * 3);
                    lVar22 = unaff_x26 + (ulong)*(uint *)(lVar15 + lVar11 * 4 + 0xf);
                    if (*(uint *)(lVar22 + 3) != *(uint *)(param_2 + 3)) break;
                    if ((int)lVar22 == iVar14) {
                      if (uVar7 < uVar20) goto LAB_013c1078;
                      break;
                    }
                  }
                }
              }
            }
            else {
              uVar16 = unaff_x26 + (ulong)*(uint *)(uVar10 + 3);
              if ((uVar16 & 1) == 0) {
                uVar16 = *(ulong *)(unaff_x26 + 0x410);
              }
              uVar10 = (ulong)(*(uint *)(param_2 + 3) >> 3);
              lVar15 = 0;
              while( true ) {
                uVar10 = uVar10 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar16 + 0xf) << 0x20) >>
                                  0x21) - 1U;
                lVar11 = uVar10 * 3;
                lVar22 = (lVar11 + 5) * 4;
                iVar23 = *(int *)(uVar16 + lVar22 + 7);
                if (iVar23 == (int)uVar17) break;
                if (iVar23 == iVar14) {
                  if ((ulong)((long)((ulong)*(uint *)(uVar16 + 3) << 0x20) >> 0x21) <= lVar11 + 6U)
                  {
                    /* WARNING: Does not return */
                    pcVar8 = (code *)SoftwareBreakpoint(0,0x13c144c);
                    (*pcVar8)();
                  }
                  uVar10 = unaff_x26 + (ulong)*(uint *)(uVar16 + lVar22 + 0xb);
                  uVar16 = (ulong)(uint)(*(int *)(uVar16 + lVar22 + 0xf) >> 1);
                  goto LAB_013c1188;
                }
                lVar15 = lVar15 + 1;
                uVar10 = uVar10 + lVar15;
              }
            }
            if (uVar12 == 0x41b) {
              uVar12 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(param_2 - 1) + 7);
              uVar20 = (uint)uVar12;
              if (((uVar12 < 0x40) && (iVar14 = *(int *)(param_2 + 7) * 2, iVar14 != 0)) &&
                 (iVar14 < 0x31)) {
                uVar10 = param_2;
                if ((uVar12 & 7) == 0) {
                  lVar15 = 0;
                  bVar9 = false;
                }
                else {
                  lVar15 = 0;
                  uVar20 = (uint)uVar12;
                  while( true ) {
                    while( true ) {
                      uVar7 = uVar20 & 7;
                      if (1 < uVar7) break;
                      if ((uVar20 & 7) == 0) {
                        bVar9 = false;
                        goto LAB_013c101c;
                      }
                      if ((uVar7 != 1) ||
                         (*(int *)(uVar10 + 0xf) != (int)*(undefined8 *)(unaff_x26 + 200)))
                      goto LAB_013c1398;
                      uVar10 = unaff_x26 + (ulong)*(uint *)(uVar10 + 0xb);
                      uVar20 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar10 - 1) + 7);
                    }
                    if (uVar7 == 2) break;
                    if (uVar7 == 3) {
                      uVar16 = unaff_x26 + (ulong)*(uint *)(uVar10 + 0xb);
                      lVar15 = lVar15 + ((long)((ulong)*(uint *)(uVar10 + 0xf) << 0x20) >> 0x21);
                      uVar20 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar16 - 1) + 7);
                      uVar10 = uVar16;
                    }
                    else {
                      if (uVar7 != 5) goto LAB_013c1398;
                      uVar10 = unaff_x26 + (ulong)*(uint *)(uVar10 + 0xb);
                      uVar20 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar10 - 1) + 7);
                    }
                  }
                  bVar9 = true;
                }
LAB_013c101c:
                if (bVar9) {
                  if ((uVar20 >> 4 & 1) != 0) {
LAB_013c1398:
                    /* WARNING: Subroutine does not return */
                    FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2580));
                  }
                  lVar11 = *(long *)(uVar10 + 0x13);
                }
                else {
                  lVar11 = uVar10 + 0xb;
                }
                if ((uVar20 >> 3 & 1) == 0) {
                  uVar12 = *(ushort *)(lVar11 + lVar15 * 2);
                }
                else {
                  uVar12 = (ushort)*(byte *)(lVar11 + lVar15);
                }
                if ((((uVar12 == 0x2d) || (uVar12 == 0x49)) || (uVar12 == 0x4e)) ||
                   ((0x2f < uVar12 && (uVar12 < 0x3a)))) goto LAB_013c12bc;
              }
            }
            uVar10 = unaff_x26 + (ulong)*(uint *)(lVar13 + 0xf);
            if ((int)uVar10 == (int)*(undefined8 *)(unaff_x26 + 0xb0)) {
              return uVar17;
            }
            lVar13 = unaff_x26 + (ulong)*(uint *)(uVar10 - 1);
            uVar12 = *(ushort *)(lVar13 + 7);
          } while( true );
        }
        if (uVar4 < 0x40) {
          if (((*(uint *)(param_2 + 3) & 0xc0000002) != 0) &&
             ((*(uint *)(param_2 + 3) >> 1 & 1) != 0)) {
            if ((uVar4 == 0x25) || (uVar4 == 0x2d)) {
              param_2 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
            }
            else if ((uVar4 >> 5 & 1) != 0) goto LAB_013c12bc;
            goto LAB_013c0c6c;
          }
        }
        else if (uVar4 == 0x43) {
          param_2 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
          goto LAB_013c0c6c;
        }
      }
    }
  }
  goto LAB_013c12bc;
LAB_013c1078:
  uVar20 = *(int *)(lVar15 + lVar11 * 4 + 0x13) >> 1;
  uVar16 = (ulong)uVar20;
  if ((uVar20 >> 1 & 1) == 0) {
    bVar9 = (uVar20 >> 6 & 7) == 2;
    uVar2 = (ulong)*(byte *)(lVar13 + 4) + ((uVar16 & 0x1ff80000) >> 0x13);
    if (uVar2 < *(byte *)(lVar13 + 3)) {
      lVar13 = uVar2 * 4 + -1;
      if (bVar9) {
        uVar24 = *(undefined8 *)(unaff_x26 + (ulong)*(uint *)(uVar10 + lVar13) + 3);
        goto LAB_013c110c;
      }
      uVar10 = unaff_x26 + (ulong)*(uint *)(uVar10 + lVar13);
    }
    else {
      uVar10 = unaff_x26 + (ulong)*(uint *)(uVar10 + 3);
      if ((uVar10 & 1) == 0) {
        uVar10 = *(ulong *)(unaff_x26 + 0x168);
      }
      uVar10 = unaff_x26 + (ulong)*(uint *)(uVar10 + (uVar2 - *(byte *)(lVar13 + 3)) * 4 + 7);
      if (bVar9) {
        uVar24 = *(undefined8 *)(uVar10 + 3);
LAB_013c110c:
        uVar10 = **(ulong **)(unaff_x26 + 0x1428);
        uVar2 = uVar10 + 0xc;
        if (uVar2 < **(ulong **)(unaff_x26 + 0x1430)) {
          uVar10 = uVar10 + 1;
          **(ulong **)(unaff_x26 + 0x1428) = uVar2;
        }
        else {
          uVar10 = FUN_01348560(param_1,0xc);
          uVar17 = *(ulong *)(unaff_x26 + 0xa0);
          iVar18 = (int)*(undefined8 *)(unaff_x26 + 0xa8);
          uVar19 = (undefined4)*(undefined8 *)(unaff_x26 + 0x140);
        }
        *(undefined4 *)(uVar10 - 1) = uVar19;
        *(undefined8 *)(uVar10 + 3) = uVar24;
      }
    }
  }
  else {
    uVar10 = unaff_x26 + (ulong)*(uint *)(lVar15 + lVar11 * 4 + 0x17);
  }
LAB_013c1188:
  if ((uVar16 & 1) != 0) {
    if (*(int *)(uVar10 - 1) != (int)*(undefined8 *)(unaff_x26 + 0xcc8)) {
      lVar13 = unaff_x26 + (ulong)*(uint *)(param_1 - 1);
      sVar5 = *(short *)(lVar13 + 7);
      if (sVar5 == 0x423) {
        if (*(int *)(uVar10 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x7b8)) {
          return unaff_x26 + (ulong)*(uint *)(param_1 + 0xb);
        }
      }
      else if (sVar5 == 0x439) {
        if ((*(int *)(uVar10 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x908)) &&
           ((((bVar3 = *(byte *)(lVar13 + 9), (bVar3 & 0xc0) == 0xc0 ||
              ((*(uint *)(unaff_x26 + (ulong)*(uint *)(param_1 + 0xb) + 0x1b) & 0x1f) - 0xd < 4)) &&
             ((bVar3 & 1) == 0)) &&
            (uVar10 = unaff_x26 + (ulong)*(uint *)(param_1 + 0x1b), (int)uVar10 != iVar18)))) {
          if (*(int *)(uVar10 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
            return unaff_x26 + (ulong)*(uint *)(uVar10 + 0xf);
          }
          return uVar10;
        }
      }
      else if (((sVar5 == 0x411) &&
               (*(int *)(uVar10 + 3) == (int)*(undefined8 *)(unaff_x26 + 0x7b8))) &&
              ((uVar10 = unaff_x26 + (ulong)*(uint *)(param_1 + 0xb), (uVar10 & 1) != 0 &&
               (*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar10 - 1) + 7) < 0x40)))) {
        return (ulong)(uint)(*(int *)(uVar10 + 7) * 2);
      }
LAB_013c12bc:
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2248));
    }
    lVar13 = unaff_x26 + (ulong)*(uint *)(uVar10 + 3);
    lVar15 = unaff_x26 + (ulong)*(uint *)(lVar13 + -1);
    if ((*(byte *)(lVar15 + 9) >> 1 & 1) == 0) {
      iVar14 = (int)*(undefined8 *)(unaff_x26 + 0xca8);
      uVar10 = uVar17;
      if ((int)lVar15 == iVar14) {
        if (*(int *)(lVar13 + 0x33) == iVar18) {
          uVar10 = unaff_x26 + (ulong)*(uint *)(param_1 - 1);
          iVar18 = *(int *)(uVar10 - 1);
          while (iVar18 == (int)*(undefined8 *)(unaff_x26 + 0xd0)) {
            uVar10 = unaff_x26 + (ulong)*(uint *)(uVar10 + 0x13);
            iVar18 = *(int *)(uVar10 - 1);
          }
          if ((uVar10 & 1) != 0) {
            lVar15 = unaff_x26 + (ulong)*(uint *)(uVar10 - 1);
            sVar5 = *(short *)(lVar15 + 7);
            if (sVar5 != 0x439) {
              if (sVar5 == 0x417) {
                uVar10 = unaff_x26 + (ulong)*(uint *)(param_1 + 0xb);
              }
              else {
                uVar10 = param_1;
                if ((int)lVar15 == iVar14) goto LAB_013c12bc;
              }
            }
            uVar12 = *(ushort *)
                      (unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar10 + 0xf) + -1)
                      + 7);
            if (0x87 < uVar12 && uVar12 < 0x92) {
              uVar10 = FUN_01341080(param_1,lVar13,0);
              return uVar10;
            }
          }
        }
        goto LAB_013c12bc;
      }
    }
    else {
      uVar10 = FUN_0133fcc0(0,lVar13);
    }
  }
  return uVar10;
}

