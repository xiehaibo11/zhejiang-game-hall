
void FUN_014551e0(ulong param_1)

{
  int *piVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  bool bVar7;
  int iVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 extraout_x10;
  long lVar17;
  ulong extraout_x11;
  ulong extraout_x11_00;
  ulong *puVar18;
  ulong uVar19;
  uint *puVar20;
  long lVar21;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x26;
  long unaff_x29;
  undefined8 uVar22;
  
  lVar10 = unaff_x26 +
           (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(*(long *)(unaff_x29 + -0x10) + 0x13) + 3);
  if (*(int *)(lVar10 + -1) != (int)*(undefined8 *)(unaff_x26 + 0x158)) {
    lVar10 = *(long *)(unaff_x26 + 0xa0);
  }
  iVar12 = (int)*(undefined8 *)(unaff_x26 + 0xa0);
  iVar8 = (int)unaff_x19;
  if ((((int)lVar10 != iVar12) && ((*(byte *)(unaff_x20 + unaff_x19 + 5) >> 5 & 1) != 0)) &&
     (uVar3 = unaff_x26 +
              (ulong)*(uint *)(lVar10 + (ulong)*(ushort *)(unaff_x20 + unaff_x19 + 3) * 4 + 0x1f),
     (uVar3 & 1) != 0)) {
    lVar10 = unaff_x26 + (ulong)*(uint *)(uVar3 + 3);
    lVar11 = unaff_x26 + (ulong)*(uint *)(lVar10 + -1);
    if ((*(uint *)(lVar11 + 0xb) >> 0x18 & 1) == 0) {
      if ((*(uint *)(lVar11 + 0xb) >> 0x15 & 1) == 0) {
        uVar15 = unaff_x26 + (ulong)*(uint *)(lVar10 + 3);
        iVar12 = (int)uVar15;
        if ((uVar15 & 1) == 0) {
          iVar12 = (int)*(undefined8 *)(unaff_x26 + 0x168);
        }
        uVar13 = *(ulong *)(unaff_x26 + 0x168);
        if (iVar12 == (int)uVar13) {
LAB_014553e4:
          uVar14 = unaff_x26 + (ulong)*(uint *)(lVar10 + 7);
          uVar15 = uVar14;
          if ((int)uVar14 != (int)*(undefined8 *)(unaff_x26 + 0x168)) {
            uVar5 = *(uint *)(uVar14 - 1);
            iVar12 = (int)unaff_x26 + *(int *)(uVar14 + 3) >> 1;
            lVar17 = (long)iVar12;
            if (lVar17 == 0) {
              uVar15 = *(ulong *)(unaff_x26 + 0x168);
            }
            else if (uVar5 == (uint)*(undefined8 *)(unaff_x26 + 0x1e8)) {
              if (0x3fffffe < lVar17) {
                *(int *)(unaff_x29 + -0x20) = (iVar8 + -1) * 2;
                    /* WARNING: Subroutine does not return */
                FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
              }
              if (0x3fffffff < lVar17 * 8 + 8U) {
                *(int *)(unaff_x29 + -0x20) = (iVar8 + -1) * 2;
                    /* WARNING: Subroutine does not return */
                FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fc8));
              }
              uVar19 = (ulong)(uint)(iVar12 * 2);
              puVar18 = *(ulong **)(unaff_x26 + 0x1428);
              puVar20 = (uint *)*puVar18;
              if ((uint *)puVar18[1] <= puVar20 + lVar17 * 2 + 2) {
                *(int *)(unaff_x29 + -0x20) = (iVar8 + -1) * 2;
                    /* WARNING: Subroutine does not return */
                FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x1f88));
              }
              uVar15 = (long)puVar20 + 1;
              *puVar18 = (ulong)(puVar20 + lVar17 * 2 + 2);
              *puVar20 = uVar5;
              if ((((uint)*(undefined8 *)((uVar15 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                 (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar5 & 0xfffffffffffc0000) + 8) >> 1 &
                  1) != 0)) {
                FUN_0133eb00(uVar15,puVar20,2,2);
                uVar15 = extraout_x11_00;
              }
              *(int *)(uVar15 + 3) = (int)uVar19;
              *(undefined8 *)(unaff_x26 + 0x40) = 0x145558c;
              *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
              param_1 = (**(code **)(unaff_x26 + 0x11d0))
                                  (uVar15 + 7,uVar14 + 7,lVar17 * 8,unaff_x29,uVar14,uVar19);
              *(undefined8 *)(unaff_x26 + 0x38) = 0;
            }
            else if (uVar5 != (uint)*(undefined8 *)(unaff_x26 + 0xe8)) {
              if (0x7fffffd < lVar17) {
                *(int *)(unaff_x29 + -0x20) = (iVar8 + -1) * 2;
                    /* WARNING: Subroutine does not return */
                FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
              }
              uVar19 = **(ulong **)(unaff_x26 + 0x1428);
              uVar15 = uVar19 + lVar17 * 4 + 8;
              if (uVar15 < **(ulong **)(unaff_x26 + 0x1430)) {
                **(ulong **)(unaff_x26 + 0x1428) = uVar15;
                uVar15 = uVar19 + 1;
              }
              else {
                param_1 = FUN_01348560();
                uVar15 = param_1;
              }
              *(uint *)(uVar15 - 1) = uVar5;
              *(int *)(uVar15 + 3) = iVar12 * 2;
              if (((uint)*(undefined8 *)((uVar15 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
                *(undefined8 *)(unaff_x26 + 0x40) = 0x14554c4;
                *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
                param_1 = (**(code **)(unaff_x26 + 0x11d0))(uVar15 + 7,uVar14 + 7);
                *(undefined8 *)(unaff_x26 + 0x38) = 0;
              }
              else {
                lVar17 = lVar17 * 4 + 7;
                if (lVar17 != 7) {
                  lVar21 = 7;
                  do {
                    lVar2 = lVar21 + 4;
                    *(undefined4 *)(uVar15 + lVar21) = *(undefined4 *)(uVar14 + lVar21);
                    lVar21 = lVar2;
                  } while (lVar2 != lVar17);
                }
              }
            }
          }
          bVar6 = *(byte *)(lVar11 + 3);
          uVar19 = **(ulong **)(unaff_x26 + 0x1428);
          lVar17 = (ulong)bVar6 * 4;
          uVar14 = uVar19 + lVar17 + 8;
          if (uVar14 < **(ulong **)(unaff_x26 + 0x1430)) {
            **(ulong **)(unaff_x26 + 0x1428) = uVar14;
            uVar14 = uVar19 + 1;
          }
          else {
            param_1 = FUN_01348560();
            uVar14 = param_1;
          }
          *(int *)(uVar14 - 1) = (int)lVar11;
          *(int *)(uVar14 + 3) = (int)uVar13;
          *(int *)(uVar14 + 7) = (int)uVar15;
          *(int *)(uVar14 + lVar17 + -1) = (int)*(undefined8 *)(unaff_x26 + 0xcd8);
          *(int *)(uVar14 + lVar17 + 3) = (int)uVar3;
          *(int *)(uVar3 + 0x13) = *(int *)(uVar3 + 0x13) + 1;
          if ((ulong)bVar6 != 3) {
            lVar11 = 0xc;
            do {
              uVar3 = unaff_x26 + (ulong)*(uint *)(lVar10 + lVar11 + -1);
              if (((uVar3 & 1) != 0) &&
                 (uVar16 = *(undefined8 *)(unaff_x26 + 0x140), *(int *)(uVar3 - 1) == (int)uVar16))
              {
                lVar21 = lVar11;
                if (lVar11 == lVar17) {
                  bVar7 = true;
                }
                else {
                  do {
                    lVar2 = lVar21 + 4;
                    *(undefined4 *)(uVar14 + lVar21 + -1) = *(undefined4 *)(lVar10 + lVar21 + -1);
                    lVar21 = lVar2;
                  } while (lVar2 != lVar17);
                  bVar7 = false;
                }
                if (!bVar7) {
                  do {
                    lVar10 = lVar11 + -1;
                    uVar3 = unaff_x26 + (ulong)*(uint *)(uVar14 + lVar10);
                    if (((uVar3 & 1) != 0) && (*(int *)(uVar3 - 1) == (int)uVar16)) {
                      uVar15 = **(ulong **)(unaff_x26 + 0x1428);
                      uVar22 = *(undefined8 *)(uVar3 + 3);
                      uVar3 = uVar15 + 0xc;
                      if (uVar3 < **(ulong **)(unaff_x26 + 0x1430)) {
                        param_1 = uVar15 + 1;
                        **(ulong **)(unaff_x26 + 0x1428) = uVar3;
                      }
                      else {
                        param_1 = FUN_01348560(param_1);
                      }
                      uVar16 = *(undefined8 *)(unaff_x26 + 0x140);
                      *(int *)(param_1 - 1) = (int)uVar16;
                      *(undefined8 *)(param_1 + 3) = uVar22;
                      *(int *)(uVar14 + lVar10) = (int)param_1;
                      if (((((uint)*(undefined8 *)((uVar14 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0
                           ) && ((param_1 & 1) != 0)) &&
                         (param_1 = unaff_x26 + (param_1 & 0xffffffff),
                         ((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0))
                      {
                        FUN_0133eb00(uVar14,uVar14 + lVar10,0,2);
                        uVar16 = extraout_x10;
                        uVar14 = extraout_x11;
                      }
                    }
                    lVar11 = lVar11 + 4;
                  } while (lVar11 != lVar17);
                }
                break;
              }
              *(int *)(uVar14 + lVar11 + -1) = (int)uVar3;
              lVar11 = lVar11 + 4;
            } while (lVar11 != lVar17);
          }
                    /* WARNING: Could not recover jumptable at 0x0145570c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(unaff_x21 +
                      (ulong)*(byte *)(*(long *)(unaff_x29 + -0x18) + unaff_x19 + 6) * 8))(uVar14);
          return;
        }
      }
      else {
        uVar15 = unaff_x26 + (ulong)*(uint *)(lVar10 + 3);
        if ((uVar15 & 1) == 0) {
          uVar15 = *(ulong *)(unaff_x26 + 0x410);
        }
        iVar4 = (int)unaff_x26 + *(int *)(uVar15 + 0xf) >> 1;
        if ((ulong)(long)iVar4 < 0x1001) {
          uVar14 = **(ulong **)(unaff_x26 + 0x1428);
          lVar17 = (long)iVar4 * 3 + 5;
          lVar21 = lVar17 * 4;
          uVar13 = uVar14 + lVar21 + 8;
          if (uVar13 < **(ulong **)(unaff_x26 + 0x1430)) {
            **(ulong **)(unaff_x26 + 0x1428) = uVar13;
            uVar13 = uVar14 + 1;
          }
          else {
            param_1 = FUN_01348560();
            iVar12 = (int)*(undefined8 *)(unaff_x26 + 0xa0);
            uVar13 = param_1;
          }
          *(int *)(uVar13 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x208);
          *(int *)(uVar13 + 3) = (int)lVar17 * 2;
          if ((long)((ulong)*(uint *)(uVar13 + 3) << 0x20) >> 0x21 == 0) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(0,0x1455760);
            (*pcVar9)();
          }
          *(undefined4 *)(uVar13 + 7) = 0;
          if ((ulong)((long)((ulong)*(uint *)(uVar13 + 3) << 0x20) >> 0x21) < 2) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(0,0x1455768);
            (*pcVar9)();
          }
          *(undefined4 *)(uVar13 + 0xb) = 0;
          if ((ulong)((long)((ulong)*(uint *)(uVar13 + 3) << 0x20) >> 0x21) < 3) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(0,0x1455770);
            (*pcVar9)();
          }
          *(int *)(uVar13 + 0xf) = iVar4 * 2;
          if ((ulong)((long)((ulong)*(uint *)(uVar13 + 3) << 0x20) >> 0x21) < 4) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(0,0x1455778);
            (*pcVar9)();
          }
          *(undefined4 *)(uVar13 + 0x13) = 2;
          if ((ulong)((long)((ulong)*(uint *)(uVar13 + 3) << 0x20) >> 0x21) < 5) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(0,0x1455780);
            (*pcVar9)();
          }
          *(undefined4 *)(uVar13 + 0x17) = 0;
          for (piVar1 = (int *)(uVar13 + 0x1b); piVar1 != (int *)(uVar13 + lVar21 + 7);
              piVar1 = piVar1 + 1) {
            *piVar1 = iVar12;
          }
          lVar17 = ((long)(unaff_x26 + (ulong)*(uint *)(uVar15 + 3) << 0x20) >> 0x21) * 4 + 7;
          while (lVar17 != 7) {
            lVar17 = lVar17 + -4;
            *(undefined4 *)(uVar13 + lVar17) = *(undefined4 *)(uVar15 + lVar17);
          }
          goto LAB_014553e4;
        }
      }
    }
  }
  *(int *)(unaff_x29 + -0x20) = (iVar8 + -1) * 2;
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(4,*(undefined8 *)(unaff_x26 + 0x2118));
}

