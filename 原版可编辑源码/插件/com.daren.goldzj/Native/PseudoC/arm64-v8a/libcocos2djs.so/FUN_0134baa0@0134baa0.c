
/* WARNING: Removing unreachable block (ram,0x0134e72c) */
/* WARNING: Type propagation algorithm not settling */

ulong FUN_0134baa0(ulong param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  byte bVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  long lVar13;
  undefined4 uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  long lVar18;
  int iVar19;
  uint uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
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
  ulong uVar26;
  ulong extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x9_03;
  int iVar27;
  int iVar28;
  ulong uVar29;
  ulong *puVar30;
  long extraout_x10;
  long extraout_x10_00;
  ulong extraout_x10_01;
  int iVar31;
  undefined4 *puVar32;
  long lVar33;
  int iVar34;
  long lVar35;
  long unaff_x26;
  long unaff_x27;
  undefined8 uVar36;
  double dVar37;
  double dVar38;
  double unaff_d15;
  
  if ((param_2 & 1) == 0) goto LAB_0134e588;
  lVar18 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
  uVar6 = *(ushort *)(lVar18 + 7);
  if (uVar6 < 0x412) goto LAB_0134e588;
  iVar16 = (int)unaff_x26;
  iVar12 = (int)param_1;
  iVar28 = iVar12 >> 1;
  if ((param_3 & 1) == 0) {
    uVar22 = (long)(param_3 << 0x20) >> 0x21;
  }
  else {
    uVar7 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(param_3 - 1) + 7);
    if (((uVar7 != 0x42) ||
        (uVar22 = (ulong)*(double *)(param_3 + 3), *(double *)(param_3 + 3) != (double)(long)uVar22)
        ) || (0x3ffffffffffffe < uVar22 + 0x1fffffffffffff)) {
      uVar22 = param_3;
      if (uVar7 != 0x40) {
        if (uVar7 < 0x40) {
          uVar15 = *(uint *)(param_3 + 3);
          if ((uVar15 & 0xc0000002) == 0) {
            uVar22 = (ulong)(uVar15 >> 3) & 0xffffff;
            goto LAB_0134d03c;
          }
          if ((uVar15 >> 1 & 1) == 0) goto LAB_0134e588;
          if ((uVar7 == 0x25) || (uVar7 == 0x2d)) {
            uVar22 = unaff_x26 + (ulong)*(uint *)(param_3 + 0xb);
          }
          else if ((uVar7 >> 5 & 1) != 0) {
            *(undefined8 *)(unaff_x26 + 0x40) = 0x134bb80;
            *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
            uVar22 = (**(code **)(unaff_x26 + 0x1258))();
            *(undefined8 *)(unaff_x26 + 0x38) = 0;
            if ((uVar22 & 1) == 0) {
              uVar22 = (long)(uVar22 << 0x20) >> 0x21;
              if ((uVar22 == 0xffffffffffffffff) || (uVar22 == 0xfffffffffffffffe))
              goto LAB_0134e588;
              goto LAB_0134d03c;
            }
          }
        }
        else {
          if (uVar7 != 0x43) goto LAB_0134e588;
          uVar22 = unaff_x26 + (ulong)*(uint *)(param_3 + 0xb);
        }
      }
      uVar15 = *(uint *)(lVar18 + 0xb);
      iVar19 = (int)uVar22;
      if ((uVar15 >> 0x15 & 1) != 0) {
        uVar24 = unaff_x26 + (ulong)*(uint *)(param_2 + 3);
        if ((uVar24 & 1) == 0) {
          uVar24 = *(ulong *)(unaff_x26 + 0x410);
        }
        uVar23 = (ulong)(*(uint *)(uVar22 + 3) >> 3);
        lVar21 = 0;
        while( true ) {
          uVar23 = uVar23 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar24 + 0xf) << 0x20) >> 0x21) -
                            1U;
          lVar33 = uVar23 * 3;
          lVar13 = (lVar33 + 5) * 4;
          iVar28 = *(int *)(uVar24 + lVar13 + 7);
          if (iVar28 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) break;
          if (iVar28 == iVar19) {
            uVar15 = *(int *)(uVar24 + lVar13 + 0xf) >> 1;
            if ((uVar15 >> 3 & 1) != 0) goto LAB_0134cde4;
            if ((uVar15 & 1) == 0) {
              if ((((((iVar19 != (int)*(undefined8 *)(unaff_x26 + 0x5d0)) &&
                     (iVar19 != (int)*(undefined8 *)(unaff_x26 + 0xc18))) &&
                    (iVar19 != (int)*(undefined8 *)(unaff_x26 + 0x848))) &&
                   ((iVar19 != (int)*(undefined8 *)(unaff_x26 + 0xc48) &&
                    (iVar19 != (int)*(undefined8 *)(unaff_x26 + 0xc70))))) &&
                  (iVar19 != (int)*(undefined8 *)(unaff_x26 + 0x960))) &&
                 (iVar19 != (int)*(undefined8 *)(unaff_x26 + 0xa38))) {
                if ((ulong)((long)((ulong)*(uint *)(uVar24 + 3) << 0x20) >> 0x21) <= lVar33 + 6U) {
                    /* WARNING: Does not return */
                  pcVar9 = (code *)SoftwareBreakpoint(0,0x134e6c0);
                  (*pcVar9)();
                }
                *(int *)(uVar24 + lVar13 + 0xb) = iVar12;
                if (((uint)*(undefined8 *)((uVar24 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
                  return param_1;
                }
                if ((param_1 & 1) == 0) {
                  return param_1;
                }
                uVar22 = unaff_x26 + (param_1 & 0xffffffff);
                if (((uint)*(undefined8 *)((uVar22 & 0xfffffffffffc0000) + 8) >> 1 & 1) == 0) {
                  return uVar22;
                }
                FUN_0133eb00(uVar24,uVar24 + lVar13 + 0xb,0,2);
                return uVar22;
              }
              goto LAB_0134e588;
            }
            if ((ulong)((long)((ulong)*(uint *)(uVar24 + 3) << 0x20) >> 0x21) <= lVar33 + 6U) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(0,0x134e6b8);
              (*pcVar9)();
            }
            lVar13 = unaff_x26 + (ulong)*(uint *)(uVar24 + lVar13 + 0xb);
            goto LAB_0134ccd4;
          }
          lVar21 = lVar21 + 1;
          uVar23 = uVar23 + lVar21;
        }
        if ((((*(short *)(lVar18 + 7) != 0x41b) &&
             (iVar19 != (int)*(undefined8 *)(unaff_x26 + 0x5d0))) &&
            (iVar19 != (int)*(undefined8 *)(unaff_x26 + 0xc18))) &&
           (((iVar19 != (int)*(undefined8 *)(unaff_x26 + 0x848) &&
             (iVar19 != (int)*(undefined8 *)(unaff_x26 + 0xc48))) &&
            ((iVar19 != (int)*(undefined8 *)(unaff_x26 + 0xc70) &&
             ((iVar19 != (int)*(undefined8 *)(unaff_x26 + 0x960) &&
              (iVar19 != (int)*(undefined8 *)(unaff_x26 + 0xa38))))))))) {
          if ((*(int *)(uVar22 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xf8)) &&
             ((*(uint *)(uVar22 + 7) & 1) != 0)) {
            if ((*(uint *)(uVar22 + 7) >> 4 & 1) != 0) goto LAB_0134e588;
          }
          else if ((uVar15 >> 0x1b & 1) == 0) goto LAB_0134e588;
          lVar21 = unaff_x26 + (ulong)*(uint *)(lVar18 + 0xf);
          uVar15 = *(uint *)(lVar21 + -1);
          while (lVar33 = unaff_x26 + (ulong)uVar15,
                (int)lVar21 != (int)*(undefined8 *)(unaff_x26 + 0xb0)) {
            uVar6 = *(ushort *)(lVar33 + 7);
            if (uVar6 < 0x411) {
              if ((uVar6 != 0xaa) || ((*(byte *)(lVar33 + 9) & 0x24) != 0)) goto LAB_0134e588;
              uVar23 = unaff_x26 + (ulong)*(uint *)(lVar21 + 3);
              if ((uVar23 & 1) == 0) {
                uVar23 = *(ulong *)(unaff_x26 + 0x410);
              }
              uVar25 = (ulong)(*(uint *)(uVar22 + 3) >> 3);
              lVar13 = 0;
              while( true ) {
                uVar25 = uVar25 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar23 + 0xf) << 0x20) >>
                                  0x21) - 1U;
                lVar35 = (uVar25 + 5) * 4;
                lVar4 = unaff_x26 + (ulong)*(uint *)(uVar23 + lVar35 + 7);
                if ((int)lVar4 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) break;
                if (*(int *)(lVar4 + 3) == iVar19) {
                  if ((ulong)((long)((ulong)*(uint *)(uVar23 + 3) << 0x20) >> 0x21) <= uVar25 + 6) {
                    /* WARNING: Does not return */
                    pcVar9 = (code *)SoftwareBreakpoint(0,0x134e6c8);
                    (*pcVar9)();
                  }
                  lVar4 = unaff_x26 + (ulong)*(uint *)(uVar23 + lVar35 + 0xb);
                  lVar13 = unaff_x26 + (ulong)*(uint *)(lVar4 + 0xb);
                  if ((int)lVar13 != (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
                    uVar15 = *(int *)(lVar4 + 7) >> 1;
                    if ((uVar15 >> 3 & 1) != 0) goto LAB_0134cde4;
                    if ((uVar15 & 1) != 0) goto LAB_0134ccd4;
                    goto LAB_0134ce0c;
                  }
                  break;
                }
                lVar13 = lVar13 + 1;
                uVar25 = uVar25 + lVar13;
              }
            }
            else if ((*(uint *)(lVar33 + 0xb) >> 0x15 & 1) == 0) {
              lVar13 = unaff_x26 + (ulong)*(uint *)(lVar33 + 0x17);
              uVar15 = *(uint *)(lVar33 + 0xb) >> 10 & 0x3ff;
              if (uVar15 != 0) {
                if (uVar15 < 0x21) {
                  lVar35 = (long)(int)uVar15 * 3;
                  while (lVar35 != 0) {
                    lVar35 = lVar35 + -3;
                    if (*(int *)(lVar13 + lVar35 * 4 + 0xf) == iVar19) goto LAB_0134cb9c;
                  }
                }
                else {
                  iVar31 = *(short *)(lVar13 + 5) + -1;
                  iVar28 = 0;
                  iVar34 = iVar31;
                  do {
                    iVar27 = iVar28 + ((uint)(iVar34 - iVar28) >> 1);
                    if (*(uint *)(unaff_x26 +
                                  (ulong)*(uint *)(lVar13 + (long)(int)(((uint)(*(int *)(lVar13 + (
                                                  long)(iVar27 * 3) * 4 + 0x13) >> 1) >> 9 & 0x3ff)
                                                  * 3) * 4 + 0xf) + 3) < *(uint *)(uVar22 + 3)) {
                      iVar28 = iVar27 + 1;
                      iVar27 = iVar34;
                    }
                    iVar34 = iVar27;
                  } while (iVar28 != iVar34);
                  for (; iVar28 <= iVar31; iVar28 = iVar28 + 1) {
                    uVar17 = (uint)(*(int *)(lVar13 + (long)(iVar28 * 3) * 4 + 0x13) >> 1) >> 9 &
                             0x3ff;
                    lVar35 = (long)(int)(uVar17 * 3);
                    lVar4 = unaff_x26 + (ulong)*(uint *)(lVar13 + lVar35 * 4 + 0xf);
                    if (*(uint *)(lVar4 + 3) != *(uint *)(uVar22 + 3)) break;
                    if ((int)lVar4 == iVar19) {
                      if (uVar17 < uVar15) goto LAB_0134cb9c;
                      break;
                    }
                  }
                }
              }
            }
            else {
              uVar23 = unaff_x26 + (ulong)*(uint *)(lVar21 + 3);
              if ((uVar23 & 1) == 0) {
                uVar23 = *(ulong *)(unaff_x26 + 0x410);
              }
              uVar25 = (ulong)(*(uint *)(uVar22 + 3) >> 3);
              lVar13 = 0;
              while( true ) {
                uVar25 = uVar25 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar23 + 0xf) << 0x20) >>
                                  0x21) - 1U;
                lVar4 = uVar25 * 3;
                lVar35 = (lVar4 + 5) * 4;
                iVar28 = *(int *)(uVar23 + lVar35 + 7);
                if (iVar28 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) break;
                if (iVar28 == iVar19) {
                  uVar15 = *(int *)(uVar23 + lVar35 + 0xf) >> 1;
                  if ((uVar15 >> 3 & 1) != 0) goto LAB_0134cde4;
                  if ((uVar15 & 1) == 0) goto LAB_0134ce0c;
                  if ((ulong)((long)((ulong)*(uint *)(uVar23 + 3) << 0x20) >> 0x21) <= lVar4 + 6U) {
                    /* WARNING: Does not return */
                    pcVar9 = (code *)SoftwareBreakpoint(0,0x134e708);
                    (*pcVar9)();
                  }
                  lVar13 = unaff_x26 + (ulong)*(uint *)(uVar23 + lVar35 + 0xb);
                  goto LAB_0134ccd4;
                }
                lVar13 = lVar13 + 1;
                uVar25 = uVar25 + lVar13;
              }
            }
            if (uVar6 == 0x41b) goto LAB_0134e588;
            lVar21 = unaff_x26 + (ulong)*(uint *)(lVar33 + 0xf);
            if ((int)lVar21 == (int)*(undefined8 *)(unaff_x26 + 0xb0)) break;
            uVar15 = *(uint *)(lVar21 + -1);
          }
LAB_0134ce0c:
          if (((*(uint *)(lVar18 + 0xb) >> 0x14 & 1) != 0) &&
             ((unaff_x26 + (ulong)*(uint *)(lVar18 + 0x23) & 1) != 0)) {
            *(undefined8 *)(unaff_x26 + 0x40) = 0x134ce30;
            *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
            (**(code **)(unaff_x26 + 0x11a0))(lVar18,param_2,param_1,lVar18,uVar22,lVar21);
            *(undefined8 *)(unaff_x26 + 0x38) = 0;
          }
          uVar15 = iVar16 + *(int *)(uVar24 + 0xf);
          uVar23 = (long)((ulong)*(uint *)(uVar24 + 3) << 0x20) >> 0x21;
          if (uVar23 == 0) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(0,0x134e718);
            (*pcVar9)();
          }
          uVar17 = iVar16 + *(int *)(uVar24 + 7) + 2;
          if (uVar17 + (uVar17 >> 1 & 0x7ffffffe) <= uVar15) {
            if (uVar23 < 2) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(0,0x134e720);
              (*pcVar9)();
            }
            if ((uint)(iVar16 + *(int *)(uVar24 + 0xb)) <= (uVar15 - uVar17 >> 1 & 0xfffffffe)) {
              if (uVar23 < 4) {
                    /* WARNING: Does not return */
                pcVar9 = (code *)SoftwareBreakpoint(0,0x134e728);
                (*pcVar9)();
              }
              iVar16 = iVar16 + *(int *)(uVar24 + 0x13);
              uVar15 = iVar16 + 2;
              if (uVar15 < 0xffffff) {
                *(uint *)(uVar24 + 0x13) = uVar15;
                if ((long)((ulong)*(uint *)(uVar24 + 3) << 0x20) >> 0x21 == 0) {
                    /* WARNING: Does not return */
                  pcVar9 = (code *)SoftwareBreakpoint(0,0x134e738);
                  (*pcVar9)();
                }
                *(uint *)(uVar24 + 7) = uVar17;
                uVar23 = (ulong)(*(uint *)(uVar22 + 3) >> 3);
                lVar18 = 0;
                while( true ) {
                  uVar23 = uVar23 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar24 + 0xf) << 0x20) >>
                                    0x21) - 1U;
                  uVar25 = uVar23 * 3 + 5;
                  lVar33 = uVar25 * 4;
                  lVar21 = lVar33 + 7;
                  if ((*(int *)(uVar24 + lVar21) == (int)*(undefined8 *)(unaff_x26 + 0xa0)) ||
                     (*(int *)(uVar24 + lVar21) == (int)*(undefined8 *)(unaff_x26 + 0xa8))) break;
                  lVar18 = lVar18 + 1;
                  uVar23 = uVar23 + lVar18;
                }
                if (uVar25 < (ulong)((long)((ulong)*(uint *)(uVar24 + 3) << 0x20) >> 0x21)) {
                  *(int *)(uVar24 + lVar21) = iVar19;
                  if (((((uint)*(undefined8 *)((uVar24 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                      ((uVar22 & 1) != 0)) &&
                     (uVar22 = unaff_x26 + (uVar22 & 0xffffffff),
                     ((uint)*(undefined8 *)((uVar22 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
                    FUN_0133eb00(uVar24,uVar24 + lVar21,0,2);
                    uVar25 = extraout_x9_03;
                    lVar33 = extraout_x10_00;
                  }
                  if (uVar25 + 1 < (ulong)((long)((ulong)*(uint *)(uVar24 + 3) << 0x20) >> 0x21)) {
                    *(int *)(uVar24 + lVar33 + 0xb) = iVar12;
                    if (((((uint)*(undefined8 *)((uVar24 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0)
                        && ((param_1 & 1) != 0)) &&
                       (param_1 = unaff_x26 + (param_1 & 0xffffffff),
                       ((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
                      FUN_0133eb00(uVar24,uVar24 + lVar33 + 0xb,0,2);
                      uVar25 = extraout_x9_02;
                      lVar33 = extraout_x10;
                    }
                    uVar17 = iVar16 * 0x100;
                    uVar15 = uVar17 | 0x180;
                    if ((*(int *)(uVar22 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xf8)) &&
                       ((*(uint *)(uVar22 + 7) & 1) != 0)) {
                      uVar15 = uVar17 | 0x1a0;
                    }
                    if (uVar25 + 2 < (ulong)((long)((ulong)*(uint *)(uVar24 + 3) << 0x20) >> 0x21))
                    {
                      *(uint *)(uVar24 + lVar33 + 0xf) = uVar15;
                      return param_1;
                    }
                    /* WARNING: Does not return */
                    pcVar9 = (code *)SoftwareBreakpoint(0,0x134e750);
                    (*pcVar9)();
                  }
                    /* WARNING: Does not return */
                  pcVar9 = (code *)SoftwareBreakpoint(0,0x134e748);
                  (*pcVar9)();
                }
                    /* WARNING: Does not return */
                pcVar9 = (code *)SoftwareBreakpoint(0,0x134e740);
                (*pcVar9)();
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x21a0));
        }
        goto LAB_0134e588;
      }
      lVar21 = unaff_x26 + (ulong)*(uint *)(lVar18 + 0x17);
      uVar15 = uVar15 >> 10 & 0x3ff;
      if (uVar15 != 0) {
        if (uVar15 < 0x21) {
          lVar33 = (long)(int)uVar15 * 3;
          do {
            if (lVar33 == 0) goto LAB_0134c224;
            lVar33 = lVar33 + -3;
          } while (*(int *)(lVar21 + lVar33 * 4 + 0xf) != iVar19);
LAB_0134bd74:
          lVar33 = lVar33 * 4;
          uVar15 = *(int *)(lVar21 + lVar33 + 0x13) >> 1;
          if ((uVar15 >> 3 & 1) != 0) {
LAB_0134cde4:
                    /* WARNING: Subroutine does not return */
            FUN_013be7e0(4,*(undefined8 *)(unaff_x26 + 0x20f0),param_1);
          }
          if ((uVar15 & 1) == 0) {
            if ((((iVar19 != (int)*(undefined8 *)(unaff_x26 + 0x5d0)) &&
                 (iVar19 != (int)*(undefined8 *)(unaff_x26 + 0xc18))) &&
                ((iVar19 != (int)*(undefined8 *)(unaff_x26 + 0x848) &&
                 (((iVar19 != (int)*(undefined8 *)(unaff_x26 + 0xc48) &&
                   (iVar19 != (int)*(undefined8 *)(unaff_x26 + 0xc70))) &&
                  (iVar19 != (int)*(undefined8 *)(unaff_x26 + 0x960))))))) &&
               (iVar19 != (int)*(undefined8 *)(unaff_x26 + 0xa38))) {
              if ((uVar15 >> 1 & 1) == 0) {
                uVar17 = uVar15 >> 6 & 7;
                if (uVar17 == 1) {
                  if ((param_1 & 1) != 0) goto LAB_0134e588;
                }
                else if (uVar17 == 2) {
                  if (((param_1 & 1) != 0) &&
                     (*(int *)(param_1 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x140)))
                  goto LAB_0134e588;
                }
                else if (uVar17 == 3) {
                  if ((((param_1 & 1) == 0) ||
                      (uVar20 = iVar16 + *(int *)(lVar21 + lVar33 + 0x17), uVar20 == 4)) ||
                     ((uVar20 != 2 &&
                      ((uVar20 == 3 || (*(uint *)(param_1 - 1) != (uVar20 & 0xfffffffd)))))))
                  goto LAB_0134e588;
                }
                else if (uVar17 == 0) goto LAB_0134e588;
                bVar11 = (uVar15 >> 2 & 1) != 1;
                uVar22 = (ulong)*(byte *)(lVar18 + 4) + (((ulong)uVar15 & 0x1ff80000) >> 0x13);
                if (uVar22 < *(byte *)(lVar18 + 3)) {
                  lVar18 = uVar22 * 4 + -1;
                  if (uVar17 != 2) {
                    if (bVar11) {
                      *(int *)(param_2 + lVar18) = iVar12;
                      if (((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0)
                      {
                        return param_1;
                      }
                      if ((param_1 & 1) == 0) {
                        return param_1;
                      }
                      uVar22 = unaff_x26 + (param_1 & 0xffffffff);
                      if (((uint)*(undefined8 *)((uVar22 & 0xfffffffffffc0000) + 8) >> 1 & 1) == 0)
                      {
                        return uVar22;
                      }
                      FUN_0133eb00(param_2,param_2 + lVar18,0,2);
                      return uVar22;
                    }
                    uVar22 = unaff_x26 + (ulong)*(uint *)(param_2 + lVar18);
                    if ((int)uVar22 == iVar12) {
                      return param_1;
                    }
                    bVar11 = (param_1 & 1) == 0;
                    if ((uVar22 & 1) == 0) {
                      if ((bVar11) ||
                         (*(int *)(param_1 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x140)))
                      goto LAB_0134e588;
                      dVar38 = *(double *)(param_1 + 3);
                      dVar37 = (double)((int)uVar22 >> 1);
                    }
                    else if (bVar11) {
                      if (*(int *)(uVar22 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x140))
                      goto LAB_0134e588;
                      dVar37 = *(double *)(uVar22 + 3);
                      dVar38 = (double)iVar28;
                    }
                    else {
                      iVar28 = (int)*(undefined8 *)(unaff_x26 + 0x140);
                      if ((*(int *)(uVar22 - 1) != iVar28) || (*(int *)(param_1 - 1) != iVar28))
                      goto LAB_0134e588;
                      dVar37 = *(double *)(uVar22 + 3);
                      dVar38 = *(double *)(param_1 + 3);
                    }
                    if (dVar37 == dVar38) {
                      if ((int)((ulong)dVar37 >> 0x20) == (int)((ulong)dVar38 >> 0x20)) {
                        return param_1;
                      }
                      goto LAB_0134e588;
                    }
                  }
                  else {
                    if ((param_1 & 1) == 0) {
                      dVar38 = (double)iVar28;
                    }
                    else {
                      dVar38 = *(double *)(param_1 + 3);
                    }
                    lVar18 = unaff_x26 + (ulong)*(uint *)(param_2 + lVar18);
                    if (bVar11) {
                      *(double *)(lVar18 + 3) = dVar38;
                      return param_1;
                    }
                    dVar37 = *(double *)(lVar18 + 3);
                    if (dVar37 == dVar38) {
                      if ((int)((ulong)dVar37 >> 0x20) == (int)((ulong)dVar38 >> 0x20)) {
                        return param_1;
                      }
                      goto LAB_0134e588;
                    }
                  }
                  if ((NAN(dVar37)) && (NAN(dVar38))) {
                    return param_1;
                  }
                }
                else {
                  uVar24 = unaff_x26 + (ulong)*(uint *)(param_2 + 3);
                  if ((uVar24 & 1) == 0) {
                    uVar24 = *(ulong *)(unaff_x26 + 0x168);
                  }
                  lVar18 = (uVar22 - *(byte *)(lVar18 + 3)) * 4 + 7;
                  if (uVar17 != 2) {
                    if (bVar11) {
                      *(int *)(uVar24 + lVar18) = iVar12;
                      if (((uint)*(undefined8 *)((uVar24 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0)
                      {
                        return param_1;
                      }
                      if ((param_1 & 1) == 0) {
                        return param_1;
                      }
                      uVar22 = unaff_x26 + (param_1 & 0xffffffff);
                      if (((uint)*(undefined8 *)((uVar22 & 0xfffffffffffc0000) + 8) >> 1 & 1) == 0)
                      {
                        return uVar22;
                      }
                      FUN_0133eb00(uVar24,uVar24 + lVar18,0,2);
                      return uVar22;
                    }
                    uVar22 = unaff_x26 + (ulong)*(uint *)(uVar24 + lVar18);
                    if ((int)uVar22 == iVar12) {
                      return param_1;
                    }
                    bVar11 = (param_1 & 1) == 0;
                    if ((uVar22 & 1) == 0) {
                      if ((bVar11) ||
                         (*(int *)(param_1 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x140)))
                      goto LAB_0134e588;
                      dVar38 = *(double *)(param_1 + 3);
                      dVar37 = (double)((int)uVar22 >> 1);
                    }
                    else if (bVar11) {
                      if (*(int *)(uVar22 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x140))
                      goto LAB_0134e588;
                      dVar37 = *(double *)(uVar22 + 3);
                      dVar38 = (double)iVar28;
                    }
                    else {
                      iVar28 = (int)*(undefined8 *)(unaff_x26 + 0x140);
                      if ((*(int *)(uVar22 - 1) != iVar28) || (*(int *)(param_1 - 1) != iVar28))
                      goto LAB_0134e588;
                      dVar37 = *(double *)(uVar22 + 3);
                      dVar38 = *(double *)(param_1 + 3);
                    }
                    if (dVar37 == dVar38) {
                      if ((int)((ulong)dVar37 >> 0x20) == (int)((ulong)dVar38 >> 0x20)) {
                        return param_1;
                      }
                      goto LAB_0134e588;
                    }
                  }
                  else {
                    lVar18 = unaff_x26 + (ulong)*(uint *)(uVar24 + lVar18);
                    if ((param_1 & 1) == 0) {
                      dVar38 = (double)iVar28;
                    }
                    else {
                      dVar38 = *(double *)(param_1 + 3);
                    }
                    if (bVar11) {
                      *(double *)(lVar18 + 3) = dVar38;
                      return param_1;
                    }
                    dVar37 = *(double *)(lVar18 + 3);
                    if (dVar37 == dVar38) {
                      if ((int)((ulong)dVar37 >> 0x20) == (int)((ulong)dVar38 >> 0x20)) {
                        return param_1;
                      }
                      goto LAB_0134e588;
                    }
                  }
                  if ((NAN(dVar37)) && (NAN(dVar38))) {
                    return param_1;
                  }
                }
              }
              else if (iVar12 == *(int *)(lVar21 + lVar33 + 0x17)) {
                return param_1;
              }
            }
            goto LAB_0134e588;
          }
          if ((uVar15 >> 1 & 1) == 0) {
            bVar11 = (uVar15 >> 6 & 7) == 2;
            uVar24 = (ulong)*(byte *)(lVar18 + 4) + (((ulong)uVar15 & 0x1ff80000) >> 0x13);
            if (uVar24 < *(byte *)(lVar18 + 3)) {
              lVar18 = uVar24 * 4 + -1;
              if (bVar11) {
                uVar36 = *(undefined8 *)(unaff_x26 + (ulong)*(uint *)(param_2 + lVar18) + 3);
                goto LAB_0134be1c;
              }
              lVar13 = unaff_x26 + (ulong)*(uint *)(param_2 + lVar18);
            }
            else {
              uVar23 = unaff_x26 + (ulong)*(uint *)(param_2 + 3);
              if ((uVar23 & 1) == 0) {
                uVar23 = *(ulong *)(unaff_x26 + 0x168);
              }
              lVar13 = unaff_x26 +
                       (ulong)*(uint *)(uVar23 + (uVar24 - *(byte *)(lVar18 + 3)) * 4 + 7);
              if (bVar11) {
                uVar36 = *(undefined8 *)(lVar13 + 3);
LAB_0134be1c:
                uVar23 = **(ulong **)(unaff_x26 + 0x1428);
                uVar24 = uVar23 + 0xc;
                if (uVar24 < **(ulong **)(unaff_x26 + 0x1430)) {
                  lVar13 = uVar23 + 1;
                  **(ulong **)(unaff_x26 + 0x1428) = uVar24;
                }
                else {
                  lVar13 = FUN_01348560(param_1,0xc);
                }
                *(int *)(lVar13 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
                *(undefined8 *)(lVar13 + 3) = uVar36;
              }
            }
          }
          else {
            lVar13 = unaff_x26 + (ulong)*(uint *)(lVar21 + lVar33 + 0x17);
          }
LAB_0134ccd4:
          if (*(int *)(lVar13 + -1) != (int)*(undefined8 *)(unaff_x26 + 0xcc0)) {
            lVar18 = unaff_x26 + (ulong)*(uint *)(lVar13 + 7);
            lVar21 = unaff_x26 + (ulong)*(uint *)(lVar18 + -1);
            if ((int)lVar21 != (int)*(undefined8 *)(unaff_x26 + 0xca8)) {
              if ((*(byte *)(lVar21 + 9) >> 1 & 1) != 0) {
                FUN_0133fcc0(1,lVar18,param_1);
                return uVar22;
              }
                    /* WARNING: Subroutine does not return */
              FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x20f0),param_1);
            }
          }
          goto LAB_0134e588;
        }
        iVar34 = *(short *)(lVar21 + 5) + -1;
        iVar31 = 0;
        iVar27 = iVar34;
        do {
          iVar1 = iVar31 + ((uint)(iVar27 - iVar31) >> 1);
          if (*(uint *)(unaff_x26 +
                        (ulong)*(uint *)(lVar21 + (long)(int)(((uint)(*(int *)(lVar21 + (long)(iVar1
                                                                                              * 3) *
                                                                                        4 + 0x13) >>
                                                                     1) >> 9 & 0x3ff) * 3) * 4 + 0xf
                                        ) + 3) < *(uint *)(uVar22 + 3)) {
            iVar31 = iVar1 + 1;
            iVar1 = iVar27;
          }
          iVar27 = iVar1;
        } while (iVar31 != iVar27);
        for (; iVar31 <= iVar34; iVar31 = iVar31 + 1) {
          uVar17 = (uint)(*(int *)(lVar21 + (long)(iVar31 * 3) * 4 + 0x13) >> 1) >> 9 & 0x3ff;
          lVar33 = (long)(int)(uVar17 * 3);
          lVar13 = unaff_x26 + (ulong)*(uint *)(lVar21 + lVar33 * 4 + 0xf);
          if (*(uint *)(lVar13 + 3) != *(uint *)(uVar22 + 3)) break;
          if ((int)lVar13 == iVar19) {
            if (uVar17 < uVar15) goto LAB_0134bd74;
            break;
          }
        }
      }
LAB_0134c224:
      bVar11 = false;
      if ((((iVar19 != (int)*(undefined8 *)(unaff_x26 + 0x5d0)) &&
           (iVar19 != (int)*(undefined8 *)(unaff_x26 + 0xc18))) &&
          (iVar19 != (int)*(undefined8 *)(unaff_x26 + 0x848))) &&
         (((iVar19 != (int)*(undefined8 *)(unaff_x26 + 0xc48) &&
           (iVar19 != (int)*(undefined8 *)(unaff_x26 + 0xc70))) &&
          ((iVar19 != (int)*(undefined8 *)(unaff_x26 + 0x960) &&
           (iVar19 != (int)*(undefined8 *)(unaff_x26 + 0xa38))))))) {
        uVar24 = unaff_x26 + (ulong)*(uint *)(lVar18 + 0x23);
        if (((uVar24 & 1) != 0) && ((uint)uVar24 != 3)) {
          if (((uint)uVar24 & 3) == 1) {
            if (*(int *)(uVar24 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x148)) goto LAB_0134e588;
            bVar10 = (ulong)((long)((ulong)*(uint *)(uVar24 + 3) << 0x20) >> 0x21) < 2;
            if (bVar10) {
              uVar15 = 0;
            }
            else {
              uVar15 = *(int *)(uVar24 + 0xb) >> 1;
            }
            if (uVar15 == 0) goto LAB_0134e588;
            if (0x20 < uVar15) {
              if (bVar10) {
                iVar31 = 0;
              }
              else {
                iVar31 = *(int *)(uVar24 + 0xb) >> 1;
              }
              uVar17 = 0;
              uVar20 = iVar31 - 1U;
              do {
                uVar2 = uVar17 + (uVar20 - uVar17 >> 1);
                if (*(uint *)(unaff_x26 +
                              (ulong)*(uint *)(uVar24 + (long)(int)(uVar2 * 2) * 4 + 0xf) + 3) <
                    *(uint *)(uVar22 + 3)) {
                  uVar17 = uVar2 + 1;
                  uVar2 = uVar20;
                }
                uVar20 = uVar2;
              } while (uVar17 != uVar20);
              for (; (int)uVar17 <= (int)(iVar31 - 1U); uVar17 = uVar17 + 1) {
                lVar18 = unaff_x26 + (ulong)*(uint *)(uVar24 + (long)(int)(uVar17 << 1) * 4 + 0xf);
                if (*(uint *)(lVar18 + 3) != *(uint *)(uVar22 + 3)) break;
                if ((int)lVar18 == iVar19) {
                  if (uVar17 < uVar15) {
                    lVar18 = (long)(int)(uVar17 << 1) + 2;
                    goto LAB_0134c3cc;
                  }
                  break;
                }
              }
              goto LAB_0134e588;
            }
            lVar18 = (long)(int)uVar15 * 2 + 2;
            do {
              if (lVar18 == 2) goto LAB_0134e588;
              lVar18 = lVar18 + -2;
            } while (*(int *)(uVar24 + lVar18 * 4 + 7) != iVar19);
LAB_0134c3cc:
            uVar24 = unaff_x26 + (ulong)*(uint *)(uVar24 + lVar18 * 4 + 0xb);
          }
          uVar23 = uVar24 & 0xfffffffffffffffd;
          lVar18 = unaff_x26 + (ulong)*(uint *)(uVar23 + 0x1f);
          if ((((int)lVar18 == 0) || (*(int *)(lVar18 + 3) == 0)) &&
             ((*(uint *)(uVar23 + 0xb) >> 0x18 & 1) == 0)) {
            lVar18 = unaff_x26 + (ulong)*(uint *)(uVar23 + 0x17);
            lVar21 = (((ulong)(*(uint *)(uVar23 + 0xb) >> 10) & 0x3ff) * 3 + -3) * 4;
            if (*(int *)(lVar18 + lVar21 + 0xf) == iVar19) {
              uVar15 = *(int *)(lVar18 + lVar21 + 0x13) >> 1;
              if ((uVar15 & 0x29) == 0) {
                if (*(int *)(uVar22 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xf8)) {
                  bVar11 = (*(uint *)(uVar22 + 7) & 1) != 0;
                }
                if (((uVar15 & 0x10) != 0) == bVar11) {
                  uVar14 = (undefined4)uVar23;
                  if ((uVar15 >> 1 & 1) == 0) {
                    uVar17 = uVar15 >> 6 & 7;
                    if (uVar17 == 1) {
                      if ((param_1 & 1) == 0) goto LAB_0134c524;
                    }
                    else if (uVar17 == 2) {
                      if (((param_1 & 1) == 0) ||
                         (*(int *)(param_1 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x140)))
                      goto LAB_0134c524;
                    }
                    else if (uVar17 == 3) {
                      if ((((param_1 & 1) != 0) &&
                          (uVar20 = iVar16 + *(int *)(lVar18 + lVar21 + 0x17), uVar20 != 4)) &&
                         ((uVar20 == 2 ||
                          ((uVar20 != 3 && (*(uint *)(param_1 - 1) == (uVar20 & 0xfffffffd)))))))
                      goto LAB_0134c524;
                    }
                    else if (uVar17 != 0) {
LAB_0134c524:
                      bVar5 = *(byte *)(uVar23 + 3);
                      uVar22 = (ulong)*(byte *)(uVar23 + 4) + (((ulong)uVar15 & 0x1ff80000) >> 0x13)
                      ;
                      if (bVar5 <= uVar22) {
                        uVar25 = param_1;
                        if (uVar17 == 2) {
                          if ((param_1 & 1) == 0) {
                            dVar38 = (double)iVar28;
                          }
                          else {
                            dVar38 = *(double *)(param_1 + 3);
                          }
                          uVar25 = **(ulong **)(unaff_x26 + 0x1428);
                          uVar26 = uVar25 + 0xc;
                          if (uVar26 < **(ulong **)(unaff_x26 + 0x1430)) {
                            uVar25 = uVar25 + 1;
                            **(ulong **)(unaff_x26 + 0x1428) = uVar26;
                          }
                          else {
                            uVar25 = FUN_01348560(param_1,0xc,uVar22,uVar23,param_2);
                          }
                          *(int *)(uVar25 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
                          *(double *)(uVar25 + 3) = dVar38;
                        }
                        uVar23 = unaff_x26 + (ulong)*(uint *)(param_2 + 3);
                        if ((uVar23 & 1) == 0) {
                          uVar15 = ((int)uVar23 >> 1) << 10;
                          uVar23 = *(ulong *)(unaff_x26 + 0x168);
                          uVar26 = 0;
                        }
                        else {
                          uVar17 = *(int *)(uVar23 + 3) >> 1;
                          uVar15 = uVar17 & 0x3ffffc00;
                          uVar26 = (ulong)(int)(uVar17 & 0x3ff);
                        }
                        uVar22 = uVar22 - bVar5;
                        uVar29 = uVar23;
                        if (uVar26 <= uVar22) {
                          uVar29 = **(ulong **)(unaff_x26 + 0x1428);
                          lVar18 = (uVar26 + 3) * 4;
                          uVar3 = uVar29 + lVar18 + 8;
                          if (uVar3 < **(ulong **)(unaff_x26 + 0x1430)) {
                            uVar29 = uVar29 + 1;
                            **(ulong **)(unaff_x26 + 0x1428) = uVar3;
                          }
                          else {
                            uVar29 = FUN_01348560();
                          }
                          uVar17 = (uint)(uVar26 + 3);
                          *(int *)(uVar29 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x248);
                          *(uint *)(uVar29 + 3) = uVar17 * 2;
                          lVar18 = lVar18 + 7;
                          lVar21 = uVar26 * 4 + 7;
                          if (lVar18 != lVar21) {
                            uVar36 = *(undefined8 *)(unaff_x26 + 0xa0);
                            do {
                              lVar18 = lVar18 + -4;
                              *(int *)(uVar29 + lVar18) = (int)uVar36;
                            } while (lVar18 != lVar21);
                          }
                          while (lVar21 != 7) {
                            lVar21 = lVar21 + -4;
                            *(undefined4 *)(uVar29 + lVar21) = *(undefined4 *)(uVar23 + lVar21);
                          }
                          *(uint *)(uVar29 + 3) = (uVar15 | uVar17) * 2;
                          *(int *)(param_2 + 3) = (int)uVar29;
                          if (((((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 2 & 1)
                                != 0) && ((uVar29 & 1) != 0)) &&
                             (uVar29 = unaff_x26 + (uVar29 & 0xffffffff),
                             ((uint)*(undefined8 *)((uVar29 & 0xfffffffffffc0000) + 8) >> 1 & 1) !=
                             0)) {
                            FUN_0133eb00(param_2,param_2 + 3,0,2);
                            uVar29 = extraout_x10_01;
                          }
                        }
                        lVar18 = uVar22 * 4 + 7;
                        *(int *)(uVar29 + lVar18) = (int)uVar25;
                        if (((((uint)*(undefined8 *)((uVar29 & 0xfffffffffffc0000) + 8) >> 2 & 1) !=
                              0) && ((uVar25 & 1) != 0)) &&
                           (((uint)*(undefined8 *)
                                    ((unaff_x26 + (uVar25 & 0xffffffff) & 0xfffffffffffc0000) + 8)
                             >> 1 & 1) != 0)) {
                          FUN_0133eb00(uVar29,uVar29 + lVar18,0,2);
                        }
                        *(undefined4 *)(param_2 - 1) = uVar14;
                        if (((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 2 & 1) ==
                            0) {
                          return param_1;
                        }
                        if (((uint)*(undefined8 *)
                                    ((unaff_x26 + (uVar24 & 0xfffffffd) & 0xfffffffffffc0000) + 8)
                             >> 1 & 1) == 0) {
                          return param_1;
                        }
                        FUN_0133eb00(param_2,param_2 - 1,2,2);
                        return param_1;
                      }
                      lVar18 = uVar22 * 4 + -1;
                      if (uVar17 != 2) {
                        *(undefined4 *)(param_2 - 1) = uVar14;
                        if ((((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 2 & 1) !=
                             0) && (((uint)*(undefined8 *)
                                            ((unaff_x26 + (uVar24 & 0xfffffffd) & 0xfffffffffffc0000
                                             ) + 8) >> 1 & 1) != 0)) {
                          FUN_0133eb00(param_2,param_2 - 1,2,2);
                        }
                        *(int *)(param_2 + lVar18) = iVar12;
                        if (((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 2 & 1) ==
                            0) {
                          return param_1;
                        }
                        if ((param_1 & 1) == 0) {
                          return param_1;
                        }
                        uVar22 = unaff_x26 + (param_1 & 0xffffffff);
                        if (((uint)*(undefined8 *)((uVar22 & 0xfffffffffffc0000) + 8) >> 1 & 1) == 0
                           ) {
                          return uVar22;
                        }
                        FUN_0133eb00(param_2,param_2 + lVar18,0,2);
                        return uVar22;
                      }
                      if ((param_1 & 1) == 0) {
                        dVar38 = (double)iVar28;
                      }
                      else {
                        dVar38 = *(double *)(param_1 + 3);
                      }
                      uVar25 = **(ulong **)(unaff_x26 + 0x1428);
                      uVar22 = uVar25 + 0xc;
                      if (uVar22 < **(ulong **)(unaff_x26 + 0x1430)) {
                        uVar25 = uVar25 + 1;
                        **(ulong **)(unaff_x26 + 0x1428) = uVar22;
                      }
                      else {
                        uVar25 = FUN_01348560(param_1,0xc,lVar18,uVar23,param_2);
                      }
                      *(int *)(uVar25 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
                      *(double *)(uVar25 + 3) = dVar38;
                      *(undefined4 *)(param_2 - 1) = uVar14;
                      if ((((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0
                          ) && (((uint)*(undefined8 *)
                                        ((unaff_x26 + (uVar24 & 0xfffffffd) & 0xfffffffffffc0000) +
                                        8) >> 1 & 1) != 0)) {
                        FUN_0133eb00(param_2,param_2 - 1,2,2);
                      }
                      *(int *)(param_2 + lVar18) = (int)uVar25;
                      if (((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0)
                      {
                        return param_1;
                      }
                      if ((uVar25 & 1) == 0) {
                        return param_1;
                      }
                      if (((uint)*(undefined8 *)
                                  ((unaff_x26 + (uVar25 & 0xffffffff) & 0xfffffffffffc0000) + 8) >>
                           1 & 1) == 0) {
                        return param_1;
                      }
                      FUN_0133eb00(param_2,param_2 + lVar18,0,2);
                      return param_1;
                    }
                  }
                  else if (iVar12 == *(int *)(lVar18 + lVar21 + 0x17)) {
                    *(undefined4 *)(param_2 - 1) = uVar14;
                    if (((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
                      return param_1;
                    }
                    if (((uint)*(undefined8 *)
                                ((unaff_x26 + (uVar24 & 0xfffffffd) & 0xfffffffffffc0000) + 8) >> 1
                        & 1) == 0) {
                      return param_1;
                    }
                    FUN_0133eb00(param_2,param_2 - 1,2,2);
                    return param_1;
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_0134e588;
    }
  }
LAB_0134d03c:
  uVar24 = unaff_x26 + (ulong)*(uint *)(param_2 + 7);
  bVar5 = *(byte *)(lVar18 + 10) >> 3;
  if (5 < bVar5) goto LAB_0134e588;
  iVar19 = (int)lVar18;
  if (uVar6 == 0x423) {
    uVar23 = (long)(unaff_x26 + (ulong)*(uint *)(param_2 + 0xb) << 0x20) >> 0x21;
    if (uVar23 <= uVar22) {
      iVar31 = iVar16 + *(int *)(uVar24 + 3) >> 1;
      uVar25 = (ulong)iVar31;
      if (uVar22 < uVar25) {
        if (uVar22 == uVar23) {
          if (((*(uint *)(lVar18 + 0xb) >> 0x15 & 1) == 0) &&
             (((uint)(*(int *)(unaff_x26 + (ulong)*(uint *)(lVar18 + 0x17) + 0x13) >> 1) >> 3 & 1)
              == 0)) {
            iVar34 = (int)uVar22;
            if (*(int *)(uVar24 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xe0)) {
              while (lVar18 = unaff_x26 + (ulong)*(uint *)(lVar18 + 0xf),
                    (int)lVar18 != (int)*(undefined8 *)(unaff_x26 + 0xb0)) {
                lVar18 = unaff_x26 + (ulong)*(uint *)(lVar18 + -1);
                if ((*(ushort *)(lVar18 + 7) < 0x412) ||
                   ((bVar8 = *(byte *)(lVar18 + 10) >> 3, 5 < bVar8 && (bVar8 != 0x1c))))
                goto LAB_0134e588;
              }
              if ((param_1 & 1) == 0) {
                *(int *)(uVar24 + uVar22 * 4 + 7) = iVar12;
                *(int *)(param_2 + 0xb) = (iVar34 + 1) * 2;
                return param_1;
              }
              if (1 < bVar5) {
                lVar18 = uVar22 * 4 + 7;
                *(int *)(uVar24 + lVar18) = iVar12;
                if (((((uint)*(undefined8 *)((uVar24 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                    ((param_1 & 1) != 0)) &&
                   (param_1 = unaff_x26 + (param_1 & 0xffffffff),
                   ((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
                  FUN_0133eb00(uVar24,uVar24 + lVar18,0,2);
                }
                *(int *)(param_2 + 0xb) = (iVar34 + 1) * 2;
                return param_1;
              }
              lVar18 = unaff_x26 +
                       (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13);
              if (*(int *)(param_1 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x140)) {
                uVar23 = *(ulong *)((param_2 & 0xfffffffffffc0000) + 8);
                if (((uVar23 & 0x18) != 0) && (((uint)uVar23 >> 5 & 1) == 0)) {
                  uVar23 = param_2 + 0x13 & 0xfffffffffffc0000;
                  if (uVar23 == (**(ulong **)(unaff_x26 + 0x1428) & 0xfffffffffffc0000)) {
                    if (param_2 + 0x13 < **(ulong **)(unaff_x26 + 0x1428)) goto LAB_0134da8c;
                  }
                  else if ((param_2 & 0xfffffffffffc0000) == uVar23) {
LAB_0134da8c:
                    if (*(int *)(param_2 + 0xf) == (int)*(undefined8 *)(unaff_x26 + 0xcd8))
                    goto LAB_0134e588;
                  }
                }
                if (iVar19 == *(int *)(lVar18 + 0x15f)) {
                  uVar15 = *(uint *)(lVar18 + 0x167);
                }
                else {
                  if (iVar19 != *(int *)(lVar18 + 0x163)) goto LAB_0134e588;
                  uVar15 = *(uint *)(lVar18 + 0x16b);
                }
                lVar18 = uVar22 * 4;
                *(uint *)(param_2 - 1) = uVar15;
                if ((((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                   (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar15 & 0xfffffffffffc0000) + 8) >>
                     1 & 1) != 0)) {
                  FUN_0133eb00(param_2,param_2 - 1,2,2);
                  uVar24 = extraout_x8_02;
                }
                lVar18 = lVar18 + 7;
                *(int *)(uVar24 + lVar18) = iVar12;
                if (((((uint)*(undefined8 *)((uVar24 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                    ((param_1 & 1) != 0)) &&
                   (param_1 = unaff_x26 + (param_1 & 0xffffffff),
                   ((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
                  FUN_0133eb00(uVar24,uVar24 + lVar18,0,2);
                }
                *(int *)(param_2 + 0xb) = ((int)uVar22 + 1) * 2;
                return param_1;
              }
              uVar23 = *(ulong *)((param_2 & 0xfffffffffffc0000) + 8);
              if (((uVar23 & 0x18) != 0) && (((uint)uVar23 >> 5 & 1) == 0)) {
                uVar23 = param_2 + 0x13 & 0xfffffffffffc0000;
                if (uVar23 == (**(ulong **)(unaff_x26 + 0x1428) & 0xfffffffffffc0000)) {
                  if (param_2 + 0x13 < **(ulong **)(unaff_x26 + 0x1428)) goto LAB_0134db5c;
                }
                else if ((param_2 & 0xfffffffffffc0000) == uVar23) {
LAB_0134db5c:
                  if (*(int *)(param_2 + 0xf) == (int)*(undefined8 *)(unaff_x26 + 0xcd8))
                  goto LAB_0134e588;
                }
              }
              if (iVar19 == *(int *)(lVar18 + 0x15f)) {
                uVar15 = *(uint *)(lVar18 + 0x16f);
              }
              else {
                if (iVar19 != *(int *)(lVar18 + 0x163)) goto LAB_0134e588;
                uVar15 = *(uint *)(lVar18 + 0x173);
              }
              if (uVar25 < 0x3fff) {
                if (0x3fffffe < (long)uVar25) {
                    /* WARNING: Subroutine does not return */
                  FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
                }
                if (uVar25 * 8 + 8 < 0x40000000) {
                  puVar30 = *(ulong **)(unaff_x26 + 0x1428);
                  puVar32 = (undefined4 *)*puVar30;
                  if (puVar32 + uVar25 * 2 + 2 < (undefined4 *)puVar30[1]) {
                    uVar23 = (long)puVar32 + 1;
                    *puVar30 = (ulong)(puVar32 + uVar25 * 2 + 2);
                    *puVar32 = (int)*(undefined8 *)(unaff_x26 + 0x1e8);
                    puVar32[1] = iVar31 * 2;
                    lVar18 = uVar25 * 4 + 7;
                    if (lVar18 != 7) {
                      lVar21 = uVar25 * 8 + 7;
                      uVar36 = *(undefined8 *)(unaff_x26 + 0xa8);
                      do {
                        lVar18 = lVar18 + -4;
                        iVar28 = iVar16 + *(int *)(uVar24 + lVar18);
                        lVar21 = lVar21 + -8;
                        if (iVar28 == (int)uVar36) {
                          *(undefined8 *)(uVar23 + lVar21) = 0xfff7fffffff7ffff;
                        }
                        else {
                          *(double *)(uVar23 + lVar21) = (double)(iVar28 >> 1);
                        }
                      } while (lVar18 != 7);
                    }
                    *(int *)(param_2 + 7) = (int)uVar23;
                    if (((((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0)
                        && ((uVar23 & 1) != 0)) &&
                       (((uint)*(undefined8 *)
                                ((unaff_x26 + (uVar23 & 0xffffffff) & 0xfffffffffffc0000) + 8) >> 1
                        & 1) != 0)) {
                      FUN_0133eb00(param_2,param_2 + 7,0,2);
                    }
                    lVar18 = uVar22 * 8;
                    *(uint *)(param_2 - 1) = uVar15;
                    if ((((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0)
                       && (((uint)*(undefined8 *)
                                   ((unaff_x26 + (ulong)uVar15 & 0xfffffffffffc0000) + 8) >> 1 & 1)
                           != 0)) {
                      FUN_0133eb00(param_2,param_2 - 1,2,2);
                    }
                    *(double *)(unaff_x26 + (ulong)*(uint *)(param_2 + 7) + lVar18 + 7) =
                         *(double *)(param_1 + 3) - unaff_d15;
                    *(int *)(param_2 + 0xb) = ((int)uVar22 + 1) * 2;
                    return param_1;
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x1f88),param_1);
                }
                    /* WARNING: Subroutine does not return */
                FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fc8));
              }
            }
            else if (*(int *)(uVar24 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x1e8)) {
              while (lVar18 = unaff_x26 + (ulong)*(uint *)(lVar18 + 0xf),
                    (int)lVar18 != (int)*(undefined8 *)(unaff_x26 + 0xb0)) {
                lVar18 = unaff_x26 + (ulong)*(uint *)(lVar18 + -1);
                if ((*(ushort *)(lVar18 + 7) < 0x412) ||
                   ((bVar5 = *(byte *)(lVar18 + 10) >> 3, 5 < bVar5 && (bVar5 != 0x1c))))
                goto LAB_0134e588;
              }
              if ((param_1 & 1) == 0) {
                dVar38 = (double)iVar28;
LAB_0134df60:
                *(double *)(uVar24 + uVar22 * 8 + 7) = dVar38 - unaff_d15;
                *(int *)(param_2 + 0xb) = (iVar34 + 1) * 2;
                return param_1;
              }
              if (*(int *)(param_1 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x140)) {
                dVar38 = *(double *)(param_1 + 3);
                goto LAB_0134df60;
              }
              uVar23 = *(ulong *)((param_2 & 0xfffffffffffc0000) + 8);
              lVar18 = unaff_x26 +
                       (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13);
              if (((uVar23 & 0x18) != 0) && (((uint)uVar23 >> 5 & 1) == 0)) {
                uVar23 = param_2 + 0x13 & 0xfffffffffffc0000;
                if (uVar23 == (**(ulong **)(unaff_x26 + 0x1428) & 0xfffffffffffc0000)) {
                  if (param_2 + 0x13 < **(ulong **)(unaff_x26 + 0x1428)) goto LAB_0134dd9c;
                }
                else if ((param_2 & 0xfffffffffffc0000) == uVar23) {
LAB_0134dd9c:
                  if (*(int *)(param_2 + 0xf) == (int)*(undefined8 *)(unaff_x26 + 0xcd8))
                  goto LAB_0134e588;
                }
              }
              if (iVar19 == *(int *)(lVar18 + 0x16f)) {
                uVar15 = *(uint *)(lVar18 + 0x167);
              }
              else {
                if (iVar19 != *(int *)(lVar18 + 0x173)) goto LAB_0134e588;
                uVar15 = *(uint *)(lVar18 + 0x16b);
              }
              if (uVar25 < 0x7ffe) {
                if ((long)uVar25 < 0x7fffffe) {
                  uVar23 = **(ulong **)(unaff_x26 + 0x1428);
                  uVar26 = uVar23 + uVar25 * 4 + 8;
                  if (uVar26 < **(ulong **)(unaff_x26 + 0x1430)) {
                    uVar23 = uVar23 + 1;
                    **(ulong **)(unaff_x26 + 0x1428) = uVar26;
                  }
                  else {
                    uVar23 = FUN_01348560();
                  }
                  *(int *)(uVar23 - 1) = (int)*(undefined8 *)(unaff_x26 + 0xe0);
                  *(int *)(uVar23 + 3) = iVar31 * 2;
                  if (uVar25 * 4 != 0) {
                    lVar18 = uVar25 * 4 + 7;
                    uVar36 = *(undefined8 *)(unaff_x26 + 0xa8);
                    do {
                      lVar18 = lVar18 + -4;
                      *(int *)(uVar23 + lVar18) = (int)uVar36;
                    } while (lVar18 != 7);
                  }
                  lVar18 = uVar25 * 8 + 7;
                  uVar26 = param_2;
                  if (lVar18 != 7) {
                    lVar21 = uVar25 * 4 + 7;
                    lVar33 = -0x8000000080001;
                    while( true ) {
                      lVar18 = lVar18 + -8;
                      if (*(long *)(uVar24 + lVar18) != lVar33) {
                        uVar29 = **(ulong **)(unaff_x26 + 0x1428);
                        uVar36 = *(undefined8 *)(uVar24 + lVar18);
                        uVar25 = uVar29 + 0xc;
                        if (uVar25 < **(ulong **)(unaff_x26 + 0x1430)) {
                          uVar29 = uVar29 + 1;
                          **(ulong **)(unaff_x26 + 0x1428) = uVar25;
                        }
                        else {
                          uVar29 = FUN_01348560(param_1,0xc);
                          lVar33 = -0x8000000080001;
                          uVar26 = param_2;
                        }
                        *(int *)(uVar29 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
                        *(undefined8 *)(uVar29 + 3) = uVar36;
                        *(int *)(uVar23 + lVar21 + -4) = (int)uVar29;
                        if (((((uint)*(undefined8 *)((uVar23 & 0xfffffffffffc0000) + 8) >> 2 & 1) !=
                              0) && ((uVar29 & 1) != 0)) &&
                           (((uint)*(undefined8 *)
                                    ((unaff_x26 + (uVar29 & 0xffffffff) & 0xfffffffffffc0000) + 8)
                             >> 1 & 1) != 0)) {
                          FUN_0133eb00(uVar23,uVar23 + lVar21 + -4,0,2);
                          uVar24 = extraout_x8_01;
                          lVar33 = extraout_x9_00;
                        }
                      }
                      if (lVar18 == 7) break;
                      lVar21 = lVar21 + -4;
                    }
                  }
                  *(int *)(uVar26 + 7) = (int)uVar23;
                  if (((((uint)*(undefined8 *)((uVar26 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                      ((uVar23 & 1) != 0)) &&
                     (((uint)*(undefined8 *)
                              ((unaff_x26 + (uVar23 & 0xffffffff) & 0xfffffffffffc0000) + 8) >> 1 &
                      1) != 0)) {
                    FUN_0133eb00(uVar26,uVar26 + 7,0,2);
                  }
                  lVar18 = uVar22 * 4;
                  *(uint *)(uVar26 - 1) = uVar15;
                  if ((((uint)*(undefined8 *)((uVar26 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                     (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar15 & 0xfffffffffffc0000) + 8)
                       >> 1 & 1) != 0)) {
                    FUN_0133eb00(uVar26,uVar26 - 1,2,2);
                  }
                  lVar18 = lVar18 + 7;
                  uVar24 = unaff_x26 + (ulong)*(uint *)(uVar26 + 7);
                  *(int *)(uVar24 + lVar18) = iVar12;
                  if (((((uint)*(undefined8 *)((uVar24 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                      ((param_1 & 1) != 0)) &&
                     (param_1 = unaff_x26 + (param_1 & 0xffffffff),
                     ((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
                    FUN_0133eb00(uVar24,uVar24 + lVar18,0,2);
                  }
                  *(int *)(uVar26 + 0xb) = ((int)uVar22 + 1) * 2;
                  return param_1;
                }
                    /* WARNING: Subroutine does not return */
                FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
              }
            }
          }
        }
        else if (((*(uint *)(lVar18 + 0xb) >> 0x15 & 1) == 0) &&
                (((uint)(*(int *)(unaff_x26 + (ulong)*(uint *)(lVar18 + 0x17) + 0x13) >> 1) >> 3 & 1
                 ) == 0)) {
          if (*(int *)(uVar24 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xe0)) {
            while (lVar18 = unaff_x26 + (ulong)*(uint *)(lVar18 + 0xf),
                  (int)lVar18 != (int)*(undefined8 *)(unaff_x26 + 0xb0)) {
              lVar18 = unaff_x26 + (ulong)*(uint *)(lVar18 + -1);
              if ((*(ushort *)(lVar18 + 7) < 0x412) ||
                 ((bVar8 = *(byte *)(lVar18 + 10) >> 3, 5 < bVar8 && (bVar8 != 0x1c))))
              goto LAB_0134e588;
            }
            if ((param_1 & 1) == 0) {
              if ((bVar5 == 1) || (bVar5 == 3)) goto LAB_0134d5f8;
              lVar18 = unaff_x26 +
                       (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13);
              if (iVar19 == *(int *)(lVar18 + 0x15f)) {
                uVar23 = *(ulong *)((param_2 & 0xfffffffffffc0000) + 8);
                if (((uVar23 & 0x18) != 0) && (((uint)uVar23 >> 5 & 1) == 0)) {
                  uVar23 = param_2 + 0x13 & 0xfffffffffffc0000;
                  if (uVar23 == (**(ulong **)(unaff_x26 + 0x1428) & 0xfffffffffffc0000)) {
                    if (param_2 + 0x13 < **(ulong **)(unaff_x26 + 0x1428)) goto LAB_0134d534;
                  }
                  else if ((param_2 & 0xfffffffffffc0000) == uVar23) {
LAB_0134d534:
                    if (*(int *)(param_2 + 0xf) == (int)*(undefined8 *)(unaff_x26 + 0xcd8))
                    goto LAB_0134e588;
                  }
                }
                uVar15 = *(uint *)(lVar18 + 0x163);
                *(uint *)(param_2 - 1) = uVar15;
                if ((((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                   (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar15 & 0xfffffffffffc0000) + 8) >>
                     1 & 1) != 0)) {
                  FUN_0133eb00(param_2,param_2 - 1,2,2);
                  uVar24 = extraout_x8_06;
                }
LAB_0134d5f8:
                *(int *)(uVar24 + uVar22 * 4 + 7) = iVar12;
                *(int *)(param_2 + 0xb) = ((int)uVar22 + 1) * 2;
                return param_1;
              }
              if (iVar19 == *(int *)(lVar18 + 0x167)) {
                uVar23 = *(ulong *)((param_2 & 0xfffffffffffc0000) + 8);
                if (((uVar23 & 0x18) != 0) && (((uint)uVar23 >> 5 & 1) == 0)) {
                  uVar23 = param_2 + 0x13 & 0xfffffffffffc0000;
                  if (uVar23 == (**(ulong **)(unaff_x26 + 0x1428) & 0xfffffffffffc0000)) {
                    if (param_2 + 0x13 < **(ulong **)(unaff_x26 + 0x1428)) goto LAB_0134d5bc;
                  }
                  else if ((param_2 & 0xfffffffffffc0000) == uVar23) {
LAB_0134d5bc:
                    if (*(int *)(param_2 + 0xf) == (int)*(undefined8 *)(unaff_x26 + 0xcd8))
                    goto LAB_0134e588;
                  }
                }
                uVar15 = *(uint *)(lVar18 + 0x16b);
                *(uint *)(param_2 - 1) = uVar15;
                if ((((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                   (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar15 & 0xfffffffffffc0000) + 8) >>
                     1 & 1) != 0)) {
                  FUN_0133eb00(param_2,param_2 - 1,2,2);
                  uVar24 = extraout_x8_05;
                }
                goto LAB_0134d5f8;
              }
            }
            else if (bVar5 < 2) {
              lVar18 = unaff_x26 +
                       (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13);
              if (*(int *)(param_1 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x140)) {
                uVar23 = *(ulong *)((param_2 & 0xfffffffffffc0000) + 8);
                if (((uVar23 & 0x18) != 0) && (((uint)uVar23 >> 5 & 1) == 0)) {
                  uVar23 = param_2 + 0x13 & 0xfffffffffffc0000;
                  if (uVar23 == (**(ulong **)(unaff_x26 + 0x1428) & 0xfffffffffffc0000)) {
                    if (param_2 + 0x13 < **(ulong **)(unaff_x26 + 0x1428)) goto LAB_0134d294;
                  }
                  else if ((param_2 & 0xfffffffffffc0000) == uVar23) {
LAB_0134d294:
                    if (*(int *)(param_2 + 0xf) == (int)*(undefined8 *)(unaff_x26 + 0xcd8))
                    goto LAB_0134e588;
                  }
                }
                if (iVar19 == *(int *)(lVar18 + 0x15f)) {
                  uVar15 = *(uint *)(lVar18 + 0x16b);
                }
                else {
                  if (iVar19 != *(int *)(lVar18 + 0x163)) goto LAB_0134e588;
                  uVar15 = *(uint *)(lVar18 + 0x16b);
                }
                lVar18 = uVar22 * 4;
                *(uint *)(param_2 - 1) = uVar15;
                if ((((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                   (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar15 & 0xfffffffffffc0000) + 8) >>
                     1 & 1) != 0)) {
                  FUN_0133eb00(param_2,param_2 - 1,2,2);
                  uVar24 = extraout_x8_07;
                }
                lVar18 = lVar18 + 7;
                *(int *)(uVar24 + lVar18) = iVar12;
                if (((((uint)*(undefined8 *)((uVar24 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                    ((param_1 & 1) != 0)) &&
                   (param_1 = unaff_x26 + (param_1 & 0xffffffff),
                   ((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
                  FUN_0133eb00(uVar24,uVar24 + lVar18,0,2);
                }
                *(int *)(param_2 + 0xb) = ((int)uVar22 + 1) * 2;
                return param_1;
              }
              uVar23 = *(ulong *)((param_2 & 0xfffffffffffc0000) + 8);
              if (((uVar23 & 0x18) != 0) && (((uint)uVar23 >> 5 & 1) == 0)) {
                uVar23 = param_2 + 0x13 & 0xfffffffffffc0000;
                if (uVar23 == (**(ulong **)(unaff_x26 + 0x1428) & 0xfffffffffffc0000)) {
                  if (param_2 + 0x13 < **(ulong **)(unaff_x26 + 0x1428)) goto LAB_0134d364;
                }
                else if ((param_2 & 0xfffffffffffc0000) == uVar23) {
LAB_0134d364:
                  if (*(int *)(param_2 + 0xf) == (int)*(undefined8 *)(unaff_x26 + 0xcd8))
                  goto LAB_0134e588;
                }
              }
              if (iVar19 == *(int *)(lVar18 + 0x15f)) {
                uVar15 = *(uint *)(lVar18 + 0x173);
              }
              else {
                if (iVar19 != *(int *)(lVar18 + 0x163)) goto LAB_0134e588;
                uVar15 = *(uint *)(lVar18 + 0x173);
              }
              if (uVar25 < 0x3fff) {
                if (0x3fffffe < (long)uVar25) {
                    /* WARNING: Subroutine does not return */
                  FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
                }
                if (uVar25 * 8 + 8 < 0x40000000) {
                  puVar30 = *(ulong **)(unaff_x26 + 0x1428);
                  puVar32 = (undefined4 *)*puVar30;
                  lVar18 = uVar25 * 4 + 7;
                  if (puVar32 + uVar25 * 2 + 2 < (undefined4 *)puVar30[1]) {
                    uVar23 = (long)puVar32 + 1;
                    *puVar30 = (ulong)(puVar32 + uVar25 * 2 + 2);
                    *puVar32 = (int)*(undefined8 *)(unaff_x26 + 0x1e8);
                    puVar32[1] = iVar31 * 2;
                    if (lVar18 != 7) {
                      lVar21 = uVar25 * 8 + 7;
                      uVar36 = *(undefined8 *)(unaff_x26 + 0xa8);
                      do {
                        lVar18 = lVar18 + -4;
                        iVar28 = iVar16 + *(int *)(uVar24 + lVar18);
                        lVar21 = lVar21 + -8;
                        if (iVar28 == (int)uVar36) {
                          *(undefined8 *)(uVar23 + lVar21) = 0xfff7fffffff7ffff;
                        }
                        else {
                          *(double *)(uVar23 + lVar21) = (double)(iVar28 >> 1);
                        }
                      } while (lVar18 != 7);
                    }
                    *(int *)(param_2 + 7) = (int)uVar23;
                    if (((((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0)
                        && ((uVar23 & 1) != 0)) &&
                       (((uint)*(undefined8 *)
                                ((unaff_x26 + (uVar23 & 0xffffffff) & 0xfffffffffffc0000) + 8) >> 1
                        & 1) != 0)) {
                      FUN_0133eb00(param_2,param_2 + 7,0,2);
                    }
                    lVar18 = uVar22 * 8;
                    *(uint *)(param_2 - 1) = uVar15;
                    if ((((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0)
                       && (((uint)*(undefined8 *)
                                   ((unaff_x26 + (ulong)uVar15 & 0xfffffffffffc0000) + 8) >> 1 & 1)
                           != 0)) {
                      FUN_0133eb00(param_2,param_2 - 1,2,2);
                    }
                    *(double *)(unaff_x26 + (ulong)*(uint *)(param_2 + 7) + lVar18 + 7) =
                         *(double *)(param_1 + 3) - unaff_d15;
                    *(int *)(param_2 + 0xb) = ((int)uVar22 + 1) * 2;
                    return param_1;
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x1f88),param_1);
                }
                    /* WARNING: Subroutine does not return */
                FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fc8));
              }
            }
            else {
              if (bVar5 == 3) goto LAB_0134d208;
              lVar18 = unaff_x26 +
                       (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13);
              if (iVar19 == *(int *)(lVar18 + 0x167)) {
                uVar23 = *(ulong *)((param_2 & 0xfffffffffffc0000) + 8);
                if (((uVar23 & 0x18) != 0) && (((uint)uVar23 >> 5 & 1) == 0)) {
                  uVar23 = param_2 + 0x13 & 0xfffffffffffc0000;
                  if (uVar23 == (**(ulong **)(unaff_x26 + 0x1428) & 0xfffffffffffc0000)) {
                    if (param_2 + 0x13 < **(ulong **)(unaff_x26 + 0x1428)) goto LAB_0134d1cc;
                  }
                  else if ((param_2 & 0xfffffffffffc0000) == uVar23) {
LAB_0134d1cc:
                    if (*(int *)(param_2 + 0xf) == (int)*(undefined8 *)(unaff_x26 + 0xcd8))
                    goto LAB_0134e588;
                  }
                }
                uVar15 = *(uint *)(lVar18 + 0x16b);
                *(uint *)(param_2 - 1) = uVar15;
                if ((((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                   (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar15 & 0xfffffffffffc0000) + 8) >>
                     1 & 1) != 0)) {
                  FUN_0133eb00(param_2,param_2 - 1,2,2);
                  uVar24 = extraout_x8_08;
                }
LAB_0134d208:
                lVar18 = uVar22 * 4 + 7;
                *(int *)(uVar24 + lVar18) = iVar12;
                if (((((uint)*(undefined8 *)((uVar24 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                    ((param_1 & 1) != 0)) &&
                   (param_1 = unaff_x26 + (param_1 & 0xffffffff),
                   ((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
                  FUN_0133eb00(uVar24,uVar24 + lVar18,0,2);
                }
                *(int *)(param_2 + 0xb) = ((int)uVar22 + 1) * 2;
                return param_1;
              }
            }
          }
          else if (*(int *)(uVar24 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x1e8)) {
            while (lVar18 = unaff_x26 + (ulong)*(uint *)(lVar18 + 0xf),
                  (int)lVar18 != (int)*(undefined8 *)(unaff_x26 + 0xb0)) {
              lVar18 = unaff_x26 + (ulong)*(uint *)(lVar18 + -1);
              if ((*(ushort *)(lVar18 + 7) < 0x412) ||
                 ((bVar8 = *(byte *)(lVar18 + 10) >> 3, 5 < bVar8 && (bVar8 != 0x1c))))
              goto LAB_0134e588;
            }
            if ((param_1 & 1) == 0) {
              dVar38 = (double)iVar28;
            }
            else {
              if (*(int *)(param_1 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x140)) {
                uVar23 = *(ulong *)((param_2 & 0xfffffffffffc0000) + 8);
                lVar18 = unaff_x26 +
                         (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13);
                if (((uVar23 & 0x18) != 0) && (((uint)uVar23 >> 5 & 1) == 0)) {
                  uVar23 = param_2 + 0x13 & 0xfffffffffffc0000;
                  if (uVar23 == (**(ulong **)(unaff_x26 + 0x1428) & 0xfffffffffffc0000)) {
                    if (param_2 + 0x13 < **(ulong **)(unaff_x26 + 0x1428)) goto LAB_0134d6dc;
                  }
                  else if ((param_2 & 0xfffffffffffc0000) == uVar23) {
LAB_0134d6dc:
                    if (*(int *)(param_2 + 0xf) == (int)*(undefined8 *)(unaff_x26 + 0xcd8))
                    goto LAB_0134e588;
                  }
                }
                if (iVar19 == *(int *)(lVar18 + 0x16f)) {
                  uVar15 = *(uint *)(lVar18 + 0x16b);
                }
                else {
                  if (iVar19 != *(int *)(lVar18 + 0x173)) goto LAB_0134e588;
                  uVar15 = *(uint *)(lVar18 + 0x16b);
                }
                if (uVar25 < 0x7ffe) {
                  if ((long)uVar25 < 0x7fffffe) {
                    uVar23 = **(ulong **)(unaff_x26 + 0x1428);
                    uVar26 = uVar23 + uVar25 * 4 + 8;
                    if (uVar26 < **(ulong **)(unaff_x26 + 0x1430)) {
                      uVar23 = uVar23 + 1;
                      **(ulong **)(unaff_x26 + 0x1428) = uVar26;
                    }
                    else {
                      uVar23 = FUN_01348560();
                    }
                    *(int *)(uVar23 - 1) = (int)*(undefined8 *)(unaff_x26 + 0xe0);
                    lVar18 = uVar25 * 4 + 7;
                    *(int *)(uVar23 + 3) = iVar31 * 2;
                    if (lVar18 != 7) {
                      uVar36 = *(undefined8 *)(unaff_x26 + 0xa8);
                      do {
                        lVar18 = lVar18 + -4;
                        *(int *)(uVar23 + lVar18) = (int)uVar36;
                      } while (lVar18 != 7);
                    }
                    lVar18 = uVar25 * 8 + 7;
                    uVar26 = param_2;
                    if (lVar18 != 7) {
                      lVar21 = uVar25 * 4 + 7;
                      lVar33 = -0x8000000080001;
                      while( true ) {
                        lVar18 = lVar18 + -8;
                        if (*(long *)(uVar24 + lVar18) != lVar33) {
                          uVar29 = **(ulong **)(unaff_x26 + 0x1428);
                          uVar36 = *(undefined8 *)(uVar24 + lVar18);
                          uVar25 = uVar29 + 0xc;
                          if (uVar25 < **(ulong **)(unaff_x26 + 0x1430)) {
                            uVar29 = uVar29 + 1;
                            **(ulong **)(unaff_x26 + 0x1428) = uVar25;
                          }
                          else {
                            uVar29 = FUN_01348560(param_1,0xc);
                            lVar33 = -0x8000000080001;
                            uVar26 = param_2;
                          }
                          *(int *)(uVar29 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
                          *(undefined8 *)(uVar29 + 3) = uVar36;
                          *(int *)(uVar23 + lVar21 + -4) = (int)uVar29;
                          if (((((uint)*(undefined8 *)((uVar23 & 0xfffffffffffc0000) + 8) >> 2 & 1)
                                != 0) && ((uVar29 & 1) != 0)) &&
                             (((uint)*(undefined8 *)
                                      ((unaff_x26 + (uVar29 & 0xffffffff) & 0xfffffffffffc0000) + 8)
                               >> 1 & 1) != 0)) {
                            FUN_0133eb00(uVar23,uVar23 + lVar21 + -4,0,2);
                            uVar24 = extraout_x8_04;
                            lVar33 = extraout_x9_01;
                          }
                        }
                        if (lVar18 == 7) break;
                        lVar21 = lVar21 + -4;
                      }
                    }
                    *(int *)(uVar26 + 7) = (int)uVar23;
                    if (((((uint)*(undefined8 *)((uVar26 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0)
                        && ((uVar23 & 1) != 0)) &&
                       (((uint)*(undefined8 *)
                                ((unaff_x26 + (uVar23 & 0xffffffff) & 0xfffffffffffc0000) + 8) >> 1
                        & 1) != 0)) {
                      FUN_0133eb00(uVar26,uVar26 + 7,0,2);
                    }
                    lVar18 = uVar22 * 4;
                    *(uint *)(uVar26 - 1) = uVar15;
                    if ((((uint)*(undefined8 *)((uVar26 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0)
                       && (((uint)*(undefined8 *)
                                   ((unaff_x26 + (ulong)uVar15 & 0xfffffffffffc0000) + 8) >> 1 & 1)
                           != 0)) {
                      FUN_0133eb00(uVar26,uVar26 - 1,2,2);
                    }
                    lVar18 = lVar18 + 7;
                    uVar24 = unaff_x26 + (ulong)*(uint *)(uVar26 + 7);
                    *(int *)(uVar24 + lVar18) = iVar12;
                    if (((((uint)*(undefined8 *)((uVar24 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0)
                        && ((param_1 & 1) != 0)) &&
                       (param_1 = unaff_x26 + (param_1 & 0xffffffff),
                       ((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
                      FUN_0133eb00(uVar24,uVar24 + lVar18,0,2);
                    }
                    *(int *)(uVar26 + 0xb) = ((int)uVar22 + 1) * 2;
                    return param_1;
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
                }
                goto LAB_0134e588;
              }
              dVar38 = *(double *)(param_1 + 3);
            }
            if (bVar5 == 5) goto LAB_0134d93c;
            lVar18 = unaff_x26 +
                     (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13);
            if (iVar19 == *(int *)(lVar18 + 0x16f)) {
              uVar23 = *(ulong *)((param_2 & 0xfffffffffffc0000) + 8);
              if (((uVar23 & 0x18) != 0) && (((uint)uVar23 >> 5 & 1) == 0)) {
                uVar23 = param_2 + 0x13 & 0xfffffffffffc0000;
                if (uVar23 == (**(ulong **)(unaff_x26 + 0x1428) & 0xfffffffffffc0000)) {
                  if (param_2 + 0x13 < **(ulong **)(unaff_x26 + 0x1428)) goto LAB_0134d900;
                }
                else if ((param_2 & 0xfffffffffffc0000) == uVar23) {
LAB_0134d900:
                  if (*(int *)(param_2 + 0xf) == (int)*(undefined8 *)(unaff_x26 + 0xcd8))
                  goto LAB_0134e588;
                }
              }
              uVar15 = *(uint *)(lVar18 + 0x173);
              *(uint *)(param_2 - 1) = uVar15;
              if ((((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                 (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar15 & 0xfffffffffffc0000) + 8) >> 1
                  & 1) != 0)) {
                dVar38 = (double)FUN_0133eb00(param_2,param_2 - 1,2,2);
                uVar24 = extraout_x8_03;
              }
LAB_0134d93c:
              *(double *)(uVar24 + uVar22 * 8 + 7) = dVar38 - unaff_d15;
              *(int *)(param_2 + 0xb) = ((int)uVar22 + 1) * 2;
              return param_1;
            }
          }
        }
      }
      goto LAB_0134e588;
    }
  }
  else if ((ulong)((long)(unaff_x26 + (ulong)*(uint *)(uVar24 + 3) << 0x20) >> 0x21) <= uVar22)
  goto LAB_0134e588;
  if (*(int *)(uVar24 - 1) != (int)*(undefined8 *)(unaff_x26 + 0xe0)) {
    if (*(int *)(uVar24 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x1e8)) goto LAB_0134e588;
    if (*(long *)(uVar24 + uVar22 * 8 + 7) == -0x8000000080001) {
      do {
        lVar18 = unaff_x26 + (ulong)*(uint *)(lVar18 + 0xf);
        if ((int)lVar18 == (int)*(undefined8 *)(unaff_x26 + 0xb0)) goto LAB_0134e350;
        lVar18 = unaff_x26 + (ulong)*(uint *)(lVar18 + -1);
      } while ((0x411 < *(ushort *)(lVar18 + 7)) &&
              ((bVar5 = *(byte *)(lVar18 + 10) >> 3, bVar5 < 6 || (bVar5 == 0x1c))));
      goto LAB_0134e588;
    }
LAB_0134e350:
    if ((param_1 & 1) == 0) {
      dVar38 = (double)iVar28;
LAB_0134e570:
      *(double *)(uVar24 + uVar22 * 8 + 7) = dVar38 - unaff_d15;
      return param_1;
    }
    if (*(int *)(param_1 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x140)) {
      dVar38 = *(double *)(param_1 + 3);
      goto LAB_0134e570;
    }
    uVar23 = *(ulong *)((param_2 & 0xfffffffffffc0000) + 8);
    lVar18 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13);
    if (((uVar23 & 0x18) != 0) && (((uint)uVar23 >> 5 & 1) == 0)) {
      uVar23 = param_2 + 0x13 & 0xfffffffffffc0000;
      if (uVar23 == (**(ulong **)(unaff_x26 + 0x1428) & 0xfffffffffffc0000)) {
        if (param_2 + 0x13 < **(ulong **)(unaff_x26 + 0x1428)) goto LAB_0134e3b8;
      }
      else if ((param_2 & 0xfffffffffffc0000) == uVar23) {
LAB_0134e3b8:
        if (*(int *)(param_2 + 0xf) == (int)*(undefined8 *)(unaff_x26 + 0xcd8)) goto LAB_0134e588;
      }
    }
    if (iVar19 == *(int *)(lVar18 + 0x16f)) {
      uVar15 = *(uint *)(lVar18 + 0x167);
    }
    else {
      if (iVar19 != *(int *)(lVar18 + 0x173)) goto LAB_0134e588;
      uVar15 = *(uint *)(lVar18 + 0x16b);
    }
    iVar28 = iVar16 + *(int *)(uVar24 + 3) >> 1;
    uVar23 = (ulong)iVar28;
    if (uVar23 < 0x7ffe) {
      if (0x7fffffd < (long)uVar23) {
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
      }
      uVar25 = **(ulong **)(unaff_x26 + 0x1428);
      uVar26 = uVar25 + uVar23 * 4 + 8;
      if (uVar26 < **(ulong **)(unaff_x26 + 0x1430)) {
        uVar25 = uVar25 + 1;
        **(ulong **)(unaff_x26 + 0x1428) = uVar26;
      }
      else {
        uVar25 = FUN_01348560();
      }
      *(int *)(uVar25 - 1) = (int)*(undefined8 *)(unaff_x26 + 0xe0);
      lVar18 = uVar23 * 4 + 7;
      *(int *)(uVar25 + 3) = iVar28 * 2;
      if (lVar18 != 7) {
        uVar36 = *(undefined8 *)(unaff_x26 + 0xa8);
        lVar21 = lVar18;
        do {
          lVar21 = lVar21 + -4;
          *(int *)(uVar25 + lVar21) = (int)uVar36;
        } while (lVar21 != 7);
      }
      lVar21 = uVar23 * 8 + 7;
      uVar23 = param_2;
      if (lVar21 != 7) {
        lVar33 = -0x8000000080001;
        while( true ) {
          lVar21 = lVar21 + -8;
          if (*(long *)(uVar24 + lVar21) != lVar33) {
            uVar29 = **(ulong **)(unaff_x26 + 0x1428);
            uVar36 = *(undefined8 *)(uVar24 + lVar21);
            uVar26 = uVar29 + 0xc;
            if (uVar26 < **(ulong **)(unaff_x26 + 0x1430)) {
              uVar29 = uVar29 + 1;
              **(ulong **)(unaff_x26 + 0x1428) = uVar26;
            }
            else {
              uVar29 = FUN_01348560(param_1,0xc);
              lVar33 = -0x8000000080001;
              uVar23 = param_2;
            }
            *(int *)(uVar29 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
            *(undefined8 *)(uVar29 + 3) = uVar36;
            *(int *)(uVar25 + lVar18 + -4) = (int)uVar29;
            if (((((uint)*(undefined8 *)((uVar25 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                ((uVar29 & 1) != 0)) &&
               (((uint)*(undefined8 *)((unaff_x26 + (uVar29 & 0xffffffff) & 0xfffffffffffc0000) + 8)
                 >> 1 & 1) != 0)) {
              FUN_0133eb00(uVar25,uVar25 + lVar18 + -4,0,2);
              uVar24 = extraout_x8;
              uVar25 = extraout_x9;
            }
          }
          if (lVar21 == 7) break;
          lVar18 = lVar18 + -4;
        }
      }
      *(int *)(uVar23 + 7) = (int)uVar25;
      if (((((uint)*(undefined8 *)((uVar23 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
          ((uVar25 & 1) != 0)) &&
         (((uint)*(undefined8 *)((unaff_x26 + (uVar25 & 0xffffffff) & 0xfffffffffffc0000) + 8) >> 1
          & 1) != 0)) {
        FUN_0133eb00(uVar23,uVar23 + 7,0,2);
      }
      *(uint *)(uVar23 - 1) = uVar15;
      if ((((uint)*(undefined8 *)((uVar23 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
         (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar15 & 0xfffffffffffc0000) + 8) >> 1 & 1) !=
          0)) {
        FUN_0133eb00(uVar23,uVar23 - 1,2,2);
      }
      lVar18 = uVar22 * 4 + 7;
      uVar22 = unaff_x26 + (ulong)*(uint *)(uVar23 + 7);
      *(int *)(uVar22 + lVar18) = iVar12;
      if (((uint)*(undefined8 *)((uVar22 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
        return param_1;
      }
      if ((param_1 & 1) == 0) {
        return param_1;
      }
      uVar24 = unaff_x26 + (param_1 & 0xffffffff);
      if (((uint)*(undefined8 *)((uVar24 & 0xfffffffffffc0000) + 8) >> 1 & 1) == 0) {
        return uVar24;
      }
      FUN_0133eb00(uVar22,uVar22 + lVar18,0,2);
      return uVar24;
    }
    goto LAB_0134e588;
  }
  if (*(int *)(uVar24 + uVar22 * 4 + 7) == (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
    do {
      lVar18 = unaff_x26 + (ulong)*(uint *)(lVar18 + 0xf);
      if ((int)lVar18 == (int)*(undefined8 *)(unaff_x26 + 0xb0)) goto LAB_0134e01c;
      lVar18 = unaff_x26 + (ulong)*(uint *)(lVar18 + -1);
    } while ((0x411 < *(ushort *)(lVar18 + 7)) &&
            ((bVar8 = *(byte *)(lVar18 + 10) >> 3, bVar8 < 6 || (bVar8 == 0x1c))));
    goto LAB_0134e588;
  }
LAB_0134e01c:
  if ((param_1 & 1) == 0) {
    *(int *)(uVar24 + uVar22 * 4 + 7) = iVar12;
    return param_1;
  }
  if (1 < bVar5) {
    lVar18 = uVar22 * 4 + 7;
    *(int *)(uVar24 + lVar18) = iVar12;
    if (((uint)*(undefined8 *)((uVar24 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
      return param_1;
    }
    if ((param_1 & 1) == 0) {
      return param_1;
    }
    uVar22 = unaff_x26 + (param_1 & 0xffffffff);
    if (((uint)*(undefined8 *)((uVar22 & 0xfffffffffffc0000) + 8) >> 1 & 1) == 0) {
      return uVar22;
    }
    FUN_0133eb00(uVar24,uVar24 + lVar18,0,2);
    return uVar22;
  }
  lVar18 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13);
  if (*(int *)(param_1 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x140)) {
    uVar23 = *(ulong *)((param_2 & 0xfffffffffffc0000) + 8);
    if (((uVar23 & 0x18) != 0) && (((uint)uVar23 >> 5 & 1) == 0)) {
      uVar23 = param_2 + 0x13 & 0xfffffffffffc0000;
      if (uVar23 == (**(ulong **)(unaff_x26 + 0x1428) & 0xfffffffffffc0000)) {
        if (param_2 + 0x13 < **(ulong **)(unaff_x26 + 0x1428)) goto LAB_0134e16c;
      }
      else if ((param_2 & 0xfffffffffffc0000) == uVar23) {
LAB_0134e16c:
        if (*(int *)(param_2 + 0xf) == (int)*(undefined8 *)(unaff_x26 + 0xcd8)) goto LAB_0134e588;
      }
    }
    if (iVar19 == *(int *)(lVar18 + 0x15f)) {
      uVar15 = *(uint *)(lVar18 + 0x16f);
    }
    else {
      if (iVar19 != *(int *)(lVar18 + 0x163)) goto LAB_0134e588;
      uVar15 = *(uint *)(lVar18 + 0x173);
    }
    iVar28 = iVar16 + *(int *)(uVar24 + 3) >> 1;
    uVar23 = (ulong)iVar28;
    if (uVar23 < 0x3fff) {
      if (0x3fffffe < (long)uVar23) {
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
      }
      if (uVar23 * 8 + 8 < 0x40000000) {
        puVar30 = *(ulong **)(unaff_x26 + 0x1428);
        puVar32 = (undefined4 *)*puVar30;
        if (puVar32 + uVar23 * 2 + 2 < (undefined4 *)puVar30[1]) {
          uVar25 = (long)puVar32 + 1;
          *puVar30 = (ulong)(puVar32 + uVar23 * 2 + 2);
          *puVar32 = (int)*(undefined8 *)(unaff_x26 + 0x1e8);
          puVar32[1] = iVar28 * 2;
          lVar18 = uVar23 * 4 + 7;
          if (lVar18 != 7) {
            lVar21 = uVar23 * 8 + 7;
            uVar36 = *(undefined8 *)(unaff_x26 + 0xa8);
            do {
              lVar18 = lVar18 + -4;
              iVar28 = iVar16 + *(int *)(uVar24 + lVar18);
              lVar21 = lVar21 + -8;
              if (iVar28 == (int)uVar36) {
                *(undefined8 *)(uVar25 + lVar21) = 0xfff7fffffff7ffff;
              }
              else {
                *(double *)(uVar25 + lVar21) = (double)(iVar28 >> 1);
              }
            } while (lVar18 != 7);
          }
          *(int *)(param_2 + 7) = (int)uVar25;
          if (((((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
              ((uVar25 & 1) != 0)) &&
             (((uint)*(undefined8 *)((unaff_x26 + (uVar25 & 0xffffffff) & 0xfffffffffffc0000) + 8)
               >> 1 & 1) != 0)) {
            FUN_0133eb00(param_2,param_2 + 7,0,2);
          }
          *(uint *)(param_2 - 1) = uVar15;
          if ((((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
             (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar15 & 0xfffffffffffc0000) + 8) >> 1 & 1)
              != 0)) {
            FUN_0133eb00(param_2,param_2 - 1,2,2);
          }
          *(double *)(unaff_x26 + (ulong)*(uint *)(param_2 + 7) + uVar22 * 8 + 7) =
               *(double *)(param_1 + 3) - unaff_d15;
          return param_1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x1f88));
      }
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fc8));
    }
    goto LAB_0134e588;
  }
  uVar23 = *(ulong *)((param_2 & 0xfffffffffffc0000) + 8);
  if (((uVar23 & 0x18) != 0) && (((uint)uVar23 >> 5 & 1) == 0)) {
    uVar23 = param_2 + 0x13 & 0xfffffffffffc0000;
    if (uVar23 == (**(ulong **)(unaff_x26 + 0x1428) & 0xfffffffffffc0000)) {
      if (param_2 + 0x13 < **(ulong **)(unaff_x26 + 0x1428)) goto LAB_0134e0a8;
    }
    else if ((param_2 & 0xfffffffffffc0000) == uVar23) {
LAB_0134e0a8:
      if (*(int *)(param_2 + 0xf) == (int)*(undefined8 *)(unaff_x26 + 0xcd8)) goto LAB_0134e588;
    }
  }
  if (iVar19 == *(int *)(lVar18 + 0x15f)) {
    uVar15 = *(uint *)(lVar18 + 0x167);
  }
  else {
    if (iVar19 != *(int *)(lVar18 + 0x163)) {
LAB_0134e588:
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x2318));
    }
    uVar15 = *(uint *)(lVar18 + 0x16b);
  }
  *(uint *)(param_2 - 1) = uVar15;
  if ((((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
     (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar15 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0))
  {
    FUN_0133eb00(param_2,param_2 - 1,2,2);
    uVar24 = extraout_x8_00;
  }
  lVar18 = uVar22 * 4 + 7;
  *(int *)(uVar24 + lVar18) = iVar12;
  if (((((uint)*(undefined8 *)((uVar24 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
      ((param_1 & 1) != 0)) &&
     (param_1 = unaff_x26 + (param_1 & 0xffffffff),
     ((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
    FUN_0133eb00(uVar24,uVar24 + lVar18,0,2);
  }
  return param_1;
LAB_0134cb9c:
  uVar15 = *(int *)(lVar13 + lVar35 * 4 + 0x13) >> 1;
  if ((uVar15 >> 3 & 1) != 0) goto LAB_0134cde4;
  if ((uVar15 & 1) != 0) {
    if ((uVar15 >> 1 & 1) != 0) {
      lVar13 = unaff_x26 + (ulong)*(uint *)(lVar13 + lVar35 * 4 + 0x17);
      goto LAB_0134ccd4;
    }
    bVar11 = (uVar15 >> 6 & 7) != 2;
    uVar24 = (ulong)*(byte *)(lVar33 + 4) + (((ulong)uVar15 & 0x1ff80000) >> 0x13);
    if (uVar24 < *(byte *)(lVar33 + 3)) {
      lVar18 = uVar24 * 4 + -1;
      if (bVar11) {
        lVar13 = unaff_x26 + (ulong)*(uint *)(lVar21 + lVar18);
        goto LAB_0134ccd4;
      }
      uVar36 = *(undefined8 *)(unaff_x26 + (ulong)*(uint *)(lVar21 + lVar18) + 3);
    }
    else {
      uVar23 = unaff_x26 + (ulong)*(uint *)(lVar21 + 3);
      if ((uVar23 & 1) == 0) {
        uVar23 = *(ulong *)(unaff_x26 + 0x168);
      }
      lVar13 = unaff_x26 + (ulong)*(uint *)(uVar23 + (uVar24 - *(byte *)(lVar33 + 3)) * 4 + 7);
      if (bVar11) goto LAB_0134ccd4;
      uVar36 = *(undefined8 *)(lVar13 + 3);
    }
    uVar23 = **(ulong **)(unaff_x26 + 0x1428);
    uVar24 = uVar23 + 0xc;
    if (uVar24 < **(ulong **)(unaff_x26 + 0x1430)) {
      lVar13 = uVar23 + 1;
      **(ulong **)(unaff_x26 + 0x1428) = uVar24;
    }
    else {
      lVar13 = FUN_01348560(param_1,0xc,param_3,param_2);
    }
    *(int *)(lVar13 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
    *(undefined8 *)(lVar13 + 3) = uVar36;
    goto LAB_0134ccd4;
  }
  goto LAB_0134ce0c;
}

