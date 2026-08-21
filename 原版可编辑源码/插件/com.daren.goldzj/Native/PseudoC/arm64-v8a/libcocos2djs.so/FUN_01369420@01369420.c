
void FUN_01369420(long param_1)

{
  uint uVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long unaff_x26;
  long local_60 [10];
  
  plVar6 = local_60 + 2;
  local_60[9] = 0x1a;
  lVar8 = *(long *)(unaff_x26 + 0x2bc8);
  local_60[8] = param_1;
  local_60[7] = lVar8;
  do {
    lVar9 = unaff_x26 + 0x2bc8;
    uVar10 = *(undefined8 *)(unaff_x26 + 0xa0);
    if (*(long *)(param_1 + 8) == 0) {
      *(undefined8 *)(unaff_x26 + 4000) = uVar10;
      return;
    }
    uVar12 = *(long *)(param_1 + 0x10) - 1;
    lVar13 = *(long *)(*(long *)(param_1 + 0x20) + (*(ulong *)(param_1 + 0x18) & uVar12) * 8);
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + -1;
    *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) + 1 & uVar12;
    *(long *)(unaff_x26 + 4000) = lVar13;
    plVar11 = *(long **)(unaff_x26 + 0x13c8);
    uVar3 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(lVar13 + -1) + 7);
    plVar6[4] = *(long *)(*plVar11 + 0x30);
    if (uVar3 < 0x49) {
      if (uVar3 == 0x47) {
        lVar7 = unaff_x26 + (ulong)*(uint *)(lVar13 + 7);
        lVar15 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(lVar7 + -1) + 0x13);
        lVar14 = *(long *)(lVar15 + 0x423);
        plVar6[3] = lVar7;
        if (lVar14 != 0) {
          lVar7 = *plVar11;
          lVar14 = *(long *)(lVar7 + 0x30);
          if (lVar14 == *(long *)(lVar7 + 0x28)) {
            plVar6[2] = lVar13;
            plVar6[1] = lVar15;
            pcVar5 = *(code **)(unaff_x26 + 0x1368);
            plVar6[-2] = lVar9;
            plVar6[-1] = unaff_x26;
            *(undefined8 *)(unaff_x26 + 0x40) = 0x1369918;
            *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
            lVar8 = plVar6[-1];
            (*pcVar5)(lVar7);
            plVar6[-2] = 0;
            plVar6[-1] = lVar8;
            *(undefined8 *)(unaff_x26 + 0x38) = 0;
            uVar10 = *(undefined8 *)(unaff_x26 + 0xa0);
            lVar8 = plVar6[5];
            plVar11 = *(long **)(unaff_x26 + 0x13c8);
            lVar13 = plVar6[2];
            lVar15 = plVar6[1];
          }
          else {
            *(long *)(*(long *)(lVar7 + 0x20) + lVar14 * 8) = lVar15;
            *(long *)(lVar7 + 0x30) = lVar14 + 1;
            *(undefined1 *)(*(long *)(lVar7 + 0x38) + lVar14) = 1;
            *(long *)(lVar7 + 0x48) = lVar14 + 1;
          }
          *(long *)(unaff_x26 + 0x2bc8) = lVar15;
          lVar9 = unaff_x26 + (ulong)*(uint *)(lVar13 + 3);
          uVar1 = *(uint *)(lVar13 + 0xb);
          lVar13 = unaff_x26 + (ulong)*(uint *)(lVar13 + 0xf);
          cVar2 = **(char **)(unaff_x26 + 0x1488);
          plVar6[2] = lVar13;
          if (cVar2 != '\0') {
            sVar4 = *(short *)(unaff_x26 + (ulong)*(uint *)(lVar13 + -1) + 7);
            plVar6[1] = lVar9;
            *plVar6 = unaff_x26 + (ulong)uVar1;
            lVar7 = lVar13;
            if (sVar4 == 0x62) {
              lVar7 = unaff_x26 + (ulong)*(uint *)(lVar13 + 3);
            }
            if ((int)lVar7 != (int)uVar10) {
              plVar6[-1] = 0;
              plVar6[-2] = lVar7;
                    /* WARNING: Subroutine does not return */
              FUN_013be7e0(plVar11,1,*(undefined8 *)(unaff_x26 + 0x23d0),lVar13,lVar8);
            }
          }
          FUN_0139c280(lVar9);
          if (**(char **)(unaff_x26 + 0x1488) != '\0') {
            lVar8 = plVar6[2];
            if (*(short *)(unaff_x26 + (ulong)*(uint *)(lVar8 + -1) + 7) == 0x62) {
              lVar8 = unaff_x26 + (ulong)*(uint *)(lVar8 + 3);
            }
            uVar10 = *(undefined8 *)(unaff_x26 + 0xa0);
            if ((int)lVar8 != (int)uVar10) {
              plVar6[-1] = 0;
              plVar6[-2] = lVar8;
                    /* WARNING: Subroutine does not return */
              FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x23c8),lVar8,uVar10);
            }
          }
          lVar8 = **(long **)(unaff_x26 + 0x13c8);
          lVar9 = plVar6[4];
          *(long *)(lVar8 + 0x30) = lVar9;
          *(long *)(lVar8 + 0x48) = lVar9;
          lVar8 = plVar6[5];
          *(long *)(unaff_x26 + 0x2bc8) = lVar8;
        }
      }
      else {
        if (uVar3 != 0x48) goto LAB_01369c20;
        lVar7 = unaff_x26 + (ulong)*(uint *)(lVar13 + 7);
        lVar15 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(lVar7 + -1) + 0x13);
        lVar14 = *(long *)(lVar15 + 0x423);
        plVar6[3] = lVar7;
        if (lVar14 != 0) {
          lVar7 = *plVar11;
          lVar14 = *(long *)(lVar7 + 0x30);
          if (lVar14 == *(long *)(lVar7 + 0x28)) {
            plVar6[2] = lVar13;
            plVar6[1] = lVar15;
            pcVar5 = *(code **)(unaff_x26 + 0x1368);
            plVar6[-2] = lVar9;
            plVar6[-1] = unaff_x26;
            *(undefined8 *)(unaff_x26 + 0x40) = 0x1369a58;
            *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
            lVar8 = plVar6[-1];
            (*pcVar5)(lVar7);
            plVar6[-2] = 0;
            plVar6[-1] = lVar8;
            *(undefined8 *)(unaff_x26 + 0x38) = 0;
            uVar10 = *(undefined8 *)(unaff_x26 + 0xa0);
            lVar8 = plVar6[5];
            plVar11 = *(long **)(unaff_x26 + 0x13c8);
            lVar13 = plVar6[2];
            lVar15 = plVar6[1];
          }
          else {
            *(long *)(*(long *)(lVar7 + 0x20) + lVar14 * 8) = lVar15;
            *(long *)(lVar7 + 0x30) = lVar14 + 1;
            *(undefined1 *)(*(long *)(lVar7 + 0x38) + lVar14) = 1;
            *(long *)(lVar7 + 0x48) = lVar14 + 1;
          }
          *(long *)(unaff_x26 + 0x2bc8) = lVar15;
          lVar9 = unaff_x26 + (ulong)*(uint *)(lVar13 + 3);
          uVar1 = *(uint *)(lVar13 + 0xb);
          lVar13 = unaff_x26 + (ulong)*(uint *)(lVar13 + 0xf);
          cVar2 = **(char **)(unaff_x26 + 0x1488);
          plVar6[2] = lVar13;
          if (cVar2 != '\0') {
            sVar4 = *(short *)(unaff_x26 + (ulong)*(uint *)(lVar13 + -1) + 7);
            plVar6[1] = lVar9;
            *plVar6 = unaff_x26 + (ulong)uVar1;
            lVar7 = lVar13;
            if (sVar4 == 0x62) {
              lVar7 = unaff_x26 + (ulong)*(uint *)(lVar13 + 3);
            }
            if ((int)lVar7 != (int)uVar10) {
              plVar6[-1] = 0;
              plVar6[-2] = lVar7;
                    /* WARNING: Subroutine does not return */
              FUN_013be7e0(plVar11,1,*(undefined8 *)(unaff_x26 + 0x23d0),lVar13,lVar8);
            }
          }
          FUN_0139c0c0(lVar9);
          if (**(char **)(unaff_x26 + 0x1488) != '\0') {
            lVar8 = plVar6[2];
            if (*(short *)(unaff_x26 + (ulong)*(uint *)(lVar8 + -1) + 7) == 0x62) {
              lVar8 = unaff_x26 + (ulong)*(uint *)(lVar8 + 3);
            }
            uVar10 = *(undefined8 *)(unaff_x26 + 0xa0);
            if ((int)lVar8 != (int)uVar10) {
              plVar6[-1] = 0;
              plVar6[-2] = lVar8;
                    /* WARNING: Subroutine does not return */
              FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x23c8),lVar8,uVar10);
            }
          }
          lVar8 = **(long **)(unaff_x26 + 0x13c8);
          lVar9 = plVar6[4];
          *(long *)(lVar8 + 0x30) = lVar9;
          *(long *)(lVar8 + 0x48) = lVar9;
          lVar8 = plVar6[5];
          *(long *)(unaff_x26 + 0x2bc8) = lVar8;
        }
      }
    }
    else if (uVar3 == 0x49) {
      lVar7 = unaff_x26 + (ulong)*(uint *)(lVar13 + 7);
      lVar15 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(lVar7 + -1) + 0x13);
      if (*(long *)(lVar15 + 0x423) != 0) {
        lVar8 = *plVar11;
        lVar14 = *(long *)(lVar8 + 0x30);
        if (lVar14 == *(long *)(lVar8 + 0x28)) {
          plVar6[2] = lVar13;
          plVar6[3] = lVar7;
          plVar6[1] = lVar15;
          pcVar5 = *(code **)(unaff_x26 + 0x1368);
          plVar6[-2] = lVar9;
          plVar6[-1] = unaff_x26;
          *(undefined8 *)(unaff_x26 + 0x40) = 0x13698a8;
          *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
          lVar9 = plVar6[-1];
          (*pcVar5)(lVar8);
          plVar6[-2] = 0;
          plVar6[-1] = lVar9;
          *(undefined8 *)(unaff_x26 + 0x38) = 0;
          uVar10 = *(undefined8 *)(unaff_x26 + 0xa0);
          lVar13 = plVar6[2];
          lVar15 = plVar6[1];
        }
        else {
          *(long *)(*(long *)(lVar8 + 0x20) + lVar14 * 8) = lVar15;
          *(long *)(lVar8 + 0x30) = lVar14 + 1;
          *(undefined1 *)(*(long *)(lVar8 + 0x38) + lVar14) = 1;
          *(long *)(lVar8 + 0x48) = lVar14 + 1;
        }
        *(long *)(unaff_x26 + 0x2bc8) = lVar15;
        uVar1 = *(uint *)(lVar13 + 3);
        plVar6[-1] = 0;
        plVar6[-2] = uVar10;
        FUN_0133fb80(0,unaff_x26 + (ulong)uVar1);
        lVar8 = **(long **)(unaff_x26 + 0x13c8);
        lVar9 = plVar6[2];
        *(long *)(lVar8 + 0x30) = lVar9;
        *(long *)(lVar8 + 0x48) = lVar9;
        lVar8 = plVar6[3];
        *(long *)(unaff_x26 + 0x2bc8) = lVar8;
        plVar6 = plVar6 + -2;
      }
    }
    else {
      if (uVar3 == 0x4a) {
        uVar1 = *(uint *)(lVar13 + 3);
        plVar6[-2] = unaff_x26 + (ulong)*(uint *)(lVar13 + 7);
        plVar6[-1] = unaff_x26 + (ulong)uVar1;
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2038));
      }
      if (uVar3 != 0x4b) {
LAB_01369c20:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0,0x1369c24);
        (*pcVar5)();
      }
      lVar7 = unaff_x26 +
              (ulong)*(uint *)(unaff_x26 +
                               (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(lVar13 + 3) + -1) +
                              0x13);
      if (*(long *)(lVar7 + 0x423) != 0) {
        lVar8 = *plVar11;
        lVar15 = *(long *)(lVar8 + 0x30);
        if (lVar15 == *(long *)(lVar8 + 0x28)) {
          plVar6[3] = lVar7;
          plVar6[2] = lVar13;
          pcVar5 = *(code **)(unaff_x26 + 0x1368);
          plVar6[-2] = lVar9;
          plVar6[-1] = unaff_x26;
          *(undefined8 *)(unaff_x26 + 0x40) = 0x1369b98;
          *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
          lVar9 = plVar6[-1];
          (*pcVar5)(lVar8);
          plVar6[-2] = 0;
          plVar6[-1] = lVar9;
          *(undefined8 *)(unaff_x26 + 0x38) = 0;
          lVar7 = plVar6[3];
          lVar13 = plVar6[2];
        }
        else {
          *(long *)(*(long *)(lVar8 + 0x20) + lVar15 * 8) = lVar7;
          *(long *)(lVar8 + 0x30) = lVar15 + 1;
          *(undefined1 *)(*(long *)(lVar8 + 0x38) + lVar15) = 1;
          *(long *)(lVar8 + 0x48) = lVar15 + 1;
        }
        *(long *)(unaff_x26 + 0x2bc8) = lVar7;
        FUN_0139c3a0(unaff_x26 + (ulong)*(uint *)(lVar13 + 7),
                     unaff_x26 + (ulong)*(uint *)(lVar13 + 0xf),
                     unaff_x26 + (ulong)*(uint *)(lVar13 + 0xb));
        lVar8 = **(long **)(unaff_x26 + 0x13c8);
        lVar9 = plVar6[4];
        *(long *)(lVar8 + 0x30) = lVar9;
        *(long *)(lVar8 + 0x48) = lVar9;
        lVar8 = plVar6[5];
        *(long *)(unaff_x26 + 0x2bc8) = lVar8;
      }
    }
    param_1 = *(long *)((long)plVar6 + 0x30);
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  } while( true );
}

