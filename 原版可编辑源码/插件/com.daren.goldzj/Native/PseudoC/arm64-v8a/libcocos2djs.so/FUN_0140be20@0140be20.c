
long FUN_0140be20(long param_1,ulong param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  bool bVar8;
  int iVar9;
  code *pcVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  undefined4 uVar15;
  ulong uVar16;
  int iVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  ushort uVar21;
  uint uVar22;
  long lVar23;
  long extraout_x8;
  long lVar24;
  long lVar25;
  long extraout_x9;
  undefined8 uVar26;
  undefined8 extraout_x10;
  ulong uVar27;
  undefined8 uVar28;
  ulong extraout_x11;
  undefined8 extraout_x11_00;
  ulong extraout_x11_01;
  ulong uVar29;
  ulong extraout_x12;
  ulong extraout_x12_00;
  ulong extraout_x12_01;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong extraout_x13_01;
  ulong uVar30;
  long lVar31;
  long extraout_x14;
  long lVar32;
  undefined8 uVar33;
  long unaff_x26;
  long unaff_x27;
  double dVar34;
  
  if (param_3 == (uint)*(undefined8 *)(unaff_x26 + 0xa0)) {
    param_3 = 0x7ffffffe;
  }
  else if ((param_3 & 0x80000001) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x2480));
  }
  iVar14 = (int)unaff_x26;
  if ((int)((iVar14 + *(int *)(param_1 + 0x13) & 0x10U) >> 3) >> 1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x2480));
  }
  uVar15 = *(undefined4 *)
            (unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13) +
            0x167);
  if (param_3 != 0) {
    iVar9 = *(int *)(param_2 + 7) * 2;
    if (iVar9 != 0) {
      uVar27 = 0;
      uVar29 = 0;
      uVar19 = *(ulong *)(unaff_x26 + 0x168);
      uVar30 = 0;
      uVar18 = 0;
LAB_0140bf24:
      do {
        do {
          do {
            do {
              iVar17 = (int)uVar18;
              uVar13 = uVar19;
              if (((iVar17 == iVar9) ||
                  (lVar11 = FUN_013a2f40(*(undefined8 *)(unaff_x26 + 0x168),param_1,param_2,uVar18),
                  (int)lVar11 == (int)*(undefined8 *)(unaff_x26 + 0xb0))) ||
                 (iVar14 + *(int *)(lVar11 + 0x13) == iVar9)) {
                uVar12 = FUN_013bfc80(param_2,uVar30);
                if (uVar29 == uVar27) {
                  iVar14 = *(int *)(uVar19 - 1);
                  uVar18 = uVar29 + (uVar29 >> 1) + 0x10;
                  if (uVar18 == 0) {
                    uVar29 = uVar18;
                    uVar13 = *(ulong *)(unaff_x26 + 0x168);
                  }
                  else {
                    uVar26 = *(undefined8 *)(unaff_x26 + 0xe8);
                    if (iVar14 == (int)uVar26) {
                      iVar14 = (int)*(undefined8 *)(unaff_x26 + 0xe0);
                    }
                    if (0x7fffffd < (long)uVar18) {
                    /* WARNING: Subroutine does not return */
                      FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
                    }
                    lVar11 = uVar27 * 4 + 7;
                    lVar24 = uVar29 + (uVar29 >> 1) + 0x10;
                    lVar25 = lVar24 * 4;
                    uVar30 = lVar25 + 8;
                    uVar16 = **(long **)(unaff_x26 + 0x1428) + uVar30;
                    if ((uVar16 < **(ulong **)(unaff_x26 + 0x1430)) && (uVar30 < 0x20000)) {
                      uVar13 = **(long **)(unaff_x26 + 0x1428) + 1;
                      **(ulong **)(unaff_x26 + 0x1428) = uVar16;
                    }
                    else {
                      uVar13 = FUN_01348500();
                      uVar26 = *(undefined8 *)(unaff_x26 + 0xe8);
                    }
                    *(int *)(uVar13 - 1) = iVar14;
                    *(int *)(uVar13 + 3) = (int)lVar24 * 2;
                    if (lVar25 + 7 != lVar11) {
                      lVar24 = (uVar29 + (uVar29 >> 1) + 0x10) * 4 + 7;
                      uVar28 = *(undefined8 *)(unaff_x26 + 0xa8);
                      do {
                        lVar24 = lVar24 + -4;
                        *(int *)(uVar13 + lVar24) = (int)uVar28;
                      } while (lVar24 != lVar11);
                    }
                    if (((uint)*(undefined8 *)((uVar13 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
                      *(undefined8 *)(unaff_x26 + 0x40) = 0x140c904;
                      *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
                      (**(code **)(unaff_x26 + 0x11d0))(uVar26,uVar13 + 7,uVar19 + 7);
                      *(undefined8 *)(unaff_x26 + 0x38) = 0;
                      uVar29 = uVar18;
                    }
                    else {
                      uVar29 = uVar18;
                      if (lVar11 != 7) {
                        lVar24 = 7;
                        do {
                          lVar25 = lVar24 + 4;
                          *(undefined4 *)(uVar13 + lVar24) = *(undefined4 *)(uVar19 + lVar24);
                          lVar24 = lVar25;
                        } while (lVar25 != lVar11);
                      }
                    }
                  }
                }
                lVar11 = uVar27 * 4 + 7;
                *(int *)(uVar13 + lVar11) = (int)uVar12;
                if (((((uint)*(undefined8 *)((uVar13 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                    ((uVar12 & 1) != 0)) &&
                   (((uint)*(undefined8 *)
                            ((unaff_x26 + (uVar12 & 0xffffffff) & 0xfffffffffffc0000) + 8) >> 1 & 1)
                    != 0)) {
                  FUN_0133eb00(uVar13,uVar13 + lVar11,0,2);
                  uVar27 = extraout_x11;
                  uVar29 = extraout_x12;
                  uVar13 = extraout_x13;
                }
                uVar27 = uVar27 + 1;
LAB_0140c97c:
                uVar15 = *(undefined4 *)
                          (unaff_x26 +
                           (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13) +
                          0x167);
                uVar18 = uVar13;
                if (uVar27 != uVar29) {
                  iVar14 = *(int *)(uVar13 - 1);
                  if (uVar27 == 0) {
                    uVar18 = *(ulong *)(unaff_x26 + 0x168);
                  }
                  else {
                    if (iVar14 == (int)*(undefined8 *)(unaff_x26 + 0xe8)) {
                      iVar14 = (int)*(undefined8 *)(unaff_x26 + 0xe0);
                    }
                    if (0x7fffffd < (long)uVar27) {
                    /* WARNING: Subroutine does not return */
                      FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
                    }
                    lVar11 = **(long **)(unaff_x26 + 0x1428);
                    uVar29 = uVar27 * 4 + 8;
                    uVar18 = lVar11 + uVar29;
                    if ((uVar18 < **(ulong **)(unaff_x26 + 0x1430)) && (uVar29 < 0x20000)) {
                      **(ulong **)(unaff_x26 + 0x1428) = uVar18;
                      uVar18 = lVar11 + 1;
                    }
                    else {
                      uVar12 = FUN_01348500(uVar12);
                      uVar18 = uVar12;
                    }
                    *(int *)(uVar18 - 1) = iVar14;
                    *(int *)(uVar18 + 3) = (int)uVar27 * 2;
                    if (((uint)*(undefined8 *)((uVar18 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
                      *(undefined8 *)(unaff_x26 + 0x40) = 0x140ca64;
                      *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
                      uVar12 = (**(code **)(unaff_x26 + 0x11d0))(uVar18 + 7,uVar13 + 7);
                      *(undefined8 *)(unaff_x26 + 0x38) = 0;
                    }
                    else {
                      lVar11 = uVar27 * 4 + 7;
                      if (lVar11 != 7) {
                        lVar24 = 7;
                        do {
                          lVar25 = lVar24 + 4;
                          *(undefined4 *)(uVar18 + lVar24) = *(undefined4 *)(uVar13 + lVar24);
                          lVar24 = lVar25;
                        } while (lVar25 != lVar11);
                      }
                    }
                  }
                }
                uVar19 = **(ulong **)(unaff_x26 + 0x1428);
                uVar29 = uVar19 + 0x10;
                if (uVar29 < **(ulong **)(unaff_x26 + 0x1430)) {
                  lVar11 = uVar19 + 1;
                  **(ulong **)(unaff_x26 + 0x1428) = uVar29;
                }
                else {
                  lVar11 = FUN_01348560(uVar12,0x10);
                }
                *(undefined4 *)(lVar11 + -1) = uVar15;
                *(int *)(lVar11 + 0xb) = (int)uVar27 * 2;
                *(int *)(lVar11 + 3) = (int)*(undefined8 *)(unaff_x26 + 0x168);
                *(int *)(lVar11 + 7) = (int)uVar18;
                return lVar11;
              }
              uVar16 = unaff_x26 + (ulong)*(uint *)(lVar11 + 0x17);
              if (((int)uVar16 != iVar17) || ((int)uVar16 != (int)uVar30)) {
                uVar12 = FUN_013bfc80(param_2,uVar30);
                if (uVar29 == uVar27) {
                  iVar17 = *(int *)(uVar19 - 1);
                  uVar29 = uVar29 + (uVar29 >> 1) + 0x10;
                  if (uVar29 == 0) {
                    uVar13 = *(ulong *)(unaff_x26 + 0x168);
                  }
                  else {
                    if (iVar17 == (int)*(undefined8 *)(unaff_x26 + 0xe8)) {
                      iVar17 = (int)*(undefined8 *)(unaff_x26 + 0xe0);
                    }
                    if (0x7fffffd < (long)uVar29) {
                    /* WARNING: Subroutine does not return */
                      FUN_013be7e0(0);
                    }
                    uVar18 = uVar29 * 4 + 8;
                    lVar24 = uVar29 * 4 + 7;
                    lVar25 = uVar27 * 4 + 7;
                    uVar30 = **(long **)(unaff_x26 + 0x1428) + uVar18;
                    if ((uVar30 < **(ulong **)(unaff_x26 + 0x1430)) && (uVar18 < 0x20000)) {
                      uVar13 = **(long **)(unaff_x26 + 0x1428) + 1;
                      **(ulong **)(unaff_x26 + 0x1428) = uVar30;
                    }
                    else {
                      uVar13 = FUN_01348500();
                    }
                    *(int *)(uVar13 - 1) = iVar17;
                    *(int *)(uVar13 + 3) = (int)uVar29 * 2;
                    if (lVar24 != lVar25) {
                      uVar26 = *(undefined8 *)(unaff_x26 + 0xa8);
                      do {
                        lVar24 = lVar24 + -4;
                        *(int *)(uVar13 + lVar24) = (int)uVar26;
                      } while (lVar24 != lVar25);
                    }
                    if (((uint)*(undefined8 *)((uVar13 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
                      *(undefined8 *)(unaff_x26 + 0x40) = 0x140c0f8;
                      *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
                      (**(code **)(unaff_x26 + 0x11d0))(uVar13 + 7,uVar19 + 7);
                      *(undefined8 *)(unaff_x26 + 0x38) = 0;
                    }
                    else if (lVar25 != 7) {
                      lVar24 = 7;
                      do {
                        lVar20 = lVar24 + 4;
                        *(undefined4 *)(uVar13 + lVar24) = *(undefined4 *)(uVar19 + lVar24);
                        lVar24 = lVar20;
                      } while (lVar20 != lVar25);
                    }
                  }
                }
                lVar24 = uVar27 * 4 + 7;
                *(int *)(uVar13 + lVar24) = (int)uVar12;
                if (((((uint)*(undefined8 *)((uVar13 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                    ((uVar12 & 1) != 0)) &&
                   (((uint)*(undefined8 *)
                            ((unaff_x26 + (uVar12 & 0xffffffff) & 0xfffffffffffc0000) + 8) >> 1 & 1)
                    != 0)) {
                  FUN_0133eb00(uVar13,uVar13 + lVar24,0,2);
                  uVar27 = extraout_x11_01;
                  uVar29 = extraout_x12_01;
                  uVar13 = extraout_x13_01;
                }
                uVar27 = uVar27 + 1;
                uVar7 = (long)((ulong)param_3 << 0x20) >> 0x21;
                if (uVar27 == uVar7) goto LAB_0140c97c;
                if ((long)((ulong)*(uint *)(lVar11 + 3) << 0x20) >> 0x21 == 0) {
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(0,0x140cb5c);
                  (*pcVar10)();
                }
                lVar24 = (long)(unaff_x26 + (ulong)*(uint *)(lVar11 + 7) << 0x20) >> 0x21;
                uVar19 = uVar13;
                uVar30 = uVar16;
                uVar18 = uVar16;
                if (2 < lVar24) {
                  lVar25 = 2;
                  lVar31 = 0x7fffffd;
                  uVar28 = *(undefined8 *)(unaff_x26 + 0xe8);
                  uVar26 = 0xfffffffffffffffe;
                  uVar16 = uVar7;
                  lVar20 = lVar11;
                  lVar23 = lVar24;
                  do {
                    uVar19 = (long)((ulong)*(uint *)(lVar20 + 3) << 0x20) >> 0x21;
                    if (uVar19 <= lVar25 + 3U) {
                    /* WARNING: Does not return */
                      pcVar10 = (code *)SoftwareBreakpoint(0,0x140cb64);
                      (*pcVar10)();
                    }
                    if (uVar19 <= lVar25 + 4U) {
                    /* WARNING: Does not return */
                      pcVar10 = (code *)SoftwareBreakpoint(0,0x140cb6c);
                      (*pcVar10)();
                    }
                    if (iVar14 + *(int *)(lVar20 + lVar25 * 4 + 0x17) == (int)uVar26) {
                      uVar12 = *(ulong *)(unaff_x26 + 0xa0);
                    }
                    else {
                      uVar12 = FUN_013bfc80(param_2);
                      lVar31 = 0x7fffffd;
                      uVar28 = *(undefined8 *)(unaff_x26 + 0xe8);
                      uVar26 = 0xfffffffffffffffe;
                      uVar16 = uVar7;
                      lVar20 = lVar11;
                      lVar23 = lVar24;
                    }
                    uVar19 = uVar13;
                    if (uVar29 == uVar27) {
                      iVar17 = *(int *)(uVar13 - 1);
                      uVar29 = uVar29 + (uVar29 >> 1) + 0x10;
                      if (uVar29 == 0) {
                        uVar19 = *(ulong *)(unaff_x26 + 0x168);
                      }
                      else {
                        if (iVar17 == (int)uVar28) {
                          iVar17 = (int)*(undefined8 *)(unaff_x26 + 0xe0);
                        }
                        if (lVar31 < (long)uVar29) {
                    /* WARNING: Subroutine does not return */
                          FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
                        }
                        uVar19 = uVar29 * 4 + 8;
                        lVar1 = uVar27 * 4 + 7;
                        uVar3 = **(long **)(unaff_x26 + 0x1428) + uVar19;
                        if ((uVar3 < **(ulong **)(unaff_x26 + 0x1430)) && (uVar19 < 0x20000)) {
                          uVar19 = **(long **)(unaff_x26 + 0x1428) + 1;
                          **(ulong **)(unaff_x26 + 0x1428) = uVar3;
                        }
                        else {
                          uVar19 = FUN_01348500();
                          lVar31 = 0x7fffffd;
                          uVar28 = *(undefined8 *)(unaff_x26 + 0xe8);
                          uVar26 = 0xfffffffffffffffe;
                          uVar16 = uVar7;
                          lVar20 = lVar11;
                          lVar23 = lVar24;
                        }
                        *(int *)(uVar19 - 1) = iVar17;
                        *(int *)(uVar19 + 3) = (int)uVar29 * 2;
                        lVar32 = uVar29 * 4 + 7;
                        if (lVar32 != lVar1) {
                          uVar33 = *(undefined8 *)(unaff_x26 + 0xa8);
                          do {
                            lVar32 = lVar32 + -4;
                            *(int *)(uVar19 + lVar32) = (int)uVar33;
                          } while (lVar32 != lVar1);
                        }
                        if (((uint)*(undefined8 *)((uVar19 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0
                           ) {
                          *(undefined8 *)(unaff_x26 + 0x40) = 0x140c360;
                          *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
                          (**(code **)(unaff_x26 + 0x11d0))(uVar19 + 7,uVar13 + 7);
                          *(undefined8 *)(unaff_x26 + 0x38) = 0;
                          lVar31 = 0x7fffffd;
                          uVar28 = *(undefined8 *)(unaff_x26 + 0xe8);
                          uVar26 = 0xfffffffffffffffe;
                          uVar16 = uVar7;
                          lVar20 = lVar11;
                          lVar23 = lVar24;
                        }
                        else if (lVar1 != 7) {
                          lVar32 = 7;
                          do {
                            lVar2 = lVar32 + 4;
                            *(undefined4 *)(uVar19 + lVar32) = *(undefined4 *)(uVar13 + lVar32);
                            lVar32 = lVar2;
                          } while (lVar2 != lVar1);
                        }
                      }
                    }
                    uVar13 = uVar19;
                    lVar1 = uVar27 * 4 + 7;
                    *(int *)(uVar13 + lVar1) = (int)uVar12;
                    if (((((uint)*(undefined8 *)((uVar13 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0)
                        && ((uVar12 & 1) != 0)) &&
                       (uVar12 = unaff_x26 + (uVar12 & 0xffffffff),
                       ((uint)*(undefined8 *)((uVar12 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
                      FUN_0133eb00(uVar13,uVar13 + lVar1,0,2);
                      lVar23 = extraout_x8;
                      lVar25 = extraout_x9;
                      uVar26 = extraout_x10;
                      uVar28 = extraout_x11_00;
                      uVar29 = extraout_x12_00;
                      uVar13 = extraout_x13_00;
                      lVar31 = extraout_x14;
                    }
                    uVar27 = uVar27 + 1;
                    if (uVar27 == uVar16) goto LAB_0140c97c;
                    lVar25 = lVar25 + 2;
                    uVar19 = uVar13;
                  } while (lVar25 < lVar23);
                }
                goto LAB_0140bf24;
              }
              iVar6 = *(int *)(param_1 + 0x13);
              iVar5 = iVar17 >> 1;
              if ((uVar18 & 1) == 0) {
                if (SCARRY4(iVar17,2)) {
                  dVar34 = (double)iVar5;
                  goto LAB_0140c450;
                }
                uVar18 = (ulong)(iVar17 + 2);
              }
              else {
                dVar34 = *(double *)(uVar18 + 3);
LAB_0140c450:
                uVar18 = **(ulong **)(unaff_x26 + 0x1428);
                uVar13 = uVar18 + 0xc;
                if (uVar13 < **(ulong **)(unaff_x26 + 0x1430)) {
                  uVar18 = uVar18 + 1;
                  **(ulong **)(unaff_x26 + 0x1428) = uVar13;
                }
                else {
                  uVar18 = FUN_01348560(param_1,0xc);
                }
                *(int *)(uVar18 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
                *(double *)(uVar18 + 3) = dVar34 + 1.0;
              }
            } while (((int)((iVar14 + iVar6 & 0x20U) >> 4) >> 1 == 0) ||
                    (iVar17 = (int)uVar18, (uVar18 & 0x80000001) != 0));
            uVar13 = (ulong)(iVar17 >> 1);
          } while (*(uint *)(param_2 + 7) <= uVar13);
          uVar21 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(param_2 - 1) + 7);
          uVar22 = (uint)uVar21;
          uVar12 = param_2;
          if ((uVar21 & 7) == 0) {
            bVar8 = false;
            lVar11 = 0;
          }
          else {
            lVar11 = 0;
            while( true ) {
              while (uVar4 = uVar22 & 7, uVar4 < 2) {
                if (uVar4 == 0) {
                  bVar8 = false;
                  goto LAB_0140c5d4;
                }
                if ((uVar4 != 1) ||
                   (*(int *)(uVar12 + 0xf) != (int)*(undefined8 *)(unaff_x26 + 200)))
                goto LAB_0140cc38;
                uVar12 = unaff_x26 + (ulong)*(uint *)(uVar12 + 0xb);
                uVar22 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar12 - 1) + 7);
              }
              if (uVar4 == 2) break;
              if (uVar4 == 3) {
                uVar16 = unaff_x26 + (ulong)*(uint *)(uVar12 + 0xb);
                lVar11 = lVar11 + ((long)((ulong)*(uint *)(uVar12 + 0xf) << 0x20) >> 0x21);
                uVar22 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar16 - 1) + 7);
                uVar12 = uVar16;
              }
              else {
                if (uVar4 != 5) goto LAB_0140cc38;
                uVar12 = unaff_x26 + (ulong)*(uint *)(uVar12 + 0xb);
                uVar22 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar12 - 1) + 7);
              }
            }
            bVar8 = true;
          }
LAB_0140c5d4:
          if (bVar8) {
            if ((uVar22 >> 4 & 1) != 0) {
LAB_0140cc38:
              if (0x3fffffff < (ulong)(long)iVar5) {
                uVar29 = **(ulong **)(unaff_x26 + 0x1428);
                uVar27 = uVar29 + 0xc;
                if (uVar27 < **(ulong **)(unaff_x26 + 0x1430)) {
                  lVar11 = uVar29 + 1;
                  **(ulong **)(unaff_x26 + 0x1428) = uVar27;
                }
                else {
                  lVar11 = FUN_01348560(uVar30,param_1,0xc);
                }
                *(int *)(lVar11 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
                *(double *)(lVar11 + 3) = (double)(ulong)(long)iVar5;
              }
                    /* WARNING: Subroutine does not return */
              FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2580));
            }
            lVar24 = *(long *)(uVar12 + 0x13);
          }
          else {
            lVar24 = uVar12 + 0xb;
          }
          if ((uVar22 >> 3 & 1) == 0) {
            uVar21 = *(ushort *)(lVar24 + (iVar5 + lVar11) * 2);
          }
          else {
            uVar21 = 0;
          }
        } while ((uVar21 & 0xfc00) != 0xd800);
        uVar21 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(param_2 - 1) + 7);
        uVar22 = (uint)uVar21;
        uVar12 = param_2;
        if ((uVar21 & 7) == 0) {
          bVar8 = false;
          lVar11 = 0;
        }
        else {
          lVar11 = 0;
          while( true ) {
            while (uVar4 = uVar22 & 7, uVar4 < 2) {
              if (uVar4 == 0) {
                bVar8 = false;
                goto LAB_0140c708;
              }
              if ((uVar4 != 1) || (*(int *)(uVar12 + 0xf) != (int)*(undefined8 *)(unaff_x26 + 200)))
              goto LAB_0140cd2c;
              uVar12 = unaff_x26 + (ulong)*(uint *)(uVar12 + 0xb);
              uVar22 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar12 - 1) + 7);
            }
            if (uVar4 == 2) break;
            if (uVar4 == 3) {
              uVar16 = unaff_x26 + (ulong)*(uint *)(uVar12 + 0xb);
              lVar11 = lVar11 + ((long)((ulong)*(uint *)(uVar12 + 0xf) << 0x20) >> 0x21);
              uVar22 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar16 - 1) + 7);
              uVar12 = uVar16;
            }
            else {
              if (uVar4 != 5) goto LAB_0140cd2c;
              uVar12 = unaff_x26 + (ulong)*(uint *)(uVar12 + 0xb);
              uVar22 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar12 - 1) + 7);
            }
          }
          bVar8 = true;
        }
LAB_0140c708:
        if (bVar8) {
          if ((uVar22 >> 4 & 1) != 0) {
LAB_0140cd2c:
            if (0x3fffffff < uVar13) {
              uVar29 = **(ulong **)(unaff_x26 + 0x1428);
              uVar27 = uVar29 + 0xc;
              if (uVar27 < **(ulong **)(unaff_x26 + 0x1430)) {
                lVar11 = uVar29 + 1;
                **(ulong **)(unaff_x26 + 0x1428) = uVar27;
              }
              else {
                lVar11 = FUN_01348560(uVar30,param_1,0xc);
              }
              *(int *)(lVar11 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
              *(double *)(lVar11 + 3) = (double)uVar13;
            }
                    /* WARNING: Subroutine does not return */
            FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2580));
          }
          lVar24 = *(long *)(uVar12 + 0x13);
        }
        else {
          lVar24 = uVar12 + 0xb;
        }
        if ((uVar22 >> 3 & 1) == 0) {
          uVar21 = *(ushort *)(lVar24 + (uVar13 + lVar11) * 2);
        }
        else {
          uVar21 = 0;
        }
      } while ((uVar21 & 0xfc00) != 0xdc00);
      if ((uVar18 & 1) == 0) {
        if (!SCARRY4(iVar17,2)) {
          uVar18 = (long)(iVar17 + 2);
          goto LAB_0140bf24;
        }
        dVar34 = (double)(iVar17 >> 1);
      }
      else {
        dVar34 = *(double *)(uVar18 + 3);
      }
      uVar18 = **(ulong **)(unaff_x26 + 0x1428);
      uVar13 = uVar18 + 0xc;
      if (uVar13 < **(ulong **)(unaff_x26 + 0x1430)) {
        uVar18 = uVar18 + 1;
        **(ulong **)(unaff_x26 + 0x1428) = uVar13;
      }
      else {
        uVar18 = FUN_01348560(param_1,0xc);
      }
      *(int *)(uVar18 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
      *(double *)(uVar18 + 3) = dVar34 + 1.0;
      goto LAB_0140bf24;
    }
    param_1 = FUN_013a2f40();
    if ((int)param_1 == (int)*(undefined8 *)(unaff_x26 + 0xb0)) {
      uVar29 = **(ulong **)(unaff_x26 + 0x1428);
      uVar27 = uVar29 + 0x1c;
      if (uVar27 < **(ulong **)(unaff_x26 + 0x1430)) {
        lVar11 = uVar29 + 1;
        **(ulong **)(unaff_x26 + 0x1428) = uVar27;
      }
      else {
        lVar11 = FUN_01348560(param_1,0x1c);
      }
      *(undefined4 *)(lVar11 + -1) = uVar15;
      *(undefined4 *)(lVar11 + 0xb) = 2;
      *(int *)(lVar11 + 3) = (int)*(undefined8 *)(unaff_x26 + 0x168);
      *(int *)(lVar11 + 7) = (int)lVar11 + 0x10;
      *(int *)(lVar11 + 0xf) = (int)*(undefined8 *)(unaff_x26 + 0xe0);
      *(undefined4 *)(lVar11 + 0x13) = 2;
      *(int *)(lVar11 + 0x17) = (int)*(undefined8 *)(unaff_x26 + 0xa8);
      uVar27 = unaff_x26 + (ulong)*(uint *)(lVar11 + 7);
      *(int *)(uVar27 + 7) = (int)param_2;
      if (((uint)*(undefined8 *)((uVar27 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
        return lVar11;
      }
      if ((param_2 & 1) == 0) {
        return lVar11;
      }
      if (((uint)*(undefined8 *)((unaff_x26 + (param_2 & 0xffffffff) & 0xfffffffffffc0000) + 8) >> 1
          & 1) == 0) {
        return lVar11;
      }
      FUN_0133eb00(uVar27,uVar27 + 7,0,2);
      return lVar11;
    }
  }
  uVar29 = **(ulong **)(unaff_x26 + 0x1428);
  uVar27 = uVar29 + 0x10;
  if (uVar27 < **(ulong **)(unaff_x26 + 0x1430)) {
    lVar11 = uVar29 + 1;
    **(ulong **)(unaff_x26 + 0x1428) = uVar27;
  }
  else {
    lVar11 = FUN_01348560(param_1,0x10);
  }
  *(undefined4 *)(lVar11 + -1) = uVar15;
  *(undefined4 *)(lVar11 + 0xb) = 0;
  uVar15 = (undefined4)*(undefined8 *)(unaff_x26 + 0x168);
  *(undefined4 *)(lVar11 + 3) = uVar15;
  *(undefined4 *)(lVar11 + 7) = uVar15;
  return lVar11;
}

