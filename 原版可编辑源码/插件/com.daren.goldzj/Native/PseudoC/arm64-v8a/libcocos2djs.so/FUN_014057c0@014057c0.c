
/* WARNING: Removing unreachable block (ram,0x014064ac) */
/* WARNING: Removing unreachable block (ram,0x014064bc) */
/* WARNING: Removing unreachable block (ram,0x014064b4) */
/* WARNING: Removing unreachable block (ram,0x014058ec) */
/* WARNING: Removing unreachable block (ram,0x014058fc) */
/* WARNING: Removing unreachable block (ram,0x014058f4) */
/* WARNING: Removing unreachable block (ram,0x01407618) */
/* WARNING: Removing unreachable block (ram,0x0140590c) */
/* WARNING: Removing unreachable block (ram,0x01405918) */
/* WARNING: Removing unreachable block (ram,0x0140591c) */
/* WARNING: Removing unreachable block (ram,0x01405920) */
/* WARNING: Removing unreachable block (ram,0x014064cc) */
/* WARNING: Removing unreachable block (ram,0x014064d8) */
/* WARNING: Removing unreachable block (ram,0x014064dc) */
/* WARNING: Removing unreachable block (ram,0x014064e0) */

ulong FUN_014057c0(ulong param_1,ulong param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  bool bVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  undefined8 uVar12;
  ushort uVar13;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  ulong extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x9_03;
  ulong extraout_x9_04;
  ulong extraout_x9_05;
  ulong extraout_x9_06;
  ulong extraout_x9_07;
  ulong extraout_x9_08;
  ulong extraout_x9_09;
  ulong extraout_x9_10;
  ulong extraout_x9_11;
  ulong extraout_x9_12;
  ulong extraout_x9_13;
  int iVar14;
  undefined4 uVar15;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  ulong uVar16;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x10_01;
  ulong extraout_x10_02;
  uint extraout_w11;
  uint extraout_w11_00;
  uint extraout_w11_01;
  long lVar17;
  long extraout_x11;
  long extraout_x11_00;
  long extraout_x11_01;
  long extraout_x11_02;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong extraout_x12;
  ulong extraout_x12_00;
  long extraout_x12_01;
  ulong extraout_x12_02;
  ulong extraout_x12_03;
  ulong extraout_x12_04;
  ulong extraout_x12_05;
  ulong extraout_x12_06;
  uint extraout_w13;
  ulong uVar21;
  long extraout_x13;
  long extraout_x13_00;
  long extraout_x13_01;
  long extraout_x13_02;
  ulong extraout_x13_03;
  ulong extraout_x13_04;
  ulong uVar22;
  ulong extraout_x14;
  ulong extraout_x14_00;
  ulong extraout_x14_01;
  ulong extraout_x14_02;
  ulong extraout_x14_03;
  ulong extraout_x14_04;
  ulong extraout_x14_05;
  ulong extraout_x14_06;
  ulong extraout_x14_07;
  ulong extraout_x14_08;
  undefined4 extraout_w15;
  undefined4 extraout_w15_00;
  undefined4 extraout_w15_01;
  ulong uVar23;
  int *piVar24;
  ulong extraout_x15;
  ulong extraout_x15_00;
  ulong extraout_x15_01;
  ulong extraout_x15_02;
  ulong uVar25;
  long lVar26;
  int iVar27;
  ulong uVar28;
  ulong uVar29;
  uint uVar30;
  long lVar31;
  long unaff_x26;
  long unaff_x27;
  double dVar32;
  
  lVar19 = unaff_x26 + (ulong)*(uint *)(param_1 + 0x13);
  uVar9 = (uint)lVar19;
  iVar14 = (int)unaff_x26;
  uVar15 = (undefined4)param_2;
  if ((int)(uVar9 & 2) >> 1 != 0) {
    *(undefined4 *)(param_1 + 0x17) = 0;
    lVar19 = unaff_x26 + (ulong)*(uint *)(param_1 + 0xb);
    uVar16 = (long)((ulong)*(uint *)(lVar19 + 3) << 0x20) >> 0x21;
    if (uVar16 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(0,0x1405820);
      (*pcVar5)();
    }
    if (iVar14 + *(int *)(lVar19 + 7) == 2) {
      if (uVar16 < 4) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0,0x1405848);
        (*pcVar5)();
      }
      uVar16 = unaff_x26 + (ulong)*(uint *)(lVar19 + 0x13);
      bVar7 = true;
    }
    else {
      bVar7 = false;
      uVar16 = *(ulong *)(unaff_x26 + 200);
    }
    uVar21 = 0;
    uVar23 = 0;
    uVar22 = *(ulong *)(unaff_x26 + 0x168);
    uVar25 = param_2;
    do {
      uVar29 = unaff_x26 + (ulong)*(uint *)(param_1 + 0x17);
      bVar6 = ((long)(unaff_x26 + (ulong)*(uint *)(param_1 + 0x13) << 0x20) >> 0x21 & 9U) != 0;
      iVar8 = (int)*(undefined8 *)(unaff_x26 + 0xe8);
      if (bVar6) {
        if (((uVar29 & 1) != 0) || (*(int *)(uVar25 + 7) * 2 < (int)uVar29)) {
          *(undefined4 *)(param_1 + 0x17) = 0;
          goto LAB_014062d4;
        }
      }
      else {
        uVar29 = 0;
      }
      uVar13 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar25 - 1) + 7);
      uVar30 = (uint)uVar13;
      uVar10 = unaff_x26 +
               (ulong)*(uint *)(unaff_x26 +
                                (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13
                                                ) + 0x247);
      if ((uVar29 & 1) == 0) {
        iVar8 = (int)uVar29 >> 1;
        if ((ulong)*(uint *)(uVar25 + 7) < (ulong)(long)iVar8) goto LAB_01405c88;
        lVar19 = unaff_x26 + (ulong)*(uint *)(param_1 + 0xb);
        iVar27 = *(int *)(lVar19 + 7) >> 1;
        if (iVar27 == 0) goto LAB_0140708c;
        if (iVar27 == 1) {
          uVar29 = FUN_013a2de0();
          uVar25 = param_2;
          uVar10 = uVar29;
        }
        else {
          if (iVar27 != 2) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(0,0x1407360);
            (*pcVar5)();
          }
          uVar11 = iVar14 + *(int *)(lVar19 + 0x27);
          if (0x7e < uVar11) {
LAB_0140708c:
                    /* WARNING: Subroutine does not return */
            FUN_013be7e0(4,*(undefined8 *)(unaff_x26 + 0x2460));
          }
          uVar29 = uVar25;
          if ((uVar13 & 7) == 0) {
            lVar31 = 0;
            bVar4 = false;
          }
          else {
            lVar31 = 0;
            while( true ) {
              while (uVar2 = uVar30 & 7, uVar2 < 2) {
                if (uVar2 == 0) {
                  bVar4 = false;
                  goto LAB_01405aac;
                }
                if ((uVar2 != 1) ||
                   (*(int *)(uVar29 + 0xf) != (int)*(undefined8 *)(unaff_x26 + 200)))
                goto LAB_0140708c;
                uVar29 = unaff_x26 + (ulong)*(uint *)(uVar29 + 0xb);
                uVar30 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar29 - 1) + 7);
              }
              if (uVar2 == 2) break;
              if (uVar2 == 3) {
                uVar20 = unaff_x26 + (ulong)*(uint *)(uVar29 + 0xb);
                lVar31 = lVar31 + ((long)((ulong)*(uint *)(uVar29 + 0xf) << 0x20) >> 0x21);
                uVar30 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar20 - 1) + 7);
                uVar29 = uVar20;
              }
              else {
                if (uVar2 != 5) goto LAB_0140708c;
                uVar29 = unaff_x26 + (ulong)*(uint *)(uVar29 + 0xb);
                uVar30 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar29 - 1) + 7);
              }
            }
            bVar4 = true;
          }
LAB_01405aac:
          if (bVar4) {
            if ((uVar30 >> 4 & 1) != 0) goto LAB_0140708c;
            lVar17 = *(long *)(uVar29 + 0x13);
          }
          else {
            lVar17 = uVar29 + 0xb;
          }
          lVar18 = lVar31 + (ulong)*(uint *)(uVar25 + 7);
          lVar31 = lVar31 + iVar8;
          if ((uVar30 >> 3 & 1) == 0) {
            uVar30 = *(uint *)(lVar19 + 0x17);
            lVar18 = lVar18 * 2;
            lVar31 = lVar31 * 2;
          }
          else {
            uVar30 = *(uint *)(lVar19 + 0x13);
          }
          uVar29 = unaff_x26 + (ulong)uVar30;
          if ((uVar29 & 1) == 0) goto LAB_0140708c;
          uVar12 = **(undefined8 **)(unaff_x26 + 0x14e8);
          if (*(int *)(uVar29 + 0x27) == -1) {
            pcVar5 = (code *)(uVar29 + 0x3f);
          }
          else {
            pcVar5 = *(code **)(unaff_x26 + (long)(*(int *)(uVar29 + 0x27) << 3) + 0x2c78);
          }
          *(undefined8 *)(unaff_x26 + 0x40) = 0x1405b50;
          *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
          uVar29 = (*pcVar5)(lVar19,uVar25,iVar8,lVar17 + lVar31,lVar17 + lVar18,
                             *(undefined8 *)(unaff_x26 + 0x14f0),(int)((uVar11 + 2) * 2) >> 1,uVar12
                             ,1);
          *(undefined8 *)(unaff_x26 + 0x38) = 0;
          iVar8 = (int)uVar29;
          if (iVar8 != 1) {
            uVar25 = param_2;
            if (iVar8 != 0) {
              if (iVar8 == -1) {
                    /* WARNING: Subroutine does not return */
                FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x20c8));
              }
              goto LAB_0140708c;
            }
            goto LAB_01405c88;
          }
          iVar8 = (iVar14 + *(int *)(lVar19 + 0x27) + 2) * 2;
          if (iVar14 + *(int *)(uVar10 + 3) + -6 < iVar8) goto LAB_0140708c;
          *(int *)(uVar10 + 7) = iVar8;
          lVar19 = (long)iVar8;
          *(undefined4 *)(uVar10 + 0xb) = uVar15;
          uVar25 = param_2;
          if (((((uint)*(undefined8 *)((uVar10 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
              ((param_2 & 1) != 0)) &&
             (uVar25 = unaff_x26 + (param_2 & 0xffffffff),
             ((uint)*(undefined8 *)((uVar25 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
            FUN_0133eb00(uVar10,uVar10 + 0xb,0,2);
            lVar19 = extraout_x8_07;
            uVar25 = extraout_x9_13;
          }
          lVar19 = lVar19 << 1;
          *(int *)(uVar10 + 0xf) = (int)uVar25;
          if (((((uint)*(undefined8 *)((uVar10 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
              ((uVar25 & 1) != 0)) &&
             (uVar25 = unaff_x26 + (uVar25 & 0xffffffff),
             ((uint)*(undefined8 *)((uVar25 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
            FUN_0133eb00(uVar10,uVar10 + 0xf,0,2);
            lVar19 = extraout_x8_06;
            uVar25 = extraout_x9_12;
          }
          if (lVar19 != 0) {
            lVar17 = 0;
            lVar31 = 0x13;
            lVar18 = *(long *)(unaff_x26 + 0x14f0);
            while( true ) {
              piVar24 = (int *)(lVar18 + lVar17);
              lVar17 = lVar17 + 4;
              *(int *)(uVar10 + lVar31) = *piVar24 * 2;
              if (lVar17 == lVar19) break;
              lVar31 = lVar31 + 4;
            }
          }
        }
      }
      else {
LAB_01405c88:
        uVar29 = param_1;
        uVar10 = *(ulong *)(unaff_x26 + 0xb0);
      }
      if ((int)uVar10 == (int)*(undefined8 *)(unaff_x26 + 0xb0)) {
        if (bVar6) {
          *(undefined4 *)(param_1 + 0x17) = 0;
        }
        iVar8 = (int)*(undefined8 *)(unaff_x26 + 0xe8);
        param_1 = uVar29;
LAB_014062d4:
        if (uVar21 == 0) {
          return *(ulong *)(unaff_x26 + 0xb0);
        }
        iVar14 = *(int *)(uVar22 - 1);
        uVar15 = *(undefined4 *)
                  (unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13)
                  + 0x167);
        if (uVar21 == 0) {
          param_1 = *(ulong *)(unaff_x26 + 0x168);
          uVar16 = param_1;
        }
        else {
          if (iVar14 == iVar8) {
            iVar14 = (int)*(undefined8 *)(unaff_x26 + 0xe0);
          }
          if (0x7fffffd < (long)uVar21) {
                    /* WARNING: Subroutine does not return */
            FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
          }
          lVar19 = **(long **)(unaff_x26 + 0x1428);
          uVar16 = uVar21 * 4 + 8;
          uVar25 = lVar19 + uVar16;
          if ((uVar25 < **(ulong **)(unaff_x26 + 0x1430)) && (uVar16 < 0x20000)) {
            **(ulong **)(unaff_x26 + 0x1428) = uVar25;
            uVar16 = lVar19 + 1;
          }
          else {
            param_1 = FUN_01348500(param_1);
            uVar16 = param_1;
          }
          *(int *)(uVar16 - 1) = iVar14;
          *(int *)(uVar16 + 3) = (int)uVar21 * 2;
          if (((uint)*(undefined8 *)((uVar16 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
            *(undefined8 *)(unaff_x26 + 0x40) = 0x14063bc;
            *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
            param_1 = (**(code **)(unaff_x26 + 0x11d0))(uVar16 + 7,uVar22 + 7,uVar21 << 2);
            *(undefined8 *)(unaff_x26 + 0x38) = 0;
          }
          else {
            lVar19 = uVar21 * 4 + 7;
            if (lVar19 != 7) {
              lVar31 = 7;
              do {
                lVar17 = lVar31 + 4;
                *(undefined4 *)(uVar16 + lVar31) = *(undefined4 *)(uVar22 + lVar31);
                lVar31 = lVar17;
              } while (lVar17 != lVar19);
            }
          }
        }
        uVar23 = **(ulong **)(unaff_x26 + 0x1428);
        uVar25 = uVar23 + 0x10;
        if (uVar25 < **(ulong **)(unaff_x26 + 0x1430)) {
          uVar23 = uVar23 + 1;
          **(ulong **)(unaff_x26 + 0x1428) = uVar25;
        }
        else {
          uVar23 = FUN_01348560(param_1,0x10);
        }
        *(undefined4 *)(uVar23 - 1) = uVar15;
        *(int *)(uVar23 + 0xb) = (int)uVar21 * 2;
        *(int *)(uVar23 + 3) = (int)*(undefined8 *)(unaff_x26 + 0x168);
        *(int *)(uVar23 + 7) = (int)uVar16;
        return uVar23;
      }
      if (bVar6) {
        if ((ulong)((long)((ulong)*(uint *)(uVar10 + 3) << 0x20) >> 0x21) < 5) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(0,0x14062c4);
          (*pcVar5)();
        }
        uVar30 = *(uint *)(uVar10 + 0x17);
        *(uint *)(param_1 + 0x17) = uVar30;
        if (((((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
            ((uVar30 & 1) != 0)) &&
           (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar30 & 0xfffffffffffc0000) + 8) >> 1 & 1)
            != 0)) {
          FUN_0133eb00(param_1,param_1 + 0x17,0,2);
        }
      }
      uVar29 = uVar16;
      if (!bVar7) {
        uVar29 = (long)((ulong)*(uint *)(uVar10 + 3) << 0x20) >> 0x21;
        if (uVar29 < 4) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(0,0x14062c8);
          (*pcVar5)();
        }
        if (uVar29 < 5) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(0,0x14062cc);
          (*pcVar5)();
        }
        uVar29 = FUN_013bfc80(param_1,uVar25,unaff_x26 + (ulong)*(uint *)(uVar10 + 0x13));
      }
      uVar25 = uVar22;
      if (uVar23 == uVar21) {
        iVar8 = *(int *)(uVar22 - 1);
        uVar23 = uVar23 + ((long)uVar23 >> 1) + 0x10;
        if (uVar23 == 0) {
          uVar25 = *(ulong *)(unaff_x26 + 0x168);
        }
        else {
          if (iVar8 == (int)*(undefined8 *)(unaff_x26 + 0xe8)) {
            iVar8 = (int)*(undefined8 *)(unaff_x26 + 0xe0);
          }
          if (0x7fffffd < (long)uVar23) {
                    /* WARNING: Subroutine does not return */
            FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
          }
          uVar25 = uVar23 * 4 + 8;
          uVar10 = **(long **)(unaff_x26 + 0x1428) + uVar25;
          if ((uVar10 < **(ulong **)(unaff_x26 + 0x1430)) && (uVar25 < 0x20000)) {
            uVar25 = **(long **)(unaff_x26 + 0x1428) + 1;
            **(ulong **)(unaff_x26 + 0x1428) = uVar10;
          }
          else {
            uVar25 = FUN_01348500();
          }
          *(int *)(uVar25 - 1) = iVar8;
          *(int *)(uVar25 + 3) = (int)uVar23 * 2;
          lVar19 = uVar23 * 4 + 7;
          lVar31 = uVar21 * 4 + 7;
          if (lVar19 != lVar31) {
            uVar12 = *(undefined8 *)(unaff_x26 + 0xa8);
            do {
              lVar19 = lVar19 + -4;
              *(int *)(uVar25 + lVar19) = (int)uVar12;
            } while (lVar19 != lVar31);
          }
          if (((uint)*(undefined8 *)((uVar25 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
            *(undefined8 *)(unaff_x26 + 0x40) = 0x1405e58;
            *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
            (**(code **)(unaff_x26 + 0x11d0))(uVar29,uVar25 + 7,uVar22 + 7);
            *(undefined8 *)(unaff_x26 + 0x38) = 0;
          }
          else {
            lVar19 = uVar21 * 4 + 7;
            if (lVar19 != 7) {
              lVar31 = 7;
              do {
                lVar17 = lVar31 + 4;
                *(undefined4 *)(uVar25 + lVar31) = *(undefined4 *)(uVar22 + lVar31);
                lVar31 = lVar17;
              } while (lVar17 != lVar19);
            }
          }
        }
      }
      uVar22 = uVar25;
      if ((ulong)((long)((ulong)*(uint *)(uVar22 + 3) << 0x20) >> 0x21) <= uVar21) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0,0x14062d0);
        (*pcVar5)();
      }
      lVar19 = uVar21 * 4 + 7;
      *(int *)(uVar22 + lVar19) = (int)uVar29;
      uVar10 = uVar21;
      if (((((uint)*(undefined8 *)((uVar22 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
          ((uVar29 & 1) != 0)) &&
         (uVar29 = unaff_x26 + (uVar29 & 0xffffffff),
         ((uint)*(undefined8 *)((uVar29 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
        FUN_0133eb00(uVar22,uVar22 + lVar19,0,2);
        uVar10 = extraout_x13_04;
        uVar22 = extraout_x14_08;
        uVar23 = extraout_x15_02;
      }
      uVar25 = param_2;
      if ((*(uint *)(uVar29 + 7) & 0x7fffffff) == 0) {
        uVar25 = unaff_x26 + (ulong)*(uint *)(param_1 + 0x17);
        iVar27 = (int)uVar25;
        iVar8 = iVar27 >> 1;
        if ((uVar25 & 1) == 0) {
          if (SCARRY4(iVar27,2)) {
            dVar32 = (double)iVar8;
            goto LAB_01405f0c;
          }
          uVar29 = (ulong)(iVar27 + 2);
        }
        else {
          dVar32 = *(double *)(uVar25 + 3);
LAB_01405f0c:
          uVar29 = **(ulong **)(unaff_x26 + 0x1428);
          uVar25 = uVar29 + 0xc;
          if (uVar25 < **(ulong **)(unaff_x26 + 0x1430)) {
            uVar29 = uVar29 + 1;
            **(ulong **)(unaff_x26 + 0x1428) = uVar25;
          }
          else {
            uVar29 = FUN_01348560(param_1,0xc);
            uVar10 = uVar21;
          }
          *(int *)(uVar29 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
          *(double *)(uVar29 + 3) = dVar32 + 1.0;
        }
        if (((int)((uVar9 & 0x20) >> 4) >> 1 != 0) &&
           (iVar27 = (int)uVar29, (uVar29 & 0x80000001) == 0)) {
          uVar25 = (ulong)(iVar27 >> 1);
          if (uVar25 < *(uint *)(param_2 + 7)) {
            uVar13 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(param_2 - 1) + 7);
            uVar30 = (uint)uVar13;
            uVar20 = param_2;
            if ((uVar13 & 7) == 0) {
              lVar19 = 0;
              bVar6 = false;
            }
            else {
              lVar19 = 0;
              while( true ) {
                while (uVar11 = uVar30 & 7, uVar11 < 2) {
                  if (uVar11 == 0) {
                    bVar6 = false;
                    goto LAB_0140609c;
                  }
                  if ((uVar11 != 1) ||
                     (*(int *)(uVar20 + 0xf) != (int)*(undefined8 *)(unaff_x26 + 200)))
                  goto LAB_01407174;
                  uVar20 = unaff_x26 + (ulong)*(uint *)(uVar20 + 0xb);
                  uVar30 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar20 - 1) + 7);
                }
                if (uVar11 == 2) break;
                if (uVar11 == 3) {
                  uVar28 = unaff_x26 + (ulong)*(uint *)(uVar20 + 0xb);
                  lVar19 = lVar19 + ((long)((ulong)*(uint *)(uVar20 + 0xf) << 0x20) >> 0x21);
                  uVar30 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar28 - 1) + 7);
                  uVar20 = uVar28;
                }
                else {
                  if (uVar11 != 5) goto LAB_01407174;
                  uVar20 = unaff_x26 + (ulong)*(uint *)(uVar20 + 0xb);
                  uVar30 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar20 - 1) + 7);
                }
              }
              bVar6 = true;
            }
LAB_0140609c:
            if (bVar6) {
              if ((uVar30 >> 4 & 1) != 0) {
LAB_01407174:
                if (0x3fffffff < (ulong)(long)iVar8) {
                  uVar25 = **(ulong **)(unaff_x26 + 0x1428);
                  uVar16 = uVar25 + 0xc;
                  if (uVar16 < **(ulong **)(unaff_x26 + 0x1430)) {
                    lVar19 = uVar25 + 1;
                    **(ulong **)(unaff_x26 + 0x1428) = uVar16;
                  }
                  else {
                    lVar19 = FUN_01348560(param_1,0xc);
                  }
                  *(int *)(lVar19 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
                  *(double *)(lVar19 + 3) = (double)(ulong)(long)iVar8;
                }
                    /* WARNING: Subroutine does not return */
                FUN_013be7e0(param_1,2,*(undefined8 *)(unaff_x26 + 0x2580));
              }
              lVar31 = *(long *)(uVar20 + 0x13);
            }
            else {
              lVar31 = uVar20 + 0xb;
            }
            if ((uVar30 >> 3 & 1) == 0) {
              uVar13 = *(ushort *)(lVar31 + (iVar8 + lVar19) * 2);
            }
            else {
              uVar13 = 0;
            }
            if ((uVar13 & 0xfc00) == 0xd800) {
              uVar13 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(param_2 - 1) + 7);
              uVar30 = (uint)uVar13;
              uVar20 = param_2;
              if ((uVar13 & 7) == 0) {
                lVar19 = 0;
                bVar6 = false;
              }
              else {
                lVar19 = 0;
                while( true ) {
                  while (uVar11 = uVar30 & 7, uVar11 < 2) {
                    if (uVar11 == 0) {
                      bVar6 = false;
                      goto LAB_014061dc;
                    }
                    if ((uVar11 != 1) ||
                       (*(int *)(uVar20 + 0xf) != (int)*(undefined8 *)(unaff_x26 + 200)))
                    goto LAB_0140727c;
                    uVar20 = unaff_x26 + (ulong)*(uint *)(uVar20 + 0xb);
                    uVar30 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar20 - 1) + 7);
                  }
                  if (uVar11 == 2) break;
                  if (uVar11 == 3) {
                    uVar28 = unaff_x26 + (ulong)*(uint *)(uVar20 + 0xb);
                    lVar19 = lVar19 + ((long)((ulong)*(uint *)(uVar20 + 0xf) << 0x20) >> 0x21);
                    uVar30 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar28 - 1) + 7);
                    uVar20 = uVar28;
                  }
                  else {
                    if (uVar11 != 5) goto LAB_0140727c;
                    uVar20 = unaff_x26 + (ulong)*(uint *)(uVar20 + 0xb);
                    uVar30 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar20 - 1) + 7);
                  }
                }
                bVar6 = true;
              }
LAB_014061dc:
              if (bVar6) {
                if ((uVar30 >> 4 & 1) != 0) {
LAB_0140727c:
                  if (0x3fffffff < uVar25) {
                    uVar21 = **(ulong **)(unaff_x26 + 0x1428);
                    uVar16 = uVar21 + 0xc;
                    if (uVar16 < **(ulong **)(unaff_x26 + 0x1430)) {
                      lVar19 = uVar21 + 1;
                      **(ulong **)(unaff_x26 + 0x1428) = uVar16;
                    }
                    else {
                      lVar19 = FUN_01348560(param_1,0xc);
                    }
                    *(int *)(lVar19 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
                    *(double *)(lVar19 + 3) = (double)uVar25;
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2580));
                }
                lVar31 = *(long *)(uVar20 + 0x13);
              }
              else {
                lVar31 = uVar20 + 0xb;
              }
              if ((uVar30 >> 3 & 1) == 0) {
                uVar13 = *(ushort *)(lVar31 + (uVar25 + lVar19) * 2);
              }
              else {
                uVar13 = 0;
              }
              if ((uVar13 & 0xfc00) == 0xdc00) {
                if ((uVar29 & 1) == 0) {
                  if (!SCARRY4(iVar27,2)) {
                    uVar29 = (ulong)(iVar27 + 2);
                    goto LAB_01406268;
                  }
                  dVar32 = (double)(iVar27 >> 1);
                }
                else {
                  dVar32 = *(double *)(uVar29 + 3);
                }
                uVar29 = **(ulong **)(unaff_x26 + 0x1428);
                uVar25 = uVar29 + 0xc;
                if (uVar25 < **(ulong **)(unaff_x26 + 0x1430)) {
                  uVar29 = uVar29 + 1;
                  **(ulong **)(unaff_x26 + 0x1428) = uVar25;
                  uVar21 = uVar10;
                }
                else {
                  uVar29 = FUN_01348560(param_1,0xc);
                }
                *(int *)(uVar29 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
                *(double *)(uVar29 + 3) = dVar32 + 1.0;
                uVar10 = uVar21;
              }
            }
          }
        }
LAB_01406268:
        *(int *)(param_1 + 0x17) = (int)uVar29;
        uVar25 = param_2;
        if (((((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
            ((uVar29 & 1) != 0)) &&
           (((uint)*(undefined8 *)((unaff_x26 + (uVar29 & 0xffffffff) & 0xfffffffffffc0000) + 8) >>
             1 & 1) != 0)) {
          FUN_0133eb00(param_1,param_1 + 0x17,0,2);
          uVar25 = extraout_x8_05;
          uVar10 = extraout_x13_03;
          uVar22 = extraout_x14_07;
          uVar23 = extraout_x15_01;
        }
      }
      uVar21 = uVar10 + 1;
    } while( true );
  }
  uVar16 = unaff_x26 + (ulong)*(uint *)(param_1 + 0x17);
  bVar7 = ((lVar19 << 0x20) >> 0x21 & 9U) != 0;
  uVar9 = (uint)uVar16;
  if (bVar7) {
    if (((uVar16 & 1) != 0) || (uVar25 = uVar16, *(int *)(param_2 + 7) * 2 < (int)uVar9)) {
      *(undefined4 *)(param_1 + 0x17) = 0;
      goto LAB_0140701c;
    }
  }
  else {
    uVar25 = 0;
  }
  uVar13 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(param_2 - 1) + 7);
  uVar30 = (uint)uVar13;
  uVar23 = unaff_x26 +
           (ulong)*(uint *)(unaff_x26 +
                            (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13) +
                           0x247);
  uVar21 = param_2;
  if ((uVar25 & 1) == 0) {
    iVar8 = (int)uVar25 >> 1;
    if ((ulong)*(uint *)(param_2 + 7) < (ulong)(long)iVar8) goto LAB_0140682c;
    lVar19 = unaff_x26 + (ulong)*(uint *)(param_1 + 0xb);
    iVar27 = *(int *)(lVar19 + 7) >> 1;
    if (iVar27 == 0) goto LAB_01407458;
    if (iVar27 == 1) {
      uVar23 = FUN_013a2de0(param_1,param_2,uVar25,uVar23);
    }
    else {
      if (iVar27 != 2) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0,0x14073ec);
        (*pcVar5)();
      }
      uVar11 = iVar14 + *(int *)(lVar19 + 0x27);
      if (0x7e < uVar11) {
LAB_01407458:
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(4,*(undefined8 *)(unaff_x26 + 0x2460));
      }
      uVar25 = param_2;
      if ((uVar13 & 7) != 0) {
        lVar31 = 0;
        while( true ) {
          while( true ) {
            while (uVar2 = uVar30 & 7, uVar2 < 2) {
              if (uVar2 == 0) {
                bVar6 = false;
                goto LAB_0140667c;
              }
              if ((uVar2 != 1) || (*(int *)(uVar25 + 0xf) != (int)*(undefined8 *)(unaff_x26 + 200)))
              goto LAB_01407458;
              uVar25 = unaff_x26 + (ulong)*(uint *)(uVar25 + 0xb);
              uVar30 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar25 - 1) + 7);
            }
            if (uVar2 == 2) {
              bVar6 = true;
              goto LAB_0140667c;
            }
            if (uVar2 != 3) break;
            uVar22 = unaff_x26 + (ulong)*(uint *)(uVar25 + 0xb);
            lVar31 = lVar31 + ((long)((ulong)*(uint *)(uVar25 + 0xf) << 0x20) >> 0x21);
            uVar30 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar22 - 1) + 7);
            uVar25 = uVar22;
          }
          if (uVar2 != 5) break;
          uVar25 = unaff_x26 + (ulong)*(uint *)(uVar25 + 0xb);
          uVar30 = (uint)*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar25 - 1) + 7);
        }
        goto LAB_01407458;
      }
      lVar31 = 0;
      bVar6 = false;
LAB_0140667c:
      if (bVar6) {
        if ((uVar30 >> 4 & 1) != 0) goto LAB_01407458;
        lVar17 = *(long *)(uVar25 + 0x13);
      }
      else {
        lVar17 = uVar25 + 0xb;
      }
      lVar18 = lVar31 + (ulong)*(uint *)(param_2 + 7);
      lVar31 = lVar31 + iVar8;
      if ((uVar30 >> 3 & 1) == 0) {
        uVar30 = *(uint *)(lVar19 + 0x17);
        lVar18 = lVar18 * 2;
        lVar31 = lVar31 * 2;
      }
      else {
        uVar30 = *(uint *)(lVar19 + 0x13);
      }
      uVar25 = unaff_x26 + (ulong)uVar30;
      if ((uVar25 & 1) == 0) goto LAB_01407458;
      uVar12 = **(undefined8 **)(unaff_x26 + 0x14e8);
      if (*(int *)(uVar25 + 0x27) == -1) {
        pcVar5 = (code *)(uVar25 + 0x3f);
      }
      else {
        pcVar5 = *(code **)(unaff_x26 + (long)(*(int *)(uVar25 + 0x27) << 3) + 0x2c78);
      }
      *(undefined8 *)(unaff_x26 + 0x40) = 0x1406718;
      *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
      iVar8 = (*pcVar5)(param_2,iVar8,lVar17 + lVar31,lVar17 + lVar18,
                        *(undefined8 *)(unaff_x26 + 0x14f0),(int)((uVar11 + 2) * 2) >> 1,uVar12,1);
      *(undefined8 *)(unaff_x26 + 0x38) = 0;
      if (iVar8 != 1) {
        if (iVar8 != 0) {
          if (iVar8 == -1) {
                    /* WARNING: Subroutine does not return */
            FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x20c8));
          }
          goto LAB_01407458;
        }
        goto LAB_0140682c;
      }
      iVar8 = (iVar14 + *(int *)(lVar19 + 0x27) + 2) * 2;
      if (iVar14 + *(int *)(uVar23 + 3) + -6 < iVar8) goto LAB_01407458;
      *(int *)(uVar23 + 7) = iVar8;
      lVar19 = (long)iVar8;
      *(undefined4 *)(uVar23 + 0xb) = uVar15;
      if (((((uint)*(undefined8 *)((uVar23 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
          ((param_2 & 1) != 0)) &&
         (uVar21 = unaff_x26 + (param_2 & 0xffffffff),
         ((uint)*(undefined8 *)((uVar21 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
        FUN_0133eb00(uVar23,uVar23 + 0xb,0,2);
        lVar19 = extraout_x8_04;
        uVar21 = extraout_x9_11;
      }
      lVar19 = lVar19 << 1;
      *(int *)(uVar23 + 0xf) = (int)uVar21;
      if (((((uint)*(undefined8 *)((uVar23 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
          ((uVar21 & 1) != 0)) &&
         (uVar21 = unaff_x26 + (uVar21 & 0xffffffff),
         ((uint)*(undefined8 *)((uVar21 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
        FUN_0133eb00(uVar23,uVar23 + 0xf,0,2);
        lVar19 = extraout_x8_03;
        uVar21 = extraout_x9_10;
      }
      if (lVar19 != 0) {
        lVar17 = 0;
        lVar31 = 0x13;
        lVar18 = *(long *)(unaff_x26 + 0x14f0);
        while( true ) {
          piVar24 = (int *)(lVar18 + lVar17);
          lVar17 = lVar17 + 4;
          *(int *)(uVar23 + lVar31) = *piVar24 * 2;
          if (lVar17 == lVar19) break;
          lVar31 = lVar31 + 4;
        }
      }
    }
  }
  else {
LAB_0140682c:
    uVar23 = *(ulong *)(unaff_x26 + 0xb0);
  }
  if ((int)uVar23 != (int)*(undefined8 *)(unaff_x26 + 0xb0)) {
    if (bVar7) {
      if ((ulong)((long)((ulong)*(uint *)(uVar23 + 3) << 0x20) >> 0x21) < 5) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0,0x140687c);
        (*pcVar5)();
      }
      uVar30 = *(uint *)(uVar23 + 0x17);
      *(uint *)(param_1 + 0x17) = uVar30;
      if (((((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
          ((uVar30 & 1) != 0)) &&
         (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar30 & 0xfffffffffffc0000) + 8) >> 1 & 1) !=
          0)) {
        FUN_0133eb00(param_1,param_1 + 0x17,0,2);
        uVar21 = extraout_x9_09;
      }
    }
    lVar31 = unaff_x26 + (ulong)*(uint *)(uVar23 + 0x13);
    uVar25 = (long)(unaff_x26 + (ulong)*(uint *)(uVar23 + 7) << 0x20) >> 0x21;
    iVar27 = (int)(uVar25 >> 1) * 2;
    uVar21 = FUN_013bfc80(uVar21,lVar31);
    iVar8 = iVar27 >> 1;
    uVar22 = (ulong)iVar8;
    lVar19 = uVar22 * 4;
    uVar3 = *(undefined4 *)
             (unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13) +
             0x25f);
    if (uVar22 == 0) {
      uVar22 = **(ulong **)(unaff_x26 + 0x1428);
      uVar29 = uVar22 + 0x2c;
      if (uVar29 < **(ulong **)(unaff_x26 + 0x1430)) {
        uVar22 = uVar22 + 1;
        **(ulong **)(unaff_x26 + 0x1428) = uVar29;
      }
      else {
        uVar22 = FUN_01348560(uVar21,0x2c);
      }
      *(undefined4 *)(uVar22 - 1) = uVar3;
      *(int *)(uVar22 + 0xb) = iVar27;
      uVar29 = *(ulong *)(unaff_x26 + 0x168);
      *(int *)(uVar22 + 3) = (int)uVar29;
      *(int *)(uVar22 + 7) = (int)uVar29;
    }
    else if (lVar19 + 0x34U < 0x20001) {
      uVar22 = **(ulong **)(unaff_x26 + 0x1428);
      uVar29 = uVar22 + lVar19 + 0x34U;
      if (uVar29 < **(ulong **)(unaff_x26 + 0x1430)) {
        uVar22 = uVar22 + 1;
        **(ulong **)(unaff_x26 + 0x1428) = uVar29;
      }
      else {
        uVar22 = FUN_01348560();
      }
      *(undefined4 *)(uVar22 - 1) = uVar3;
      *(int *)(uVar22 + 0xb) = iVar27;
      uVar29 = uVar22 + 0x2c;
      *(int *)(uVar22 + 3) = (int)*(undefined8 *)(unaff_x26 + 0x168);
      *(int *)(uVar22 + 7) = (int)uVar29;
      *(int *)(uVar22 + 0x2b) = (int)*(undefined8 *)(unaff_x26 + 0xe0);
      *(int *)(uVar22 + 0x2f) = iVar8 * 2;
    }
    else {
      if (0x2000000 < uVar22) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0,0x1407494);
        (*pcVar5)();
      }
      if (0x7fffffd < (long)uVar22) {
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
      }
      uVar29 = **(ulong **)(unaff_x26 + 0x1428);
      uVar22 = uVar29 + lVar19 + 8U;
      if ((uVar22 < **(ulong **)(unaff_x26 + 0x1430)) && (lVar19 + 8U < 0x20000)) {
        uVar29 = uVar29 + 1;
        **(ulong **)(unaff_x26 + 0x1428) = uVar22;
      }
      else {
        uVar29 = FUN_01348500();
      }
      *(int *)(uVar29 - 1) = (int)*(undefined8 *)(unaff_x26 + 0xe0);
      *(int *)(uVar29 + 3) = iVar8 * 2;
      *(undefined8 *)(unaff_x26 + 0x40) = 0x140699c;
      *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
      uVar12 = (**(code **)(unaff_x26 + 0x11e0))(uVar29 + 7,0);
      *(undefined8 *)(unaff_x26 + 0x38) = 0;
      uVar22 = **(ulong **)(unaff_x26 + 0x1428);
      uVar10 = uVar22 + 0x2c;
      if (uVar10 < **(ulong **)(unaff_x26 + 0x1430)) {
        uVar22 = uVar22 + 1;
        **(ulong **)(unaff_x26 + 0x1428) = uVar10;
      }
      else {
        uVar22 = FUN_01348560(uVar12,0x2c);
      }
      *(undefined4 *)(uVar22 - 1) = uVar3;
      *(int *)(uVar22 + 0xb) = iVar27;
      *(int *)(uVar22 + 3) = (int)*(undefined8 *)(unaff_x26 + 0x168);
      *(int *)(uVar22 + 7) = (int)uVar29;
    }
    if ((uVar16 & 1) != 0) {
      uVar9 = 0;
    }
    *(int *)(uVar22 + 0xf) = (int)lVar31;
    *(undefined4 *)(uVar22 + 0x13) = uVar15;
    uVar10 = uVar29;
    uVar20 = uVar22;
    uVar16 = param_2;
    if (((((uint)*(undefined8 *)((uVar22 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
        ((param_2 & 1) != 0)) &&
       (uVar16 = unaff_x26 + (param_2 & 0xffffffff),
       ((uint)*(undefined8 *)((uVar16 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
      FUN_0133eb00(unaff_x27,uVar22,uVar22 + 0x13,0,2);
      uVar10 = extraout_x9_08;
      uVar20 = extraout_x12_06;
      lVar19 = extraout_x13_02;
      uVar16 = extraout_x14_06;
      uVar9 = extraout_w11_01;
      iVar27 = extraout_w10_03;
    }
    lVar19 = lVar19 + 7;
    uVar15 = (undefined4)*(undefined8 *)(unaff_x26 + 0xa0);
    *(undefined4 *)(uVar20 + 0x17) = uVar15;
    *(undefined4 *)(uVar20 + 0x1f) = uVar15;
    *(int *)(uVar20 + 0x1b) = (int)param_1;
    if (((((uint)*(undefined8 *)((uVar20 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
        ((param_1 & 1) != 0)) &&
       (((uint)*(undefined8 *)((unaff_x26 + (param_1 & 0xffffffff) & 0xfffffffffffc0000) + 8) >> 1 &
        1) != 0)) {
      FUN_0133eb00(uVar20,uVar20 + 0x1b,0,2);
      uVar10 = extraout_x9_07;
      uVar20 = extraout_x12_05;
      lVar19 = extraout_x13_01;
      uVar16 = extraout_x14_05;
      uVar9 = extraout_w11_00;
      uVar15 = extraout_w15_01;
      iVar27 = extraout_w10_02;
    }
    *(int *)(uVar20 + 0x23) = (int)uVar16;
    if (((((uint)*(undefined8 *)((uVar20 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
        ((uVar16 & 1) != 0)) &&
       (uVar16 = unaff_x26 + (uVar16 & 0xffffffff),
       ((uint)*(undefined8 *)((uVar16 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
      FUN_0133eb00(uVar20,uVar20 + 0x23,0,2);
      uVar10 = extraout_x9_06;
      uVar20 = extraout_x12_04;
      lVar19 = extraout_x13_00;
      uVar16 = extraout_x14_04;
      uVar9 = extraout_w11;
      uVar15 = extraout_w15_00;
      iVar27 = extraout_w10_01;
    }
    *(uint *)(uVar20 + 0x27) = uVar9;
    if (((((uint)*(undefined8 *)((uVar20 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
        ((uVar9 & 1) != 0)) &&
       (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar9 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0))
    {
      FUN_0133eb00(uVar20,uVar20 + 0x27,0,2);
      lVar19 = extraout_x13;
      iVar27 = extraout_w10_00;
      uVar15 = extraout_w15;
      uVar16 = extraout_x14_03;
      uVar20 = extraout_x12_03;
      uVar10 = extraout_x9_05;
    }
    while (lVar19 != 7) {
      lVar19 = lVar19 + -4;
      *(undefined4 *)(uVar10 + lVar19) = uVar15;
    }
    *(int *)(uVar10 + 7) = (int)uVar21;
    if (((((uint)*(undefined8 *)((uVar10 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
        ((uVar21 & 1) != 0)) &&
       (((uint)*(undefined8 *)((unaff_x26 + (uVar21 & 0xffffffff) & 0xfffffffffffc0000) + 8) >> 1 &
        1) != 0)) {
      FUN_0133eb00(uVar10,uVar10 + 7,0,2);
      uVar10 = extraout_x9_04;
      uVar20 = extraout_x12_02;
      uVar16 = extraout_x14_02;
      iVar27 = extraout_w10;
    }
    if (iVar27 == 2) {
      return uVar20;
    }
    lVar19 = 1;
    uVar21 = 5;
    while( true ) {
      if (iVar14 + *(int *)(uVar23 + uVar21 * 4 + 7) != -2) {
        uVar9 = FUN_013bfc80(uVar16);
        lVar31 = lVar19 * 4 + 7;
        *(uint *)(uVar29 + lVar31) = uVar9;
        uVar10 = uVar29;
        if (((((uint)*(undefined8 *)((uVar29 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
            ((uVar9 & 1) != 0)) &&
           (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar9 & 0xfffffffffffc0000) + 8) >> 1 & 1) !=
            0)) {
          FUN_0133eb00(uVar29,uVar29 + lVar31,0,2);
          uVar10 = extraout_x9_03;
        }
      }
      uVar21 = uVar21 + 2;
      if (uVar25 + 3 <= uVar21) break;
      lVar19 = lVar19 + 1;
      uVar16 = param_2;
    }
    lVar19 = unaff_x26 + (ulong)*(uint *)(param_1 + 0xb);
    if ((ulong)((long)((ulong)*(uint *)(lVar19 + 3) << 0x20) >> 0x21) < 10) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(0,0x1407528);
      (*pcVar5)();
    }
    uVar16 = unaff_x26 + (ulong)*(uint *)(lVar19 + 0x2b);
    uVar25 = 0;
    if ((int)uVar16 == 0) {
      return uVar22;
    }
    lVar19 = (ulong)*(uint *)(uVar16 + 3) << 0x20;
    lVar31 = lVar19 >> 0x21;
    uVar21 = lVar19 >> 0x22;
    uVar21 = (uVar21 + (uVar21 >> 1)) - 1;
    uVar21 = uVar21 | uVar21 >> 1;
    uVar21 = uVar21 | uVar21 >> 2;
    uVar21 = uVar21 | uVar21 >> 4;
    uVar21 = uVar21 | uVar21 >> 8;
    lVar19 = (uVar21 | uVar21 >> 0x10) + 1;
    if (lVar19 < 4) {
      lVar19 = 4;
    }
    *(int *)(uVar22 + 0x1f) = (int)uVar16;
    if (((((uint)*(undefined8 *)((uVar22 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
        ((uVar16 & 1) != 0)) &&
       (uVar16 = unaff_x26 + (uVar16 & 0xffffffff),
       ((uint)*(undefined8 *)((uVar16 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
      FUN_0133eb00(uVar22,uVar22 + 0x1f,0,2);
      uVar16 = extraout_x8_02;
      uVar10 = extraout_x9_02;
      uVar25 = extraout_x10_02;
      lVar31 = extraout_x11_02;
      lVar19 = extraout_x12_01;
    }
    lVar17 = lVar19 * 3 + 5;
    lVar26 = lVar17 * 4;
    uVar21 = lVar26 + 8;
    uVar23 = **(long **)(unaff_x26 + 0x1428) + uVar21;
    lVar18 = unaff_x26 +
             (ulong)*(uint *)(unaff_x26 +
                              (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13)
                             + 0x29b);
    if ((uVar23 < **(ulong **)(unaff_x26 + 0x1430)) && (uVar21 < 0x20000)) {
      uVar21 = **(long **)(unaff_x26 + 0x1428) + 1;
      **(ulong **)(unaff_x26 + 0x1428) = uVar23;
    }
    else {
      uVar21 = FUN_01348500();
      uVar25 = 0;
      uVar10 = uVar29;
    }
    *(int *)(uVar21 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x208);
    *(int *)(uVar21 + 3) = (int)lVar17 * 2;
    if ((long)((ulong)*(uint *)(uVar21 + 3) << 0x20) >> 0x21 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(0,0x140757c);
      (*pcVar5)();
    }
    uVar15 = (undefined4)uVar25;
    *(undefined4 *)(uVar21 + 7) = uVar15;
    if ((ulong)((long)((ulong)*(uint *)(uVar21 + 3) << 0x20) >> 0x21) < 2) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(0,0x1407584);
      (*pcVar5)();
    }
    *(undefined4 *)(uVar21 + 0xb) = uVar15;
    if ((ulong)((long)((ulong)*(uint *)(uVar21 + 3) << 0x20) >> 0x21) < 3) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(0,0x140758c);
      (*pcVar5)();
    }
    *(int *)(uVar21 + 0xf) = (int)lVar19 * 2;
    if ((ulong)((long)((ulong)*(uint *)(uVar21 + 3) << 0x20) >> 0x21) < 4) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(0,0x1407594);
      (*pcVar5)();
    }
    *(undefined4 *)(uVar21 + 0x13) = 2;
    if ((ulong)((long)((ulong)*(uint *)(uVar21 + 3) << 0x20) >> 0x21) < 5) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(0,0x140759c);
      (*pcVar5)();
    }
    *(undefined4 *)(uVar21 + 0x17) = uVar15;
    piVar24 = (int *)(uVar21 + 0x1b);
    piVar1 = (int *)(uVar21 + lVar26 + 7);
    if (piVar24 == piVar1) {
      iVar8 = (int)*(undefined8 *)(unaff_x26 + 0xa0);
    }
    else {
      iVar8 = (int)*(undefined8 *)(unaff_x26 + 0xa0);
      do {
        *piVar24 = iVar8;
        piVar24 = piVar24 + 1;
      } while (piVar24 != piVar1);
    }
    uVar23 = **(ulong **)(unaff_x26 + 0x1428);
    lVar19 = (ulong)*(byte *)(lVar18 + 3) * 4;
    uVar20 = uVar23 + lVar19;
    if (uVar20 < **(ulong **)(unaff_x26 + 0x1430)) {
      uVar23 = uVar23 + 1;
      **(ulong **)(unaff_x26 + 0x1428) = uVar20;
      uVar29 = uVar10;
    }
    else {
      uVar23 = FUN_01348560();
      uVar25 = 0;
      iVar8 = (int)*(undefined8 *)(unaff_x26 + 0xa0);
    }
    *(int *)(uVar23 - 1) = (int)lVar18;
    lVar19 = lVar19 + -1;
    *(int *)(uVar23 + 3) = (int)uVar21;
    *(int *)(uVar23 + 7) = (int)*(undefined8 *)(unaff_x26 + 0x168);
    while (lVar19 != 0xb) {
      lVar19 = lVar19 + -4;
      *(int *)(uVar23 + lVar19) = iVar8;
    }
    *(int *)(uVar22 + 0x17) = (int)uVar23;
    uVar10 = uVar25;
    if (((((uint)*(undefined8 *)((uVar22 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
        ((uVar23 & 1) != 0)) &&
       (((uint)*(undefined8 *)((unaff_x26 + (uVar23 & 0xffffffff) & 0xfffffffffffc0000) + 8) >> 1 &
        1) != 0)) {
      FUN_0133eb00(uVar22,uVar22 + 0x17,0,2);
      uVar16 = extraout_x8_01;
      uVar29 = extraout_x9_01;
      uVar25 = extraout_x10_01;
      lVar31 = extraout_x11_01;
      uVar10 = extraout_x10_01;
      uVar21 = extraout_x14_01;
    }
    while( true ) {
      uVar23 = (long)((ulong)*(uint *)(uVar16 + 3) << 0x20) >> 0x21;
      if (uVar23 <= uVar10) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0,0x14075ec);
        (*pcVar5)();
      }
      uVar20 = unaff_x26 + (ulong)*(uint *)(uVar16 + uVar10 * 4 + 7);
      uVar10 = uVar10 + 1;
      if (uVar23 <= uVar10) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0,0x14075f4);
        (*pcVar5)();
      }
      uVar23 = (long)(unaff_x26 + (ulong)*(uint *)(uVar16 + uVar10 * 4 + 7) << 0x20) >> 0x21;
      if ((ulong)((long)((ulong)*(uint *)(uVar29 + 3) << 0x20) >> 0x21) <= uVar23) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0,0x14075fc);
        (*pcVar5)();
      }
      uVar30 = iVar14 + *(int *)(uVar21 + 0xf);
      uVar9 = *(uint *)(uVar29 + uVar23 * 4 + 7);
      uVar23 = (long)((ulong)*(uint *)(uVar21 + 3) << 0x20) >> 0x21;
      if (uVar23 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0,0x1407604);
        (*pcVar5)();
      }
      uVar11 = iVar14 + *(int *)(uVar21 + 7) + 2;
      if (uVar30 < uVar11 + (uVar11 >> 1 & 0xfffffffe)) break;
      if (uVar23 < 2) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0,0x140760c);
        (*pcVar5)();
      }
      if ((uVar30 - uVar11 >> 1 & 0xfffffffe) < (uint)(iVar14 + *(int *)(uVar21 + 0xb))) break;
      if (uVar23 < 4) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0,0x1407614);
        (*pcVar5)();
      }
      iVar27 = iVar14 + *(int *)(uVar21 + 0x13);
      uVar30 = iVar27 + 2;
      if (0xfffffe < uVar30) break;
      *(uint *)(uVar21 + 0x13) = uVar30;
      if ((long)((ulong)*(uint *)(uVar21 + 3) << 0x20) >> 0x21 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0,0x1407624);
        (*pcVar5)();
      }
      *(uint *)(uVar21 + 7) = uVar11;
      uVar28 = (ulong)(*(uint *)(uVar20 + 3) >> 3);
      uVar23 = uVar25;
      while( true ) {
        uVar28 = uVar28 & ((long)(unaff_x26 + (ulong)*(uint *)(uVar21 + 0xf) << 0x20) >> 0x21) - 1U;
        lVar17 = uVar28 * 3;
        lVar18 = (lVar17 + 5U) * 4;
        lVar19 = lVar18 + 7;
        if ((*(int *)(uVar21 + lVar19) == iVar8) ||
           (*(int *)(uVar21 + lVar19) == (int)*(undefined8 *)(unaff_x26 + 0xa8))) break;
        uVar23 = uVar23 + 1;
        uVar28 = uVar28 + uVar23;
      }
      if ((ulong)((long)((ulong)*(uint *)(uVar21 + 3) << 0x20) >> 0x21) <= lVar17 + 5U) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0,0x140762c);
        (*pcVar5)();
      }
      *(int *)(uVar21 + lVar19) = (int)uVar20;
      if (((((uint)*(undefined8 *)((uVar21 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
          ((uVar20 & 1) != 0)) &&
         (uVar20 = unaff_x26 + (uVar20 & 0xffffffff),
         ((uint)*(undefined8 *)((uVar20 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
        FUN_0133eb00(uVar21,uVar21 + lVar19,0,2);
        uVar16 = extraout_x8_00;
        uVar29 = extraout_x9_00;
        uVar25 = extraout_x10_00;
        lVar31 = extraout_x11_00;
        uVar10 = extraout_x12_00;
        uVar21 = extraout_x14_00;
        uVar20 = extraout_x15_00;
        uVar9 = extraout_w13;
      }
      if ((ulong)((long)((ulong)*(uint *)(uVar21 + 3) << 0x20) >> 0x21) <= lVar17 + 6U) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0,0x1407634);
        (*pcVar5)();
      }
      *(uint *)(uVar21 + lVar18 + 0xb) = uVar9;
      if (((((uint)*(undefined8 *)((uVar21 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
          ((uVar9 & 1) != 0)) &&
         (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar9 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0
         )) {
        FUN_0133eb00(uVar21,uVar21 + lVar18 + 0xb,0,2);
        uVar16 = extraout_x8;
        uVar29 = extraout_x9;
        uVar25 = extraout_x10;
        lVar31 = extraout_x11;
        uVar10 = extraout_x12;
        uVar21 = extraout_x14;
        uVar20 = extraout_x15;
      }
      uVar30 = iVar27 * 0x100;
      uVar9 = uVar30 | 0x180;
      if ((*(int *)(uVar20 - 1) == (int)*(undefined8 *)(unaff_x26 + 0xf8)) &&
         ((*(uint *)(uVar20 + 7) & 1) != 0)) {
        uVar9 = uVar30 | 0x1a0;
      }
      if ((ulong)((long)((ulong)*(uint *)(uVar21 + 3) << 0x20) >> 0x21) <= lVar17 + 7U) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0,0x140763c);
        (*pcVar5)();
      }
      *(uint *)(uVar21 + lVar18 + 0xf) = uVar9;
      uVar10 = uVar10 + 1;
      if (lVar31 <= (long)uVar10) {
        return uVar22;
      }
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(0,0x1407644);
    (*pcVar5)();
  }
  if (bVar7) {
    *(undefined4 *)(param_1 + 0x17) = 0;
  }
LAB_0140701c:
  return *(ulong *)(unaff_x26 + 0xb0);
}

