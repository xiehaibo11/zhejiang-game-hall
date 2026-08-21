
/* WARNING: Removing unreachable block (ram,0x0139b188) */
/* WARNING: Removing unreachable block (ram,0x0139b1b4) */
/* WARNING: Removing unreachable block (ram,0x0139b1a4) */
/* WARNING: Removing unreachable block (ram,0x0139b1c0) */

ulong FUN_0139a8e0(ulong param_1,ulong param_2)

{
  ulong uVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  byte bVar7;
  code *pcVar8;
  ulong uVar9;
  long lVar10;
  ushort uVar11;
  uint uVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  int iVar18;
  int iVar19;
  long unaff_x26;
  undefined8 unaff_x27;
  
  if ((param_2 & 1) != 0) {
    lVar10 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
    uVar11 = *(ushort *)(lVar10 + 7);
    if (0xa8 < uVar11) {
      if (uVar11 == 0xa9) {
        thunk_FUN_01349b90();
      }
      else {
        if ((param_1 & 1) == 0) {
          uVar15 = (long)(param_1 << 0x20) >> 0x21;
        }
        else {
          uVar3 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(param_1 - 1) + 7);
          if (((uVar3 != 0x42) ||
              (uVar15 = (ulong)*(double *)(param_1 + 3),
              *(double *)(param_1 + 3) != (double)(long)uVar15)) ||
             (0x3ffffffffffffe < uVar15 + 0x1fffffffffffff)) {
            uVar15 = param_1;
            if (uVar3 == 0x40) {
LAB_0139a9bc:
              uVar9 = param_2;
              do {
                iVar14 = (int)uVar15;
                if (uVar11 < 0x411) {
                  if ((uVar11 != 0xaa) || ((*(byte *)(lVar10 + 9) & 0x24) != 0)) goto LAB_0139b240;
                  uVar9 = unaff_x26 + (ulong)*(uint *)(uVar9 + 3);
                  if ((uVar9 & 1) == 0) {
                    uVar9 = *(ulong *)(unaff_x26 + 0x410);
                  }
                  uVar17 = (ulong)(*(uint *)(uVar15 + 3) >> 3);
                  lVar13 = 0;
                  while( true ) {
                    uVar17 = uVar17 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar9 + 0xf) << 0x20) >>
                                      0x21) - 1U;
                    uVar1 = uVar17 + 5;
                    lVar16 = unaff_x26 + (ulong)*(uint *)(uVar9 + uVar1 * 4 + 7);
                    if ((int)lVar16 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) break;
                    if (*(int *)(lVar16 + 3) == iVar14) {
                      if ((ulong)((long)((ulong)*(uint *)(uVar9 + 3) << 0x20) >> 0x21) <= uVar1) {
                    /* WARNING: Does not return */
                        pcVar8 = (code *)SoftwareBreakpoint(0,0x139b144);
                        (*pcVar8)();
                      }
                      if (*(int *)(lVar16 + 0xb) != (int)*(undefined8 *)(unaff_x26 + 0xa8))
                      goto LAB_0139b100;
                      break;
                    }
                    lVar13 = lVar13 + 1;
                    uVar17 = uVar17 + lVar13;
                  }
                }
                else if ((*(uint *)(lVar10 + 0xb) >> 0x15 & 1) == 0) {
                  lVar13 = unaff_x26 + (ulong)*(uint *)(lVar10 + 0x17);
                  uVar12 = *(uint *)(lVar10 + 0xb) >> 10 & 0x3ff;
                  if (uVar12 != 0) {
                    if (uVar12 < 0x21) {
                      lVar16 = (long)(int)uVar12 * 3;
                      while (lVar16 != 0) {
                        lVar16 = lVar16 + -3;
                        if (*(int *)(lVar13 + lVar16 * 4 + 0xf) == iVar14) goto LAB_0139b100;
                      }
                    }
                    else {
                      iVar4 = *(short *)(lVar13 + 5) + -1;
                      iVar19 = 0;
                      iVar18 = iVar4;
                      do {
                        iVar2 = iVar19 + ((uint)(iVar18 - iVar19) >> 1);
                        if (*(uint *)(unaff_x26 +
                                      (ulong)*(uint *)(lVar13 + (long)(int)(((uint)(*(int *)(lVar13 
                                                  + (long)(iVar2 * 3) * 4 + 0x13) >> 1) >> 9 & 0x3ff
                                                  ) * 3) * 4 + 0xf) + 3) < *(uint *)(uVar15 + 3)) {
                          iVar19 = iVar2 + 1;
                          iVar2 = iVar18;
                        }
                        iVar18 = iVar2;
                      } while (iVar19 != iVar18);
                      for (; iVar19 <= iVar4; iVar19 = iVar19 + 1) {
                        uVar5 = (uint)(*(int *)(lVar13 + (long)(iVar19 * 3) * 4 + 0x13) >> 1) >> 9 &
                                0x3ff;
                        lVar16 = unaff_x26 +
                                 (ulong)*(uint *)(lVar13 + (long)(int)(uVar5 * 3) * 4 + 0xf);
                        if (*(uint *)(lVar16 + 3) != *(uint *)(uVar15 + 3)) break;
                        if ((int)lVar16 == iVar14) {
                          if (uVar5 < uVar12) goto LAB_0139b100;
                          break;
                        }
                      }
                    }
                  }
                }
                else {
                  uVar9 = unaff_x26 + (ulong)*(uint *)(uVar9 + 3);
                  if ((uVar9 & 1) == 0) {
                    uVar9 = *(ulong *)(unaff_x26 + 0x410);
                  }
                  uVar17 = (ulong)(*(uint *)(uVar15 + 3) >> 3);
                  lVar13 = 0;
                  while( true ) {
                    uVar17 = uVar17 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar9 + 0xf) << 0x20) >>
                                      0x21) - 1U;
                    iVar19 = *(int *)(uVar9 + (uVar17 * 3 + 5) * 4 + 7);
                    if (iVar19 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) break;
                    if (iVar19 == iVar14) goto LAB_0139b100;
                    lVar13 = lVar13 + 1;
                    uVar17 = uVar17 + lVar13;
                  }
                }
                if (uVar11 == 0x41b) {
                  uVar11 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar15 - 1) + 7);
                  uVar12 = (uint)uVar11;
                  if (((uVar11 < 0x40) && (iVar14 = *(int *)(uVar15 + 7) * 2, iVar14 != 0)) &&
                     (iVar14 < 0x31)) {
                    uVar9 = uVar15;
                    if ((uVar11 & 7) == 0) {
                      lVar13 = 0;
                      bVar6 = false;
                    }
                    else {
                      lVar13 = 0;
                      while( true ) {
                        while (uVar5 = uVar12 & 7, uVar5 < 2) {
                          if (uVar5 == 0) {
                            bVar6 = false;
                            goto LAB_0139ad30;
                          }
                          if ((uVar5 != 1) ||
                             (*(int *)(uVar9 + 0xf) != (int)*(undefined8 *)(unaff_x26 + 200)))
                          goto LAB_0139b1d8;
                          uVar9 = unaff_x26 + (ulong)*(uint *)(uVar9 + 0xb);
                          uVar12 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar9 - 1) + 7);
                        }
                        if (uVar5 == 2) break;
                        if (uVar5 == 3) {
                          uVar17 = unaff_x26 + (ulong)*(uint *)(uVar9 + 0xb);
                          lVar13 = lVar13 + ((long)((ulong)*(uint *)(uVar9 + 0xf) << 0x20) >> 0x21);
                          uVar12 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar17 - 1) + 7);
                          uVar9 = uVar17;
                        }
                        else {
                          if (uVar5 != 5) goto LAB_0139b1d8;
                          uVar9 = unaff_x26 + (ulong)*(uint *)(uVar9 + 0xb);
                          uVar12 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar9 - 1) + 7);
                        }
                      }
                      bVar6 = true;
                    }
LAB_0139ad30:
                    if (bVar6) {
                      if ((uVar12 >> 4 & 1) != 0) {
LAB_0139b1d8:
                    /* WARNING: Subroutine does not return */
                        FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2580),param_2,param_1,uVar15,
                                     unaff_x27);
                      }
                      lVar16 = *(long *)(uVar9 + 0x13);
                    }
                    else {
                      lVar16 = uVar9 + 0xb;
                    }
                    if ((uVar12 >> 3 & 1) == 0) {
                      uVar11 = *(ushort *)(lVar16 + lVar13 * 2);
                    }
                    else {
                      uVar11 = (ushort)*(byte *)(lVar16 + lVar13);
                    }
                    if (((uVar11 == 0x2d) || (uVar11 == 0x49)) ||
                       ((uVar11 == 0x4e || ((0x2f < uVar11 && (uVar11 < 0x3a))))))
                    goto LAB_0139b240;
                  }
                }
                uVar9 = unaff_x26 + (ulong)*(uint *)(lVar10 + 0xf);
                if ((int)uVar9 == (int)*(undefined8 *)(unaff_x26 + 0xb0)) goto LAB_0139b108;
                lVar10 = unaff_x26 + (ulong)*(uint *)(uVar9 - 1);
                uVar11 = *(ushort *)(lVar10 + 7);
              } while( true );
            }
            if (0x3f < uVar3) {
              if (uVar3 != 0x43) goto LAB_0139b240;
              uVar15 = unaff_x26 + (ulong)*(uint *)(param_1 + 0xb);
              goto LAB_0139a9bc;
            }
            uVar12 = *(uint *)(param_1 + 3);
            if ((uVar12 & 0xc0000002) != 0) {
              if ((uVar12 >> 1 & 1) == 0) goto LAB_0139b240;
              if ((uVar3 == 0x25) || (uVar3 == 0x2d)) {
                uVar15 = unaff_x26 + (ulong)*(uint *)(param_1 + 0xb);
              }
              else if ((uVar3 >> 5 & 1) != 0) goto LAB_0139b240;
              goto LAB_0139a9bc;
            }
            uVar15 = (ulong)(uVar12 >> 3) & 0xffffff;
          }
        }
        while (0x410 < uVar11) {
          bVar7 = *(byte *)(lVar10 + 10) >> 3;
          if (0xe < bVar7) {
            if (bVar7 < 0x16) {
              if (bVar7 < 0x12) {
                if (bVar7 == 0xf) {
                  if (*(uint *)(unaff_x26 + (ulong)*(uint *)(param_2 + 0xb) + 7) <= uVar15)
                  goto LAB_0139af5c;
                  goto LAB_0139b100;
                }
                if (bVar7 == 0x10) {
                  if (*(uint *)(unaff_x26 + (ulong)*(uint *)(param_2 + 0xb) + 7) <= uVar15)
                  goto LAB_0139afb4;
                  goto LAB_0139b100;
                }
                if (bVar7 != 0x11) break;
              }
              else if (bVar7 < 0x14) {
                if ((bVar7 != 0x12) && (bVar7 != 0x13)) break;
              }
              else if ((bVar7 != 0x14) && (bVar7 != 0x15)) break;
            }
            else if (bVar7 < 0x19) {
              if (((bVar7 != 0x16) && (bVar7 != 0x17)) && (bVar7 != 0x18)) break;
            }
            else if (bVar7 < 0x1b) {
              if ((bVar7 != 0x19) && (bVar7 != 0x1a)) break;
            }
            else if (bVar7 != 0x1b) {
              if (bVar7 == 0x1c) goto LAB_0139b0b8;
              break;
            }
            if (((*(uint *)(unaff_x26 + (ulong)*(uint *)(param_2 + 0xb) + 0x1b) >> 2 & 1) == 0) &&
               (uVar15 < *(ulong *)(param_2 + 0x1f))) {
LAB_0139b100:
              iVar14 = (int)*(undefined8 *)(unaff_x26 + 0xb8);
            }
            else {
LAB_0139b108:
              iVar14 = (int)*(undefined8 *)(unaff_x26 + 0xc0);
            }
            if (iVar14 != (int)*(undefined8 *)(unaff_x26 + 0xb8)) {
              param_1 = *(ulong *)(unaff_x26 + 0xa0);
            }
            return param_1;
          }
          if (bVar7 < 6) {
            if (bVar7 < 3) {
              if (((bVar7 == 0) || (bVar7 == 1)) || (bVar7 == 2)) goto LAB_0139af5c;
              break;
            }
            if (bVar7 == 3) goto LAB_0139af5c;
            if ((bVar7 != 4) && (bVar7 != 5)) break;
            lVar13 = unaff_x26 + (ulong)*(uint *)(param_2 + 7);
            if (uVar15 < (ulong)((long)((ulong)*(uint *)(lVar13 + 3) << 0x20) >> 0x21)) {
              if (*(long *)(lVar13 + uVar15 * 8 + 7) == -0x8000000080001) goto LAB_0139b0b8;
              goto LAB_0139b100;
            }
LAB_0139af74:
            if (0xfffffffe < uVar15) break;
          }
          else if (bVar7 < 9) {
            if (((bVar7 != 6) && (bVar7 != 7)) && (bVar7 != 8)) break;
LAB_0139af5c:
            lVar13 = unaff_x26 + (ulong)*(uint *)(param_2 + 7);
            if ((ulong)((long)((ulong)*(uint *)(lVar13 + 3) << 0x20) >> 0x21) <= uVar15)
            goto LAB_0139af74;
            if (*(int *)(lVar13 + uVar15 * 4 + 7) != (int)*(undefined8 *)(unaff_x26 + 0xa8))
            goto LAB_0139b100;
          }
          else {
            if (bVar7 < 0xb) {
              if ((bVar7 == 9) || (bVar7 == 10)) goto LAB_0139af5c;
              break;
            }
            if (bVar7 == 0xb) goto LAB_0139af5c;
            if (bVar7 != 0xc) break;
LAB_0139afb4:
            if (0xfffffffe < uVar15) break;
            lVar16 = unaff_x26 + (ulong)*(uint *)(param_2 + 7);
            uVar12 = *(uint *)(lVar16 + 0xf);
            *(undefined8 *)(unaff_x26 + 0x40) = 0x139aff8;
            *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
            uVar9 = (**(code **)(unaff_x26 + 0x1080))();
            *(undefined8 *)(unaff_x26 + 0x38) = 0;
            uVar9 = uVar9 & 0xffffffff;
            lVar13 = 0;
            while( true ) {
              uVar9 = uVar9 & ((long)(unaff_x26 + (ulong)uVar12 << 0x20) >> 0x21) - 1U;
              uVar17 = unaff_x26 + (ulong)*(uint *)(lVar16 + (uVar9 * 3 + 4) * 4 + 7);
              if ((int)uVar17 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) break;
              if ((uVar17 & 1) == 0) {
                if ((long)(uVar17 << 0x20) >> 0x21 == uVar15) goto LAB_0139b100;
              }
              else if (((int)uVar17 != (int)*(undefined8 *)(unaff_x26 + 0xa8)) &&
                      (*(double *)(uVar17 + 3) == (double)(long)uVar15)) goto LAB_0139b100;
              lVar13 = lVar13 + 1;
              uVar9 = uVar9 + lVar13;
            }
          }
LAB_0139b0b8:
          param_2 = unaff_x26 + (ulong)*(uint *)(lVar10 + 0xf);
          if ((int)param_2 == (int)*(undefined8 *)(unaff_x26 + 0xb0)) goto LAB_0139b108;
          lVar10 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
          uVar11 = *(ushort *)(lVar10 + 7);
        }
      }
    }
  }
LAB_0139b240:
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x1e18),param_1);
}

