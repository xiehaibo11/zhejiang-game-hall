
/* WARNING: Removing unreachable block (ram,0x01351e20) */
/* WARNING: Type propagation algorithm not settling */

ulong FUN_01350880(ulong param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  byte bVar6;
  ushort uVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  ulong uVar14;
  undefined4 uVar15;
  long lVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  int iVar25;
  ulong uVar26;
  ulong uVar27;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x10_01;
  int iVar28;
  int iVar29;
  long extraout_x11;
  long extraout_x11_00;
  long lVar30;
  int iVar31;
  int iVar32;
  long lVar33;
  long unaff_x26;
  undefined8 uVar34;
  double dVar35;
  double dVar36;
  
  if ((param_2 & 1) == 0) goto LAB_01351e48;
  lVar16 = unaff_x26 + (ulong)*(uint *)(param_2 - 1);
  if (*(ushort *)(lVar16 + 7) < 0x411) goto LAB_01351e48;
  uVar17 = *(uint *)(lVar16 + 0xb);
  iVar13 = (int)param_3;
  iVar11 = (int)param_1;
  iVar18 = (int)unaff_x26;
  if ((uVar17 >> 0x15 & 1) != 0) {
    uVar24 = unaff_x26 + (ulong)*(uint *)(param_2 + 3);
    if ((uVar24 & 1) == 0) {
      uVar24 = *(ulong *)(unaff_x26 + 0x410);
    }
    uVar22 = (ulong)(*(uint *)(param_3 + 3) >> 3);
    lVar21 = 0;
    iVar29 = (int)*(undefined8 *)(unaff_x26 + 0xa0);
    while( true ) {
      uVar22 = uVar22 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar24 + 0xf) << 0x20) >> 0x21) - 1U;
      lVar30 = uVar22 * 3;
      lVar12 = (lVar30 + 5) * 4;
      iVar28 = *(int *)(uVar24 + lVar12 + 7);
      if (iVar28 == iVar29) break;
      if (iVar28 == iVar13) {
        uVar17 = *(int *)(uVar24 + lVar12 + 0xf) >> 1;
        if ((uVar17 >> 3 & 1) != 0) goto LAB_01351a48;
        if ((uVar17 & 1) == 0) {
          if (((((iVar13 != (int)*(undefined8 *)(unaff_x26 + 0x5d0)) &&
                (iVar13 != (int)*(undefined8 *)(unaff_x26 + 0xc18))) &&
               (iVar13 != (int)*(undefined8 *)(unaff_x26 + 0x848))) &&
              ((iVar13 != (int)*(undefined8 *)(unaff_x26 + 0xc48) &&
               (iVar13 != (int)*(undefined8 *)(unaff_x26 + 0xc70))))) &&
             ((iVar13 != (int)*(undefined8 *)(unaff_x26 + 0x960) &&
              (iVar13 != (int)*(undefined8 *)(unaff_x26 + 0xa38))))) {
            if ((ulong)((long)((ulong)*(uint *)(uVar24 + 3) << 0x20) >> 0x21) <= lVar30 + 6U) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(0,0x1351da8);
              (*pcVar8)();
            }
            *(int *)(uVar24 + lVar12 + 0xb) = iVar11;
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
            FUN_0133eb00(uVar24,uVar24 + lVar12 + 0xb,0,2);
            return uVar22;
          }
          goto LAB_01351e48;
        }
        if ((ulong)((long)((ulong)*(uint *)(uVar24 + 3) << 0x20) >> 0x21) <= lVar30 + 6U) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(0,0x1351da0);
          (*pcVar8)();
        }
        lVar12 = unaff_x26 + (ulong)*(uint *)(uVar24 + lVar12 + 0xb);
        goto LAB_0135193c;
      }
      lVar21 = lVar21 + 1;
      uVar22 = uVar22 + lVar21;
    }
    if ((((((*(ushort *)(lVar16 + 7) != 0x41b) &&
           (iVar13 != (int)*(undefined8 *)(unaff_x26 + 0x5d0))) &&
          (iVar13 != (int)*(undefined8 *)(unaff_x26 + 0xc18))) &&
         ((iVar13 != (int)*(undefined8 *)(unaff_x26 + 0x848) &&
          (iVar13 != (int)*(undefined8 *)(unaff_x26 + 0xc48))))) &&
        (iVar13 != (int)*(undefined8 *)(unaff_x26 + 0xc70))) &&
       ((iVar13 != (int)*(undefined8 *)(unaff_x26 + 0x960) &&
        (iVar13 != (int)*(undefined8 *)(unaff_x26 + 0xa38))))) {
      if ((*(int *)(param_3 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xf8)) &&
         ((*(uint *)(param_3 + 7) & 1) != 0)) {
        if ((*(uint *)(param_3 + 7) >> 4 & 1) != 0) goto LAB_01351e48;
      }
      else if ((uVar17 >> 0x1b & 1) == 0) goto LAB_01351e48;
      lVar21 = unaff_x26 + (ulong)*(uint *)(lVar16 + 0xf);
      uVar17 = *(uint *)(lVar21 + -1);
      iVar28 = (int)*(undefined8 *)(unaff_x26 + 0xa8);
      while( true ) {
        lVar30 = unaff_x26 + (ulong)uVar17;
        iVar25 = (int)*(undefined8 *)(unaff_x26 + 0xb0);
        if ((int)lVar21 == iVar25) break;
        uVar7 = *(ushort *)(lVar30 + 7);
        if (uVar7 < 0x411) {
          if ((uVar7 != 0xaa) || ((*(byte *)(lVar30 + 9) & 0x24) != 0)) goto LAB_01351e48;
          uVar22 = unaff_x26 + (ulong)*(uint *)(lVar21 + 3);
          if ((uVar22 & 1) == 0) {
            uVar22 = *(ulong *)(unaff_x26 + 0x410);
          }
          uVar14 = (ulong)(*(uint *)(param_3 + 3) >> 3);
          lVar12 = 0;
          while( true ) {
            uVar14 = uVar14 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar22 + 0xf) << 0x20) >> 0x21) -
                              1U;
            lVar33 = (uVar14 + 5) * 4;
            lVar5 = unaff_x26 + (ulong)*(uint *)(uVar22 + lVar33 + 7);
            if ((int)lVar5 == iVar29) break;
            if (*(int *)(lVar5 + 3) == iVar13) {
              if ((ulong)((long)((ulong)*(uint *)(uVar22 + 3) << 0x20) >> 0x21) <= uVar14 + 6) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(0,0x1351db4);
                (*pcVar8)();
              }
              lVar5 = unaff_x26 + (ulong)*(uint *)(uVar22 + lVar33 + 0xb);
              lVar12 = unaff_x26 + (ulong)*(uint *)(lVar5 + 0xb);
              if ((int)lVar12 != iVar28) {
                uVar17 = *(int *)(lVar5 + 7) >> 1;
                if ((uVar17 >> 3 & 1) != 0) goto LAB_01351a48;
                if ((uVar17 & 1) != 0) goto LAB_0135193c;
                goto LAB_01351a70;
              }
              break;
            }
            lVar12 = lVar12 + 1;
            uVar14 = uVar14 + lVar12;
          }
        }
        else if ((*(uint *)(lVar30 + 0xb) >> 0x15 & 1) == 0) {
          lVar12 = unaff_x26 + (ulong)*(uint *)(lVar30 + 0x17);
          uVar17 = *(uint *)(lVar30 + 0xb) >> 10 & 0x3ff;
          if (uVar17 != 0) {
            if (uVar17 < 0x21) {
              lVar33 = (long)(int)uVar17 * 3;
              while (lVar33 != 0) {
                lVar33 = lVar33 + -3;
                if (*(int *)(lVar12 + lVar33 * 4 + 0xf) == iVar13) goto LAB_013517f4;
              }
            }
            else {
              iVar1 = *(short *)(lVar12 + 5) + -1;
              iVar32 = 0;
              iVar31 = iVar1;
              do {
                iVar3 = iVar32 + ((uint)(iVar31 - iVar32) >> 1);
                if (*(uint *)(unaff_x26 +
                              (ulong)*(uint *)(lVar12 + (long)(int)(((uint)(*(int *)(lVar12 + (long)
                                                  (iVar3 * 3) * 4 + 0x13) >> 1) >> 9 & 0x3ff) * 3) *
                                                  4 + 0xf) + 3) < *(uint *)(param_3 + 3)) {
                  iVar32 = iVar3 + 1;
                  iVar3 = iVar31;
                }
                iVar31 = iVar3;
              } while (iVar32 != iVar31);
              for (; iVar32 <= iVar1; iVar32 = iVar32 + 1) {
                uVar19 = (uint)(*(int *)(lVar12 + (long)(iVar32 * 3) * 4 + 0x13) >> 1) >> 9 & 0x3ff;
                lVar33 = (long)(int)(uVar19 * 3);
                lVar5 = unaff_x26 + (ulong)*(uint *)(lVar12 + lVar33 * 4 + 0xf);
                if (*(uint *)(lVar5 + 3) != *(uint *)(param_3 + 3)) break;
                if ((int)lVar5 == iVar13) {
                  if (uVar19 < uVar17) goto LAB_013517f4;
                  break;
                }
              }
            }
          }
        }
        else {
          uVar22 = unaff_x26 + (ulong)*(uint *)(lVar21 + 3);
          if ((uVar22 & 1) == 0) {
            uVar22 = *(ulong *)(unaff_x26 + 0x410);
          }
          uVar14 = (ulong)(*(uint *)(param_3 + 3) >> 3);
          lVar12 = 0;
          while( true ) {
            uVar14 = uVar14 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar22 + 0xf) << 0x20) >> 0x21) -
                              1U;
            lVar5 = uVar14 * 3;
            lVar33 = (lVar5 + 5) * 4;
            iVar32 = *(int *)(uVar22 + lVar33 + 7);
            if (iVar32 == iVar29) break;
            if (iVar32 == iVar13) {
              uVar17 = *(int *)(uVar22 + lVar33 + 0xf) >> 1;
              if ((uVar17 >> 3 & 1) != 0) goto LAB_01351a48;
              if ((uVar17 & 1) == 0) goto LAB_01351a70;
              if ((ulong)((long)((ulong)*(uint *)(uVar22 + 3) << 0x20) >> 0x21) <= lVar5 + 6U) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(0,0x1351df8);
                (*pcVar8)();
              }
              lVar12 = unaff_x26 + (ulong)*(uint *)(uVar22 + lVar33 + 0xb);
              goto LAB_0135193c;
            }
            lVar12 = lVar12 + 1;
            uVar14 = uVar14 + lVar12;
          }
        }
        if (uVar7 == 0x41b) goto LAB_01351e48;
        lVar21 = unaff_x26 + (ulong)*(uint *)(lVar30 + 0xf);
        if ((int)lVar21 == iVar25) break;
        uVar17 = *(uint *)(lVar21 + -1);
      }
      goto LAB_01351a70;
    }
    goto LAB_01351e48;
  }
  lVar21 = unaff_x26 + (ulong)*(uint *)(lVar16 + 0x17);
  uVar17 = uVar17 >> 10 & 0x3ff;
  iVar29 = iVar11 >> 1;
  if (uVar17 != 0) {
    if (uVar17 < 0x21) {
      lVar30 = (long)(int)uVar17 * 3;
      do {
        if (lVar30 == 0) goto LAB_01350e90;
        lVar30 = lVar30 + -3;
      } while (*(int *)(lVar21 + lVar30 * 4 + 0xf) != iVar13);
LAB_013509e8:
      lVar30 = lVar30 * 4;
      uVar17 = *(int *)(lVar21 + lVar30 + 0x13) >> 1;
      if ((uVar17 >> 3 & 1) != 0) {
LAB_01351a48:
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(4,*(undefined8 *)(unaff_x26 + 0x20f0),param_1);
      }
      if ((uVar17 & 1) == 0) {
        if (((iVar13 != (int)*(undefined8 *)(unaff_x26 + 0x5d0)) &&
            (iVar13 != (int)*(undefined8 *)(unaff_x26 + 0xc18))) &&
           ((iVar13 != (int)*(undefined8 *)(unaff_x26 + 0x848) &&
            ((((iVar13 != (int)*(undefined8 *)(unaff_x26 + 0xc48) &&
               (iVar13 != (int)*(undefined8 *)(unaff_x26 + 0xc70))) &&
              (iVar13 != (int)*(undefined8 *)(unaff_x26 + 0x960))) &&
             (iVar13 != (int)*(undefined8 *)(unaff_x26 + 0xa38))))))) {
          if ((uVar17 >> 1 & 1) == 0) {
            uVar19 = uVar17 >> 6 & 7;
            if (uVar19 == 1) {
              if ((param_1 & 1) != 0) goto LAB_01351e48;
            }
            else if (uVar19 == 2) {
              if (((param_1 & 1) != 0) &&
                 (*(int *)(param_1 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x140)))
              goto LAB_01351e48;
            }
            else if (uVar19 == 3) {
              if ((((param_1 & 1) == 0) ||
                  (uVar20 = iVar18 + *(int *)(lVar21 + lVar30 + 0x17), uVar20 == 4)) ||
                 ((uVar20 != 2 &&
                  ((uVar20 == 3 || (*(uint *)(param_1 - 1) != (uVar20 & 0xfffffffd)))))))
              goto LAB_01351e48;
            }
            else if (uVar19 == 0) goto LAB_01351e48;
            bVar10 = (uVar17 >> 2 & 1) != 1;
            uVar24 = (ulong)*(byte *)(lVar16 + 4) + (((ulong)uVar17 & 0x1ff80000) >> 0x13);
            if (uVar24 < *(byte *)(lVar16 + 3)) {
              lVar16 = uVar24 * 4 + -1;
              if (uVar19 == 2) {
                if ((param_1 & 1) == 0) {
                  dVar36 = (double)iVar29;
                }
                else {
                  dVar36 = *(double *)(param_1 + 3);
                }
                lVar16 = unaff_x26 + (ulong)*(uint *)(param_2 + lVar16);
                if (bVar10) {
                  *(double *)(lVar16 + 3) = dVar36;
                  return param_1;
                }
                dVar35 = *(double *)(lVar16 + 3);
                if (dVar35 == dVar36) {
                  if ((int)((ulong)dVar35 >> 0x20) == (int)((ulong)dVar36 >> 0x20)) {
                    return param_1;
                  }
                  goto LAB_01351e48;
                }
              }
              else {
                if (bVar10) {
                  *(int *)(param_2 + lVar16) = iVar11;
                  if (((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
                    return param_1;
                  }
                  if ((param_1 & 1) == 0) {
                    return param_1;
                  }
                  uVar24 = unaff_x26 + (param_1 & 0xffffffff);
                  if (((uint)*(undefined8 *)((uVar24 & 0xfffffffffffc0000) + 8) >> 1 & 1) == 0) {
                    return uVar24;
                  }
                  FUN_0133eb00(param_2,param_2 + lVar16,0,2);
                  return uVar24;
                }
                uVar24 = unaff_x26 + (ulong)*(uint *)(param_2 + lVar16);
                if ((int)uVar24 == iVar11) {
                  return param_1;
                }
                bVar10 = (param_1 & 1) == 0;
                if ((uVar24 & 1) == 0) {
                  if ((bVar10) || (*(int *)(param_1 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x140))
                     ) goto LAB_01351e48;
                  dVar36 = *(double *)(param_1 + 3);
                  dVar35 = (double)((int)uVar24 >> 1);
                }
                else if (bVar10) {
                  if (*(int *)(uVar24 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x140))
                  goto LAB_01351e48;
                  dVar35 = *(double *)(uVar24 + 3);
                  dVar36 = (double)iVar29;
                }
                else {
                  iVar18 = (int)*(undefined8 *)(unaff_x26 + 0x140);
                  if ((*(int *)(uVar24 - 1) != iVar18) || (*(int *)(param_1 - 1) != iVar18))
                  goto LAB_01351e48;
                  dVar35 = *(double *)(uVar24 + 3);
                  dVar36 = *(double *)(param_1 + 3);
                }
                if (dVar35 == dVar36) {
                  if ((int)((ulong)dVar35 >> 0x20) == (int)((ulong)dVar36 >> 0x20)) {
                    return param_1;
                  }
                  goto LAB_01351e48;
                }
              }
              if ((NAN(dVar35)) && (NAN(dVar36))) {
                return param_1;
              }
            }
            else {
              uVar22 = unaff_x26 + (ulong)*(uint *)(param_2 + 3);
              if ((uVar22 & 1) == 0) {
                uVar22 = *(ulong *)(unaff_x26 + 0x168);
              }
              lVar16 = (uVar24 - *(byte *)(lVar16 + 3)) * 4 + 7;
              if (uVar19 == 2) {
                lVar16 = unaff_x26 + (ulong)*(uint *)(uVar22 + lVar16);
                if ((param_1 & 1) == 0) {
                  dVar36 = (double)iVar29;
                }
                else {
                  dVar36 = *(double *)(param_1 + 3);
                }
                if (bVar10) {
                  *(double *)(lVar16 + 3) = dVar36;
                  return param_1;
                }
                dVar35 = *(double *)(lVar16 + 3);
                if (dVar35 == dVar36) {
                  if ((int)((ulong)dVar35 >> 0x20) == (int)((ulong)dVar36 >> 0x20)) {
                    return param_1;
                  }
                  goto LAB_01351e48;
                }
              }
              else {
                if (bVar10) {
                  *(int *)(uVar22 + lVar16) = iVar11;
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
                  FUN_0133eb00(uVar22,uVar22 + lVar16,0,2);
                  return uVar24;
                }
                uVar24 = unaff_x26 + (ulong)*(uint *)(uVar22 + lVar16);
                if ((int)uVar24 == iVar11) {
                  return param_1;
                }
                bVar10 = (param_1 & 1) == 0;
                if ((uVar24 & 1) == 0) {
                  if ((bVar10) || (*(int *)(param_1 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x140))
                     ) goto LAB_01351e48;
                  dVar36 = *(double *)(param_1 + 3);
                  dVar35 = (double)((int)uVar24 >> 1);
                }
                else if (bVar10) {
                  if (*(int *)(uVar24 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x140))
                  goto LAB_01351e48;
                  dVar35 = *(double *)(uVar24 + 3);
                  dVar36 = (double)iVar29;
                }
                else {
                  iVar18 = (int)*(undefined8 *)(unaff_x26 + 0x140);
                  if ((*(int *)(uVar24 - 1) != iVar18) || (*(int *)(param_1 - 1) != iVar18))
                  goto LAB_01351e48;
                  dVar35 = *(double *)(uVar24 + 3);
                  dVar36 = *(double *)(param_1 + 3);
                }
                if (dVar35 == dVar36) {
                  if ((int)((ulong)dVar35 >> 0x20) == (int)((ulong)dVar36 >> 0x20)) {
                    return param_1;
                  }
                  goto LAB_01351e48;
                }
              }
              if ((NAN(dVar35)) && (NAN(dVar36))) {
                return param_1;
              }
            }
          }
          else if (iVar11 == *(int *)(lVar21 + lVar30 + 0x17)) {
            return param_1;
          }
        }
        goto LAB_01351e48;
      }
      if ((uVar17 >> 1 & 1) == 0) {
        bVar10 = (uVar17 >> 6 & 7) == 2;
        uVar24 = (ulong)*(byte *)(lVar16 + 4) + (((ulong)uVar17 & 0x1ff80000) >> 0x13);
        if (uVar24 < *(byte *)(lVar16 + 3)) {
          lVar16 = uVar24 * 4 + -1;
          if (bVar10) {
            uVar34 = *(undefined8 *)(unaff_x26 + (ulong)*(uint *)(param_2 + lVar16) + 3);
            goto LAB_01350a84;
          }
          lVar12 = unaff_x26 + (ulong)*(uint *)(param_2 + lVar16);
        }
        else {
          uVar22 = unaff_x26 + (ulong)*(uint *)(param_2 + 3);
          if ((uVar22 & 1) == 0) {
            uVar22 = *(ulong *)(unaff_x26 + 0x168);
          }
          lVar12 = unaff_x26 + (ulong)*(uint *)(uVar22 + (uVar24 - *(byte *)(lVar16 + 3)) * 4 + 7);
          if (bVar10) {
            uVar34 = *(undefined8 *)(lVar12 + 3);
LAB_01350a84:
            uVar22 = **(ulong **)(unaff_x26 + 0x1428);
            uVar24 = uVar22 + 0xc;
            if (uVar24 < **(ulong **)(unaff_x26 + 0x1430)) {
              lVar12 = uVar22 + 1;
              **(ulong **)(unaff_x26 + 0x1428) = uVar24;
            }
            else {
              lVar12 = FUN_01348560(param_1,0xc,param_3,param_2);
            }
            *(int *)(lVar12 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
            *(undefined8 *)(lVar12 + 3) = uVar34;
          }
        }
      }
      else {
        lVar12 = unaff_x26 + (ulong)*(uint *)(lVar21 + lVar30 + 0x17);
      }
LAB_0135193c:
      if (*(int *)(lVar12 + -1) != (int)*(undefined8 *)(unaff_x26 + 0xcc0)) {
        lVar16 = unaff_x26 + (ulong)*(uint *)(lVar12 + 7);
        lVar21 = unaff_x26 + (ulong)*(uint *)(lVar16 + -1);
        if ((int)lVar21 != (int)*(undefined8 *)(unaff_x26 + 0xca8)) {
          if ((*(byte *)(lVar21 + 9) >> 1 & 1) != 0) {
            FUN_0133fcc0(1,lVar16,param_1);
            return param_2;
          }
                    /* WARNING: Subroutine does not return */
          FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x20f0),param_1);
        }
      }
      goto LAB_01351e48;
    }
    iVar25 = *(short *)(lVar21 + 5) + -1;
    iVar28 = 0;
    iVar32 = iVar25;
    do {
      iVar1 = iVar28 + ((uint)(iVar32 - iVar28) >> 1);
      if (*(uint *)(unaff_x26 +
                    (ulong)*(uint *)(lVar21 + (long)(int)(((uint)(*(int *)(lVar21 + (long)(iVar1 * 3
                                                                                          ) * 4 +
                                                                                    0x13) >> 1) >> 9
                                                          & 0x3ff) * 3) * 4 + 0xf) + 3) <
          *(uint *)(param_3 + 3)) {
        iVar28 = iVar1 + 1;
        iVar1 = iVar32;
      }
      iVar32 = iVar1;
    } while (iVar28 != iVar32);
    for (; iVar28 <= iVar25; iVar28 = iVar28 + 1) {
      uVar19 = (uint)(*(int *)(lVar21 + (long)(iVar28 * 3) * 4 + 0x13) >> 1) >> 9 & 0x3ff;
      lVar30 = (long)(int)(uVar19 * 3);
      lVar12 = unaff_x26 + (ulong)*(uint *)(lVar21 + lVar30 * 4 + 0xf);
      if (*(uint *)(lVar12 + 3) != *(uint *)(param_3 + 3)) break;
      if ((int)lVar12 == iVar13) {
        if (uVar19 < uVar17) goto LAB_013509e8;
        break;
      }
    }
  }
LAB_01350e90:
  bVar10 = false;
  if ((((iVar13 != (int)*(undefined8 *)(unaff_x26 + 0x5d0)) &&
       (iVar13 != (int)*(undefined8 *)(unaff_x26 + 0xc18))) &&
      (iVar13 != (int)*(undefined8 *)(unaff_x26 + 0x848))) &&
     (((iVar13 != (int)*(undefined8 *)(unaff_x26 + 0xc48) &&
       (iVar13 != (int)*(undefined8 *)(unaff_x26 + 0xc70))) &&
      ((iVar13 != (int)*(undefined8 *)(unaff_x26 + 0x960) &&
       (iVar13 != (int)*(undefined8 *)(unaff_x26 + 0xa38))))))) {
    uVar24 = unaff_x26 + (ulong)*(uint *)(lVar16 + 0x23);
    if (((uVar24 & 1) != 0) && ((uint)uVar24 != 3)) {
      if (((uint)uVar24 & 3) == 1) {
        if (*(int *)(uVar24 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x148)) goto LAB_01351e48;
        bVar9 = (ulong)((long)((ulong)*(uint *)(uVar24 + 3) << 0x20) >> 0x21) < 2;
        if (bVar9) {
          uVar17 = 0;
        }
        else {
          uVar17 = *(int *)(uVar24 + 0xb) >> 1;
        }
        if (uVar17 == 0) goto LAB_01351e48;
        if (0x20 < uVar17) {
          if (bVar9) {
            iVar28 = 0;
          }
          else {
            iVar28 = *(int *)(uVar24 + 0xb) >> 1;
          }
          uVar19 = 0;
          uVar20 = iVar28 - 1U;
          do {
            uVar2 = uVar19 + (uVar20 - uVar19 >> 1);
            if (*(uint *)(unaff_x26 + (ulong)*(uint *)(uVar24 + (long)(int)(uVar2 * 2) * 4 + 0xf) +
                         3) < *(uint *)(param_3 + 3)) {
              uVar19 = uVar2 + 1;
              uVar2 = uVar20;
            }
            uVar20 = uVar2;
          } while (uVar19 != uVar20);
          for (; (int)uVar19 <= (int)(iVar28 - 1U); uVar19 = uVar19 + 1) {
            lVar16 = unaff_x26 + (ulong)*(uint *)(uVar24 + (long)(int)(uVar19 << 1) * 4 + 0xf);
            if (*(uint *)(lVar16 + 3) != *(uint *)(param_3 + 3)) break;
            if ((int)lVar16 == iVar13) {
              if (uVar19 < uVar17) {
                lVar16 = (long)(int)(uVar19 << 1) + 2;
                goto LAB_01351038;
              }
              break;
            }
          }
          goto LAB_01351e48;
        }
        lVar16 = (long)(int)uVar17 * 2 + 2;
        do {
          if (lVar16 == 2) goto LAB_01351e48;
          lVar16 = lVar16 + -2;
        } while (*(int *)(uVar24 + lVar16 * 4 + 7) != iVar13);
LAB_01351038:
        uVar24 = unaff_x26 + (ulong)*(uint *)(uVar24 + lVar16 * 4 + 0xb);
      }
      uVar22 = uVar24 & 0xfffffffffffffffd;
      lVar16 = unaff_x26 + (ulong)*(uint *)(uVar22 + 0x1f);
      if ((((int)lVar16 == 0) || (*(int *)(lVar16 + 3) == 0)) &&
         ((*(uint *)(uVar22 + 0xb) >> 0x18 & 1) == 0)) {
        lVar16 = unaff_x26 + (ulong)*(uint *)(uVar22 + 0x17);
        lVar21 = (((ulong)(*(uint *)(uVar22 + 0xb) >> 10) & 0x3ff) * 3 + -3) * 4;
        if (*(int *)(lVar16 + lVar21 + 0xf) == iVar13) {
          uVar17 = *(int *)(lVar16 + lVar21 + 0x13) >> 1;
          if ((uVar17 & 0x29) == 0) {
            if (*(int *)(param_3 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xf8)) {
              bVar10 = (*(uint *)(param_3 + 7) & 1) != 0;
            }
            if (((uVar17 & 0x10) != 0) == bVar10) {
              uVar15 = (undefined4)uVar22;
              if ((uVar17 >> 1 & 1) == 0) {
                uVar19 = uVar17 >> 6 & 7;
                if (uVar19 == 1) {
                  if ((param_1 & 1) != 0) goto LAB_01351e48;
                }
                else if (uVar19 == 2) {
                  if (((param_1 & 1) != 0) &&
                     (*(int *)(param_1 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x140)))
                  goto LAB_01351e48;
                }
                else if (uVar19 == 3) {
                  if ((((param_1 & 1) == 0) ||
                      (uVar20 = iVar18 + *(int *)(lVar16 + lVar21 + 0x17), uVar20 == 4)) ||
                     ((uVar20 != 2 &&
                      ((uVar20 == 3 || (*(uint *)(param_1 - 1) != (uVar20 & 0xfffffffd)))))))
                  goto LAB_01351e48;
                }
                else if (uVar19 == 0) goto LAB_01351e48;
                bVar6 = *(byte *)(uVar22 + 3);
                uVar14 = (ulong)*(byte *)(uVar22 + 4) + (((ulong)uVar17 & 0x1ff80000) >> 0x13);
                if (uVar14 < bVar6) {
                  lVar16 = uVar14 * 4 + -1;
                  if (uVar19 == 2) {
                    if ((param_1 & 1) == 0) {
                      dVar36 = (double)iVar29;
                    }
                    else {
                      dVar36 = *(double *)(param_1 + 3);
                    }
                    uVar23 = **(ulong **)(unaff_x26 + 0x1428);
                    uVar14 = uVar23 + 0xc;
                    if (uVar14 < **(ulong **)(unaff_x26 + 0x1430)) {
                      uVar23 = uVar23 + 1;
                      **(ulong **)(unaff_x26 + 0x1428) = uVar14;
                    }
                    else {
                      uVar23 = FUN_01348560(param_1,0xc,lVar16,uVar22,param_2);
                    }
                    *(int *)(uVar23 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
                    *(double *)(uVar23 + 3) = dVar36;
                    *(undefined4 *)(param_2 - 1) = uVar15;
                    if ((((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0)
                       && (((uint)*(undefined8 *)
                                   ((unaff_x26 + (uVar24 & 0xfffffffd) & 0xfffffffffffc0000) + 8) >>
                            1 & 1) != 0)) {
                      FUN_0133eb00(param_2,param_2 - 1,2,2);
                    }
                    *(int *)(param_2 + lVar16) = (int)uVar23;
                    if (((((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0)
                        && ((uVar23 & 1) != 0)) &&
                       (((uint)*(undefined8 *)
                                ((unaff_x26 + (uVar23 & 0xffffffff) & 0xfffffffffffc0000) + 8) >> 1
                        & 1) != 0)) {
                      FUN_0133eb00(param_2,param_2 + lVar16,0,2);
                    }
                  }
                  else {
                    *(undefined4 *)(param_2 - 1) = uVar15;
                    if ((((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0)
                       && (((uint)*(undefined8 *)
                                   ((unaff_x26 + (uVar24 & 0xfffffffd) & 0xfffffffffffc0000) + 8) >>
                            1 & 1) != 0)) {
                      FUN_0133eb00(param_2,param_2 - 1,2,2);
                    }
                    *(int *)(param_2 + lVar16) = iVar11;
                    if (((((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0)
                        && ((param_1 & 1) != 0)) &&
                       (param_1 = unaff_x26 + (param_1 & 0xffffffff),
                       ((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
                      FUN_0133eb00(param_2,param_2 + lVar16,0,2);
                    }
                  }
                }
                else {
                  uVar22 = param_1;
                  if (uVar19 == 2) {
                    if ((param_1 & 1) == 0) {
                      dVar36 = (double)iVar29;
                    }
                    else {
                      dVar36 = *(double *)(param_1 + 3);
                    }
                    uVar22 = **(ulong **)(unaff_x26 + 0x1428);
                    uVar23 = uVar22 + 0xc;
                    if (uVar23 < **(ulong **)(unaff_x26 + 0x1430)) {
                      uVar22 = uVar22 + 1;
                      **(ulong **)(unaff_x26 + 0x1428) = uVar23;
                    }
                    else {
                      uVar22 = FUN_01348560(param_1,0xc);
                    }
                    *(int *)(uVar22 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
                    *(double *)(uVar22 + 3) = dVar36;
                  }
                  uVar23 = unaff_x26 + (ulong)*(uint *)(param_2 + 3);
                  if ((uVar23 & 1) == 0) {
                    uVar17 = ((int)uVar23 >> 1) << 10;
                    uVar23 = *(ulong *)(unaff_x26 + 0x168);
                    uVar26 = 0;
                  }
                  else {
                    uVar19 = *(int *)(uVar23 + 3) >> 1;
                    uVar17 = uVar19 & 0x3ffffc00;
                    uVar26 = (ulong)(int)(uVar19 & 0x3ff);
                  }
                  uVar14 = uVar14 - bVar6;
                  uVar27 = uVar23;
                  if (uVar26 <= uVar14) {
                    uVar27 = **(ulong **)(unaff_x26 + 0x1428);
                    lVar16 = (uVar26 + 3) * 4;
                    uVar4 = uVar27 + lVar16 + 8;
                    if (uVar4 < **(ulong **)(unaff_x26 + 0x1430)) {
                      uVar27 = uVar27 + 1;
                      **(ulong **)(unaff_x26 + 0x1428) = uVar4;
                    }
                    else {
                      uVar27 = FUN_01348560();
                    }
                    uVar19 = (uint)(uVar26 + 3);
                    *(int *)(uVar27 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x248);
                    *(uint *)(uVar27 + 3) = uVar19 * 2;
                    lVar16 = lVar16 + 7;
                    lVar21 = uVar26 * 4 + 7;
                    if (lVar16 != lVar21) {
                      uVar34 = *(undefined8 *)(unaff_x26 + 0xa0);
                      do {
                        lVar16 = lVar16 + -4;
                        *(int *)(uVar27 + lVar16) = (int)uVar34;
                      } while (lVar16 != lVar21);
                    }
                    while (lVar21 != 7) {
                      lVar21 = lVar21 + -4;
                      *(undefined4 *)(uVar27 + lVar21) = *(undefined4 *)(uVar23 + lVar21);
                    }
                    *(uint *)(uVar27 + 3) = (uVar17 | uVar19) * 2;
                    *(int *)(param_2 + 3) = (int)uVar27;
                    if (((((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0)
                        && ((uVar27 & 1) != 0)) &&
                       (uVar27 = unaff_x26 + (uVar27 & 0xffffffff),
                       ((uint)*(undefined8 *)((uVar27 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
                      FUN_0133eb00(param_2,param_2 + 3,0,2);
                      uVar27 = extraout_x10_01;
                    }
                  }
                  lVar16 = uVar14 * 4 + 7;
                  *(int *)(uVar27 + lVar16) = (int)uVar22;
                  if (((((uint)*(undefined8 *)((uVar27 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                      ((uVar22 & 1) != 0)) &&
                     (((uint)*(undefined8 *)
                              ((unaff_x26 + (uVar22 & 0xffffffff) & 0xfffffffffffc0000) + 8) >> 1 &
                      1) != 0)) {
                    FUN_0133eb00(uVar27,uVar27 + lVar16,0,2);
                  }
                  *(undefined4 *)(param_2 - 1) = uVar15;
                  if ((((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                     (((uint)*(undefined8 *)
                              ((unaff_x26 + (uVar24 & 0xfffffffd) & 0xfffffffffffc0000) + 8) >> 1 &
                      1) != 0)) {
                    FUN_0133eb00(param_2,param_2 - 1,2,2);
                  }
                }
              }
              else {
                if (iVar11 != *(int *)(lVar16 + lVar21 + 0x17)) goto LAB_01351e48;
                *(undefined4 *)(param_2 - 1) = uVar15;
                if ((((uint)*(undefined8 *)((param_2 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                   (((uint)*(undefined8 *)
                            ((unaff_x26 + (uVar24 & 0xfffffffd) & 0xfffffffffffc0000) + 8) >> 1 & 1)
                    != 0)) {
                  FUN_0133eb00(param_2,param_2 - 1,2,2);
                }
              }
              return param_1;
            }
          }
        }
      }
    }
  }
LAB_01351e48:
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(5,*(undefined8 *)(unaff_x26 + 0x1f48));
LAB_013517f4:
  uVar17 = *(int *)(lVar12 + lVar33 * 4 + 0x13) >> 1;
  if ((uVar17 >> 3 & 1) != 0) goto LAB_01351a48;
  if ((uVar17 & 1) != 0) {
    if ((uVar17 >> 1 & 1) != 0) {
      lVar12 = unaff_x26 + (ulong)*(uint *)(lVar12 + lVar33 * 4 + 0x17);
      goto LAB_0135193c;
    }
    bVar10 = (uVar17 >> 6 & 7) != 2;
    uVar24 = (ulong)*(byte *)(lVar30 + 4) + (((ulong)uVar17 & 0x1ff80000) >> 0x13);
    if (uVar24 < *(byte *)(lVar30 + 3)) {
      lVar16 = uVar24 * 4 + -1;
      if (bVar10) {
        lVar12 = unaff_x26 + (ulong)*(uint *)(lVar21 + lVar16);
        goto LAB_0135193c;
      }
      uVar34 = *(undefined8 *)(unaff_x26 + (ulong)*(uint *)(lVar21 + lVar16) + 3);
    }
    else {
      uVar22 = unaff_x26 + (ulong)*(uint *)(lVar21 + 3);
      if ((uVar22 & 1) == 0) {
        uVar22 = *(ulong *)(unaff_x26 + 0x168);
      }
      lVar12 = unaff_x26 + (ulong)*(uint *)(uVar22 + (uVar24 - *(byte *)(lVar30 + 3)) * 4 + 7);
      if (bVar10) goto LAB_0135193c;
      uVar34 = *(undefined8 *)(lVar12 + 3);
    }
    uVar22 = **(ulong **)(unaff_x26 + 0x1428);
    uVar24 = uVar22 + 0xc;
    if (uVar24 < **(ulong **)(unaff_x26 + 0x1430)) {
      lVar12 = uVar22 + 1;
      **(ulong **)(unaff_x26 + 0x1428) = uVar24;
    }
    else {
      lVar12 = FUN_01348560(param_1,0xc,param_3,param_2);
    }
    *(int *)(lVar12 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
    *(undefined8 *)(lVar12 + 3) = uVar34;
    goto LAB_0135193c;
  }
LAB_01351a70:
  if (((*(uint *)(lVar16 + 0xb) >> 0x14 & 1) != 0) &&
     (uVar22 = unaff_x26 + (ulong)*(uint *)(lVar16 + 0x23), (uVar22 & 1) != 0)) {
    *(undefined8 *)(unaff_x26 + 0x40) = 0x1351a98;
    *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
    (**(code **)(unaff_x26 + 0x11a0))(lVar16,param_2,param_3,param_1,uVar22,lVar21);
    *(undefined8 *)(unaff_x26 + 0x38) = 0;
    iVar28 = (int)*(undefined8 *)(unaff_x26 + 0xa8);
    iVar29 = (int)*(undefined8 *)(unaff_x26 + 0xa0);
  }
  uVar17 = iVar18 + *(int *)(uVar24 + 0xf);
  uVar22 = (long)((ulong)*(uint *)(uVar24 + 3) << 0x20) >> 0x21;
  if (uVar22 == 0) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(0,0x1351e0c);
    (*pcVar8)();
  }
  uVar19 = iVar18 + *(int *)(uVar24 + 7) + 2;
  if (uVar19 + (uVar19 >> 1 & 0x7ffffffe) <= uVar17) {
    if (uVar22 < 2) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(0,0x1351e14);
      (*pcVar8)();
    }
    if ((uint)(iVar18 + *(int *)(uVar24 + 0xb)) <= (uVar17 - uVar19 >> 1 & 0xfffffffe)) {
      if (uVar22 < 4) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(0,0x1351e1c);
        (*pcVar8)();
      }
      iVar18 = iVar18 + *(int *)(uVar24 + 0x13);
      uVar17 = iVar18 + 2;
      if (uVar17 < 0xffffff) {
        *(uint *)(uVar24 + 0x13) = uVar17;
        if ((long)((ulong)*(uint *)(uVar24 + 3) << 0x20) >> 0x21 == 0) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(0,0x1351e2c);
          (*pcVar8)();
        }
        *(uint *)(uVar24 + 7) = uVar19;
        uVar22 = (ulong)(*(uint *)(param_3 + 3) >> 3);
        lVar16 = 0;
        while( true ) {
          uVar22 = uVar22 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar24 + 0xf) << 0x20) >> 0x21) -
                            1U;
          uVar14 = uVar22 * 3 + 5;
          lVar30 = uVar14 * 4;
          lVar21 = lVar30 + 7;
          if ((*(int *)(uVar24 + lVar21) == iVar29) || (*(int *)(uVar24 + lVar21) == iVar28)) break;
          lVar16 = lVar16 + 1;
          uVar22 = uVar22 + lVar16;
        }
        if ((ulong)((long)((ulong)*(uint *)(uVar24 + 3) << 0x20) >> 0x21) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(0,0x1351e34);
          (*pcVar8)();
        }
        *(int *)(uVar24 + lVar21) = iVar13;
        if (((((uint)*(undefined8 *)((uVar24 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
            ((param_3 & 1) != 0)) &&
           (param_3 = unaff_x26 + (param_3 & 0xffffffff),
           ((uint)*(undefined8 *)((param_3 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
          FUN_0133eb00(uVar24,uVar24 + lVar21,0,2);
          uVar14 = extraout_x10_00;
          lVar30 = extraout_x11_00;
        }
        if ((ulong)((long)((ulong)*(uint *)(uVar24 + 3) << 0x20) >> 0x21) <= uVar14 + 1) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(0,0x1351e3c);
          (*pcVar8)();
        }
        *(int *)(uVar24 + lVar30 + 0xb) = iVar11;
        if (((((uint)*(undefined8 *)((uVar24 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
            ((param_1 & 1) != 0)) &&
           (param_1 = unaff_x26 + (param_1 & 0xffffffff),
           ((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
          FUN_0133eb00(uVar24,uVar24 + lVar30 + 0xb,0,2);
          uVar14 = extraout_x10;
          lVar30 = extraout_x11;
        }
        uVar19 = iVar18 * 0x100;
        uVar17 = uVar19 | 0x180;
        if ((*(int *)(param_3 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xf8)) &&
           ((*(uint *)(param_3 + 7) & 1) != 0)) {
          uVar17 = uVar19 | 0x1a0;
        }
        if (uVar14 + 2 < (ulong)((long)((ulong)*(uint *)(uVar24 + 3) << 0x20) >> 0x21)) {
          *(uint *)(uVar24 + lVar30 + 0xf) = uVar17;
          return param_1;
        }
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(0,0x1351e44);
        (*pcVar8)();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x21a0));
}

