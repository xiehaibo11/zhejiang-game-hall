
/* WARNING: Removing unreachable block (ram,0x0140941c) */
/* WARNING: Removing unreachable block (ram,0x0140942c) */
/* WARNING: Removing unreachable block (ram,0x01409424) */
/* WARNING: Removing unreachable block (ram,0x0140943c) */
/* WARNING: Removing unreachable block (ram,0x01409448) */
/* WARNING: Removing unreachable block (ram,0x0140944c) */
/* WARNING: Removing unreachable block (ram,0x01409450) */

void FUN_01408dc0(ulong param_1,ulong param_2,ulong param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  bool bVar5;
  int iVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  uint uVar18;
  int iVar19;
  int extraout_w8;
  long extraout_x8;
  uint uVar20;
  long extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  long extraout_x10;
  long lVar21;
  long lVar22;
  ulong extraout_x12;
  undefined8 uVar23;
  ulong uVar24;
  int iVar25;
  ushort uVar26;
  long lVar27;
  ulong uVar28;
  long unaff_x26;
  long unaff_x27;
  long lVar29;
  double dVar30;
  
  iVar6 = (int)unaff_x26;
  if ((param_3 & 1) == 0) {
    bVar8 = true;
  }
  else {
    if ((*(byte *)(unaff_x26 + (ulong)*(uint *)(param_3 - 1) + 9) >> 1 & 1) != 0) {
      if ((int)(iVar6 + *(int *)(param_1 + 0x13) & 2U) >> 1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x2488));
      }
      *(undefined4 *)(param_1 + 0x17) = 0;
      uVar13 = **(ulong **)(unaff_x26 + 0x1428);
      uVar16 = uVar13 + 0x58;
      uVar4 = *(undefined4 *)
               (unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13) +
               0x167);
      if (uVar16 < **(ulong **)(unaff_x26 + 0x1430)) {
        lVar12 = uVar13 + 1;
        **(ulong **)(unaff_x26 + 0x1428) = uVar16;
      }
      else {
        lVar12 = FUN_01348560(param_1,0x58);
      }
      *(undefined4 *)(lVar12 + -1) = uVar4;
      *(undefined4 *)(lVar12 + 0xb) = 0;
      *(int *)(lVar12 + 3) = (int)*(undefined8 *)(unaff_x26 + 0x168);
      *(int *)(lVar12 + 7) = (int)(lVar12 + 0x10);
      *(int *)(lVar12 + 0xf) = (int)*(undefined8 *)(unaff_x26 + 0xe0);
      *(undefined4 *)(lVar12 + 0x13) = 0x20;
      lVar27 = 0x47;
      uVar23 = *(undefined8 *)(unaff_x26 + 0xa8);
      do {
        lVar27 = lVar27 + -4;
        *(int *)(lVar12 + 0x10 + lVar27) = (int)uVar23;
      } while (lVar27 != 7);
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(4,*(undefined8 *)(unaff_x26 + 0x2468),param_3);
    }
    bVar8 = false;
  }
  if ((bVar8) || (0x3f < *(ushort *)(unaff_x26 + (ulong)*(uint *)(param_3 - 1) + 7))) {
    param_3 = FUN_013e8ae0(param_3);
  }
  lVar12 = unaff_x26 + (ulong)*(uint *)(param_1 - 1);
  lVar27 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13);
  if (((((*(int *)(unaff_x26 + (ulong)*(uint *)(lVar27 + 0x2a7) + 0xb) == 0) ||
        ((int)lVar12 != *(int *)(unaff_x26 + (ulong)*(uint *)(lVar27 + 0x243) + 0x1b))) ||
       ((unaff_x26 + (ulong)*(uint *)(param_1 + 0x17) & 0x80000001) != 0)) ||
      ((lVar12 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(lVar12 + 0xf) + -1),
       (int)lVar12 != *(int *)(lVar27 + 599) ||
       (((uint)(*(int *)(unaff_x26 + (ulong)*(uint *)(lVar12 + 0x17) + 0x1f) >> 1) >> 2 & 1) != 1)))
      ) || (iVar9 = FUN_01345880(param_3,unaff_x26 +
                                         (ulong)*(uint *)(*(long *)(unaff_x26 + 0xf30) + 0xcb),0),
           iVar9 != -2)) {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x2478));
  }
  uVar18 = iVar6 + *(int *)(param_1 + 0x13);
  uVar3 = *(uint *)(param_3 + 7);
  iVar9 = (int)(uVar18 & 2) >> 1;
  if (iVar9 == 0) {
    iVar19 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x17) = 0;
    iVar19 = (int)((uVar18 & 0x20) >> 4) >> 1;
  }
  uVar23 = *(undefined8 *)(unaff_x26 + 200);
  uVar16 = param_1;
  lVar12 = 0;
  lVar27 = unaff_x27;
LAB_014093b8:
  do {
    uVar13 = unaff_x26 + (ulong)*(uint *)(uVar16 + 0x17);
    bVar8 = ((long)(unaff_x26 + (ulong)*(uint *)(uVar16 + 0x13) << 0x20) >> 0x21 & 9U) != 0;
    lVar29 = lVar12;
    if (bVar8) {
      if (((uVar13 & 1) != 0) || (*(int *)(param_2 + 7) * 2 < (int)uVar13)) {
        *(undefined4 *)(uVar16 + 0x17) = 0;
LAB_0140a140:
        uVar17 = FUN_013bfc80(param_2,lVar29,*(int *)(param_2 + 7) * 2);
        FUN_013bf600(uVar23,uVar17);
        return;
      }
    }
    else {
      uVar13 = 0;
    }
    uVar26 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(param_2 - 1) + 7);
    uVar18 = (uint)uVar26;
    uVar14 = unaff_x26 +
             (ulong)*(uint *)(unaff_x26 +
                              (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(lVar27 + -1) + 0x13) +
                             0x247);
    uVar28 = param_2;
    if ((uVar13 & 1) == 0) {
      iVar10 = (int)uVar13 >> 1;
      if ((ulong)*(uint *)(param_2 + 7) < (ulong)(long)iVar10) goto LAB_014097dc;
      lVar27 = unaff_x26 + (ulong)*(uint *)(uVar16 + 0xb);
      iVar11 = *(int *)(lVar27 + 7) >> 1;
      if (iVar11 == 0) goto LAB_0140a288;
      if (iVar11 == 1) {
        uVar14 = FUN_013a2de0(param_3,uVar16,param_2,uVar13,uVar14);
      }
      else {
        if (iVar11 != 2) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(0,0x140a7d4);
          (*pcVar7)();
        }
        uVar20 = iVar6 + *(int *)(lVar27 + 0x27);
        if (0x7e < uVar20) {
LAB_0140a288:
                    /* WARNING: Subroutine does not return */
          FUN_013be7e0(4,*(undefined8 *)(unaff_x26 + 0x2460));
        }
        uVar16 = param_2;
        if ((uVar26 & 7) == 0) {
          lVar15 = 0;
          bVar5 = false;
        }
        else {
          lVar15 = 0;
          uVar18 = (uint)uVar26;
          while( true ) {
            while( true ) {
              uVar2 = uVar18 & 7;
              if (1 < uVar2) break;
              if ((uVar18 & 7) == 0) {
                bVar5 = false;
                goto LAB_014095ec;
              }
              if ((uVar2 != 1) || (*(int *)(uVar16 + 0xf) != (int)*(undefined8 *)(unaff_x26 + 200)))
              goto LAB_0140a288;
              uVar16 = unaff_x26 + (ulong)*(uint *)(uVar16 + 0xb);
              uVar18 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar16 - 1) + 7);
            }
            if (uVar2 == 2) break;
            if (uVar2 == 3) {
              uVar13 = unaff_x26 + (ulong)*(uint *)(uVar16 + 0xb);
              lVar15 = lVar15 + ((long)((ulong)*(uint *)(uVar16 + 0xf) << 0x20) >> 0x21);
              uVar18 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar13 - 1) + 7);
              uVar16 = uVar13;
            }
            else {
              if (uVar2 != 5) goto LAB_0140a288;
              uVar16 = unaff_x26 + (ulong)*(uint *)(uVar16 + 0xb);
              uVar18 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar16 - 1) + 7);
            }
          }
          bVar5 = true;
        }
LAB_014095ec:
        if (bVar5) {
          if ((uVar18 >> 4 & 1) != 0) goto LAB_0140a288;
          lVar21 = *(long *)(uVar16 + 0x13);
        }
        else {
          lVar21 = uVar16 + 0xb;
        }
        lVar22 = lVar15 + (ulong)*(uint *)(param_2 + 7);
        lVar15 = lVar15 + iVar10;
        if ((uVar18 >> 3 & 1) == 0) {
          uVar18 = *(uint *)(lVar27 + 0x17);
          lVar22 = lVar22 * 2;
          lVar15 = lVar15 * 2;
        }
        else {
          uVar18 = *(uint *)(lVar27 + 0x13);
        }
        uVar16 = unaff_x26 + (ulong)uVar18;
        if ((uVar16 & 1) == 0) goto LAB_0140a288;
        uVar17 = **(undefined8 **)(unaff_x26 + 0x14e8);
        if (*(int *)(uVar16 + 0x27) == -1) {
          pcVar7 = (code *)(uVar16 + 0x3f);
        }
        else {
          pcVar7 = *(code **)(unaff_x26 + (long)(*(int *)(uVar16 + 0x27) << 3) + 0x2c78);
        }
        *(undefined8 *)(unaff_x26 + 0x40) = 0x1409698;
        *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
        iVar10 = (*pcVar7)(param_2,iVar10,lVar21 + lVar15,lVar21 + lVar22,
                           *(undefined8 *)(unaff_x26 + 0x14f0),(int)((uVar20 + 2) * 2) >> 1,uVar17,1
                          );
        *(undefined8 *)(unaff_x26 + 0x38) = 0;
        if (iVar10 != 1) {
          if (iVar10 != 0) {
            if (iVar10 == -1) {
                    /* WARNING: Subroutine does not return */
              FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x20c8));
            }
            goto LAB_0140a288;
          }
          goto LAB_014097dc;
        }
        iVar10 = (iVar6 + *(int *)(lVar27 + 0x27) + 2) * 2;
        if (iVar6 + *(int *)(uVar14 + 3) + -6 < iVar10) goto LAB_0140a288;
        *(int *)(uVar14 + 7) = iVar10;
        *(int *)(uVar14 + 0xb) = (int)param_2;
        if (((((uint)*(undefined8 *)((uVar14 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
            ((param_2 & 1) != 0)) &&
           (uVar28 = unaff_x26 + (param_2 & 0xffffffff),
           ((uint)*(undefined8 *)((uVar28 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
          FUN_0133eb00(uVar14,uVar14 + 0xb,0,2);
          uVar28 = extraout_x9_02;
          iVar10 = extraout_w8;
        }
        lVar27 = (long)iVar10;
        *(int *)(uVar14 + 0xf) = (int)uVar28;
        if (((((uint)*(undefined8 *)((uVar14 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
            ((uVar28 & 1) != 0)) &&
           (uVar28 = unaff_x26 + (uVar28 & 0xffffffff),
           ((uint)*(undefined8 *)((uVar28 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
          FUN_0133eb00(uVar14,uVar14 + 0xf,0,2);
          lVar27 = extraout_x8;
          uVar28 = extraout_x9_01;
        }
        if (lVar27 * 2 != 0) {
          lVar22 = *(long *)(unaff_x26 + 0x14f0);
          lVar15 = 0x13;
          lVar21 = 0;
          while( true ) {
            piVar1 = (int *)(lVar22 + lVar21);
            lVar21 = lVar21 + 4;
            *(int *)(uVar14 + lVar15) = *piVar1 * 2;
            if (lVar21 == lVar27 * 2) break;
            lVar15 = lVar15 + 4;
          }
        }
      }
    }
    else {
LAB_014097dc:
      uVar14 = *(ulong *)(unaff_x26 + 0xb0);
    }
    if ((int)uVar14 == (int)*(undefined8 *)(unaff_x26 + 0xb0)) {
      param_2 = uVar28;
      if (bVar8) {
        *(undefined4 *)(param_1 + 0x17) = 0;
      }
      goto LAB_0140a140;
    }
    if (bVar8) {
      if ((ulong)((long)((ulong)*(uint *)(uVar14 + 3) << 0x20) >> 0x21) < 5) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(0,0x140a11c);
        (*pcVar7)();
      }
      uVar18 = *(uint *)(uVar14 + 0x17);
      *(uint *)(param_1 + 0x17) = uVar18;
      if (((((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
          ((uVar18 & 1) != 0)) &&
         (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar18 & 0xfffffffffffc0000) + 8) >> 1 & 1) !=
          0)) {
        FUN_0133eb00(param_1,param_1 + 0x17,0,2);
        uVar28 = extraout_x9_00;
      }
    }
    uVar16 = (long)((ulong)*(uint *)(uVar14 + 3) << 0x20) >> 0x21;
    if (uVar16 < 4) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(0,0x140a120);
      (*pcVar7)();
    }
    iVar10 = *(int *)(uVar14 + 0x13);
    if (uVar16 < 5) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(0,0x140a124);
      (*pcVar7)();
    }
    lVar29 = unaff_x26 + (ulong)*(uint *)(uVar14 + 0x17);
    uVar17 = FUN_013bfc80(uVar28,lVar12);
    uVar23 = FUN_013bf600(uVar23,uVar17);
    if ((uVar3 & 0x7fffffff) != 0) {
      uVar23 = FUN_013bf600(uVar23,param_3);
    }
    if (iVar9 == 0) goto LAB_0140a140;
    uVar16 = param_1;
    lVar12 = lVar29;
    lVar27 = unaff_x27;
  } while ((int)lVar29 != iVar6 + iVar10);
  lVar27 = unaff_x26 + (ulong)*(uint *)(param_1 - 1);
  lVar29 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13);
  if ((*(int *)(unaff_x26 + (ulong)*(uint *)(lVar29 + 0x2a7) + 0xb) != 0) &&
     ((int)lVar27 == *(int *)(unaff_x26 + (ulong)*(uint *)(lVar29 + 0x243) + 0x1b))) {
    uVar16 = unaff_x26 + (ulong)*(uint *)(param_1 + 0x17);
    iVar10 = (int)uVar16;
    if (((uVar16 & 0x80000001) == 0) &&
       ((lVar27 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(lVar27 + 0xf) + -1),
        (int)lVar27 == *(int *)(lVar29 + 599) &&
        (((uint)(*(int *)(unaff_x26 + (ulong)*(uint *)(lVar27 + 0x17) + 0x1f) >> 1) >> 2 & 1) == 1))
       )) {
      iVar11 = iVar10 >> 1;
      if ((uVar16 & 1) == 0) {
        if (SCARRY4(iVar10,2)) {
          dVar30 = (double)iVar11;
          goto LAB_014099b4;
        }
        uVar13 = (ulong)(iVar10 + 2);
      }
      else {
        dVar30 = *(double *)(uVar16 + 3);
LAB_014099b4:
        uVar13 = **(ulong **)(unaff_x26 + 0x1428);
        uVar16 = uVar13 + 0xc;
        if (uVar16 < **(ulong **)(unaff_x26 + 0x1430)) {
          uVar13 = uVar13 + 1;
          **(ulong **)(unaff_x26 + 0x1428) = uVar16;
        }
        else {
          uVar13 = FUN_01348560(uVar23,0xc);
        }
        *(int *)(uVar13 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
        *(double *)(uVar13 + 3) = dVar30 + 1.0;
      }
      if ((iVar19 != 0) && (iVar10 = (int)uVar13, (uVar13 & 0x80000001) == 0)) {
        uVar16 = (ulong)(iVar10 >> 1);
        if (uVar16 < *(uint *)(param_2 + 7)) {
          uVar26 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(param_2 - 1) + 7);
          uVar18 = (uint)uVar26;
          uVar28 = param_2;
          if ((uVar26 & 7) == 0) {
            uVar17 = *(undefined8 *)(unaff_x26 + 200);
            bVar8 = false;
            lVar27 = 0;
          }
          else {
            uVar17 = *(undefined8 *)(unaff_x26 + 200);
            lVar27 = 0;
            while( true ) {
              while (uVar20 = uVar18 & 7, uVar20 < 2) {
                if (uVar20 == 0) {
                  bVar8 = false;
                  goto LAB_01409b3c;
                }
                if ((uVar20 != 1) || (*(int *)(uVar28 + 0xf) != (int)uVar17)) goto LAB_0140a338;
                uVar28 = unaff_x26 + (ulong)*(uint *)(uVar28 + 0xb);
                uVar18 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar28 - 1) + 7);
              }
              if (uVar20 == 2) break;
              if (uVar20 == 3) {
                uVar14 = unaff_x26 + (ulong)*(uint *)(uVar28 + 0xb);
                lVar27 = lVar27 + ((long)((ulong)*(uint *)(uVar28 + 0xf) << 0x20) >> 0x21);
                uVar18 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar14 - 1) + 7);
                uVar28 = uVar14;
              }
              else {
                if (uVar20 != 5) goto LAB_0140a338;
                uVar28 = unaff_x26 + (ulong)*(uint *)(uVar28 + 0xb);
                uVar18 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar28 - 1) + 7);
              }
            }
            bVar8 = true;
          }
LAB_01409b3c:
          if (bVar8) {
            if ((uVar18 >> 4 & 1) != 0) {
LAB_0140a338:
              if (0x3fffffff < (ulong)(long)iVar11) {
                uVar13 = **(ulong **)(unaff_x26 + 0x1428);
                uVar16 = uVar13 + 0xc;
                if (uVar16 < **(ulong **)(unaff_x26 + 0x1430)) {
                  lVar12 = uVar13 + 1;
                  **(ulong **)(unaff_x26 + 0x1428) = uVar16;
                }
                else {
                  lVar12 = FUN_01348560(uVar23,0xc);
                  uVar17 = *(undefined8 *)(unaff_x26 + 200);
                }
                *(int *)(lVar12 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
                *(double *)(lVar12 + 3) = (double)(ulong)(long)iVar11;
              }
                    /* WARNING: Subroutine does not return */
              FUN_013be7e0(iVar9,2,*(undefined8 *)(unaff_x26 + 0x2580),uVar17);
            }
            lVar29 = *(long *)(uVar28 + 0x13);
          }
          else {
            lVar29 = uVar28 + 0xb;
          }
          if ((uVar18 >> 3 & 1) == 0) {
            uVar26 = *(ushort *)(lVar29 + (iVar11 + lVar27) * 2);
          }
          else {
            uVar26 = 0;
          }
          if ((uVar26 & 0xfc00) == 0xd800) {
            uVar26 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(param_2 - 1) + 7);
            uVar18 = (uint)uVar26;
            uVar28 = param_2;
            if ((uVar26 & 7) == 0) {
              lVar27 = 0;
              bVar8 = false;
            }
            else {
              lVar27 = 0;
              while( true ) {
                while (uVar20 = uVar18 & 7, uVar20 < 2) {
                  if (uVar20 == 0) {
                    bVar8 = false;
                    goto LAB_01409c80;
                  }
                  if ((uVar20 != 1) || (*(int *)(uVar28 + 0xf) != (int)uVar17)) goto LAB_0140a478;
                  uVar28 = unaff_x26 + (ulong)*(uint *)(uVar28 + 0xb);
                  uVar18 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar28 - 1) + 7);
                }
                if (uVar20 == 2) break;
                if (uVar20 == 3) {
                  uVar14 = unaff_x26 + (ulong)*(uint *)(uVar28 + 0xb);
                  lVar27 = lVar27 + ((long)((ulong)*(uint *)(uVar28 + 0xf) << 0x20) >> 0x21);
                  uVar18 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar14 - 1) + 7);
                  uVar28 = uVar14;
                }
                else {
                  if (uVar20 != 5) goto LAB_0140a478;
                  uVar28 = unaff_x26 + (ulong)*(uint *)(uVar28 + 0xb);
                  uVar18 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar28 - 1) + 7);
                }
              }
              bVar8 = true;
            }
LAB_01409c80:
            if (bVar8) {
              if ((uVar18 >> 4 & 1) != 0) {
LAB_0140a478:
                if (0x3fffffff < uVar16) {
                  uVar28 = **(ulong **)(unaff_x26 + 0x1428);
                  uVar13 = uVar28 + 0xc;
                  if (uVar13 < **(ulong **)(unaff_x26 + 0x1430)) {
                    lVar12 = uVar28 + 1;
                    **(ulong **)(unaff_x26 + 0x1428) = uVar13;
                  }
                  else {
                    lVar12 = FUN_01348560(iVar9,uVar23,0xc);
                    uVar17 = *(undefined8 *)(unaff_x26 + 200);
                  }
                  *(int *)(lVar12 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
                  *(double *)(lVar12 + 3) = (double)uVar16;
                }
                    /* WARNING: Subroutine does not return */
                FUN_013be7e0(iVar9,2,*(undefined8 *)(unaff_x26 + 0x2580),uVar17);
              }
              lVar29 = *(long *)(uVar28 + 0x13);
            }
            else {
              lVar29 = uVar28 + 0xb;
            }
            if ((uVar18 >> 3 & 1) == 0) {
              uVar26 = *(ushort *)(lVar29 + (uVar16 + lVar27) * 2);
            }
            else {
              uVar26 = 0;
            }
            if ((uVar26 & 0xfc00) == 0xdc00) {
              if ((uVar13 & 1) == 0) {
                if (!SCARRY4(iVar10,2)) {
                  uVar13 = (ulong)(iVar10 + 2);
                  goto LAB_01409d0c;
                }
                dVar30 = (double)(iVar10 >> 1);
              }
              else {
                dVar30 = *(double *)(uVar13 + 3);
              }
              uVar13 = **(ulong **)(unaff_x26 + 0x1428);
              uVar16 = uVar13 + 0xc;
              if (uVar16 < **(ulong **)(unaff_x26 + 0x1430)) {
                uVar13 = uVar13 + 1;
                **(ulong **)(unaff_x26 + 0x1428) = uVar16;
              }
              else {
                uVar13 = FUN_01348560(iVar9,uVar23,0xc);
              }
              *(int *)(uVar13 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
              *(double *)(uVar13 + 3) = dVar30 + 1.0;
            }
          }
        }
      }
LAB_01409d0c:
      *(int *)(param_1 + 0x17) = (int)uVar13;
      uVar16 = param_1;
      lVar27 = unaff_x27;
      if (((((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
          ((uVar13 & 1) != 0)) &&
         (((uint)*(undefined8 *)((unaff_x26 + (uVar13 & 0xffffffff) & 0xfffffffffffc0000) + 8) >> 1
          & 1) != 0)) {
        FUN_0133eb00(iVar9,param_1,param_1 + 0x17,0,2);
        uVar16 = extraout_x12;
        lVar12 = extraout_x9;
        lVar27 = extraout_x10;
      }
      goto LAB_014093b8;
    }
  }
  uVar16 = FUN_013c0ba0(param_1,*(undefined8 *)(unaff_x26 + 0x7b0));
  if ((uVar16 & 1) == 0) {
    if ((int)uVar16 < 0) {
      uVar16 = 0;
    }
  }
  else {
    uVar16 = thunk_FUN_0134a790();
  }
  iVar11 = (int)uVar16;
  iVar10 = iVar11 >> 1;
  if ((uVar16 & 1) == 0) {
    if (SCARRY4(iVar11,2)) {
      dVar30 = (double)iVar10;
      goto LAB_01409d74;
    }
    uVar13 = (ulong)(iVar11 + 2);
  }
  else {
    dVar30 = *(double *)(uVar16 + 3);
LAB_01409d74:
    uVar13 = **(ulong **)(unaff_x26 + 0x1428);
    uVar28 = uVar13 + 0xc;
    if (uVar28 < **(ulong **)(unaff_x26 + 0x1430)) {
      uVar13 = uVar13 + 1;
      **(ulong **)(unaff_x26 + 0x1428) = uVar28;
    }
    else {
      uVar13 = FUN_01348560(uVar16,0xc);
    }
    *(int *)(uVar13 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
    *(double *)(uVar13 + 3) = dVar30 + 1.0;
  }
  if ((iVar19 != 0) && (iVar11 = (int)uVar13, (uVar13 & 0x80000001) == 0)) {
    uVar28 = (ulong)(iVar11 >> 1);
    if (uVar28 < *(uint *)(param_2 + 7)) {
      uVar26 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(param_2 - 1) + 7);
      uVar18 = (uint)uVar26;
      uVar14 = param_2;
      if ((uVar26 & 7) == 0) {
        lVar27 = 0;
        iVar25 = (int)*(undefined8 *)(unaff_x26 + 200);
        bVar8 = false;
      }
      else {
        iVar25 = (int)*(undefined8 *)(unaff_x26 + 200);
        lVar27 = 0;
        while( true ) {
          while (uVar20 = uVar18 & 7, uVar20 < 2) {
            if (uVar20 == 0) {
              bVar8 = false;
              goto LAB_01409ee4;
            }
            if ((uVar20 != 1) || (*(int *)(uVar14 + 0xf) != iVar25)) goto LAB_0140a60c;
            uVar14 = unaff_x26 + (ulong)*(uint *)(uVar14 + 0xb);
            uVar18 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar14 - 1) + 7);
          }
          if (uVar20 == 2) break;
          if (uVar20 == 3) {
            uVar24 = unaff_x26 + (ulong)*(uint *)(uVar14 + 0xb);
            lVar27 = lVar27 + ((long)((ulong)*(uint *)(uVar14 + 0xf) << 0x20) >> 0x21);
            uVar18 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar24 - 1) + 7);
            uVar14 = uVar24;
          }
          else {
            if (uVar20 != 5) goto LAB_0140a60c;
            uVar14 = unaff_x26 + (ulong)*(uint *)(uVar14 + 0xb);
            uVar18 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar14 - 1) + 7);
          }
        }
        bVar8 = true;
      }
LAB_01409ee4:
      if (bVar8) {
        if ((uVar18 >> 4 & 1) != 0) {
LAB_0140a60c:
          if (0x3fffffff < (ulong)(long)iVar10) {
            uVar14 = **(ulong **)(unaff_x26 + 0x1428);
            uVar28 = uVar14 + 0xc;
            if (uVar28 < **(ulong **)(unaff_x26 + 0x1430)) {
              lVar12 = uVar14 + 1;
              **(ulong **)(unaff_x26 + 0x1428) = uVar28;
            }
            else {
              lVar12 = FUN_01348560(uVar16,0xc);
            }
            *(int *)(lVar12 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
            *(double *)(lVar12 + 3) = (double)(ulong)(long)iVar10;
          }
                    /* WARNING: Subroutine does not return */
          FUN_013be7e0(uVar13,2,*(undefined8 *)(unaff_x26 + 0x2580));
        }
        lVar29 = *(long *)(uVar14 + 0x13);
      }
      else {
        lVar29 = uVar14 + 0xb;
      }
      if ((uVar18 >> 3 & 1) == 0) {
        uVar26 = *(ushort *)(lVar29 + (iVar10 + lVar27) * 2);
      }
      else {
        uVar26 = 0;
      }
      if ((uVar26 & 0xfc00) == 0xd800) {
        uVar26 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(param_2 - 1) + 7);
        uVar18 = (uint)uVar26;
        uVar14 = param_2;
        if ((uVar26 & 7) == 0) {
          lVar27 = 0;
          bVar8 = false;
        }
        else {
          lVar27 = 0;
          while( true ) {
            while (uVar20 = uVar18 & 7, uVar20 < 2) {
              if (uVar20 == 0) {
                bVar8 = false;
                goto LAB_0140a01c;
              }
              if ((uVar20 != 1) || (*(int *)(uVar14 + 0xf) != iVar25)) goto LAB_0140a704;
              uVar14 = unaff_x26 + (ulong)*(uint *)(uVar14 + 0xb);
              uVar18 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar14 - 1) + 7);
            }
            if (uVar20 == 2) break;
            if (uVar20 == 3) {
              uVar24 = unaff_x26 + (ulong)*(uint *)(uVar14 + 0xb);
              lVar27 = lVar27 + ((long)((ulong)*(uint *)(uVar14 + 0xf) << 0x20) >> 0x21);
              uVar18 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar24 - 1) + 7);
              uVar14 = uVar24;
            }
            else {
              if (uVar20 != 5) goto LAB_0140a704;
              uVar14 = unaff_x26 + (ulong)*(uint *)(uVar14 + 0xb);
              uVar18 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar14 - 1) + 7);
            }
          }
          bVar8 = true;
        }
LAB_0140a01c:
        if (bVar8) {
          if ((uVar18 >> 4 & 1) != 0) {
LAB_0140a704:
            if (0x3fffffff < uVar28) {
              uVar24 = **(ulong **)(unaff_x26 + 0x1428);
              uVar14 = uVar24 + 0xc;
              if (uVar14 < **(ulong **)(unaff_x26 + 0x1430)) {
                lVar12 = uVar24 + 1;
                **(ulong **)(unaff_x26 + 0x1428) = uVar14;
              }
              else {
                lVar12 = FUN_01348560(uVar16,0xc);
              }
              *(int *)(lVar12 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
              *(double *)(lVar12 + 3) = (double)uVar28;
            }
                    /* WARNING: Subroutine does not return */
            FUN_013be7e0(uVar13,2,*(undefined8 *)(unaff_x26 + 0x2580));
          }
          lVar29 = *(long *)(uVar14 + 0x13);
        }
        else {
          lVar29 = uVar14 + 0xb;
        }
        if ((uVar18 >> 3 & 1) == 0) {
          uVar26 = *(ushort *)(lVar29 + (uVar28 + lVar27) * 2);
        }
        else {
          uVar26 = 0;
        }
        if ((uVar26 & 0xfc00) == 0xdc00) {
          if ((uVar13 & 1) == 0) {
            if (!SCARRY4(iVar11,2)) {
              uVar13 = (ulong)(iVar11 + 2);
              goto LAB_0140a0a8;
            }
            dVar30 = (double)(iVar11 >> 1);
          }
          else {
            dVar30 = *(double *)(uVar13 + 3);
          }
          uVar13 = **(ulong **)(unaff_x26 + 0x1428);
          uVar28 = uVar13 + 0xc;
          if (uVar28 < **(ulong **)(unaff_x26 + 0x1430)) {
            uVar13 = uVar13 + 1;
            **(ulong **)(unaff_x26 + 0x1428) = uVar28;
          }
          else {
            uVar13 = FUN_01348560(uVar16,0xc);
          }
          *(int *)(uVar13 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
          *(double *)(uVar13 + 3) = dVar30 + 1.0;
        }
      }
    }
  }
LAB_0140a0a8:
  FUN_013c2120(param_1,*(undefined8 *)(unaff_x26 + 0x7b0),uVar13);
  uVar16 = param_1;
  lVar27 = unaff_x27;
  goto LAB_014093b8;
}

