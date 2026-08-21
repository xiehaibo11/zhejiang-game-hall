
undefined8 FUN_013e8d20(ulong param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  bool bVar5;
  code *pcVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  undefined8 uVar13;
  ulong uVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  ulong *puVar18;
  undefined4 *puVar19;
  long unaff_x26;
  long unaff_x27;
  double dVar20;
  double unaff_d15;
  
  lVar10 = unaff_x26 + (ulong)*(uint *)(param_1 - 1);
  if ((((*(short *)(lVar10 + 7) == 0x423) && (*(byte *)(lVar10 + 10) >> 3 < 6)) &&
      (*(int *)(lVar10 + 0xf) ==
       *(int *)(unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13) +
               0xe7))) &&
     (((*(int *)(*(long *)(unaff_x26 + 0xea8) + 0xb) != 0 &&
       (iVar8 = (int)param_2, (param_2 & 1) == 0)) && (-1 < iVar8)))) {
    uVar11 = unaff_x26 + (ulong)*(uint *)(param_1 + 0xb);
    iVar9 = (int)uVar11;
    if (iVar8 <= iVar9) {
      lVar10 = unaff_x26 + (ulong)*(uint *)(param_1 + 7);
      iVar15 = (int)*(undefined8 *)(unaff_x26 + 0xe8);
      if (*(int *)(lVar10 + -1) == iVar15) {
        if ((uVar11 & 1) != 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(0,0x13e8f30);
          (*pcVar6)();
        }
        if (iVar9 == 0) {
          uVar7 = *(ulong *)(unaff_x26 + 0x168);
        }
        else {
          uVar13 = *(undefined8 *)(unaff_x26 + 0xe0);
          if (0xffffffa < iVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0),param_3,0);
          }
          uVar7 = (long)iVar9 * 2 + 8;
          uVar2 = **(long **)(unaff_x26 + 0x1428) + uVar7;
          if ((uVar2 < **(ulong **)(unaff_x26 + 0x1430)) && (uVar7 < 0x20000)) {
            uVar7 = **(long **)(unaff_x26 + 0x1428) + 1;
            **(ulong **)(unaff_x26 + 0x1428) = uVar2;
          }
          else {
            uVar7 = FUN_01348500(param_2,param_1,uVar7);
            iVar15 = (int)*(undefined8 *)(unaff_x26 + 0xe8);
          }
          *(int *)(uVar7 - 1) = (int)uVar13;
          *(int *)(uVar7 + 3) = iVar9;
          lVar17 = (long)(uVar11 << 0x20) >> 0x21;
          if (((uint)*(undefined8 *)((uVar7 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
            *(undefined8 *)(unaff_x26 + 0x40) = 0x13e8ec0;
            *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
            (**(code **)(unaff_x26 + 0x11d0))
                      (uVar7 + 7,lVar10 + 7,lVar17 << 2,param_1,0,param_2,param_3);
            *(undefined8 *)(unaff_x26 + 0x38) = 0;
            iVar15 = (int)*(undefined8 *)(unaff_x26 + 0xe8);
          }
          else {
            lVar17 = lVar17 * 4 + 7;
            if (lVar17 != 7) {
              lVar16 = 7;
              do {
                lVar1 = lVar16 + 4;
                *(undefined4 *)(uVar7 + lVar16) = *(undefined4 *)(lVar10 + lVar16);
                lVar16 = lVar1;
              } while (lVar1 != lVar17);
            }
          }
        }
        *(int *)(param_1 + 7) = (int)uVar7;
        if (((((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
            ((uVar7 & 1) != 0)) &&
           (((uint)*(undefined8 *)((unaff_x26 + (uVar7 & 0xffffffff) & 0xfffffffffffc0000) + 8) >> 1
            & 1) != 0)) {
          FUN_0133eb00(param_1,param_1 + 7,0,2);
        }
      }
      lVar10 = unaff_x26 + (ulong)*(uint *)(param_1 + 0xb);
      bVar4 = *(byte *)(unaff_x26 + (ulong)*(uint *)(param_1 - 1) + 10);
      iVar12 = (int)lVar10;
      iVar9 = (int)param_3;
      if (bVar4 >> 3 < 2) {
        if ((param_3 & 1) != 0) goto LAB_013e9454;
        if (iVar8 == iVar12) {
          uVar2 = unaff_x26 + (ulong)*(uint *)(param_1 + 7);
          uVar14 = (lVar10 << 0x20) >> 0x21;
          uVar7 = uVar14 + 1;
          lVar10 = (long)(unaff_x26 + (ulong)*(uint *)(uVar2 + 3) << 0x20) >> 0x21;
          uVar11 = uVar2;
          if (lVar10 < (long)uVar7) {
            uVar7 = uVar7 + (uVar7 >> 1) + 0x10;
            if (0x7ffd < uVar7) goto LAB_013e9454;
            if (0x7fffffd < (long)uVar7) {
                    /* WARNING: Subroutine does not return */
              FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
            }
            uVar11 = **(ulong **)(unaff_x26 + 0x1428);
            uVar3 = uVar11 + uVar7 * 4 + 8;
            if (uVar3 < **(ulong **)(unaff_x26 + 0x1430)) {
              uVar11 = uVar11 + 1;
              **(ulong **)(unaff_x26 + 0x1428) = uVar3;
            }
            else {
              uVar11 = FUN_01348560();
            }
            *(int *)(uVar11 - 1) = (int)*(undefined8 *)(unaff_x26 + 0xe0);
            *(int *)(uVar11 + 3) = (int)uVar7 * 2;
            lVar17 = uVar7 * 4 + 7;
            lVar10 = lVar10 * 4 + 7;
            if (lVar17 != lVar10) {
              uVar13 = *(undefined8 *)(unaff_x26 + 0xa8);
              do {
                lVar17 = lVar17 + -4;
                *(int *)(uVar11 + lVar17) = (int)uVar13;
              } while (lVar17 != lVar10);
            }
            while (lVar10 != 7) {
              lVar10 = lVar10 + -4;
              *(undefined4 *)(uVar11 + lVar10) = *(undefined4 *)(uVar2 + lVar10);
            }
            *(int *)(param_1 + 7) = (int)uVar11;
            if (((((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                ((uVar11 & 1) != 0)) &&
               (uVar11 = unaff_x26 + (uVar11 & 0xffffffff),
               ((uint)*(undefined8 *)((uVar11 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
              FUN_0133eb00(param_1,param_1 + 7,0,2);
            }
          }
          if ((ulong)((long)((ulong)*(uint *)(uVar11 + 3) << 0x20) >> 0x21) <= uVar14) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(0,0x13e9608);
            (*pcVar6)();
          }
          *(int *)(uVar11 + uVar14 * 4 + 7) = iVar9;
          *(int *)(param_1 + 0xb) = ((int)uVar14 + 1) * 2;
        }
        else {
          uVar11 = unaff_x26 + (ulong)*(uint *)(param_1 + 7);
          if ((*(int *)(uVar11 - 1) != (int)*(undefined8 *)(unaff_x26 + 0xe0)) &&
             (*(int *)(uVar11 - 1) != iVar15)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(0,0x13e92fc);
            (*pcVar6)();
          }
          uVar7 = (long)(param_2 << 0x20) >> 0x21;
          if ((ulong)((long)((ulong)*(uint *)(uVar11 + 3) << 0x20) >> 0x21) <= uVar7) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(0,0x13e9314);
            (*pcVar6)();
          }
          lVar10 = uVar7 * 4 + 7;
          *(int *)(uVar11 + lVar10) = iVar9;
          if (((((uint)*(undefined8 *)((uVar11 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
              ((param_3 & 1) != 0)) &&
             (((uint)*(undefined8 *)((unaff_x26 + (param_3 & 0xffffffff) & 0xfffffffffffc0000) + 8)
               >> 1 & 1) != 0)) {
            FUN_0133eb00(uVar11,uVar11 + lVar10,0,2);
          }
        }
      }
      else if (bVar4 >> 4 == 2) {
        if (((param_3 & 1) != 0) &&
           (*(int *)(param_3 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x140))) goto LAB_013e9454;
        if (iVar8 == iVar12) {
          uVar2 = unaff_x26 + (ulong)*(uint *)(param_1 + 7);
          uVar7 = ((lVar10 << 0x20) >> 0x21) + 1;
          lVar17 = (long)(unaff_x26 + (ulong)*(uint *)(uVar2 + 3) << 0x20) >> 0x21;
          uVar11 = uVar2;
          if (lVar17 < (long)uVar7) {
            uVar7 = uVar7 + (uVar7 >> 1) + 0x10;
            if (0x3ffe < uVar7) goto LAB_013e9454;
            if (0x3fffffe < (long)uVar7) {
                    /* WARNING: Subroutine does not return */
              FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
            }
            if (0x3fffffff < uVar7 * 8 + 8) {
                    /* WARNING: Subroutine does not return */
              FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fc8));
            }
            puVar18 = *(ulong **)(unaff_x26 + 0x1428);
            puVar19 = (undefined4 *)*puVar18;
            if ((undefined4 *)puVar18[1] <= puVar19 + uVar7 * 2 + 2) {
                    /* WARNING: Subroutine does not return */
              FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x1f88),param_3,param_1,param_2);
            }
            uVar11 = (long)puVar19 + 1;
            *puVar18 = (ulong)(puVar19 + uVar7 * 2 + 2);
            *puVar19 = (int)*(undefined8 *)(unaff_x26 + 0x1e8);
            puVar19[1] = (int)uVar7 * 2;
            lVar16 = uVar7 * 8 + 7;
            uVar13 = *(undefined8 *)(*(long *)(unaff_x26 + 0xa8) + 3);
            lVar17 = lVar17 * 8 + 7;
            while (lVar16 != lVar17) {
              lVar16 = lVar16 + -8;
              *(undefined8 *)(uVar11 + lVar16) = uVar13;
            }
            while (lVar17 != 7) {
              lVar17 = lVar17 + -8;
              if (*(long *)(uVar2 + lVar17) == -0x8000000080001) {
                *(undefined8 *)(uVar11 + lVar17) = 0xfff7fffffff7ffff;
              }
              else {
                *(undefined8 *)(uVar11 + lVar17) = *(undefined8 *)(uVar2 + lVar17);
              }
            }
            *(int *)(param_1 + 7) = (int)uVar11;
            if (((((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
                ((uVar11 & 1) != 0)) &&
               (uVar11 = unaff_x26 + (uVar11 & 0xffffffff),
               ((uint)*(undefined8 *)((uVar11 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
              FUN_0133eb00(param_1,param_1 + 7,0,2);
            }
          }
          if ((param_3 & 1) == 0) {
            bVar5 = true;
          }
          else {
            if (*(int *)(param_3 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x140)) goto LAB_013e9454;
            bVar5 = false;
          }
          uVar7 = (lVar10 << 0x20) >> 0x21;
          if (bVar5) {
            dVar20 = (double)(iVar9 >> 1);
          }
          else {
            dVar20 = *(double *)(param_3 + 3);
          }
          if ((ulong)((long)((ulong)*(uint *)(uVar11 + 3) << 0x20) >> 0x21) <= uVar7) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(0,0x13e95b0);
            (*pcVar6)();
          }
          *(double *)(uVar11 + uVar7 * 8 + 7) = dVar20 - unaff_d15;
          *(int *)(param_1 + 0xb) = (((int)lVar10 >> 1) + 1) * 2;
        }
        else {
          lVar10 = unaff_x26 + (ulong)*(uint *)(param_1 + 7);
          if (*(int *)(lVar10 + -1) != (int)*(undefined8 *)(unaff_x26 + 0x1e8)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(0,0x13e915c);
            (*pcVar6)();
          }
          uVar11 = (long)(param_2 << 0x20) >> 0x21;
          if ((ulong)((long)((ulong)*(uint *)(lVar10 + 3) << 0x20) >> 0x21) <= uVar11) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(0,0x13e9130);
            (*pcVar6)();
          }
          if ((param_3 & 1) == 0) {
            dVar20 = (double)(iVar9 >> 1);
          }
          else {
            dVar20 = *(double *)(param_3 + 3);
          }
          *(double *)(lVar10 + uVar11 * 8 + 7) = dVar20 - unaff_d15;
        }
      }
      else if (iVar8 == iVar12) {
        uVar2 = unaff_x26 + (ulong)*(uint *)(param_1 + 7);
        uVar14 = (lVar10 << 0x20) >> 0x21;
        uVar7 = uVar14 + 1;
        lVar10 = (long)(unaff_x26 + (ulong)*(uint *)(uVar2 + 3) << 0x20) >> 0x21;
        uVar11 = uVar2;
        if (lVar10 < (long)uVar7) {
          uVar7 = uVar7 + (uVar7 >> 1) + 0x10;
          if (0x7ffd < uVar7) goto LAB_013e9454;
          if (0x7fffffd < (long)uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
          }
          uVar11 = **(ulong **)(unaff_x26 + 0x1428);
          lVar17 = uVar7 * 4 + 7;
          uVar3 = uVar11 + uVar7 * 4 + 8;
          if (uVar3 < **(ulong **)(unaff_x26 + 0x1430)) {
            uVar11 = uVar11 + 1;
            **(ulong **)(unaff_x26 + 0x1428) = uVar3;
          }
          else {
            uVar11 = FUN_01348560();
          }
          *(int *)(uVar11 - 1) = (int)*(undefined8 *)(unaff_x26 + 0xe0);
          lVar10 = lVar10 * 4 + 7;
          *(int *)(uVar11 + 3) = (int)uVar7 * 2;
          if (lVar17 != lVar10) {
            uVar13 = *(undefined8 *)(unaff_x26 + 0xa8);
            do {
              lVar17 = lVar17 + -4;
              *(int *)(uVar11 + lVar17) = (int)uVar13;
            } while (lVar17 != lVar10);
          }
          while (lVar10 != 7) {
            lVar10 = lVar10 + -4;
            *(undefined4 *)(uVar11 + lVar10) = *(undefined4 *)(uVar2 + lVar10);
          }
          *(int *)(param_1 + 7) = (int)uVar11;
          if (((((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
              ((uVar11 & 1) != 0)) &&
             (uVar11 = unaff_x26 + (uVar11 & 0xffffffff),
             ((uint)*(undefined8 *)((uVar11 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
            FUN_0133eb00(param_1,param_1 + 7,0,2);
          }
        }
        iVar8 = ((int)uVar14 + 1) * 2;
        lVar10 = uVar14 * 4 + 7;
        if ((ulong)((long)((ulong)*(uint *)(uVar11 + 3) << 0x20) >> 0x21) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(0,0x13e951c);
          (*pcVar6)();
        }
        *(int *)(uVar11 + lVar10) = iVar9;
        if (((((uint)*(undefined8 *)((uVar11 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
            ((param_3 & 1) != 0)) &&
           (((uint)*(undefined8 *)((unaff_x26 + (param_3 & 0xffffffff) & 0xfffffffffffc0000) + 8) >>
             1 & 1) != 0)) {
          FUN_0133eb00(uVar11,uVar11 + lVar10,0,2);
        }
        *(int *)(param_1 + 0xb) = iVar8;
      }
      else {
        uVar11 = unaff_x26 + (ulong)*(uint *)(param_1 + 7);
        if ((*(int *)(uVar11 - 1) != (int)*(undefined8 *)(unaff_x26 + 0xe0)) &&
           (*(int *)(uVar11 - 1) != iVar15)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(0,0x13e8f90);
          (*pcVar6)();
        }
        uVar7 = (long)(param_2 << 0x20) >> 0x21;
        if ((ulong)((long)((ulong)*(uint *)(uVar11 + 3) << 0x20) >> 0x21) <= uVar7) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(0,0x13e8fa8);
          (*pcVar6)();
        }
        lVar10 = uVar7 * 4 + 7;
        *(int *)(uVar11 + lVar10) = iVar9;
        if (((((uint)*(undefined8 *)((uVar11 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
            ((param_3 & 1) != 0)) &&
           (((uint)*(undefined8 *)((unaff_x26 + (param_3 & 0xffffffff) & 0xfffffffffffc0000) + 8) >>
             1 & 1) != 0)) {
          FUN_0133eb00(uVar11,uVar11 + lVar10,0,2);
        }
      }
      return *(undefined8 *)(unaff_x26 + 0xa0);
    }
  }
LAB_013e9454:
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x21e8));
}

