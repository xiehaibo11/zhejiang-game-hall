
/* WARNING: Removing unreachable block (ram,0x013c4f2c) */
/* WARNING: Type propagation algorithm not settling */

ulong FUN_013c2120(ulong param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  byte bVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  long lVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  long lVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
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
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  int iVar23;
  ulong uVar24;
  ulong extraout_x10;
  long extraout_x10_00;
  long extraout_x10_01;
  ulong extraout_x10_02;
  ulong extraout_x10_03;
  int iVar25;
  int iVar26;
  ulong uVar27;
  ulong *puVar28;
  long extraout_x11;
  long extraout_x11_00;
  ulong extraout_x11_01;
  long lVar29;
  undefined4 *puVar30;
  ulong uVar31;
  long lVar32;
  int iVar33;
  long lVar34;
  long lVar35;
  long unaff_x26;
  long unaff_x27;
  undefined8 uVar36;
  double dVar37;
  double dVar38;
  double unaff_d15;
  
  if ((param_1 & 1) == 0) goto LAB_013c4d84;
  lVar15 = unaff_x26 + (ulong)*(uint *)(param_1 - 1);
  uVar4 = *(ushort *)(lVar15 + 7);
  if (uVar4 < 0x412) goto LAB_013c4d84;
  iVar6 = (int)unaff_x26;
  iVar12 = (int)param_3;
  iVar26 = iVar12 >> 1;
  if ((param_2 & 1) == 0) {
    uVar19 = (long)(param_2 << 0x20) >> 0x21;
  }
  else {
    uVar5 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(param_2 - 1) + 7);
    if (((uVar5 != 0x42) ||
        (uVar19 = (ulong)*(double *)(param_2 + 3), *(double *)(param_2 + 3) != (double)(long)uVar19)
        ) || (0x3ffffffffffffe < uVar19 + 0x1fffffffffffff)) {
      uVar19 = param_2;
      if (uVar5 != 0x40) {
        if (uVar5 < 0x40) {
          uVar18 = *(uint *)(param_2 + 3);
          if ((uVar18 & 0xc0000002) == 0) {
            uVar19 = (ulong)(uVar18 >> 3) & 0xffffff;
            goto LAB_013c3954;
          }
          if ((uVar18 >> 1 & 1) == 0) goto LAB_013c4d84;
          if ((uVar5 == 0x25) || (uVar5 == 0x2d)) {
            uVar19 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
          }
          else if ((uVar5 >> 5 & 1) != 0) {
            *(undefined8 *)(unaff_x26 + 0x40) = 0x13c21fc;
            *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
            uVar19 = (**(code **)(unaff_x26 + 0x1258))();
            *(undefined8 *)(unaff_x26 + 0x38) = 0;
            if ((uVar19 & 1) == 0) {
              uVar19 = (long)(uVar19 << 0x20) >> 0x21;
              if ((uVar19 == 0xffffffffffffffff) || (uVar19 == 0xfffffffffffffffe))
              goto LAB_013c4d84;
              goto LAB_013c3954;
            }
          }
        }
        else {
          if (uVar5 != 0x43) goto LAB_013c4d84;
          uVar19 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
        }
      }
      uVar18 = *(uint *)(lVar15 + 0xb);
      iVar16 = (int)uVar19;
      if ((uVar18 >> 0x15 & 1) != 0) {
        uVar21 = unaff_x26 + (ulong)*(uint *)(param_1 + 3);
        if ((uVar21 & 1) == 0) {
          uVar21 = *(ulong *)(unaff_x26 + 0x410);
        }
        uVar20 = (ulong)(*(uint *)(uVar19 + 3) >> 3);
        lVar11 = 0;
        while( true ) {
          uVar20 = uVar20 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar21 + 0xf) << 0x20) >> 0x21) -
                            1U;
          lVar29 = uVar20 * 3;
          lVar32 = (lVar29 + 5) * 4;
          iVar26 = *(int *)(uVar21 + lVar32 + 7);
          if (iVar26 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) break;
          if (iVar26 == iVar16) {
            uVar18 = *(int *)(uVar21 + lVar32 + 0xf) >> 1;
            if ((uVar18 >> 3 & 1) != 0) goto LAB_013c36a4;
            if ((uVar18 & 1) == 0) {
              if ((((((iVar16 != (int)*(undefined8 *)(unaff_x26 + 0x5d0)) &&
                     (iVar16 != (int)*(undefined8 *)(unaff_x26 + 0xc18))) &&
                    (iVar16 != (int)*(undefined8 *)(unaff_x26 + 0x848))) &&
                   ((iVar16 != (int)*(undefined8 *)(unaff_x26 + 0xc48) &&
                    (iVar16 != (int)*(undefined8 *)(unaff_x26 + 0xc70))))) &&
                  (iVar16 != (int)*(undefined8 *)(unaff_x26 + 0x960))) &&
                 (iVar16 != (int)*(undefined8 *)(unaff_x26 + 0xa38))) {
                if ((ulong)((long)((ulong)*(uint *)(uVar21 + 3) << 0x20) >> 0x21) <= lVar29 + 6U) {
                    /* WARNING: Does not return */
                  pcVar8 = (code *)SoftwareBreakpoint(0,0x13c4ec0);
                  (*pcVar8)();
                }
                *(int *)(uVar21 + lVar32 + 0xb) = iVar12;
                if (((uint)*(undefined8 *)((uVar21 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
                  return param_3;
                }
                if ((param_3 & 1) == 0) {
                  return param_3;
                }
                uVar19 = unaff_x26 + (param_3 & 0xffffffff);
                if (((uint)*(undefined8 *)((uVar19 & 0xfffffffffffc0000) + 8) >> 1 & 1) == 0) {
                  return uVar19;
                }
                FUN_0133eb00(uVar21,uVar21 + lVar32 + 0xb,0,2);
                return uVar19;
              }
              goto LAB_013c4d84;
            }
            if ((ulong)((long)((ulong)*(uint *)(uVar21 + 3) << 0x20) >> 0x21) <= lVar29 + 6U) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(0,0x13c4eb8);
              (*pcVar8)();
            }
            lVar11 = unaff_x26 + (ulong)*(uint *)(uVar21 + lVar32 + 0xb);
            goto LAB_013c3590;
          }
          lVar11 = lVar11 + 1;
          uVar20 = uVar20 + lVar11;
        }
        if ((((*(short *)(lVar15 + 7) != 0x41b) &&
             (iVar16 != (int)*(undefined8 *)(unaff_x26 + 0x5d0))) &&
            (iVar16 != (int)*(undefined8 *)(unaff_x26 + 0xc18))) &&
           (((iVar16 != (int)*(undefined8 *)(unaff_x26 + 0x848) &&
             (iVar16 != (int)*(undefined8 *)(unaff_x26 + 0xc48))) &&
            ((iVar16 != (int)*(undefined8 *)(unaff_x26 + 0xc70) &&
             ((iVar16 != (int)*(undefined8 *)(unaff_x26 + 0x960) &&
              (iVar16 != (int)*(undefined8 *)(unaff_x26 + 0xa38))))))))) {
          if ((*(int *)(uVar19 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xf8)) &&
             ((*(uint *)(uVar19 + 7) & 1) != 0)) {
            if ((*(uint *)(uVar19 + 7) >> 4 & 1) != 0) goto LAB_013c4d84;
          }
          else if ((uVar18 >> 0x1b & 1) == 0) goto LAB_013c4d84;
          lVar11 = unaff_x26 + (ulong)*(uint *)(lVar15 + 0xf);
          uVar18 = *(uint *)(lVar11 + -1);
          while (lVar29 = unaff_x26 + (ulong)uVar18,
                (int)lVar11 != (int)*(undefined8 *)(unaff_x26 + 0xb0)) {
            uVar4 = *(ushort *)(lVar29 + 7);
            if (uVar4 < 0x411) {
              if ((uVar4 != 0xaa) || ((*(byte *)(lVar29 + 9) & 0x24) != 0)) goto LAB_013c4d84;
              uVar20 = unaff_x26 + (ulong)*(uint *)(lVar11 + 3);
              if ((uVar20 & 1) == 0) {
                uVar20 = *(ulong *)(unaff_x26 + 0x410);
              }
              uVar22 = (ulong)(*(uint *)(uVar19 + 3) >> 3);
              lVar11 = 0;
              while( true ) {
                uVar22 = uVar22 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar20 + 0xf) << 0x20) >>
                                  0x21) - 1U;
                lVar35 = (uVar22 + 5) * 4;
                lVar32 = unaff_x26 + (ulong)*(uint *)(uVar20 + lVar35 + 7);
                if ((int)lVar32 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) break;
                if (*(int *)(lVar32 + 3) == iVar16) {
                  if ((ulong)((long)((ulong)*(uint *)(uVar20 + 3) << 0x20) >> 0x21) <= uVar22 + 6) {
                    /* WARNING: Does not return */
                    pcVar8 = (code *)SoftwareBreakpoint(0,0x13c4ec8);
                    (*pcVar8)();
                  }
                  lVar32 = unaff_x26 + (ulong)*(uint *)(uVar20 + lVar35 + 0xb);
                  lVar11 = unaff_x26 + (ulong)*(uint *)(lVar32 + 0xb);
                  if ((int)lVar11 != (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
                    uVar18 = *(int *)(lVar32 + 7) >> 1;
                    if ((uVar18 >> 3 & 1) != 0) goto LAB_013c36a4;
                    if ((uVar18 & 1) != 0) goto LAB_013c3590;
                    goto LAB_013c36d8;
                  }
                  break;
                }
                lVar11 = lVar11 + 1;
                uVar22 = uVar22 + lVar11;
              }
            }
            else if ((*(uint *)(lVar29 + 0xb) >> 0x15 & 1) == 0) {
              lVar32 = unaff_x26 + (ulong)*(uint *)(lVar29 + 0x17);
              uVar18 = *(uint *)(lVar29 + 0xb) >> 10 & 0x3ff;
              if (uVar18 != 0) {
                if (uVar18 < 0x21) {
                  lVar34 = (long)(int)uVar18 * 3;
                  while (lVar34 != 0) {
                    lVar34 = lVar34 + -3;
                    if (*(int *)(lVar32 + lVar34 * 4 + 0xf) == iVar16) goto LAB_013c3450;
                  }
                }
                else {
                  iVar25 = *(short *)(lVar32 + 5) + -1;
                  iVar26 = 0;
                  iVar33 = iVar25;
                  do {
                    iVar23 = iVar26 + ((uint)(iVar33 - iVar26) >> 1);
                    if (*(uint *)(unaff_x26 +
                                  (ulong)*(uint *)(lVar32 + (long)(int)(((uint)(*(int *)(lVar32 + (
                                                  long)(iVar23 * 3) * 4 + 0x13) >> 1) >> 9 & 0x3ff)
                                                  * 3) * 4 + 0xf) + 3) < *(uint *)(uVar19 + 3)) {
                      iVar26 = iVar23 + 1;
                      iVar23 = iVar33;
                    }
                    iVar33 = iVar23;
                  } while (iVar26 != iVar33);
                  for (; iVar26 <= iVar25; iVar26 = iVar26 + 1) {
                    uVar14 = (uint)(*(int *)(lVar32 + (long)(iVar26 * 3) * 4 + 0x13) >> 1) >> 9 &
                             0x3ff;
                    lVar34 = (long)(int)(uVar14 * 3);
                    lVar35 = unaff_x26 + (ulong)*(uint *)(lVar32 + lVar34 * 4 + 0xf);
                    if (*(uint *)(lVar35 + 3) != *(uint *)(uVar19 + 3)) break;
                    if ((int)lVar35 == iVar16) {
                      if (uVar14 < uVar18) goto LAB_013c3450;
                      break;
                    }
                  }
                }
              }
            }
            else {
              uVar20 = unaff_x26 + (ulong)*(uint *)(lVar11 + 3);
              if ((uVar20 & 1) == 0) {
                uVar20 = *(ulong *)(unaff_x26 + 0x410);
              }
              uVar22 = (ulong)(*(uint *)(uVar19 + 3) >> 3);
              lVar11 = 0;
              while( true ) {
                uVar22 = uVar22 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar20 + 0xf) << 0x20) >>
                                  0x21) - 1U;
                lVar32 = uVar22 * 3;
                lVar35 = (lVar32 + 5) * 4;
                iVar26 = *(int *)(uVar20 + lVar35 + 7);
                if (iVar26 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) break;
                if (iVar26 == iVar16) {
                  uVar18 = *(int *)(uVar20 + lVar35 + 0xf) >> 1;
                  if ((uVar18 >> 3 & 1) != 0) goto LAB_013c36a4;
                  if ((uVar18 & 1) == 0) goto LAB_013c36d8;
                  if ((ulong)((long)((ulong)*(uint *)(uVar20 + 3) << 0x20) >> 0x21) <= lVar32 + 6U)
                  {
                    /* WARNING: Does not return */
                    pcVar8 = (code *)SoftwareBreakpoint(0,0x13c4f08);
                    (*pcVar8)();
                  }
                  lVar11 = unaff_x26 + (ulong)*(uint *)(uVar20 + lVar35 + 0xb);
                  goto LAB_013c3590;
                }
                lVar11 = lVar11 + 1;
                uVar22 = uVar22 + lVar11;
              }
            }
            if (uVar4 == 0x41b) goto LAB_013c4d84;
            lVar11 = unaff_x26 + (ulong)*(uint *)(lVar29 + 0xf);
            if ((int)lVar11 == (int)*(undefined8 *)(unaff_x26 + 0xb0)) break;
            uVar18 = *(uint *)(lVar11 + -1);
          }
LAB_013c36d8:
          if (((*(uint *)(lVar15 + 0xb) >> 0x14 & 1) != 0) &&
             ((unaff_x26 + (ulong)*(uint *)(lVar15 + 0x23) & 1) != 0)) {
            *(undefined8 *)(unaff_x26 + 0x40) = 0x13c36f8;
            *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
            (**(code **)(unaff_x26 + 0x11a0))(lVar15);
            *(undefined8 *)(unaff_x26 + 0x38) = 0;
          }
          uVar18 = iVar6 + *(int *)(uVar21 + 0xf);
          uVar20 = (long)((ulong)*(uint *)(uVar21 + 3) << 0x20) >> 0x21;
          if (uVar20 == 0) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(0,0x13c4f18);
            (*pcVar8)();
          }
          uVar14 = iVar6 + *(int *)(uVar21 + 7) + 2;
          if (uVar14 + (uVar14 >> 1 & 0x7ffffffe) <= uVar18) {
            if (uVar20 < 2) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(0,0x13c4f20);
              (*pcVar8)();
            }
            if ((uint)(iVar6 + *(int *)(uVar21 + 0xb)) <= (uVar18 - uVar14 >> 1 & 0xfffffffe)) {
              if (uVar20 < 4) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(0,0x13c4f28);
                (*pcVar8)();
              }
              lVar15 = unaff_x26 + (ulong)*(uint *)(uVar21 + 0x13);
              uVar18 = (int)lVar15 + 2;
              if (uVar18 < 0xffffff) {
                *(uint *)(uVar21 + 0x13) = uVar18;
                if ((long)((ulong)*(uint *)(uVar21 + 3) << 0x20) >> 0x21 == 0) {
                    /* WARNING: Does not return */
                  pcVar8 = (code *)SoftwareBreakpoint(0,0x13c4f38);
                  (*pcVar8)();
                }
                *(uint *)(uVar21 + 7) = uVar14;
                uVar20 = (ulong)(*(uint *)(uVar19 + 3) >> 3);
                lVar11 = 0;
                while( true ) {
                  uVar20 = uVar20 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar21 + 0xf) << 0x20) >>
                                    0x21) - 1U;
                  uVar22 = uVar20 * 3 + 5;
                  lVar32 = uVar22 * 4;
                  lVar29 = lVar32 + 7;
                  if ((*(int *)(uVar21 + lVar29) == (int)*(undefined8 *)(unaff_x26 + 0xa0)) ||
                     (*(int *)(uVar21 + lVar29) == (int)*(undefined8 *)(unaff_x26 + 0xa8))) break;
                  lVar11 = lVar11 + 1;
                  uVar20 = uVar20 + lVar11;
                }
                if (uVar22 < (ulong)((long)((ulong)*(uint *)(uVar21 + 3) << 0x20) >> 0x21)) {
                  *(int *)(uVar21 + lVar29) = iVar16;
                  if (((((uint)*(undefined8 *)((uVar21 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                      ((uVar19 & 1) != 0)) &&
                     (uVar19 = unaff_x26 + (uVar19 & 0xffffffff),
                     ((uint)*(undefined8 *)((uVar19 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
                    FUN_0133eb00(uVar21,uVar21 + lVar29,0,2);
                    uVar22 = extraout_x10_03;
                    lVar32 = extraout_x11_00;
                  }
                  if (uVar22 + 1 < (ulong)((long)((ulong)*(uint *)(uVar21 + 3) << 0x20) >> 0x21)) {
                    *(int *)(uVar21 + lVar32 + 0xb) = iVar12;
                    if (((((uint)*(undefined8 *)((uVar21 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0)
                        && ((param_3 & 1) != 0)) &&
                       (param_3 = unaff_x26 + (param_3 & 0xffffffff),
                       ((uint)*(undefined8 *)((param_3 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
                      FUN_0133eb00(uVar21,uVar21 + lVar32 + 0xb,0,2);
                      uVar22 = extraout_x10_02;
                      lVar32 = extraout_x11;
                    }
                    uVar14 = (uint)(lVar15 << 8);
                    uVar18 = uVar14 | 0x180;
                    if ((*(int *)(uVar19 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xf8)) &&
                       ((*(uint *)(uVar19 + 7) & 1) != 0)) {
                      uVar18 = uVar14 | 0x1a0;
                    }
                    if (uVar22 + 2 < (ulong)((long)((ulong)*(uint *)(uVar21 + 3) << 0x20) >> 0x21))
                    {
                      *(uint *)(uVar21 + lVar32 + 0xf) = uVar18;
                      return param_3;
                    }
                    /* WARNING: Does not return */
                    pcVar8 = (code *)SoftwareBreakpoint(0,0x13c4f50);
                    (*pcVar8)();
                  }
                    /* WARNING: Does not return */
                  pcVar8 = (code *)SoftwareBreakpoint(0,0x13c4f48);
                  (*pcVar8)();
                }
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(0,0x13c4f40);
                (*pcVar8)();
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x21a0));
        }
        goto LAB_013c4d84;
      }
      lVar11 = unaff_x26 + (ulong)*(uint *)(lVar15 + 0x17);
      uVar18 = uVar18 >> 10 & 0x3ff;
      if (uVar18 != 0) {
        if (uVar18 < 0x21) {
          lVar29 = (long)(int)uVar18 * 3;
          do {
            if (lVar29 == 0) goto LAB_013c29c8;
            lVar29 = lVar29 + -3;
          } while (*(int *)(lVar11 + lVar29 * 4 + 0xf) != iVar16);
LAB_013c2404:
          lVar29 = lVar29 * 4;
          uVar18 = *(int *)(lVar11 + lVar29 + 0x13) >> 1;
          if ((uVar18 >> 3 & 1) != 0) {
LAB_013c36a4:
                    /* WARNING: Subroutine does not return */
            FUN_013be7e0(4,*(undefined8 *)(unaff_x26 + 0x20e8));
          }
          if ((uVar18 & 1) == 0) {
            if ((((iVar16 != (int)*(undefined8 *)(unaff_x26 + 0x5d0)) &&
                 (iVar16 != (int)*(undefined8 *)(unaff_x26 + 0xc18))) &&
                ((iVar16 != (int)*(undefined8 *)(unaff_x26 + 0x848) &&
                 (((iVar16 != (int)*(undefined8 *)(unaff_x26 + 0xc48) &&
                   (iVar16 != (int)*(undefined8 *)(unaff_x26 + 0xc70))) &&
                  (iVar16 != (int)*(undefined8 *)(unaff_x26 + 0x960))))))) &&
               (iVar16 != (int)*(undefined8 *)(unaff_x26 + 0xa38))) {
              if ((uVar18 >> 1 & 1) == 0) {
                uVar14 = uVar18 >> 6 & 7;
                if (uVar14 == 1) {
                  if ((param_3 & 1) != 0) goto LAB_013c4d84;
                }
                else if (uVar14 == 2) {
                  if (((param_3 & 1) != 0) &&
                     (*(int *)(param_3 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x140)))
                  goto LAB_013c4d84;
                }
                else if (uVar14 == 3) {
                  if ((((param_3 & 1) == 0) ||
                      (uVar17 = iVar6 + *(int *)(lVar11 + lVar29 + 0x17), uVar17 == 4)) ||
                     ((uVar17 != 2 &&
                      ((uVar17 == 3 || (*(uint *)(param_3 - 1) != (uVar17 & 0xfffffffd)))))))
                  goto LAB_013c4d84;
                }
                else if (uVar14 == 0) goto LAB_013c4d84;
                bVar10 = (uVar18 >> 2 & 1) != 1;
                uVar19 = (ulong)*(byte *)(lVar15 + 4) + (((ulong)uVar18 & 0x1ff80000) >> 0x13);
                if (uVar19 < *(byte *)(lVar15 + 3)) {
                  lVar15 = uVar19 * 4 + -1;
                  if (uVar14 != 2) {
                    if (bVar10) {
                      *(int *)(param_1 + lVar15) = iVar12;
                      if (((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0)
                      {
                        return param_3;
                      }
                      if ((param_3 & 1) == 0) {
                        return param_3;
                      }
                      uVar19 = unaff_x26 + (param_3 & 0xffffffff);
                      if (((uint)*(undefined8 *)((uVar19 & 0xfffffffffffc0000) + 8) >> 1 & 1) == 0)
                      {
                        return uVar19;
                      }
                      FUN_0133eb00(param_1,param_1 + lVar15,0,2);
                      return uVar19;
                    }
                    uVar19 = unaff_x26 + (ulong)*(uint *)(param_1 + lVar15);
                    if ((int)uVar19 == iVar12) {
                      return param_3;
                    }
                    bVar10 = (param_3 & 1) == 0;
                    if ((uVar19 & 1) == 0) {
                      if ((bVar10) ||
                         (*(int *)(param_3 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x140)))
                      goto LAB_013c4d84;
                      dVar38 = *(double *)(param_3 + 3);
                      dVar37 = (double)((int)uVar19 >> 1);
                    }
                    else if (bVar10) {
                      if (*(int *)(uVar19 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x140))
                      goto LAB_013c4d84;
                      dVar37 = *(double *)(uVar19 + 3);
                      dVar38 = (double)iVar26;
                    }
                    else {
                      iVar26 = (int)*(undefined8 *)(unaff_x26 + 0x140);
                      if ((*(int *)(uVar19 - 1) != iVar26) || (*(int *)(param_3 - 1) != iVar26))
                      goto LAB_013c4d84;
                      dVar37 = *(double *)(uVar19 + 3);
                      dVar38 = *(double *)(param_3 + 3);
                    }
                    if (dVar37 == dVar38) {
                      if ((int)((ulong)dVar37 >> 0x20) == (int)((ulong)dVar38 >> 0x20)) {
                        return param_3;
                      }
                      goto LAB_013c4d84;
                    }
                  }
                  else {
                    if ((param_3 & 1) == 0) {
                      dVar38 = (double)iVar26;
                    }
                    else {
                      dVar38 = *(double *)(param_3 + 3);
                    }
                    lVar15 = unaff_x26 + (ulong)*(uint *)(param_1 + lVar15);
                    if (bVar10) {
                      *(double *)(lVar15 + 3) = dVar38;
                      return param_3;
                    }
                    dVar37 = *(double *)(lVar15 + 3);
                    if (dVar37 == dVar38) {
                      if ((int)((ulong)dVar37 >> 0x20) == (int)((ulong)dVar38 >> 0x20)) {
                        return param_3;
                      }
                      goto LAB_013c4d84;
                    }
                  }
                }
                else {
                  uVar21 = unaff_x26 + (ulong)*(uint *)(param_1 + 3);
                  if ((uVar21 & 1) == 0) {
                    uVar21 = *(ulong *)(unaff_x26 + 0x168);
                  }
                  lVar15 = (uVar19 - *(byte *)(lVar15 + 3)) * 4 + 7;
                  if (uVar14 != 2) {
                    if (bVar10) {
                      *(int *)(uVar21 + lVar15) = iVar12;
                      if (((uint)*(undefined8 *)((uVar21 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0)
                      {
                        return param_3;
                      }
                      if ((param_3 & 1) == 0) {
                        return param_3;
                      }
                      uVar19 = unaff_x26 + (param_3 & 0xffffffff);
                      if (((uint)*(undefined8 *)((uVar19 & 0xfffffffffffc0000) + 8) >> 1 & 1) == 0)
                      {
                        return uVar19;
                      }
                      FUN_0133eb00(uVar21,uVar21 + lVar15,0,2);
                      return uVar19;
                    }
                    uVar19 = unaff_x26 + (ulong)*(uint *)(uVar21 + lVar15);
                    if ((int)uVar19 == iVar12) {
                      return param_3;
                    }
                    bVar10 = (param_3 & 1) == 0;
                    if ((uVar19 & 1) == 0) {
                      if ((bVar10) ||
                         (*(int *)(param_3 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x140)))
                      goto LAB_013c4d84;
                      dVar38 = *(double *)(param_3 + 3);
                      dVar37 = (double)((int)uVar19 >> 1);
                    }
                    else if (bVar10) {
                      if (*(int *)(uVar19 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x140))
                      goto LAB_013c4d84;
                      dVar37 = *(double *)(uVar19 + 3);
                      dVar38 = (double)iVar26;
                    }
                    else {
                      iVar26 = (int)*(undefined8 *)(unaff_x26 + 0x140);
                      if ((*(int *)(uVar19 - 1) != iVar26) || (*(int *)(param_3 - 1) != iVar26))
                      goto LAB_013c4d84;
                      dVar37 = *(double *)(uVar19 + 3);
                      dVar38 = *(double *)(param_3 + 3);
                    }
                    if (dVar37 == dVar38) {
                      if ((int)((ulong)dVar37 >> 0x20) == (int)((ulong)dVar38 >> 0x20)) {
                        return param_3;
                      }
                      goto LAB_013c4d84;
                    }
                  }
                  else {
                    lVar15 = unaff_x26 + (ulong)*(uint *)(uVar21 + lVar15);
                    if ((param_3 & 1) == 0) {
                      dVar38 = (double)iVar26;
                    }
                    else {
                      dVar38 = *(double *)(param_3 + 3);
                    }
                    if (bVar10) {
                      *(double *)(lVar15 + 3) = dVar38;
                      return param_3;
                    }
                    dVar37 = *(double *)(lVar15 + 3);
                    if (dVar37 == dVar38) {
                      if ((int)((ulong)dVar37 >> 0x20) == (int)((ulong)dVar38 >> 0x20)) {
                        return param_3;
                      }
                      goto LAB_013c4d84;
                    }
                  }
                }
                if ((NAN(dVar37)) && (NAN(dVar38))) {
                  return param_3;
                }
              }
              else if (iVar12 == *(int *)(lVar11 + lVar29 + 0x17)) {
                return param_3;
              }
            }
            goto LAB_013c4d84;
          }
          if ((uVar18 >> 1 & 1) == 0) {
            bVar10 = (uVar18 >> 6 & 7) == 2;
            uVar21 = (ulong)*(byte *)(lVar15 + 4) + (((ulong)uVar18 & 0x1ff80000) >> 0x13);
            if (uVar21 < *(byte *)(lVar15 + 3)) {
              lVar15 = uVar21 * 4 + -1;
              if (bVar10) {
                uVar36 = *(undefined8 *)(unaff_x26 + (ulong)*(uint *)(param_1 + lVar15) + 3);
                goto LAB_013c24ac;
              }
              lVar11 = unaff_x26 + (ulong)*(uint *)(param_1 + lVar15);
            }
            else {
              uVar20 = unaff_x26 + (ulong)*(uint *)(param_1 + 3);
              if ((uVar20 & 1) == 0) {
                uVar20 = *(ulong *)(unaff_x26 + 0x168);
              }
              lVar11 = unaff_x26 +
                       (ulong)*(uint *)(uVar20 + (uVar21 - *(byte *)(lVar15 + 3)) * 4 + 7);
              if (bVar10) {
                uVar36 = *(undefined8 *)(lVar11 + 3);
LAB_013c24ac:
                uVar20 = **(ulong **)(unaff_x26 + 0x1428);
                uVar21 = uVar20 + 0xc;
                if (uVar21 < **(ulong **)(unaff_x26 + 0x1430)) {
                  lVar11 = uVar20 + 1;
                  **(ulong **)(unaff_x26 + 0x1428) = uVar21;
                }
                else {
                  lVar11 = FUN_01348560(param_1,0xc,param_3,param_2);
                }
                *(int *)(lVar11 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
                *(undefined8 *)(lVar11 + 3) = uVar36;
              }
            }
          }
          else {
            lVar11 = unaff_x26 + (ulong)*(uint *)(lVar11 + lVar29 + 0x17);
          }
LAB_013c3590:
          if (*(int *)(lVar11 + -1) != (int)*(undefined8 *)(unaff_x26 + 0xcc0)) {
            lVar15 = unaff_x26 + (ulong)*(uint *)(lVar11 + 7);
            lVar11 = unaff_x26 + (ulong)*(uint *)(lVar15 + -1);
            if ((int)lVar11 != (int)*(undefined8 *)(unaff_x26 + 0xca8)) {
              if ((*(byte *)(lVar11 + 9) >> 1 & 1) != 0) {
                FUN_0133fcc0(1,lVar15);
                return uVar19;
              }
                    /* WARNING: Subroutine does not return */
              FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x20e8));
            }
          }
          goto LAB_013c4d84;
        }
        iVar33 = *(short *)(lVar11 + 5) + -1;
        iVar25 = 0;
        iVar23 = iVar33;
        do {
          iVar1 = iVar25 + ((uint)(iVar23 - iVar25) >> 1);
          if (*(uint *)(unaff_x26 +
                        (ulong)*(uint *)(lVar11 + (long)(int)(((uint)(*(int *)(lVar11 + (long)(iVar1
                                                                                              * 3) *
                                                                                        4 + 0x13) >>
                                                                     1) >> 9 & 0x3ff) * 3) * 4 + 0xf
                                        ) + 3) < *(uint *)(uVar19 + 3)) {
            iVar25 = iVar1 + 1;
            iVar1 = iVar23;
          }
          iVar23 = iVar1;
        } while (iVar25 != iVar23);
        for (; iVar25 <= iVar33; iVar25 = iVar25 + 1) {
          uVar14 = (uint)(*(int *)(lVar11 + (long)(iVar25 * 3) * 4 + 0x13) >> 1) >> 9 & 0x3ff;
          lVar29 = (long)(int)(uVar14 * 3);
          lVar32 = unaff_x26 + (ulong)*(uint *)(lVar11 + lVar29 * 4 + 0xf);
          if (*(uint *)(lVar32 + 3) != *(uint *)(uVar19 + 3)) break;
          if ((int)lVar32 == iVar16) {
            if (uVar14 < uVar18) goto LAB_013c2404;
            break;
          }
        }
      }
LAB_013c29c8:
      bVar10 = false;
      if ((((iVar16 != (int)*(undefined8 *)(unaff_x26 + 0x5d0)) &&
           (iVar16 != (int)*(undefined8 *)(unaff_x26 + 0xc18))) &&
          (iVar16 != (int)*(undefined8 *)(unaff_x26 + 0x848))) &&
         (((iVar16 != (int)*(undefined8 *)(unaff_x26 + 0xc48) &&
           (iVar16 != (int)*(undefined8 *)(unaff_x26 + 0xc70))) &&
          ((iVar16 != (int)*(undefined8 *)(unaff_x26 + 0x960) &&
           (iVar16 != (int)*(undefined8 *)(unaff_x26 + 0xa38))))))) {
        uVar21 = unaff_x26 + (ulong)*(uint *)(lVar15 + 0x23);
        if (((uVar21 & 1) != 0) && ((uint)uVar21 != 3)) {
          if (((uint)uVar21 & 3) == 1) {
            if (*(int *)(uVar21 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x148)) goto LAB_013c4d84;
            bVar9 = (ulong)((long)((ulong)*(uint *)(uVar21 + 3) << 0x20) >> 0x21) < 2;
            if (bVar9) {
              uVar18 = 0;
            }
            else {
              uVar18 = *(int *)(uVar21 + 0xb) >> 1;
            }
            if (uVar18 == 0) goto LAB_013c4d84;
            if (0x20 < uVar18) {
              if (bVar9) {
                iVar25 = 0;
              }
              else {
                iVar25 = *(int *)(uVar21 + 0xb) >> 1;
              }
              uVar14 = 0;
              uVar17 = iVar25 - 1U;
              do {
                uVar2 = uVar14 + (uVar17 - uVar14 >> 1);
                if (*(uint *)(unaff_x26 +
                              (ulong)*(uint *)(uVar21 + (long)(int)(uVar2 * 2) * 4 + 0xf) + 3) <
                    *(uint *)(uVar19 + 3)) {
                  uVar14 = uVar2 + 1;
                  uVar2 = uVar17;
                }
                uVar17 = uVar2;
              } while (uVar14 != uVar17);
              for (; (int)uVar14 <= (int)(iVar25 - 1U); uVar14 = uVar14 + 1) {
                lVar15 = unaff_x26 + (ulong)*(uint *)(uVar21 + (long)(int)(uVar14 << 1) * 4 + 0xf);
                if (*(uint *)(lVar15 + 3) != *(uint *)(uVar19 + 3)) break;
                if ((int)lVar15 == iVar16) {
                  if (uVar14 < uVar18) {
                    lVar15 = (long)(int)(uVar14 << 1) + 2;
                    goto LAB_013c2b94;
                  }
                  break;
                }
              }
              goto LAB_013c4d84;
            }
            lVar15 = (long)(int)uVar18 * 2 + 2;
            do {
              if (lVar15 == 2) goto LAB_013c4d84;
              lVar15 = lVar15 + -2;
            } while (*(int *)(uVar21 + lVar15 * 4 + 7) != iVar16);
LAB_013c2b94:
            uVar21 = unaff_x26 + (ulong)*(uint *)(uVar21 + lVar15 * 4 + 0xb);
          }
          uVar20 = uVar21 & 0xfffffffffffffffd;
          lVar15 = unaff_x26 + (ulong)*(uint *)(uVar20 + 0x1f);
          if ((((int)lVar15 == 0) || (*(int *)(lVar15 + 3) == 0)) &&
             ((*(uint *)(uVar20 + 0xb) >> 0x18 & 1) == 0)) {
            lVar15 = unaff_x26 + (ulong)*(uint *)(uVar20 + 0x17);
            lVar11 = (((ulong)(*(uint *)(uVar20 + 0xb) >> 10) & 0x3ff) * 3 + -3) * 4;
            if (*(int *)(lVar15 + lVar11 + 0xf) == iVar16) {
              uVar18 = *(int *)(lVar15 + lVar11 + 0x13) >> 1;
              if ((uVar18 & 0x29) == 0) {
                if (*(int *)(uVar19 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xf8)) {
                  bVar10 = (*(uint *)(uVar19 + 7) & 1) != 0;
                }
                if (((uVar18 & 0x10) != 0) == bVar10) {
                  uVar13 = (undefined4)uVar20;
                  if ((uVar18 >> 1 & 1) == 0) {
                    uVar14 = uVar18 >> 6 & 7;
                    if (uVar14 == 1) {
                      if ((param_3 & 1) == 0) goto LAB_013c2d30;
                    }
                    else if (uVar14 == 2) {
                      if (((param_3 & 1) == 0) ||
                         (*(int *)(param_3 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x140)))
                      goto LAB_013c2d30;
                    }
                    else if (uVar14 == 3) {
                      if ((((param_3 & 1) != 0) &&
                          (uVar17 = iVar6 + *(int *)(lVar15 + lVar11 + 0x17), uVar17 != 4)) &&
                         ((uVar17 == 2 ||
                          ((uVar17 != 3 && (*(uint *)(param_3 - 1) == (uVar17 & 0xfffffffd)))))))
                      goto LAB_013c2d30;
                    }
                    else if (uVar14 != 0) {
LAB_013c2d30:
                      bVar3 = *(byte *)(uVar20 + 3);
                      uVar19 = (ulong)*(byte *)(uVar20 + 4) + (((ulong)uVar18 & 0x1ff80000) >> 0x13)
                      ;
                      if (bVar3 <= uVar19) {
                        uVar20 = param_3;
                        if (uVar14 == 2) {
                          if ((param_3 & 1) == 0) {
                            dVar38 = (double)iVar26;
                          }
                          else {
                            dVar38 = *(double *)(param_3 + 3);
                          }
                          uVar20 = **(ulong **)(unaff_x26 + 0x1428);
                          uVar22 = uVar20 + 0xc;
                          if (uVar22 < **(ulong **)(unaff_x26 + 0x1430)) {
                            uVar20 = uVar20 + 1;
                            **(ulong **)(unaff_x26 + 0x1428) = uVar22;
                          }
                          else {
                            uVar20 = FUN_01348560(param_1,0xc);
                          }
                          *(int *)(uVar20 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
                          *(double *)(uVar20 + 3) = dVar38;
                        }
                        uVar22 = unaff_x26 + (ulong)*(uint *)(param_1 + 3);
                        if ((uVar22 & 1) == 0) {
                          uVar18 = ((int)uVar22 >> 1) << 10;
                          uVar22 = *(ulong *)(unaff_x26 + 0x168);
                          uVar24 = 0;
                        }
                        else {
                          uVar14 = *(int *)(uVar22 + 3) >> 1;
                          uVar18 = uVar14 & 0x3ffffc00;
                          uVar24 = (ulong)(int)(uVar14 & 0x3ff);
                        }
                        uVar19 = uVar19 - bVar3;
                        uVar27 = uVar22;
                        if (uVar24 <= uVar19) {
                          uVar27 = **(ulong **)(unaff_x26 + 0x1428);
                          lVar15 = (uVar24 + 3) * 4;
                          uVar31 = uVar27 + lVar15 + 8;
                          if (uVar31 < **(ulong **)(unaff_x26 + 0x1430)) {
                            uVar27 = uVar27 + 1;
                            **(ulong **)(unaff_x26 + 0x1428) = uVar31;
                          }
                          else {
                            uVar27 = FUN_01348560();
                          }
                          uVar14 = (uint)(uVar24 + 3);
                          *(int *)(uVar27 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x248);
                          *(uint *)(uVar27 + 3) = uVar14 * 2;
                          lVar15 = lVar15 + 7;
                          lVar11 = uVar24 * 4 + 7;
                          if (lVar15 != lVar11) {
                            uVar36 = *(undefined8 *)(unaff_x26 + 0xa0);
                            do {
                              lVar15 = lVar15 + -4;
                              *(int *)(uVar27 + lVar15) = (int)uVar36;
                            } while (lVar15 != lVar11);
                          }
                          while (lVar11 != 7) {
                            lVar11 = lVar11 + -4;
                            *(undefined4 *)(uVar27 + lVar11) = *(undefined4 *)(uVar22 + lVar11);
                          }
                          *(uint *)(uVar27 + 3) = (uVar18 | uVar14) * 2;
                          *(int *)(param_1 + 3) = (int)uVar27;
                          if (((((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1)
                                != 0) && ((uVar27 & 1) != 0)) &&
                             (uVar27 = unaff_x26 + (uVar27 & 0xffffffff),
                             ((uint)*(undefined8 *)((uVar27 & 0xfffffffffffc0000) + 8) >> 1 & 1) !=
                             0)) {
                            FUN_0133eb00(param_1,param_1 + 3,0,2);
                            uVar27 = extraout_x11_01;
                          }
                        }
                        lVar15 = uVar19 * 4 + 7;
                        *(int *)(uVar27 + lVar15) = (int)uVar20;
                        if (((((uint)*(undefined8 *)((uVar27 & 0xfffffffffffc0000) + 8) >> 2 & 1) !=
                              0) && ((uVar20 & 1) != 0)) &&
                           (((uint)*(undefined8 *)
                                    ((unaff_x26 + (uVar20 & 0xffffffff) & 0xfffffffffffc0000) + 8)
                             >> 1 & 1) != 0)) {
                          FUN_0133eb00(uVar27,uVar27 + lVar15,0,2);
                        }
                        *(undefined4 *)(param_1 - 1) = uVar13;
                        if (((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) ==
                            0) {
                          return param_3;
                        }
                        if (((uint)*(undefined8 *)
                                    ((unaff_x26 + (uVar21 & 0xfffffffd) & 0xfffffffffffc0000) + 8)
                             >> 1 & 1) == 0) {
                          return param_3;
                        }
                        FUN_0133eb00(param_1,param_1 - 1,2,2);
                        return param_3;
                      }
                      lVar15 = uVar19 * 4 + -1;
                      if (uVar14 != 2) {
                        *(undefined4 *)(param_1 - 1) = uVar13;
                        if ((((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) !=
                             0) && (((uint)*(undefined8 *)
                                            ((unaff_x26 + (uVar21 & 0xfffffffd) & 0xfffffffffffc0000
                                             ) + 8) >> 1 & 1) != 0)) {
                          FUN_0133eb00(param_1,param_1 - 1,2,2);
                        }
                        *(int *)(param_1 + lVar15) = iVar12;
                        if (((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) ==
                            0) {
                          return param_3;
                        }
                        if ((param_3 & 1) == 0) {
                          return param_3;
                        }
                        uVar19 = unaff_x26 + (param_3 & 0xffffffff);
                        if (((uint)*(undefined8 *)((uVar19 & 0xfffffffffffc0000) + 8) >> 1 & 1) == 0
                           ) {
                          return uVar19;
                        }
                        FUN_0133eb00(param_1,param_1 + lVar15,0,2);
                        return uVar19;
                      }
                      if ((param_3 & 1) == 0) {
                        dVar38 = (double)iVar26;
                      }
                      else {
                        dVar38 = *(double *)(param_3 + 3);
                      }
                      uVar20 = **(ulong **)(unaff_x26 + 0x1428);
                      uVar19 = uVar20 + 0xc;
                      if (uVar19 < **(ulong **)(unaff_x26 + 0x1430)) {
                        uVar20 = uVar20 + 1;
                        **(ulong **)(unaff_x26 + 0x1428) = uVar19;
                      }
                      else {
                        uVar20 = FUN_01348560(param_1,0xc);
                      }
                      *(int *)(uVar20 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
                      *(double *)(uVar20 + 3) = dVar38;
                      *(undefined4 *)(param_1 - 1) = uVar13;
                      if ((((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0
                          ) && (((uint)*(undefined8 *)
                                        ((unaff_x26 + (uVar21 & 0xfffffffd) & 0xfffffffffffc0000) +
                                        8) >> 1 & 1) != 0)) {
                        FUN_0133eb00(param_1,param_1 - 1,2,2);
                      }
                      *(int *)(param_1 + lVar15) = (int)uVar20;
                      if (((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0)
                      {
                        return param_3;
                      }
                      if ((uVar20 & 1) == 0) {
                        return param_3;
                      }
                      if (((uint)*(undefined8 *)
                                  ((unaff_x26 + (uVar20 & 0xffffffff) & 0xfffffffffffc0000) + 8) >>
                           1 & 1) == 0) {
                        return param_3;
                      }
                      FUN_0133eb00(param_1,param_1 + lVar15,0,2);
                      return param_3;
                    }
                  }
                  else if (iVar12 == *(int *)(lVar15 + lVar11 + 0x17)) {
                    *(undefined4 *)(param_1 - 1) = uVar13;
                    if (((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
                      return param_3;
                    }
                    if (((uint)*(undefined8 *)
                                ((unaff_x26 + (uVar21 & 0xfffffffd) & 0xfffffffffffc0000) + 8) >> 1
                        & 1) == 0) {
                      return param_3;
                    }
                    FUN_0133eb00(param_1,param_1 - 1,2,2);
                    return param_3;
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_013c4d84;
    }
  }
LAB_013c3954:
  uVar21 = unaff_x26 + (ulong)*(uint *)(param_1 + 7);
  bVar3 = *(byte *)(lVar15 + 10) >> 3;
  if (5 < bVar3) goto LAB_013c4d84;
  iVar16 = (int)lVar15;
  if (uVar4 == 0x423) {
    uVar20 = (long)(unaff_x26 + (ulong)*(uint *)(param_1 + 0xb) << 0x20) >> 0x21;
    if (uVar20 <= uVar19) {
      iVar25 = iVar6 + *(int *)(uVar21 + 3) >> 1;
      uVar22 = (ulong)iVar25;
      if (uVar19 < uVar22) {
        if (uVar19 == uVar20) {
          if (((*(uint *)(lVar15 + 0xb) >> 0x15 & 1) == 0) &&
             (((uint)(*(int *)(unaff_x26 + (ulong)*(uint *)(lVar15 + 0x17) + 0x13) >> 1) >> 3 & 1)
              == 0)) {
            iVar33 = (int)uVar19;
            if (*(int *)(uVar21 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xe0)) {
              while (lVar15 = unaff_x26 + (ulong)*(uint *)(lVar15 + 0xf),
                    (int)lVar15 != (int)*(undefined8 *)(unaff_x26 + 0xb0)) {
                lVar15 = unaff_x26 + (ulong)*(uint *)(lVar15 + -1);
                if ((*(ushort *)(lVar15 + 7) < 0x412) ||
                   ((bVar7 = *(byte *)(lVar15 + 10) >> 3, 5 < bVar7 && (bVar7 != 0x1c))))
                goto LAB_013c4d84;
              }
              if ((param_3 & 1) == 0) {
                *(int *)(uVar21 + uVar19 * 4 + 7) = iVar12;
                *(int *)(param_1 + 0xb) = (iVar33 + 1) * 2;
                return param_3;
              }
              if (1 < bVar3) {
                lVar15 = uVar19 * 4 + 7;
                *(int *)(uVar21 + lVar15) = iVar12;
                if (((((uint)*(undefined8 *)((uVar21 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                    ((param_3 & 1) != 0)) &&
                   (param_3 = unaff_x26 + (param_3 & 0xffffffff),
                   ((uint)*(undefined8 *)((param_3 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
                  FUN_0133eb00(uVar21,uVar21 + lVar15,0,2);
                }
                *(int *)(param_1 + 0xb) = (iVar33 + 1) * 2;
                return param_3;
              }
              lVar15 = unaff_x26 +
                       (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13);
              if (*(int *)(param_3 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x140)) {
                uVar20 = *(ulong *)((param_1 & 0xfffffffffffc0000) + 8);
                if (((uVar20 & 0x18) != 0) && (((uint)uVar20 >> 5 & 1) == 0)) {
                  uVar20 = param_1 + 0x13 & 0xfffffffffffc0000;
                  if (uVar20 == (**(ulong **)(unaff_x26 + 0x1428) & 0xfffffffffffc0000)) {
                    if (param_1 + 0x13 < **(ulong **)(unaff_x26 + 0x1428)) goto LAB_013c42f8;
                  }
                  else if ((param_1 & 0xfffffffffffc0000) == uVar20) {
LAB_013c42f8:
                    if (*(int *)(param_1 + 0xf) == (int)*(undefined8 *)(unaff_x26 + 0xcd8))
                    goto LAB_013c4d84;
                  }
                }
                if (iVar16 == *(int *)(lVar15 + 0x15f)) {
                  uVar18 = *(uint *)(lVar15 + 0x167);
                }
                else {
                  if (iVar16 != *(int *)(lVar15 + 0x163)) goto LAB_013c4d84;
                  uVar18 = *(uint *)(lVar15 + 0x16b);
                }
                lVar15 = uVar19 * 4;
                *(uint *)(param_1 - 1) = uVar18;
                if ((((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                   (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar18 & 0xfffffffffffc0000) + 8) >>
                     1 & 1) != 0)) {
                  FUN_0133eb00(param_1,param_1 - 1,2,2);
                  uVar21 = extraout_x8_02;
                }
                lVar15 = lVar15 + 7;
                *(int *)(uVar21 + lVar15) = iVar12;
                if (((((uint)*(undefined8 *)((uVar21 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                    ((param_3 & 1) != 0)) &&
                   (param_3 = unaff_x26 + (param_3 & 0xffffffff),
                   ((uint)*(undefined8 *)((param_3 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
                  FUN_0133eb00(uVar21,uVar21 + lVar15,0,2);
                }
                *(int *)(param_1 + 0xb) = ((int)uVar19 + 1) * 2;
                return param_3;
              }
              uVar20 = *(ulong *)((param_1 & 0xfffffffffffc0000) + 8);
              if (((uVar20 & 0x18) != 0) && (((uint)uVar20 >> 5 & 1) == 0)) {
                uVar20 = param_1 + 0x13 & 0xfffffffffffc0000;
                if (uVar20 == (**(ulong **)(unaff_x26 + 0x1428) & 0xfffffffffffc0000)) {
                  if (param_1 + 0x13 < **(ulong **)(unaff_x26 + 0x1428)) goto LAB_013c43c0;
                }
                else if ((param_1 & 0xfffffffffffc0000) == uVar20) {
LAB_013c43c0:
                  if (*(int *)(param_1 + 0xf) == (int)*(undefined8 *)(unaff_x26 + 0xcd8))
                  goto LAB_013c4d84;
                }
              }
              if (iVar16 == *(int *)(lVar15 + 0x15f)) {
                uVar18 = *(uint *)(lVar15 + 0x16f);
              }
              else {
                if (iVar16 != *(int *)(lVar15 + 0x163)) goto LAB_013c4d84;
                uVar18 = *(uint *)(lVar15 + 0x173);
              }
              if (uVar22 < 0x3fff) {
                if (0x3fffffe < (long)uVar22) {
                    /* WARNING: Subroutine does not return */
                  FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
                }
                if (uVar22 * 8 + 8 < 0x40000000) {
                  puVar28 = *(ulong **)(unaff_x26 + 0x1428);
                  puVar30 = (undefined4 *)*puVar28;
                  if (puVar30 + uVar22 * 2 + 2 < (undefined4 *)puVar28[1]) {
                    uVar20 = (long)puVar30 + 1;
                    *puVar28 = (ulong)(puVar30 + uVar22 * 2 + 2);
                    *puVar30 = (int)*(undefined8 *)(unaff_x26 + 0x1e8);
                    puVar30[1] = iVar25 * 2;
                    lVar15 = uVar22 * 4 + 7;
                    if (lVar15 != 7) {
                      lVar11 = uVar22 * 8 + 7;
                      uVar36 = *(undefined8 *)(unaff_x26 + 0xa8);
                      do {
                        lVar15 = lVar15 + -4;
                        iVar26 = iVar6 + *(int *)(uVar21 + lVar15);
                        lVar11 = lVar11 + -8;
                        if (iVar26 == (int)uVar36) {
                          *(undefined8 *)(uVar20 + lVar11) = 0xfff7fffffff7ffff;
                        }
                        else {
                          *(double *)(uVar20 + lVar11) = (double)(iVar26 >> 1);
                        }
                      } while (lVar15 != 7);
                    }
                    *(int *)(param_1 + 7) = (int)uVar20;
                    if (((((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0)
                        && ((uVar20 & 1) != 0)) &&
                       (((uint)*(undefined8 *)
                                ((unaff_x26 + (uVar20 & 0xffffffff) & 0xfffffffffffc0000) + 8) >> 1
                        & 1) != 0)) {
                      FUN_0133eb00(param_1,param_1 + 7,0,2);
                    }
                    lVar15 = uVar19 * 8;
                    *(uint *)(param_1 - 1) = uVar18;
                    if ((((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0)
                       && (((uint)*(undefined8 *)
                                   ((unaff_x26 + (ulong)uVar18 & 0xfffffffffffc0000) + 8) >> 1 & 1)
                           != 0)) {
                      FUN_0133eb00(param_1,param_1 - 1,2,2);
                    }
                    *(double *)(unaff_x26 + (ulong)*(uint *)(param_1 + 7) + lVar15 + 7) =
                         *(double *)(param_3 + 3) - unaff_d15;
                    *(int *)(param_1 + 0xb) = ((int)uVar19 + 1) * 2;
                    return param_3;
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x1f88));
                }
                    /* WARNING: Subroutine does not return */
                FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fc8));
              }
            }
            else if (*(int *)(uVar21 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x1e8)) {
              while (lVar15 = unaff_x26 + (ulong)*(uint *)(lVar15 + 0xf),
                    (int)lVar15 != (int)*(undefined8 *)(unaff_x26 + 0xb0)) {
                lVar15 = unaff_x26 + (ulong)*(uint *)(lVar15 + -1);
                if ((*(ushort *)(lVar15 + 7) < 0x412) ||
                   ((bVar3 = *(byte *)(lVar15 + 10) >> 3, 5 < bVar3 && (bVar3 != 0x1c))))
                goto LAB_013c4d84;
              }
              if ((param_3 & 1) == 0) {
                dVar38 = (double)iVar26;
LAB_013c479c:
                *(double *)(uVar21 + uVar19 * 8 + 7) = dVar38 - unaff_d15;
                *(int *)(param_1 + 0xb) = (iVar33 + 1) * 2;
                return param_3;
              }
              if (*(int *)(param_3 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x140)) {
                dVar38 = *(double *)(param_3 + 3);
                goto LAB_013c479c;
              }
              uVar20 = *(ulong *)((param_1 & 0xfffffffffffc0000) + 8);
              lVar15 = unaff_x26 +
                       (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13);
              if (((uVar20 & 0x18) != 0) && (((uint)uVar20 >> 5 & 1) == 0)) {
                uVar20 = param_1 + 0x13 & 0xfffffffffffc0000;
                if (uVar20 == (**(ulong **)(unaff_x26 + 0x1428) & 0xfffffffffffc0000)) {
                  if (param_1 + 0x13 < **(ulong **)(unaff_x26 + 0x1428)) goto LAB_013c45e8;
                }
                else if ((param_1 & 0xfffffffffffc0000) == uVar20) {
LAB_013c45e8:
                  if (*(int *)(param_1 + 0xf) == (int)*(undefined8 *)(unaff_x26 + 0xcd8))
                  goto LAB_013c4d84;
                }
              }
              if (iVar16 == *(int *)(lVar15 + 0x16f)) {
                uVar18 = *(uint *)(lVar15 + 0x167);
              }
              else {
                if (iVar16 != *(int *)(lVar15 + 0x173)) goto LAB_013c4d84;
                uVar18 = *(uint *)(lVar15 + 0x16b);
              }
              if (uVar22 < 0x7ffe) {
                if ((long)uVar22 < 0x7fffffe) {
                  uVar24 = **(ulong **)(unaff_x26 + 0x1428);
                  uVar20 = uVar24 + uVar22 * 4 + 8;
                  if (uVar20 < **(ulong **)(unaff_x26 + 0x1430)) {
                    **(ulong **)(unaff_x26 + 0x1428) = uVar20;
                    uVar20 = param_1;
                    uVar24 = uVar24 + 1;
                  }
                  else {
                    uVar20 = FUN_01348560();
                    uVar24 = uVar20;
                  }
                  *(int *)(uVar24 - 1) = (int)*(undefined8 *)(unaff_x26 + 0xe0);
                  *(int *)(uVar24 + 3) = iVar25 * 2;
                  if (uVar22 * 4 != 0) {
                    lVar15 = uVar22 * 4 + 7;
                    uVar36 = *(undefined8 *)(unaff_x26 + 0xa8);
                    do {
                      lVar15 = lVar15 + -4;
                      *(int *)(uVar24 + lVar15) = (int)uVar36;
                    } while (lVar15 != 7);
                  }
                  lVar15 = uVar22 * 8 + 7;
                  uVar27 = param_1;
                  if (lVar15 != 7) {
                    lVar11 = uVar22 * 4 + 7;
                    lVar29 = -0x8000000080001;
                    while( true ) {
                      lVar15 = lVar15 + -8;
                      if (*(long *)(uVar21 + lVar15) != lVar29) {
                        uVar31 = **(ulong **)(unaff_x26 + 0x1428);
                        uVar36 = *(undefined8 *)(uVar21 + lVar15);
                        uVar22 = uVar31 + 0xc;
                        if (uVar22 < **(ulong **)(unaff_x26 + 0x1430)) {
                          **(ulong **)(unaff_x26 + 0x1428) = uVar22;
                          uVar22 = uVar31 + 1;
                        }
                        else {
                          uVar20 = FUN_01348560(uVar20,0xc);
                          lVar29 = -0x8000000080001;
                          uVar27 = param_1;
                          uVar22 = uVar20;
                        }
                        *(int *)(uVar22 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
                        *(undefined8 *)(uVar22 + 3) = uVar36;
                        *(int *)(uVar24 + lVar11 + -4) = (int)uVar22;
                        if (((((uint)*(undefined8 *)((uVar24 & 0xfffffffffffc0000) + 8) >> 2 & 1) !=
                              0) && ((uVar22 & 1) != 0)) &&
                           (((uint)*(undefined8 *)
                                    ((unaff_x26 + (uVar22 & 0xffffffff) & 0xfffffffffffc0000) + 8)
                             >> 1 & 1) != 0)) {
                          FUN_0133eb00(uVar24,uVar24 + lVar11 + -4,0,2);
                          uVar21 = extraout_x8_01;
                          lVar11 = extraout_x9_00;
                          lVar29 = extraout_x10_00;
                        }
                      }
                      if (lVar15 == 7) break;
                      lVar11 = lVar11 + -4;
                    }
                  }
                  *(int *)(uVar27 + 7) = (int)uVar24;
                  if (((((uint)*(undefined8 *)((uVar27 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                      ((uVar24 & 1) != 0)) &&
                     (((uint)*(undefined8 *)
                              ((unaff_x26 + (uVar24 & 0xffffffff) & 0xfffffffffffc0000) + 8) >> 1 &
                      1) != 0)) {
                    FUN_0133eb00(uVar27,uVar27 + 7,0,2);
                  }
                  lVar15 = uVar19 * 4;
                  *(uint *)(uVar27 - 1) = uVar18;
                  if ((((uint)*(undefined8 *)((uVar27 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                     (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar18 & 0xfffffffffffc0000) + 8)
                       >> 1 & 1) != 0)) {
                    FUN_0133eb00(uVar27,uVar27 - 1,2,2);
                  }
                  lVar15 = lVar15 + 7;
                  uVar21 = unaff_x26 + (ulong)*(uint *)(uVar27 + 7);
                  iVar26 = ((int)uVar19 + 1) * 2;
                  *(int *)(uVar21 + lVar15) = iVar12;
                  if (((((uint)*(undefined8 *)((uVar21 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                      ((param_3 & 1) != 0)) &&
                     (param_3 = unaff_x26 + (param_3 & 0xffffffff),
                     ((uint)*(undefined8 *)((param_3 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
                    FUN_0133eb00(uVar21,uVar21 + lVar15,0,2);
                  }
                  *(int *)(uVar27 + 0xb) = iVar26;
                  return param_3;
                }
                    /* WARNING: Subroutine does not return */
                FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
              }
            }
          }
        }
        else if (((*(uint *)(lVar15 + 0xb) >> 0x15 & 1) == 0) &&
                (((uint)(*(int *)(unaff_x26 + (ulong)*(uint *)(lVar15 + 0x17) + 0x13) >> 1) >> 3 & 1
                 ) == 0)) {
          if (*(int *)(uVar21 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xe0)) {
            while (lVar15 = unaff_x26 + (ulong)*(uint *)(lVar15 + 0xf),
                  (int)lVar15 != (int)*(undefined8 *)(unaff_x26 + 0xb0)) {
              lVar15 = unaff_x26 + (ulong)*(uint *)(lVar15 + -1);
              if ((*(ushort *)(lVar15 + 7) < 0x412) ||
                 ((bVar7 = *(byte *)(lVar15 + 10) >> 3, 5 < bVar7 && (bVar7 != 0x1c))))
              goto LAB_013c4d84;
            }
            if ((param_3 & 1) == 0) {
              if ((bVar3 == 1) || (bVar3 == 3)) goto LAB_013c3ea8;
              lVar15 = unaff_x26 +
                       (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13);
              if (iVar16 == *(int *)(lVar15 + 0x15f)) {
                uVar20 = *(ulong *)((param_1 & 0xfffffffffffc0000) + 8);
                if (((uVar20 & 0x18) != 0) && (((uint)uVar20 >> 5 & 1) == 0)) {
                  uVar20 = param_1 + 0x13 & 0xfffffffffffc0000;
                  if (uVar20 == (**(ulong **)(unaff_x26 + 0x1428) & 0xfffffffffffc0000)) {
                    if (param_1 + 0x13 < **(ulong **)(unaff_x26 + 0x1428)) goto LAB_013c3e00;
                  }
                  else if ((param_1 & 0xfffffffffffc0000) == uVar20) {
LAB_013c3e00:
                    if (*(int *)(param_1 + 0xf) == (int)*(undefined8 *)(unaff_x26 + 0xcd8))
                    goto LAB_013c4d84;
                  }
                }
                uVar18 = *(uint *)(lVar15 + 0x163);
                *(uint *)(param_1 - 1) = uVar18;
                if ((((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                   (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar18 & 0xfffffffffffc0000) + 8) >>
                     1 & 1) != 0)) {
                  FUN_0133eb00(param_1,param_1 - 1,2,2);
                  uVar21 = extraout_x8_06;
                }
LAB_013c3ea8:
                *(int *)(uVar21 + uVar19 * 4 + 7) = iVar12;
                *(int *)(param_1 + 0xb) = ((int)uVar19 + 1) * 2;
                return param_3;
              }
              if (iVar16 == *(int *)(lVar15 + 0x167)) {
                uVar20 = *(ulong *)((param_1 & 0xfffffffffffc0000) + 8);
                if (((uVar20 & 0x18) != 0) && (((uint)uVar20 >> 5 & 1) == 0)) {
                  uVar20 = param_1 + 0x13 & 0xfffffffffffc0000;
                  if (uVar20 == (**(ulong **)(unaff_x26 + 0x1428) & 0xfffffffffffc0000)) {
                    if (param_1 + 0x13 < **(ulong **)(unaff_x26 + 0x1428)) goto LAB_013c3e80;
                  }
                  else if ((param_1 & 0xfffffffffffc0000) == uVar20) {
LAB_013c3e80:
                    if (*(int *)(param_1 + 0xf) == (int)*(undefined8 *)(unaff_x26 + 0xcd8))
                    goto LAB_013c4d84;
                  }
                }
                uVar18 = *(uint *)(lVar15 + 0x16b);
                *(uint *)(param_1 - 1) = uVar18;
                if ((((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                   (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar18 & 0xfffffffffffc0000) + 8) >>
                     1 & 1) != 0)) {
                  FUN_0133eb00(param_1,param_1 - 1,2,2);
                  uVar21 = extraout_x8_05;
                }
                goto LAB_013c3ea8;
              }
            }
            else if (bVar3 < 2) {
              lVar15 = unaff_x26 +
                       (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13);
              if (*(int *)(param_3 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x140)) {
                uVar20 = *(ulong *)((param_1 & 0xfffffffffffc0000) + 8);
                if (((uVar20 & 0x18) != 0) && (((uint)uVar20 >> 5 & 1) == 0)) {
                  uVar20 = param_1 + 0x13 & 0xfffffffffffc0000;
                  if (uVar20 == (**(ulong **)(unaff_x26 + 0x1428) & 0xfffffffffffc0000)) {
                    if (param_1 + 0x13 < **(ulong **)(unaff_x26 + 0x1428)) goto LAB_013c3b78;
                  }
                  else if ((param_1 & 0xfffffffffffc0000) == uVar20) {
LAB_013c3b78:
                    if (*(int *)(param_1 + 0xf) == (int)*(undefined8 *)(unaff_x26 + 0xcd8))
                    goto LAB_013c4d84;
                  }
                }
                if (iVar16 == *(int *)(lVar15 + 0x15f)) {
                  uVar18 = *(uint *)(lVar15 + 0x16b);
                }
                else {
                  if (iVar16 != *(int *)(lVar15 + 0x163)) goto LAB_013c4d84;
                  uVar18 = *(uint *)(lVar15 + 0x16b);
                }
                lVar15 = uVar19 * 4;
                *(uint *)(param_1 - 1) = uVar18;
                if ((((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                   (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar18 & 0xfffffffffffc0000) + 8) >>
                     1 & 1) != 0)) {
                  FUN_0133eb00(param_1,param_1 - 1,2,2);
                  uVar21 = extraout_x8_07;
                }
                lVar15 = lVar15 + 7;
                *(int *)(uVar21 + lVar15) = iVar12;
                if (((((uint)*(undefined8 *)((uVar21 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                    ((param_3 & 1) != 0)) &&
                   (param_3 = unaff_x26 + (param_3 & 0xffffffff),
                   ((uint)*(undefined8 *)((param_3 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
                  FUN_0133eb00(uVar21,uVar21 + lVar15,0,2);
                }
                *(int *)(param_1 + 0xb) = ((int)uVar19 + 1) * 2;
                return param_3;
              }
              uVar20 = *(ulong *)((param_1 & 0xfffffffffffc0000) + 8);
              if (((uVar20 & 0x18) != 0) && (((uint)uVar20 >> 5 & 1) == 0)) {
                uVar20 = param_1 + 0x13 & 0xfffffffffffc0000;
                if (uVar20 == (**(ulong **)(unaff_x26 + 0x1428) & 0xfffffffffffc0000)) {
                  if (param_1 + 0x13 < **(ulong **)(unaff_x26 + 0x1428)) goto LAB_013c3c40;
                }
                else if ((param_1 & 0xfffffffffffc0000) == uVar20) {
LAB_013c3c40:
                  if (*(int *)(param_1 + 0xf) == (int)*(undefined8 *)(unaff_x26 + 0xcd8))
                  goto LAB_013c4d84;
                }
              }
              if (iVar16 == *(int *)(lVar15 + 0x15f)) {
                uVar18 = *(uint *)(lVar15 + 0x173);
              }
              else {
                if (iVar16 != *(int *)(lVar15 + 0x163)) goto LAB_013c4d84;
                uVar18 = *(uint *)(lVar15 + 0x173);
              }
              if (uVar22 < 0x3fff) {
                if (0x3fffffe < (long)uVar22) {
                    /* WARNING: Subroutine does not return */
                  FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
                }
                if (uVar22 * 8 + 8 < 0x40000000) {
                  puVar28 = *(ulong **)(unaff_x26 + 0x1428);
                  puVar30 = (undefined4 *)*puVar28;
                  lVar15 = uVar22 * 4 + 7;
                  if (puVar30 + uVar22 * 2 + 2 < (undefined4 *)puVar28[1]) {
                    uVar20 = (long)puVar30 + 1;
                    *puVar28 = (ulong)(puVar30 + uVar22 * 2 + 2);
                    *puVar30 = (int)*(undefined8 *)(unaff_x26 + 0x1e8);
                    puVar30[1] = iVar25 * 2;
                    if (lVar15 != 7) {
                      lVar11 = uVar22 * 8 + 7;
                      uVar36 = *(undefined8 *)(unaff_x26 + 0xa8);
                      do {
                        lVar15 = lVar15 + -4;
                        iVar26 = iVar6 + *(int *)(uVar21 + lVar15);
                        lVar11 = lVar11 + -8;
                        if (iVar26 == (int)uVar36) {
                          *(undefined8 *)(uVar20 + lVar11) = 0xfff7fffffff7ffff;
                        }
                        else {
                          *(double *)(uVar20 + lVar11) = (double)(iVar26 >> 1);
                        }
                      } while (lVar15 != 7);
                    }
                    *(int *)(param_1 + 7) = (int)uVar20;
                    if (((((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0)
                        && ((uVar20 & 1) != 0)) &&
                       (((uint)*(undefined8 *)
                                ((unaff_x26 + (uVar20 & 0xffffffff) & 0xfffffffffffc0000) + 8) >> 1
                        & 1) != 0)) {
                      FUN_0133eb00(param_1,param_1 + 7,0,2);
                    }
                    lVar15 = uVar19 * 8;
                    *(uint *)(param_1 - 1) = uVar18;
                    if ((((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0)
                       && (((uint)*(undefined8 *)
                                   ((unaff_x26 + (ulong)uVar18 & 0xfffffffffffc0000) + 8) >> 1 & 1)
                           != 0)) {
                      FUN_0133eb00(param_1,param_1 - 1,2,2);
                    }
                    *(double *)(unaff_x26 + (ulong)*(uint *)(param_1 + 7) + lVar15 + 7) =
                         *(double *)(param_3 + 3) - unaff_d15;
                    *(int *)(param_1 + 0xb) = ((int)uVar19 + 1) * 2;
                    return param_3;
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x1f88));
                }
                    /* WARNING: Subroutine does not return */
                FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fc8));
              }
            }
            else {
              if (bVar3 == 3) goto LAB_013c3ae8;
              lVar15 = unaff_x26 +
                       (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13);
              if (iVar16 == *(int *)(lVar15 + 0x167)) {
                uVar20 = *(ulong *)((param_1 & 0xfffffffffffc0000) + 8);
                if (((uVar20 & 0x18) != 0) && (((uint)uVar20 >> 5 & 1) == 0)) {
                  uVar20 = param_1 + 0x13 & 0xfffffffffffc0000;
                  if (uVar20 == (**(ulong **)(unaff_x26 + 0x1428) & 0xfffffffffffc0000)) {
                    if (param_1 + 0x13 < **(ulong **)(unaff_x26 + 0x1428)) goto LAB_013c3ac0;
                  }
                  else if ((param_1 & 0xfffffffffffc0000) == uVar20) {
LAB_013c3ac0:
                    if (*(int *)(param_1 + 0xf) == (int)*(undefined8 *)(unaff_x26 + 0xcd8))
                    goto LAB_013c4d84;
                  }
                }
                uVar18 = *(uint *)(lVar15 + 0x16b);
                *(uint *)(param_1 - 1) = uVar18;
                if ((((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                   (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar18 & 0xfffffffffffc0000) + 8) >>
                     1 & 1) != 0)) {
                  FUN_0133eb00(param_1,param_1 - 1,2,2);
                  uVar21 = extraout_x8_08;
                }
LAB_013c3ae8:
                lVar15 = uVar19 * 4 + 7;
                *(int *)(uVar21 + lVar15) = iVar12;
                if (((((uint)*(undefined8 *)((uVar21 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                    ((param_3 & 1) != 0)) &&
                   (param_3 = unaff_x26 + (param_3 & 0xffffffff),
                   ((uint)*(undefined8 *)((param_3 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
                  FUN_0133eb00(uVar21,uVar21 + lVar15,0,2);
                }
                *(int *)(param_1 + 0xb) = ((int)uVar19 + 1) * 2;
                return param_3;
              }
            }
          }
          else if (*(int *)(uVar21 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x1e8)) {
            while (lVar15 = unaff_x26 + (ulong)*(uint *)(lVar15 + 0xf),
                  (int)lVar15 != (int)*(undefined8 *)(unaff_x26 + 0xb0)) {
              lVar15 = unaff_x26 + (ulong)*(uint *)(lVar15 + -1);
              if ((*(ushort *)(lVar15 + 7) < 0x412) ||
                 ((bVar7 = *(byte *)(lVar15 + 10) >> 3, 5 < bVar7 && (bVar7 != 0x1c))))
              goto LAB_013c4d84;
            }
            if ((param_3 & 1) == 0) {
              dVar38 = (double)iVar26;
            }
            else {
              if (*(int *)(param_3 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x140)) {
                uVar20 = *(ulong *)((param_1 & 0xfffffffffffc0000) + 8);
                lVar15 = unaff_x26 +
                         (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13);
                if (((uVar20 & 0x18) != 0) && (((uint)uVar20 >> 5 & 1) == 0)) {
                  uVar20 = param_1 + 0x13 & 0xfffffffffffc0000;
                  if (uVar20 == (**(ulong **)(unaff_x26 + 0x1428) & 0xfffffffffffc0000)) {
                    if (param_1 + 0x13 < **(ulong **)(unaff_x26 + 0x1428)) goto LAB_013c3f84;
                  }
                  else if ((param_1 & 0xfffffffffffc0000) == uVar20) {
LAB_013c3f84:
                    if (*(int *)(param_1 + 0xf) == (int)*(undefined8 *)(unaff_x26 + 0xcd8))
                    goto LAB_013c4d84;
                  }
                }
                if (iVar16 == *(int *)(lVar15 + 0x16f)) {
                  uVar18 = *(uint *)(lVar15 + 0x16b);
                }
                else {
                  if (iVar16 != *(int *)(lVar15 + 0x173)) goto LAB_013c4d84;
                  uVar18 = *(uint *)(lVar15 + 0x16b);
                }
                if (uVar22 < 0x7ffe) {
                  if ((long)uVar22 < 0x7fffffe) {
                    uVar24 = **(ulong **)(unaff_x26 + 0x1428);
                    uVar20 = uVar24 + uVar22 * 4 + 8;
                    if (uVar20 < **(ulong **)(unaff_x26 + 0x1430)) {
                      **(ulong **)(unaff_x26 + 0x1428) = uVar20;
                      uVar20 = param_1;
                      uVar24 = uVar24 + 1;
                    }
                    else {
                      uVar20 = FUN_01348560();
                      uVar24 = uVar20;
                    }
                    *(int *)(uVar24 - 1) = (int)*(undefined8 *)(unaff_x26 + 0xe0);
                    lVar15 = uVar22 * 4 + 7;
                    *(int *)(uVar24 + 3) = iVar25 * 2;
                    if (lVar15 != 7) {
                      uVar36 = *(undefined8 *)(unaff_x26 + 0xa8);
                      do {
                        lVar15 = lVar15 + -4;
                        *(int *)(uVar24 + lVar15) = (int)uVar36;
                      } while (lVar15 != 7);
                    }
                    lVar15 = uVar22 * 8 + 7;
                    uVar27 = param_1;
                    if (lVar15 != 7) {
                      lVar11 = uVar22 * 4 + 7;
                      lVar29 = -0x8000000080001;
                      while( true ) {
                        lVar15 = lVar15 + -8;
                        if (*(long *)(uVar21 + lVar15) != lVar29) {
                          uVar31 = **(ulong **)(unaff_x26 + 0x1428);
                          uVar36 = *(undefined8 *)(uVar21 + lVar15);
                          uVar22 = uVar31 + 0xc;
                          if (uVar22 < **(ulong **)(unaff_x26 + 0x1430)) {
                            **(ulong **)(unaff_x26 + 0x1428) = uVar22;
                            uVar22 = uVar31 + 1;
                          }
                          else {
                            uVar20 = FUN_01348560(uVar20,0xc);
                            lVar29 = -0x8000000080001;
                            uVar27 = param_1;
                            uVar22 = uVar20;
                          }
                          *(int *)(uVar22 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
                          *(undefined8 *)(uVar22 + 3) = uVar36;
                          *(int *)(uVar24 + lVar11 + -4) = (int)uVar22;
                          if (((((uint)*(undefined8 *)((uVar24 & 0xfffffffffffc0000) + 8) >> 2 & 1)
                                != 0) && ((uVar22 & 1) != 0)) &&
                             (((uint)*(undefined8 *)
                                      ((unaff_x26 + (uVar22 & 0xffffffff) & 0xfffffffffffc0000) + 8)
                               >> 1 & 1) != 0)) {
                            FUN_0133eb00(uVar24,uVar24 + lVar11 + -4,0,2);
                            uVar21 = extraout_x8_04;
                            lVar11 = extraout_x9_01;
                            lVar29 = extraout_x10_01;
                          }
                        }
                        if (lVar15 == 7) break;
                        lVar11 = lVar11 + -4;
                      }
                    }
                    *(int *)(uVar27 + 7) = (int)uVar24;
                    if (((((uint)*(undefined8 *)((uVar27 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0)
                        && ((uVar24 & 1) != 0)) &&
                       (((uint)*(undefined8 *)
                                ((unaff_x26 + (uVar24 & 0xffffffff) & 0xfffffffffffc0000) + 8) >> 1
                        & 1) != 0)) {
                      FUN_0133eb00(uVar27,uVar27 + 7,0,2);
                    }
                    lVar15 = uVar19 * 4;
                    *(uint *)(uVar27 - 1) = uVar18;
                    if ((((uint)*(undefined8 *)((uVar27 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0)
                       && (((uint)*(undefined8 *)
                                   ((unaff_x26 + (ulong)uVar18 & 0xfffffffffffc0000) + 8) >> 1 & 1)
                           != 0)) {
                      FUN_0133eb00(uVar27,uVar27 - 1,2,2);
                    }
                    lVar15 = lVar15 + 7;
                    uVar21 = unaff_x26 + (ulong)*(uint *)(uVar27 + 7);
                    iVar26 = ((int)uVar19 + 1) * 2;
                    *(int *)(uVar21 + lVar15) = iVar12;
                    if (((((uint)*(undefined8 *)((uVar21 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0)
                        && ((param_3 & 1) != 0)) &&
                       (param_3 = unaff_x26 + (param_3 & 0xffffffff),
                       ((uint)*(undefined8 *)((param_3 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
                      FUN_0133eb00(uVar21,uVar21 + lVar15,0,2);
                    }
                    *(int *)(uVar27 + 0xb) = iVar26;
                    return param_3;
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
                }
                goto LAB_013c4d84;
              }
              dVar38 = *(double *)(param_3 + 3);
            }
            if (bVar3 == 5) goto LAB_013c41c0;
            lVar15 = unaff_x26 +
                     (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13);
            if (iVar16 == *(int *)(lVar15 + 0x16f)) {
              uVar20 = *(ulong *)((param_1 & 0xfffffffffffc0000) + 8);
              if (((uVar20 & 0x18) != 0) && (((uint)uVar20 >> 5 & 1) == 0)) {
                uVar20 = param_1 + 0x13 & 0xfffffffffffc0000;
                if (uVar20 == (**(ulong **)(unaff_x26 + 0x1428) & 0xfffffffffffc0000)) {
                  if (param_1 + 0x13 < **(ulong **)(unaff_x26 + 0x1428)) goto LAB_013c4198;
                }
                else if ((param_1 & 0xfffffffffffc0000) == uVar20) {
LAB_013c4198:
                  if (*(int *)(param_1 + 0xf) == (int)*(undefined8 *)(unaff_x26 + 0xcd8))
                  goto LAB_013c4d84;
                }
              }
              uVar18 = *(uint *)(lVar15 + 0x173);
              *(uint *)(param_1 - 1) = uVar18;
              if ((((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                 (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar18 & 0xfffffffffffc0000) + 8) >> 1
                  & 1) != 0)) {
                dVar38 = (double)FUN_0133eb00(param_1,param_1 - 1,2,2);
                uVar21 = extraout_x8_03;
              }
LAB_013c41c0:
              *(double *)(uVar21 + uVar19 * 8 + 7) = dVar38 - unaff_d15;
              *(int *)(param_1 + 0xb) = ((int)uVar19 + 1) * 2;
              return param_3;
            }
          }
        }
      }
      goto LAB_013c4d84;
    }
  }
  else if ((ulong)((long)(unaff_x26 + (ulong)*(uint *)(uVar21 + 3) << 0x20) >> 0x21) <= uVar19)
  goto LAB_013c4d84;
  if (*(int *)(uVar21 - 1) != (int)*(undefined8 *)(unaff_x26 + 0xe0)) {
    if (*(int *)(uVar21 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x1e8)) goto LAB_013c4d84;
    if (*(long *)(uVar21 + uVar19 * 8 + 7) == -0x8000000080001) {
      do {
        lVar15 = unaff_x26 + (ulong)*(uint *)(lVar15 + 0xf);
        if ((int)lVar15 == (int)*(undefined8 *)(unaff_x26 + 0xb0)) goto LAB_013c4b4c;
        lVar15 = unaff_x26 + (ulong)*(uint *)(lVar15 + -1);
      } while ((0x411 < *(ushort *)(lVar15 + 7)) &&
              ((bVar3 = *(byte *)(lVar15 + 10) >> 3, bVar3 < 6 || (bVar3 == 0x1c))));
      goto LAB_013c4d84;
    }
LAB_013c4b4c:
    if ((param_3 & 1) == 0) {
      dVar38 = (double)iVar26;
LAB_013c4d5c:
      *(double *)(uVar21 + uVar19 * 8 + 7) = dVar38 - unaff_d15;
      return param_3;
    }
    if (*(int *)(param_3 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x140)) {
      dVar38 = *(double *)(param_3 + 3);
      goto LAB_013c4d5c;
    }
    uVar20 = *(ulong *)((param_1 & 0xfffffffffffc0000) + 8);
    lVar15 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13);
    if (((uVar20 & 0x18) != 0) && (((uint)uVar20 >> 5 & 1) == 0)) {
      uVar20 = param_1 + 0x13 & 0xfffffffffffc0000;
      if (uVar20 == (**(ulong **)(unaff_x26 + 0x1428) & 0xfffffffffffc0000)) {
        if (param_1 + 0x13 < **(ulong **)(unaff_x26 + 0x1428)) goto LAB_013c4bb4;
      }
      else if ((param_1 & 0xfffffffffffc0000) == uVar20) {
LAB_013c4bb4:
        if (*(int *)(param_1 + 0xf) == (int)*(undefined8 *)(unaff_x26 + 0xcd8)) goto LAB_013c4d84;
      }
    }
    if (iVar16 == *(int *)(lVar15 + 0x16f)) {
      uVar18 = *(uint *)(lVar15 + 0x167);
    }
    else {
      if (iVar16 != *(int *)(lVar15 + 0x173)) goto LAB_013c4d84;
      uVar18 = *(uint *)(lVar15 + 0x16b);
    }
    iVar26 = iVar6 + *(int *)(uVar21 + 3) >> 1;
    uVar20 = (ulong)iVar26;
    if (uVar20 < 0x7ffe) {
      if (0x7fffffd < (long)uVar20) {
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
      }
      uVar24 = **(ulong **)(unaff_x26 + 0x1428);
      uVar22 = uVar24 + uVar20 * 4 + 8;
      if (uVar22 < **(ulong **)(unaff_x26 + 0x1430)) {
        **(ulong **)(unaff_x26 + 0x1428) = uVar22;
        uVar22 = param_1;
        uVar24 = uVar24 + 1;
      }
      else {
        uVar22 = FUN_01348560();
        uVar24 = uVar22;
      }
      *(int *)(uVar24 - 1) = (int)*(undefined8 *)(unaff_x26 + 0xe0);
      lVar15 = uVar20 * 4 + 7;
      *(int *)(uVar24 + 3) = iVar26 * 2;
      if (lVar15 != 7) {
        uVar36 = *(undefined8 *)(unaff_x26 + 0xa8);
        lVar11 = lVar15;
        do {
          lVar11 = lVar11 + -4;
          *(int *)(uVar24 + lVar11) = (int)uVar36;
        } while (lVar11 != 7);
      }
      lVar11 = uVar20 * 8 + 7;
      uVar20 = param_1;
      if (lVar11 != 7) {
        lVar29 = -0x8000000080001;
        while( true ) {
          lVar11 = lVar11 + -8;
          if (*(long *)(uVar21 + lVar11) != lVar29) {
            uVar31 = **(ulong **)(unaff_x26 + 0x1428);
            uVar36 = *(undefined8 *)(uVar21 + lVar11);
            uVar27 = uVar31 + 0xc;
            if (uVar27 < **(ulong **)(unaff_x26 + 0x1430)) {
              **(ulong **)(unaff_x26 + 0x1428) = uVar27;
              uVar27 = uVar31 + 1;
            }
            else {
              uVar22 = FUN_01348560(uVar22,0xc);
              lVar29 = -0x8000000080001;
              uVar20 = param_1;
              uVar27 = uVar22;
            }
            *(int *)(uVar27 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
            *(undefined8 *)(uVar27 + 3) = uVar36;
            *(int *)(uVar24 + lVar15 + -4) = (int)uVar27;
            if (((((uint)*(undefined8 *)((uVar24 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                ((uVar27 & 1) != 0)) &&
               (((uint)*(undefined8 *)((unaff_x26 + (uVar27 & 0xffffffff) & 0xfffffffffffc0000) + 8)
                 >> 1 & 1) != 0)) {
              FUN_0133eb00(uVar24,uVar24 + lVar15 + -4,0,2);
              uVar21 = extraout_x8;
              lVar15 = extraout_x9;
              uVar24 = extraout_x10;
            }
          }
          if (lVar11 == 7) break;
          lVar15 = lVar15 + -4;
        }
      }
      *(int *)(uVar20 + 7) = (int)uVar24;
      if (((((uint)*(undefined8 *)((uVar20 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
          ((uVar24 & 1) != 0)) &&
         (((uint)*(undefined8 *)((unaff_x26 + (uVar24 & 0xffffffff) & 0xfffffffffffc0000) + 8) >> 1
          & 1) != 0)) {
        FUN_0133eb00(uVar20,uVar20 + 7,0,2);
      }
      *(uint *)(uVar20 - 1) = uVar18;
      if ((((uint)*(undefined8 *)((uVar20 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
         (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar18 & 0xfffffffffffc0000) + 8) >> 1 & 1) !=
          0)) {
        FUN_0133eb00(uVar20,uVar20 - 1,2,2);
      }
      lVar15 = uVar19 * 4 + 7;
      uVar19 = unaff_x26 + (ulong)*(uint *)(uVar20 + 7);
      *(int *)(uVar19 + lVar15) = iVar12;
      if (((uint)*(undefined8 *)((uVar19 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
        return param_3;
      }
      if ((param_3 & 1) == 0) {
        return param_3;
      }
      uVar21 = unaff_x26 + (param_3 & 0xffffffff);
      if (((uint)*(undefined8 *)((uVar21 & 0xfffffffffffc0000) + 8) >> 1 & 1) == 0) {
        return uVar21;
      }
      FUN_0133eb00(uVar19,uVar19 + lVar15,0,2);
      return uVar21;
    }
    goto LAB_013c4d84;
  }
  if (*(int *)(uVar21 + uVar19 * 4 + 7) == (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
    do {
      lVar15 = unaff_x26 + (ulong)*(uint *)(lVar15 + 0xf);
      if ((int)lVar15 == (int)*(undefined8 *)(unaff_x26 + 0xb0)) goto LAB_013c4834;
      lVar15 = unaff_x26 + (ulong)*(uint *)(lVar15 + -1);
    } while ((0x411 < *(ushort *)(lVar15 + 7)) &&
            ((bVar7 = *(byte *)(lVar15 + 10) >> 3, bVar7 < 6 || (bVar7 == 0x1c))));
    goto LAB_013c4d84;
  }
LAB_013c4834:
  if ((param_3 & 1) == 0) {
    *(int *)(uVar21 + uVar19 * 4 + 7) = iVar12;
    return param_3;
  }
  if (1 < bVar3) {
    lVar15 = uVar19 * 4 + 7;
    *(int *)(uVar21 + lVar15) = iVar12;
    if (((uint)*(undefined8 *)((uVar21 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
      return param_3;
    }
    if ((param_3 & 1) == 0) {
      return param_3;
    }
    uVar19 = unaff_x26 + (param_3 & 0xffffffff);
    if (((uint)*(undefined8 *)((uVar19 & 0xfffffffffffc0000) + 8) >> 1 & 1) == 0) {
      return uVar19;
    }
    FUN_0133eb00(uVar21,uVar21 + lVar15,0,2);
    return uVar19;
  }
  lVar15 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13);
  if (*(int *)(param_3 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x140)) {
    uVar20 = *(ulong *)((param_1 & 0xfffffffffffc0000) + 8);
    if (((uVar20 & 0x18) != 0) && (((uint)uVar20 >> 5 & 1) == 0)) {
      uVar20 = param_1 + 0x13 & 0xfffffffffffc0000;
      if (uVar20 == (**(ulong **)(unaff_x26 + 0x1428) & 0xfffffffffffc0000)) {
        if (param_1 + 0x13 < **(ulong **)(unaff_x26 + 0x1428)) goto LAB_013c4980;
      }
      else if ((param_1 & 0xfffffffffffc0000) == uVar20) {
LAB_013c4980:
        if (*(int *)(param_1 + 0xf) == (int)*(undefined8 *)(unaff_x26 + 0xcd8)) goto LAB_013c4d84;
      }
    }
    if (iVar16 == *(int *)(lVar15 + 0x15f)) {
      uVar18 = *(uint *)(lVar15 + 0x16f);
    }
    else {
      if (iVar16 != *(int *)(lVar15 + 0x163)) goto LAB_013c4d84;
      uVar18 = *(uint *)(lVar15 + 0x173);
    }
    iVar26 = iVar6 + *(int *)(uVar21 + 3) >> 1;
    uVar20 = (ulong)iVar26;
    if (uVar20 < 0x3fff) {
      if (0x3fffffe < (long)uVar20) {
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
      }
      if (uVar20 * 8 + 8 < 0x40000000) {
        puVar28 = *(ulong **)(unaff_x26 + 0x1428);
        puVar30 = (undefined4 *)*puVar28;
        if (puVar30 + uVar20 * 2 + 2 < (undefined4 *)puVar28[1]) {
          uVar22 = (long)puVar30 + 1;
          *puVar28 = (ulong)(puVar30 + uVar20 * 2 + 2);
          *puVar30 = (int)*(undefined8 *)(unaff_x26 + 0x1e8);
          puVar30[1] = iVar26 * 2;
          lVar15 = uVar20 * 4 + 7;
          if (lVar15 != 7) {
            lVar11 = uVar20 * 8 + 7;
            uVar36 = *(undefined8 *)(unaff_x26 + 0xa8);
            do {
              lVar15 = lVar15 + -4;
              iVar26 = iVar6 + *(int *)(uVar21 + lVar15);
              lVar11 = lVar11 + -8;
              if (iVar26 == (int)uVar36) {
                *(undefined8 *)(uVar22 + lVar11) = 0xfff7fffffff7ffff;
              }
              else {
                *(double *)(uVar22 + lVar11) = (double)(iVar26 >> 1);
              }
            } while (lVar15 != 7);
          }
          *(int *)(param_1 + 7) = (int)uVar22;
          if (((((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
              ((uVar22 & 1) != 0)) &&
             (((uint)*(undefined8 *)((unaff_x26 + (uVar22 & 0xffffffff) & 0xfffffffffffc0000) + 8)
               >> 1 & 1) != 0)) {
            FUN_0133eb00(param_1,param_1 + 7,0,2);
          }
          *(uint *)(param_1 - 1) = uVar18;
          if ((((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
             (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar18 & 0xfffffffffffc0000) + 8) >> 1 & 1)
              != 0)) {
            FUN_0133eb00(param_1,param_1 - 1,2,2);
          }
          *(double *)(unaff_x26 + (ulong)*(uint *)(param_1 + 7) + uVar19 * 8 + 7) =
               *(double *)(param_3 + 3) - unaff_d15;
          return param_3;
        }
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x1f88));
      }
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fc8));
    }
    goto LAB_013c4d84;
  }
  uVar20 = *(ulong *)((param_1 & 0xfffffffffffc0000) + 8);
  if (((uVar20 & 0x18) != 0) && (((uint)uVar20 >> 5 & 1) == 0)) {
    uVar20 = param_1 + 0x13 & 0xfffffffffffc0000;
    if (uVar20 == (**(ulong **)(unaff_x26 + 0x1428) & 0xfffffffffffc0000)) {
      if (param_1 + 0x13 < **(ulong **)(unaff_x26 + 0x1428)) goto LAB_013c48c4;
    }
    else if ((param_1 & 0xfffffffffffc0000) == uVar20) {
LAB_013c48c4:
      if (*(int *)(param_1 + 0xf) == (int)*(undefined8 *)(unaff_x26 + 0xcd8)) goto LAB_013c4d84;
    }
  }
  if (iVar16 == *(int *)(lVar15 + 0x15f)) {
    uVar18 = *(uint *)(lVar15 + 0x167);
  }
  else {
    if (iVar16 != *(int *)(lVar15 + 0x163)) {
LAB_013c4d84:
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x2318));
    }
    uVar18 = *(uint *)(lVar15 + 0x16b);
  }
  *(uint *)(param_1 - 1) = uVar18;
  if ((((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
     (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar18 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0))
  {
    FUN_0133eb00(param_1,param_1 - 1,2,2);
    uVar21 = extraout_x8_00;
  }
  lVar15 = uVar19 * 4 + 7;
  *(int *)(uVar21 + lVar15) = iVar12;
  if (((((uint)*(undefined8 *)((uVar21 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
      ((param_3 & 1) != 0)) &&
     (param_3 = unaff_x26 + (param_3 & 0xffffffff),
     ((uint)*(undefined8 *)((param_3 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
    FUN_0133eb00(uVar21,uVar21 + lVar15,0,2);
  }
  return param_3;
LAB_013c3450:
  uVar18 = *(int *)(lVar32 + lVar34 * 4 + 0x13) >> 1;
  if ((uVar18 >> 3 & 1) != 0) goto LAB_013c36a4;
  if ((uVar18 & 1) != 0) {
    if ((uVar18 >> 1 & 1) != 0) {
      lVar11 = unaff_x26 + (ulong)*(uint *)(lVar32 + lVar34 * 4 + 0x17);
      goto LAB_013c3590;
    }
    bVar10 = (uVar18 >> 6 & 7) != 2;
    uVar21 = (ulong)*(byte *)(lVar29 + 4) + (((ulong)uVar18 & 0x1ff80000) >> 0x13);
    if (uVar21 < *(byte *)(lVar29 + 3)) {
      lVar15 = uVar21 * 4 + -1;
      if (bVar10) {
        lVar11 = unaff_x26 + (ulong)*(uint *)(lVar11 + lVar15);
        goto LAB_013c3590;
      }
      uVar36 = *(undefined8 *)(unaff_x26 + (ulong)*(uint *)(lVar11 + lVar15) + 3);
    }
    else {
      uVar20 = unaff_x26 + (ulong)*(uint *)(lVar11 + 3);
      if ((uVar20 & 1) == 0) {
        uVar20 = *(ulong *)(unaff_x26 + 0x168);
      }
      lVar11 = unaff_x26 + (ulong)*(uint *)(uVar20 + (uVar21 - *(byte *)(lVar29 + 3)) * 4 + 7);
      if (bVar10) goto LAB_013c3590;
      uVar36 = *(undefined8 *)(lVar11 + 3);
    }
    uVar20 = **(ulong **)(unaff_x26 + 0x1428);
    uVar21 = uVar20 + 0xc;
    if (uVar21 < **(ulong **)(unaff_x26 + 0x1430)) {
      lVar11 = uVar20 + 1;
      **(ulong **)(unaff_x26 + 0x1428) = uVar21;
    }
    else {
      lVar11 = FUN_01348560(param_1,0xc,param_3,param_2);
    }
    *(int *)(lVar11 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
    *(undefined8 *)(lVar11 + 3) = uVar36;
    goto LAB_013c3590;
  }
  goto LAB_013c36d8;
}

