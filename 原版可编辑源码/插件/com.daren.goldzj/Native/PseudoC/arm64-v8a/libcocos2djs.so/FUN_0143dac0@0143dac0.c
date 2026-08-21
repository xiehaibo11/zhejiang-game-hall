
void FUN_0143dac0(ulong param_1)

{
  int *piVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  bool bVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 extraout_x10;
  long lVar16;
  ulong extraout_x11;
  ulong extraout_x11_00;
  ulong *puVar17;
  ulong uVar18;
  uint *puVar19;
  long lVar20;
  int iVar21;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x26;
  long unaff_x29;
  undefined8 uVar22;
  
  lVar9 = unaff_x26 +
          (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(*(long *)(unaff_x29 + -0x10) + 0x13) + 3);
  if (*(int *)(lVar9 + -1) != (int)*(undefined8 *)(unaff_x26 + 0x158)) {
    lVar9 = *(long *)(unaff_x26 + 0xa0);
  }
  iVar11 = (int)*(undefined8 *)(unaff_x26 + 0xa0);
  iVar21 = (int)unaff_x19;
  if ((((int)lVar9 != iVar11) && ((*(byte *)(unaff_x20 + unaff_x19 + 3) >> 5 & 1) != 0)) &&
     (uVar3 = unaff_x26 +
              (ulong)*(uint *)(lVar9 + (ulong)*(byte *)(unaff_x20 + unaff_x19 + 2) * 4 + 0x1f),
     (uVar3 & 1) != 0)) {
    lVar9 = unaff_x26 + (ulong)*(uint *)(uVar3 + 3);
    lVar10 = unaff_x26 + (ulong)*(uint *)(lVar9 + -1);
    if ((*(uint *)(lVar10 + 0xb) >> 0x18 & 1) == 0) {
      if ((*(uint *)(lVar10 + 0xb) >> 0x15 & 1) == 0) {
        uVar14 = unaff_x26 + (ulong)*(uint *)(lVar9 + 3);
        iVar11 = (int)uVar14;
        if ((uVar14 & 1) == 0) {
          iVar11 = (int)*(undefined8 *)(unaff_x26 + 0x168);
        }
        uVar12 = *(ulong *)(unaff_x26 + 0x168);
        if (iVar11 == (int)uVar12) {
LAB_0143dcc4:
          uVar13 = unaff_x26 + (ulong)*(uint *)(lVar9 + 7);
          uVar14 = uVar13;
          if ((int)uVar13 != (int)*(undefined8 *)(unaff_x26 + 0x168)) {
            uVar5 = *(uint *)(uVar13 - 1);
            iVar11 = (int)unaff_x26 + *(int *)(uVar13 + 3) >> 1;
            lVar16 = (long)iVar11;
            if (lVar16 == 0) {
              uVar14 = *(ulong *)(unaff_x26 + 0x168);
            }
            else if (uVar5 == (uint)*(undefined8 *)(unaff_x26 + 0x1e8)) {
              if (0x3fffffe < lVar16) {
                *(int *)(unaff_x29 + -0x20) = iVar21 * 2;
                    /* WARNING: Subroutine does not return */
                FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
              }
              if (0x3fffffff < lVar16 * 8 + 8U) {
                *(int *)(unaff_x29 + -0x20) = iVar21 * 2;
                    /* WARNING: Subroutine does not return */
                FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fc8));
              }
              uVar18 = (ulong)(uint)(iVar11 * 2);
              puVar17 = *(ulong **)(unaff_x26 + 0x1428);
              puVar19 = (uint *)*puVar17;
              if ((uint *)puVar17[1] <= puVar19 + lVar16 * 2 + 2) {
                *(int *)(unaff_x29 + -0x20) = iVar21 * 2;
                    /* WARNING: Subroutine does not return */
                FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x1f88));
              }
              uVar14 = (long)puVar19 + 1;
              *puVar17 = (ulong)(puVar19 + lVar16 * 2 + 2);
              *puVar19 = uVar5;
              if ((((uint)*(undefined8 *)((uVar14 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                 (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar5 & 0xfffffffffffc0000) + 8) >> 1 &
                  1) != 0)) {
                FUN_0133eb00(uVar14,puVar19,2,2);
                uVar14 = extraout_x11_00;
              }
              *(int *)(uVar14 + 3) = (int)uVar18;
              *(undefined8 *)(unaff_x26 + 0x40) = 0x143de6c;
              *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
              param_1 = (**(code **)(unaff_x26 + 0x11d0))
                                  (uVar14 + 7,uVar13 + 7,lVar16 * 8,unaff_x29,uVar13,uVar18);
              *(undefined8 *)(unaff_x26 + 0x38) = 0;
            }
            else if (uVar5 != (uint)*(undefined8 *)(unaff_x26 + 0xe8)) {
              if (0x7fffffd < lVar16) {
                *(int *)(unaff_x29 + -0x20) = iVar21 * 2;
                    /* WARNING: Subroutine does not return */
                FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
              }
              uVar18 = **(ulong **)(unaff_x26 + 0x1428);
              uVar14 = uVar18 + lVar16 * 4 + 8;
              if (uVar14 < **(ulong **)(unaff_x26 + 0x1430)) {
                **(ulong **)(unaff_x26 + 0x1428) = uVar14;
                uVar14 = uVar18 + 1;
              }
              else {
                param_1 = FUN_01348560();
                uVar14 = param_1;
              }
              *(uint *)(uVar14 - 1) = uVar5;
              *(int *)(uVar14 + 3) = iVar11 * 2;
              if (((uint)*(undefined8 *)((uVar14 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
                *(undefined8 *)(unaff_x26 + 0x40) = 0x143dda4;
                *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
                param_1 = (**(code **)(unaff_x26 + 0x11d0))(uVar14 + 7,uVar13 + 7);
                *(undefined8 *)(unaff_x26 + 0x38) = 0;
              }
              else {
                lVar16 = lVar16 * 4 + 7;
                if (lVar16 != 7) {
                  lVar20 = 7;
                  do {
                    lVar2 = lVar20 + 4;
                    *(undefined4 *)(uVar14 + lVar20) = *(undefined4 *)(uVar13 + lVar20);
                    lVar20 = lVar2;
                  } while (lVar2 != lVar16);
                }
              }
            }
          }
          bVar6 = *(byte *)(lVar10 + 3);
          uVar18 = **(ulong **)(unaff_x26 + 0x1428);
          lVar16 = (ulong)bVar6 * 4;
          uVar13 = uVar18 + lVar16 + 8;
          if (uVar13 < **(ulong **)(unaff_x26 + 0x1430)) {
            **(ulong **)(unaff_x26 + 0x1428) = uVar13;
            uVar13 = uVar18 + 1;
          }
          else {
            param_1 = FUN_01348560();
            uVar13 = param_1;
          }
          *(int *)(uVar13 - 1) = (int)lVar10;
          *(int *)(uVar13 + 3) = (int)uVar12;
          *(int *)(uVar13 + 7) = (int)uVar14;
          *(int *)(uVar13 + lVar16 + -1) = (int)*(undefined8 *)(unaff_x26 + 0xcd8);
          *(int *)(uVar13 + lVar16 + 3) = (int)uVar3;
          *(int *)(uVar3 + 0x13) = *(int *)(uVar3 + 0x13) + 1;
          if ((ulong)bVar6 != 3) {
            lVar10 = 0xc;
            do {
              uVar3 = unaff_x26 + (ulong)*(uint *)(lVar9 + lVar10 + -1);
              if (((uVar3 & 1) != 0) &&
                 (uVar15 = *(undefined8 *)(unaff_x26 + 0x140), *(int *)(uVar3 - 1) == (int)uVar15))
              {
                lVar20 = lVar10;
                if (lVar10 == lVar16) {
                  bVar7 = true;
                }
                else {
                  do {
                    lVar2 = lVar20 + 4;
                    *(undefined4 *)(uVar13 + lVar20 + -1) = *(undefined4 *)(lVar9 + lVar20 + -1);
                    lVar20 = lVar2;
                  } while (lVar2 != lVar16);
                  bVar7 = false;
                }
                if (!bVar7) {
                  do {
                    lVar9 = lVar10 + -1;
                    uVar3 = unaff_x26 + (ulong)*(uint *)(uVar13 + lVar9);
                    if (((uVar3 & 1) != 0) && (*(int *)(uVar3 - 1) == (int)uVar15)) {
                      uVar14 = **(ulong **)(unaff_x26 + 0x1428);
                      uVar22 = *(undefined8 *)(uVar3 + 3);
                      uVar3 = uVar14 + 0xc;
                      if (uVar3 < **(ulong **)(unaff_x26 + 0x1430)) {
                        param_1 = uVar14 + 1;
                        **(ulong **)(unaff_x26 + 0x1428) = uVar3;
                      }
                      else {
                        param_1 = FUN_01348560(param_1);
                      }
                      uVar15 = *(undefined8 *)(unaff_x26 + 0x140);
                      *(int *)(param_1 - 1) = (int)uVar15;
                      *(undefined8 *)(param_1 + 3) = uVar22;
                      *(int *)(uVar13 + lVar9) = (int)param_1;
                      if (((((uint)*(undefined8 *)((uVar13 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0
                           ) && ((param_1 & 1) != 0)) &&
                         (param_1 = unaff_x26 + (param_1 & 0xffffffff),
                         ((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0))
                      {
                        FUN_0133eb00(uVar13,uVar13 + lVar9,0,2);
                        uVar15 = extraout_x10;
                        uVar13 = extraout_x11;
                      }
                    }
                    lVar10 = lVar10 + 4;
                  } while (lVar10 != lVar16);
                }
                break;
              }
              *(int *)(uVar13 + lVar10 + -1) = (int)uVar3;
              lVar10 = lVar10 + 4;
            } while (lVar10 != lVar16);
          }
                    /* WARNING: Could not recover jumptable at 0x0143dfec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(unaff_x21 +
                      (ulong)*(byte *)(*(long *)(unaff_x29 + -0x18) + unaff_x19 + 4) * 8))(uVar13);
          return;
        }
      }
      else {
        uVar14 = unaff_x26 + (ulong)*(uint *)(lVar9 + 3);
        if ((uVar14 & 1) == 0) {
          uVar14 = *(ulong *)(unaff_x26 + 0x410);
        }
        iVar4 = (int)unaff_x26 + *(int *)(uVar14 + 0xf) >> 1;
        if ((ulong)(long)iVar4 < 0x1001) {
          uVar13 = **(ulong **)(unaff_x26 + 0x1428);
          lVar16 = (long)iVar4 * 3 + 5;
          lVar20 = lVar16 * 4;
          uVar12 = uVar13 + lVar20 + 8;
          if (uVar12 < **(ulong **)(unaff_x26 + 0x1430)) {
            **(ulong **)(unaff_x26 + 0x1428) = uVar12;
            uVar12 = uVar13 + 1;
          }
          else {
            param_1 = FUN_01348560();
            iVar11 = (int)*(undefined8 *)(unaff_x26 + 0xa0);
            uVar12 = param_1;
          }
          *(int *)(uVar12 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x208);
          *(int *)(uVar12 + 3) = (int)lVar16 * 2;
          if ((long)((ulong)*(uint *)(uVar12 + 3) << 0x20) >> 0x21 == 0) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(0,0x143e040);
            (*pcVar8)();
          }
          *(undefined4 *)(uVar12 + 7) = 0;
          if ((ulong)((long)((ulong)*(uint *)(uVar12 + 3) << 0x20) >> 0x21) < 2) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(0,0x143e048);
            (*pcVar8)();
          }
          *(undefined4 *)(uVar12 + 0xb) = 0;
          if ((ulong)((long)((ulong)*(uint *)(uVar12 + 3) << 0x20) >> 0x21) < 3) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(0,0x143e050);
            (*pcVar8)();
          }
          *(int *)(uVar12 + 0xf) = iVar4 * 2;
          if ((ulong)((long)((ulong)*(uint *)(uVar12 + 3) << 0x20) >> 0x21) < 4) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(0,0x143e058);
            (*pcVar8)();
          }
          *(undefined4 *)(uVar12 + 0x13) = 2;
          if ((ulong)((long)((ulong)*(uint *)(uVar12 + 3) << 0x20) >> 0x21) < 5) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(0,0x143e060);
            (*pcVar8)();
          }
          *(undefined4 *)(uVar12 + 0x17) = 0;
          for (piVar1 = (int *)(uVar12 + 0x1b); piVar1 != (int *)(uVar12 + lVar20 + 7);
              piVar1 = piVar1 + 1) {
            *piVar1 = iVar11;
          }
          lVar16 = ((long)(unaff_x26 + (ulong)*(uint *)(uVar14 + 3) << 0x20) >> 0x21) * 4 + 7;
          while (lVar16 != 7) {
            lVar16 = lVar16 + -4;
            *(undefined4 *)(uVar12 + lVar16) = *(undefined4 *)(uVar14 + lVar16);
          }
          goto LAB_0143dcc4;
        }
      }
    }
  }
  *(int *)(unaff_x29 + -0x20) = iVar21 * 2;
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(4,*(undefined8 *)(unaff_x26 + 0x2118));
}

