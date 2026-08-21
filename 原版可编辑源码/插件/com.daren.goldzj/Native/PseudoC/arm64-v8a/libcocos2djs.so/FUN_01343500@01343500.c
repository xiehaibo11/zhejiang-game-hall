
ulong FUN_01343500(ulong param_1,int param_2)

{
  long lVar1;
  ulong uVar2;
  undefined4 *puVar3;
  uint uVar4;
  byte bVar5;
  bool bVar6;
  code *pcVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  int extraout_w8;
  ulong uVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  undefined8 extraout_x9;
  long lVar16;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong *puVar17;
  long lVar18;
  ulong uVar19;
  uint *puVar20;
  long unaff_x26;
  undefined8 uVar21;
  
  uVar2 = unaff_x26 + (ulong)*(uint *)(param_1 + (long)(param_2 >> 1) * 4 + 0x1f);
  if ((uVar2 & 1) != 0) {
    lVar10 = unaff_x26 + (ulong)*(uint *)(uVar2 + 3);
    lVar8 = unaff_x26 + (ulong)*(uint *)(lVar10 + -1);
    if ((*(uint *)(lVar8 + 0xb) >> 0x18 & 1) == 0) {
      if ((*(uint *)(lVar8 + 0xb) >> 0x15 & 1) == 0) {
        uVar11 = unaff_x26 + (ulong)*(uint *)(lVar10 + 3);
        iVar12 = (int)uVar11;
        if ((uVar11 & 1) == 0) {
          iVar12 = (int)*(undefined8 *)(unaff_x26 + 0x168);
        }
        uVar13 = *(ulong *)(unaff_x26 + 0x168);
        if (iVar12 == (int)uVar13) {
LAB_013436b8:
          uVar9 = unaff_x26 + (ulong)*(uint *)(lVar10 + 7);
          uVar11 = uVar9;
          if ((int)uVar9 != (int)*(undefined8 *)(unaff_x26 + 0x168)) {
            uVar4 = *(uint *)(uVar9 - 1);
            iVar12 = (int)unaff_x26 + *(int *)(uVar9 + 3) >> 1;
            lVar16 = (long)iVar12;
            if (lVar16 == 0) {
              uVar11 = *(ulong *)(unaff_x26 + 0x168);
            }
            else if (uVar4 == (uint)*(undefined8 *)(unaff_x26 + 0x1e8)) {
              if (0x3fffffe < lVar16) {
                    /* WARNING: Subroutine does not return */
                FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
              }
              if (0x3fffffff < lVar16 * 8 + 8U) {
                    /* WARNING: Subroutine does not return */
                FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fc8));
              }
              iVar12 = iVar12 * 2;
              puVar17 = *(ulong **)(unaff_x26 + 0x1428);
              puVar20 = (uint *)*puVar17;
              if ((uint *)puVar17[1] <= puVar20 + lVar16 * 2 + 2) {
                    /* WARNING: Subroutine does not return */
                FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x1f88));
              }
              uVar11 = (long)puVar20 + 1;
              *puVar17 = (ulong)(puVar20 + lVar16 * 2 + 2);
              *puVar20 = uVar4;
              if ((((uint)*(undefined8 *)((uVar11 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                 (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar4 & 0xfffffffffffc0000) + 8) >> 1 &
                  1) != 0)) {
                FUN_0133eb00(uVar11,puVar20,2,2);
                uVar11 = extraout_x10_00;
                iVar12 = extraout_w8;
              }
              *(int *)(uVar11 + 3) = iVar12;
              *(undefined8 *)(unaff_x26 + 0x40) = 0x1343854;
              *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
              param_1 = (**(code **)(unaff_x26 + 0x11d0))(uVar11 + 7,uVar9 + 7);
              *(undefined8 *)(unaff_x26 + 0x38) = 0;
            }
            else if (uVar4 != (uint)*(undefined8 *)(unaff_x26 + 0xe8)) {
              if (0x7fffffd < lVar16) {
                    /* WARNING: Subroutine does not return */
                FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
              }
              uVar19 = **(ulong **)(unaff_x26 + 0x1428);
              uVar11 = uVar19 + lVar16 * 4 + 8;
              if (uVar11 < **(ulong **)(unaff_x26 + 0x1430)) {
                **(ulong **)(unaff_x26 + 0x1428) = uVar11;
                uVar11 = uVar19 + 1;
              }
              else {
                param_1 = FUN_01348560();
                uVar11 = param_1;
              }
              *(uint *)(uVar11 - 1) = uVar4;
              *(int *)(uVar11 + 3) = iVar12 * 2;
              if (((uint)*(undefined8 *)((uVar11 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
                *(undefined8 *)(unaff_x26 + 0x40) = 0x1343798;
                *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
                param_1 = (**(code **)(unaff_x26 + 0x11d0))(uVar11 + 7,uVar9 + 7);
                *(undefined8 *)(unaff_x26 + 0x38) = 0;
              }
              else {
                lVar16 = lVar16 * 4 + 7;
                if (lVar16 != 7) {
                  lVar18 = 7;
                  do {
                    lVar1 = lVar18 + 4;
                    *(undefined4 *)(uVar11 + lVar18) = *(undefined4 *)(uVar9 + lVar18);
                    lVar18 = lVar1;
                  } while (lVar1 != lVar16);
                }
              }
            }
          }
          bVar5 = *(byte *)(lVar8 + 3);
          uVar19 = **(ulong **)(unaff_x26 + 0x1428);
          lVar16 = (ulong)bVar5 * 4;
          uVar9 = uVar19 + lVar16 + 8;
          if (uVar9 < **(ulong **)(unaff_x26 + 0x1430)) {
            **(ulong **)(unaff_x26 + 0x1428) = uVar9;
            uVar9 = uVar19 + 1;
          }
          else {
            param_1 = FUN_01348560();
            uVar9 = param_1;
          }
          *(int *)(uVar9 - 1) = (int)lVar8;
          *(int *)(uVar9 + 3) = (int)uVar13;
          *(int *)(uVar9 + 7) = (int)uVar11;
          *(int *)(uVar9 + lVar16 + -1) = (int)*(undefined8 *)(unaff_x26 + 0xcd8);
          *(int *)(uVar9 + lVar16 + 3) = (int)uVar2;
          *(int *)(uVar2 + 0x13) = *(int *)(uVar2 + 0x13) + 1;
          if ((ulong)bVar5 != 3) {
            lVar8 = 0xc;
            do {
              uVar2 = unaff_x26 + (ulong)*(uint *)(lVar10 + lVar8 + -1);
              if (((uVar2 & 1) != 0) &&
                 (uVar15 = *(undefined8 *)(unaff_x26 + 0x140), *(int *)(uVar2 - 1) == (int)uVar15))
              {
                lVar18 = lVar8;
                if (lVar8 == lVar16) {
                  bVar6 = true;
                }
                else {
                  do {
                    lVar1 = lVar18 + 4;
                    *(undefined4 *)(uVar9 + lVar18 + -1) = *(undefined4 *)(lVar10 + lVar18 + -1);
                    lVar18 = lVar1;
                  } while (lVar1 != lVar16);
                  bVar6 = false;
                }
                if (bVar6) {
                  return uVar9;
                }
                do {
                  lVar10 = lVar8 + -1;
                  uVar2 = unaff_x26 + (ulong)*(uint *)(uVar9 + lVar10);
                  if (((uVar2 & 1) != 0) && (*(int *)(uVar2 - 1) == (int)uVar15)) {
                    uVar11 = **(ulong **)(unaff_x26 + 0x1428);
                    uVar21 = *(undefined8 *)(uVar2 + 3);
                    uVar2 = uVar11 + 0xc;
                    if (uVar2 < **(ulong **)(unaff_x26 + 0x1430)) {
                      param_1 = uVar11 + 1;
                      **(ulong **)(unaff_x26 + 0x1428) = uVar2;
                    }
                    else {
                      param_1 = FUN_01348560(param_1);
                    }
                    uVar15 = *(undefined8 *)(unaff_x26 + 0x140);
                    *(int *)(param_1 - 1) = (int)uVar15;
                    *(undefined8 *)(param_1 + 3) = uVar21;
                    *(int *)(uVar9 + lVar10) = (int)param_1;
                    if (((((uint)*(undefined8 *)((uVar9 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0)
                        && ((param_1 & 1) != 0)) &&
                       (param_1 = unaff_x26 + (param_1 & 0xffffffff),
                       ((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
                      FUN_0133eb00(uVar9,uVar9 + lVar10,0,2);
                      uVar15 = extraout_x9;
                      uVar9 = extraout_x10;
                    }
                  }
                  lVar8 = lVar8 + 4;
                } while (lVar8 != lVar16);
                return uVar9;
              }
              *(int *)(uVar9 + lVar8 + -1) = (int)uVar2;
              lVar8 = lVar8 + 4;
            } while (lVar8 != lVar16);
          }
          return uVar9;
        }
      }
      else {
        uVar11 = unaff_x26 + (ulong)*(uint *)(lVar10 + 3);
        if ((uVar11 & 1) == 0) {
          uVar11 = *(ulong *)(unaff_x26 + 0x410);
        }
        iVar12 = (int)unaff_x26 + *(int *)(uVar11 + 0xf) >> 1;
        if ((ulong)(long)iVar12 < 0x1001) {
          uVar9 = **(ulong **)(unaff_x26 + 0x1428);
          lVar16 = (long)iVar12 * 3 + 5;
          lVar18 = lVar16 * 4;
          uVar13 = uVar9 + lVar18 + 8;
          if (uVar13 < **(ulong **)(unaff_x26 + 0x1430)) {
            **(ulong **)(unaff_x26 + 0x1428) = uVar13;
            uVar13 = uVar9 + 1;
          }
          else {
            param_1 = FUN_01348560();
            uVar13 = param_1;
          }
          *(int *)(uVar13 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x208);
          *(int *)(uVar13 + 3) = (int)lVar16 * 2;
          if ((long)((ulong)*(uint *)(uVar13 + 3) << 0x20) >> 0x21 == 0) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(0,0x1343a18);
            (*pcVar7)();
          }
          *(undefined4 *)(uVar13 + 7) = 0;
          if ((ulong)((long)((ulong)*(uint *)(uVar13 + 3) << 0x20) >> 0x21) < 2) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(0,0x1343a20);
            (*pcVar7)();
          }
          *(undefined4 *)(uVar13 + 0xb) = 0;
          if ((ulong)((long)((ulong)*(uint *)(uVar13 + 3) << 0x20) >> 0x21) < 3) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(0,0x1343a28);
            (*pcVar7)();
          }
          *(int *)(uVar13 + 0xf) = iVar12 * 2;
          if ((ulong)((long)((ulong)*(uint *)(uVar13 + 3) << 0x20) >> 0x21) < 4) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(0,0x1343a30);
            (*pcVar7)();
          }
          *(undefined4 *)(uVar13 + 0x13) = 2;
          if ((ulong)((long)((ulong)*(uint *)(uVar13 + 3) << 0x20) >> 0x21) < 5) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(0,0x1343a38);
            (*pcVar7)();
          }
          *(undefined4 *)(uVar13 + 0x17) = 0;
          puVar14 = (undefined4 *)(uVar13 + 0x1b);
          puVar3 = (undefined4 *)(uVar13 + lVar18 + 7);
          if (puVar14 != puVar3) {
            uVar15 = *(undefined8 *)(unaff_x26 + 0xa0);
            do {
              *puVar14 = (int)uVar15;
              puVar14 = puVar14 + 1;
            } while (puVar14 != puVar3);
          }
          lVar16 = ((long)(unaff_x26 + (ulong)*(uint *)(uVar11 + 3) << 0x20) >> 0x21) * 4 + 7;
          while (lVar16 != 7) {
            lVar16 = lVar16 + -4;
            *(undefined4 *)(uVar13 + lVar16) = *(undefined4 *)(uVar11 + lVar16);
          }
          goto LAB_013436b8;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(4,*(undefined8 *)(unaff_x26 + 0x2118));
}

