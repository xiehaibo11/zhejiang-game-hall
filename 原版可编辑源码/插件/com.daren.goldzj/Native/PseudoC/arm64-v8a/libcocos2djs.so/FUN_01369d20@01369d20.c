
/* WARNING: Removing unreachable block (ram,0x0136a5ac) */
/* WARNING: Removing unreachable block (ram,0x0136a5d8) */
/* WARNING: Removing unreachable block (ram,0x0136a5c8) */
/* WARNING: Removing unreachable block (ram,0x0136a5e4) */

undefined8 FUN_01369d20(ulong param_1,ulong param_2)

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
  undefined8 uVar10;
  long lVar11;
  ushort uVar12;
  uint uVar13;
  long lVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  int iVar19;
  int iVar20;
  long unaff_x26;
  undefined8 unaff_x27;
  
  if ((param_1 & 1) != 0) {
    lVar11 = unaff_x26 + (ulong)*(uint *)(param_1 - 1);
    uVar12 = *(ushort *)(lVar11 + 7);
    if (0xa8 < uVar12) {
      if (uVar12 == 0xa9) {
        lVar11 = thunk_FUN_01349b90(param_2);
        if ((*(int *)(lVar11 + -1) == (int)*(undefined8 *)(unaff_x26 + 0xf8)) &&
           ((*(uint *)(lVar11 + 7) & 1) != 0)) {
LAB_0136a548:
          uVar10 = *(undefined8 *)(unaff_x26 + 0xc0);
        }
        else {
          uVar10 = FUN_013fd060(param_1,lVar11);
        }
      }
      else {
        if ((param_2 & 1) == 0) {
          uVar16 = (long)(param_2 << 0x20) >> 0x21;
        }
        else {
          uVar3 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(param_2 - 1) + 7);
          if (((uVar3 != 0x42) ||
              (uVar16 = (ulong)*(double *)(param_2 + 3),
              *(double *)(param_2 + 3) != (double)(long)uVar16)) ||
             (0x3ffffffffffffe < uVar16 + 0x1fffffffffffff)) {
            uVar16 = param_2;
            if (uVar3 == 0x40) {
LAB_01369dfc:
              uVar9 = param_1;
              do {
                iVar15 = (int)uVar16;
                if (uVar12 < 0x411) {
                  if ((uVar12 != 0xaa) || ((*(byte *)(lVar11 + 9) & 0x24) != 0)) goto LAB_0136a68c;
                  uVar9 = unaff_x26 + (ulong)*(uint *)(uVar9 + 3);
                  if ((uVar9 & 1) == 0) {
                    uVar9 = *(ulong *)(unaff_x26 + 0x410);
                  }
                  uVar18 = (ulong)(*(uint *)(uVar16 + 3) >> 3);
                  lVar14 = 0;
                  while( true ) {
                    uVar18 = uVar18 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar9 + 0xf) << 0x20) >>
                                      0x21) - 1U;
                    uVar1 = uVar18 + 5;
                    lVar17 = unaff_x26 + (ulong)*(uint *)(uVar9 + uVar1 * 4 + 7);
                    if ((int)lVar17 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) break;
                    if (*(int *)(lVar17 + 3) == iVar15) {
                      if ((ulong)((long)((ulong)*(uint *)(uVar9 + 3) << 0x20) >> 0x21) <= uVar1) {
                    /* WARNING: Does not return */
                        pcVar8 = (code *)SoftwareBreakpoint(0,0x136a568);
                        (*pcVar8)();
                      }
                      if (*(int *)(lVar17 + 0xb) != (int)*(undefined8 *)(unaff_x26 + 0xa8))
                      goto LAB_0136a538;
                      break;
                    }
                    lVar14 = lVar14 + 1;
                    uVar18 = uVar18 + lVar14;
                  }
                }
                else if ((*(uint *)(lVar11 + 0xb) >> 0x15 & 1) == 0) {
                  lVar14 = unaff_x26 + (ulong)*(uint *)(lVar11 + 0x17);
                  uVar13 = *(uint *)(lVar11 + 0xb) >> 10 & 0x3ff;
                  if (uVar13 != 0) {
                    if (uVar13 < 0x21) {
                      lVar17 = (long)(int)uVar13 * 3;
                      while (lVar17 != 0) {
                        lVar17 = lVar17 + -3;
                        if (*(int *)(lVar14 + lVar17 * 4 + 0xf) == iVar15) goto LAB_0136a538;
                      }
                    }
                    else {
                      iVar4 = *(short *)(lVar14 + 5) + -1;
                      iVar20 = 0;
                      iVar19 = iVar4;
                      do {
                        iVar2 = iVar20 + ((uint)(iVar19 - iVar20) >> 1);
                        if (*(uint *)(unaff_x26 +
                                      (ulong)*(uint *)(lVar14 + (long)(int)(((uint)(*(int *)(lVar14 
                                                  + (long)(iVar2 * 3) * 4 + 0x13) >> 1) >> 9 & 0x3ff
                                                  ) * 3) * 4 + 0xf) + 3) < *(uint *)(uVar16 + 3)) {
                          iVar20 = iVar2 + 1;
                          iVar2 = iVar19;
                        }
                        iVar19 = iVar2;
                      } while (iVar20 != iVar19);
                      for (; iVar20 <= iVar4; iVar20 = iVar20 + 1) {
                        uVar5 = (uint)(*(int *)(lVar14 + (long)(iVar20 * 3) * 4 + 0x13) >> 1) >> 9 &
                                0x3ff;
                        lVar17 = unaff_x26 +
                                 (ulong)*(uint *)(lVar14 + (long)(int)(uVar5 * 3) * 4 + 0xf);
                        if (*(uint *)(lVar17 + 3) != *(uint *)(uVar16 + 3)) break;
                        if ((int)lVar17 == iVar15) {
                          if (uVar5 < uVar13) goto LAB_0136a538;
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
                  uVar18 = (ulong)(*(uint *)(uVar16 + 3) >> 3);
                  lVar14 = 0;
                  while( true ) {
                    uVar18 = uVar18 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar9 + 0xf) << 0x20) >>
                                      0x21) - 1U;
                    iVar20 = *(int *)(uVar9 + (uVar18 * 3 + 5) * 4 + 7);
                    if (iVar20 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) break;
                    if (iVar20 == iVar15) goto LAB_0136a538;
                    lVar14 = lVar14 + 1;
                    uVar18 = uVar18 + lVar14;
                  }
                }
                if (uVar12 == 0x41b) {
                  uVar12 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar16 - 1) + 7);
                  uVar13 = (uint)uVar12;
                  if (((uVar12 < 0x40) && (iVar15 = *(int *)(uVar16 + 7) * 2, iVar15 != 0)) &&
                     (iVar15 < 0x31)) {
                    uVar9 = uVar16;
                    if ((uVar12 & 7) == 0) {
                      lVar14 = 0;
                      bVar6 = false;
                    }
                    else {
                      lVar14 = 0;
                      while( true ) {
                        while (uVar5 = uVar13 & 7, uVar5 < 2) {
                          if (uVar5 == 0) {
                            bVar6 = false;
                            goto LAB_0136a170;
                          }
                          if ((uVar5 != 1) ||
                             (*(int *)(uVar9 + 0xf) != (int)*(undefined8 *)(unaff_x26 + 200)))
                          goto LAB_0136a5fc;
                          uVar9 = unaff_x26 + (ulong)*(uint *)(uVar9 + 0xb);
                          uVar13 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar9 - 1) + 7);
                        }
                        if (uVar5 == 2) break;
                        if (uVar5 == 3) {
                          uVar18 = unaff_x26 + (ulong)*(uint *)(uVar9 + 0xb);
                          lVar14 = lVar14 + ((long)((ulong)*(uint *)(uVar9 + 0xf) << 0x20) >> 0x21);
                          uVar13 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar18 - 1) + 7);
                          uVar9 = uVar18;
                        }
                        else {
                          if (uVar5 != 5) goto LAB_0136a5fc;
                          uVar9 = unaff_x26 + (ulong)*(uint *)(uVar9 + 0xb);
                          uVar13 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar9 - 1) + 7);
                        }
                      }
                      bVar6 = true;
                    }
LAB_0136a170:
                    if (bVar6) {
                      if ((uVar13 >> 4 & 1) != 0) {
LAB_0136a5fc:
                    /* WARNING: Subroutine does not return */
                        FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2580),param_1,param_2,uVar16,
                                     unaff_x27);
                      }
                      lVar17 = *(long *)(uVar9 + 0x13);
                    }
                    else {
                      lVar17 = uVar9 + 0xb;
                    }
                    if ((uVar13 >> 3 & 1) == 0) {
                      uVar12 = *(ushort *)(lVar17 + lVar14 * 2);
                    }
                    else {
                      uVar12 = (ushort)*(byte *)(lVar17 + lVar14);
                    }
                    if (((uVar12 == 0x2d) || (uVar12 == 0x49)) ||
                       ((uVar12 == 0x4e || ((0x2f < uVar12 && (uVar12 < 0x3a))))))
                    goto LAB_0136a68c;
                  }
                }
                uVar9 = unaff_x26 + (ulong)*(uint *)(lVar11 + 0xf);
                if ((int)uVar9 == (int)*(undefined8 *)(unaff_x26 + 0xb0)) goto LAB_0136a548;
                lVar11 = unaff_x26 + (ulong)*(uint *)(uVar9 - 1);
                uVar12 = *(ushort *)(lVar11 + 7);
              } while( true );
            }
            if (0x3f < uVar3) {
              if (uVar3 != 0x43) goto LAB_0136a68c;
              uVar16 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
              goto LAB_01369dfc;
            }
            uVar13 = *(uint *)(param_2 + 3);
            if ((uVar13 & 0xc0000002) != 0) {
              if ((uVar13 >> 1 & 1) == 0) goto LAB_0136a68c;
              if ((uVar3 == 0x25) || (uVar3 == 0x2d)) {
                uVar16 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
              }
              else if ((uVar3 >> 5 & 1) != 0) goto LAB_0136a68c;
              goto LAB_01369dfc;
            }
            uVar16 = (ulong)(uVar13 >> 3) & 0xffffff;
          }
        }
        while( true ) {
          if (uVar12 < 0x411) goto LAB_0136a68c;
          bVar7 = *(byte *)(lVar11 + 10) >> 3;
          if (0xe < bVar7) break;
          if (bVar7 < 6) {
            if (bVar7 < 3) {
              if (((bVar7 == 0) || (bVar7 == 1)) || (bVar7 == 2)) goto LAB_0136a3a4;
              goto LAB_0136a68c;
            }
            if (bVar7 == 3) goto LAB_0136a3a4;
            if ((bVar7 != 4) && (bVar7 != 5)) goto LAB_0136a68c;
            lVar14 = unaff_x26 + (ulong)*(uint *)(param_1 + 7);
            if (uVar16 < (ulong)((long)((ulong)*(uint *)(lVar14 + 3) << 0x20) >> 0x21)) {
              if (*(long *)(lVar14 + uVar16 * 8 + 7) == -0x8000000080001) goto LAB_0136a500;
              goto LAB_0136a538;
            }
LAB_0136a3bc:
            if (0xfffffffe < uVar16) goto LAB_0136a68c;
          }
          else if (bVar7 < 9) {
            if (((bVar7 != 6) && (bVar7 != 7)) && (bVar7 != 8)) goto LAB_0136a68c;
LAB_0136a3a4:
            lVar14 = unaff_x26 + (ulong)*(uint *)(param_1 + 7);
            if ((ulong)((long)((ulong)*(uint *)(lVar14 + 3) << 0x20) >> 0x21) <= uVar16)
            goto LAB_0136a3bc;
            if (*(int *)(lVar14 + uVar16 * 4 + 7) != (int)*(undefined8 *)(unaff_x26 + 0xa8))
            goto LAB_0136a538;
          }
          else {
            if (bVar7 < 0xb) {
              if ((bVar7 == 9) || (bVar7 == 10)) goto LAB_0136a3a4;
              goto LAB_0136a68c;
            }
            if (bVar7 == 0xb) goto LAB_0136a3a4;
            if (bVar7 != 0xc) goto LAB_0136a68c;
LAB_0136a3fc:
            if (0xfffffffe < uVar16) goto LAB_0136a68c;
            lVar17 = unaff_x26 + (ulong)*(uint *)(param_1 + 7);
            uVar13 = *(uint *)(lVar17 + 0xf);
            *(undefined8 *)(unaff_x26 + 0x40) = 0x136a440;
            *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
            uVar9 = (**(code **)(unaff_x26 + 0x1080))();
            *(undefined8 *)(unaff_x26 + 0x38) = 0;
            uVar9 = uVar9 & 0xffffffff;
            lVar14 = 0;
            while( true ) {
              uVar9 = uVar9 & ((long)(unaff_x26 + (ulong)uVar13 << 0x20) >> 0x21) - 1U;
              uVar18 = unaff_x26 + (ulong)*(uint *)(lVar17 + (uVar9 * 3 + 4) * 4 + 7);
              if ((int)uVar18 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) break;
              if ((uVar18 & 1) == 0) {
                if ((long)(uVar18 << 0x20) >> 0x21 == uVar16) goto LAB_0136a538;
              }
              else if (((int)uVar18 != (int)*(undefined8 *)(unaff_x26 + 0xa8)) &&
                      (*(double *)(uVar18 + 3) == (double)(long)uVar16)) goto LAB_0136a538;
              lVar14 = lVar14 + 1;
              uVar9 = uVar9 + lVar14;
            }
          }
LAB_0136a500:
          param_1 = unaff_x26 + (ulong)*(uint *)(lVar11 + 0xf);
          if ((int)param_1 == (int)*(undefined8 *)(unaff_x26 + 0xb0)) goto LAB_0136a548;
          lVar11 = unaff_x26 + (ulong)*(uint *)(param_1 - 1);
          uVar12 = *(ushort *)(lVar11 + 7);
        }
        if (bVar7 < 0x16) {
          if (bVar7 < 0x12) {
            if (bVar7 == 0xf) {
              if (*(uint *)(unaff_x26 + (ulong)*(uint *)(param_1 + 0xb) + 7) <= uVar16)
              goto LAB_0136a3a4;
              goto LAB_0136a538;
            }
            if (bVar7 == 0x10) {
              if (*(uint *)(unaff_x26 + (ulong)*(uint *)(param_1 + 0xb) + 7) <= uVar16)
              goto LAB_0136a3fc;
              goto LAB_0136a538;
            }
            if (bVar7 != 0x11) goto LAB_0136a68c;
          }
          else if (bVar7 < 0x14) {
            if ((bVar7 != 0x12) && (bVar7 != 0x13)) goto LAB_0136a68c;
          }
          else if ((bVar7 != 0x14) && (bVar7 != 0x15)) goto LAB_0136a68c;
        }
        else if (bVar7 < 0x19) {
          if (((bVar7 != 0x16) && (bVar7 != 0x17)) && (bVar7 != 0x18)) goto LAB_0136a68c;
        }
        else if (bVar7 < 0x1b) {
          if ((bVar7 != 0x19) && (bVar7 != 0x1a)) goto LAB_0136a68c;
        }
        else if (bVar7 != 0x1b) {
          if (bVar7 == 0x1c) goto LAB_0136a500;
          goto LAB_0136a68c;
        }
        if (((*(uint *)(unaff_x26 + (ulong)*(uint *)(param_1 + 0xb) + 0x1b) >> 2 & 1) != 0) ||
           (*(ulong *)(param_1 + 0x1f) <= uVar16)) goto LAB_0136a548;
LAB_0136a538:
        uVar10 = *(undefined8 *)(unaff_x26 + 0xb8);
      }
      return uVar10;
    }
  }
LAB_0136a68c:
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2260));
}

