
long FUN_0138c840(ulong param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  ulong *puVar4;
  ulong *puVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 extraout_x1;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  code *pcVar19;
  long unaff_x26;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  ulong local_b0 [18];
  
  puVar5 = local_b0 + 8;
  if ((int)param_1 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) {
    local_b0[0x11] = 0;
    local_b0[0xd] = 0;
    local_b0[0xc] = *(undefined8 *)(unaff_x26 + 0x168);
LAB_0138cb68:
    uVar6 = *(uint *)(unaff_x26 +
                      (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(puVar5[10] - 1) + 0x13) + 0x167)
    ;
    puVar5[10] = (ulong)uVar6;
    uVar7 = puVar5[5];
    if (uVar7 == puVar5[9]) {
      uVar10 = puVar5[4];
    }
    else {
      uVar11 = puVar5[4];
      uVar14 = (ulong)*(uint *)(uVar11 - 1);
      if (uVar7 == 0) {
        uVar10 = *(ulong *)(unaff_x26 + 0x168);
      }
      else {
        if (*(uint *)(uVar11 - 1) == (uint)*(undefined8 *)(unaff_x26 + 0xe8)) {
          uVar14 = *(ulong *)(unaff_x26 + 0xe0);
        }
        if (0x7fffffd < (long)uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
        }
        lVar15 = **(long **)(unaff_x26 + 0x1428);
        uVar9 = uVar7 * 4;
        uVar16 = (int)uVar7 * 2;
        uVar10 = lVar15 + uVar9 + 8;
        if ((uVar10 < **(ulong **)(unaff_x26 + 0x1430)) && (uVar9 + 8 < 0x20000)) {
          **(ulong **)(unaff_x26 + 0x1428) = uVar10;
          uVar10 = lVar15 + 1;
        }
        else {
          puVar5[8] = uVar9;
          puVar5[7] = uVar14;
          puVar5[6] = (ulong)uVar16;
          param_1 = FUN_01348500();
          uVar6 = (uint)puVar5[10];
          uVar7 = puVar5[5];
          uVar11 = puVar5[4];
          uVar9 = puVar5[8];
          uVar14 = puVar5[7];
          uVar16 = (uint)puVar5[6];
          uVar10 = param_1;
        }
        *(int *)(uVar10 - 1) = (int)uVar14;
        *(uint *)(uVar10 + 3) = uVar16;
        uVar8 = *(undefined8 *)((uVar10 & 0xfffffffffffc0000) + 8);
        puVar5[9] = uVar10;
        if (((uint)uVar8 >> 2 & 1) == 0) {
          pcVar19 = *(code **)(unaff_x26 + 0x11d0);
          puVar5[-2] = uVar11;
          puVar5[-1] = uVar7;
          *(undefined8 *)(unaff_x26 + 0x40) = 0x138cc58;
          *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
          uVar7 = puVar5[-1];
          param_1 = (*pcVar19)(uVar10 + 7,uVar11 + 7);
          puVar5[-2] = 0;
          puVar5[-1] = uVar7;
          *(undefined8 *)(unaff_x26 + 0x38) = 0;
          uVar6 = (uint)puVar5[10];
          uVar7 = puVar5[5];
          uVar10 = puVar5[9];
        }
        else if (uVar9 + 7 != 7) {
          lVar15 = 7;
          do {
            lVar1 = lVar15 + 4;
            *(undefined4 *)(uVar10 + lVar15) = *(undefined4 *)(uVar11 + lVar15);
            lVar15 = lVar1;
          } while (lVar1 != uVar9 + 7);
        }
      }
    }
    uVar11 = **(ulong **)(unaff_x26 + 0x1428);
    uVar16 = (int)uVar7 * 2;
    uVar7 = uVar11 + 0x10;
    if (uVar7 < **(ulong **)(unaff_x26 + 0x1430)) {
      lVar15 = uVar11 + 1;
      **(ulong **)(unaff_x26 + 0x1428) = uVar7;
    }
    else {
      puVar5[4] = uVar10;
      puVar5[9] = (ulong)uVar16;
      lVar15 = FUN_01348560(param_1,0x10);
      uVar10 = puVar5[4];
      uVar6 = (uint)puVar5[10];
      uVar16 = (uint)puVar5[9];
    }
    *(uint *)(lVar15 + -1) = uVar6;
    *(uint *)(lVar15 + 0xb) = uVar16;
    *(int *)(lVar15 + 3) = (int)*(undefined8 *)(unaff_x26 + 0x168);
    *(int *)(lVar15 + 7) = (int)uVar10;
    return lVar15;
  }
  local_b0[0x11] = param_1;
  uVar7 = FUN_013c0ba0(param_1,*(undefined8 *)(unaff_x26 + 0xc18));
  if (((uVar7 & 1) == 0) || ((*(byte *)(unaff_x26 + (ulong)*(uint *)(uVar7 - 1) + 9) >> 1 & 1) == 0)
     ) {
    local_b0[7] = 0;
    local_b0[6] = local_b0[0x11];
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x2090));
  }
  local_b0[7] = 0;
  local_b0[6] = local_b0[0x11];
  local_b0[0xd] = FUN_0133fcc0(0,uVar7);
  if (((local_b0[0xd] & 1) == 0) ||
     (*(ushort *)(unaff_x26 + (ulong)*(uint *)(local_b0[0xd] - 1) + 7) < 0xa9)) {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x20d8));
  }
  uVar8 = FUN_013c0ba0(local_b0[0xd],*(undefined8 *)(unaff_x26 + 0x848));
  uVar11 = *(ulong *)(unaff_x26 + 0x168);
  local_b0[6] = uVar8;
  uVar10 = 0;
  uVar7 = 0;
  puVar4 = local_b0 + 6;
  do {
    puVar5 = puVar4 + -2;
    puVar4[-1] = 0;
    puVar4[-2] = puVar4[7];
    puVar4[9] = uVar10;
    puVar4[5] = uVar7;
    puVar4[4] = uVar11;
    uVar7 = FUN_0133fcc0(0,uVar8);
    puVar4[6] = uVar7;
    if (((uVar7 & 1) == 0) || (*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar7 - 1) + 7) < 0xa9)) {
      puVar4[-3] = 0;
      puVar4[-4] = uVar7;
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x2098));
    }
    param_1 = FUN_013c0ba0(uVar7,*(undefined8 *)(unaff_x26 + 0x610));
    uVar6 = (uint)param_1;
    if (uVar6 != (uint)*(undefined8 *)(unaff_x26 + 0xc0)) {
      if ((param_1 & 1) == 0) {
joined_r0x0138c9bc:
        puVar5 = puVar4 + -2;
        if (uVar6 != 0) goto LAB_0138cb68;
      }
      else if ((uVar6 != (uint)*(undefined8 *)(unaff_x26 + 200)) &&
              (lVar15 = unaff_x26 + (ulong)*(uint *)(param_1 - 1),
              (*(byte *)(lVar15 + 9) >> 4 & 1) == 0)) {
        if ((int)lVar15 != (int)*(undefined8 *)(unaff_x26 + 0x140)) {
          if (*(short *)(lVar15 + 7) == 0x41) {
            uVar6 = *(uint *)(param_1 + 3) >> 1 & 0x3fffffff;
            goto joined_r0x0138c9bc;
          }
          goto LAB_0138cb68;
        }
        puVar5 = puVar4 + -2;
        if (0.0 < ABS(*(double *)(param_1 + 3))) goto LAB_0138cb68;
      }
    }
    uVar9 = 0x138c9d0;
    auVar20 = FUN_013c0ba0(puVar4[6],*(undefined8 *)(unaff_x26 + 0xac8));
    uVar14 = auVar20._0_8_;
    puVar4[6] = uVar14;
    if (((uVar14 & 1) == 0) || (0x3f < *(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar14 - 1) + 7))) {
      puVar4[-4] = uVar14;
      puVar4[-3] = 0x86;
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x20e8));
    }
    uVar10 = puVar4[7];
    uVar7 = puVar4[3];
    if (uVar10 == uVar7) {
      uVar12 = puVar4[2];
      uVar6 = *(uint *)(uVar12 - 1);
      uVar13 = (ulong)uVar6;
      uVar10 = uVar10 + (uVar10 >> 1) + 0x10;
      puVar4[7] = uVar10;
      if (uVar10 == 0) {
        uVar11 = *(ulong *)(unaff_x26 + 0x168);
      }
      else {
        if (uVar6 == (uint)*(undefined8 *)(unaff_x26 + 0xe8)) {
          uVar13 = *(ulong *)(unaff_x26 + 0xe0);
        }
        if (0x7fffffd < (long)uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
        }
        uVar17 = uVar10 * 4;
        uVar11 = uVar17 + 8;
        uVar18 = uVar7 * 4 + 7;
        uVar2 = **(long **)(unaff_x26 + 0x1428) + uVar11;
        if ((uVar2 < **(ulong **)(unaff_x26 + 0x1430)) && (uVar11 < 0x20000)) {
          auVar21._8_8_ = uVar11;
          auVar21._0_8_ = **(long **)(unaff_x26 + 0x1428) + 1;
          **(ulong **)(unaff_x26 + 0x1428) = uVar2;
        }
        else {
          puVar4[1] = uVar18;
          *puVar4 = uVar13;
          puVar4[-1] = uVar17;
          uVar9 = 0x138cd28;
          auVar21 = FUN_01348500();
          uVar7 = puVar4[3];
          uVar12 = puVar4[2];
          uVar14 = puVar4[6];
          uVar10 = puVar4[7];
          uVar18 = puVar4[1];
          uVar13 = *puVar4;
          uVar17 = puVar4[-1];
        }
        uVar11 = auVar21._0_8_;
        auVar3._8_8_ = auVar21._8_8_;
        auVar3._0_8_ = uVar14;
        auVar20._8_8_ = auVar21._8_8_;
        auVar20._0_8_ = uVar14;
        *(int *)(uVar11 - 1) = (int)uVar13;
        *(int *)(uVar11 + 3) = (int)uVar10 * 2;
        uVar17 = uVar17 + 7;
        puVar4[4] = uVar11;
        if (uVar17 != uVar18) {
          uVar8 = *(undefined8 *)(unaff_x26 + 0xa8);
          do {
            uVar17 = uVar17 - 4;
            *(int *)(uVar11 + uVar17) = (int)uVar8;
          } while (uVar17 != uVar18);
        }
        if (((uint)*(undefined8 *)((uVar11 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
          param_3 = uVar7 << 2;
          pcVar19 = *(code **)(unaff_x26 + 0x11d0);
          puVar4[-4] = uVar14;
          puVar4[-3] = uVar7;
          *(undefined8 *)(unaff_x26 + 0x40) = 0x138cb04;
          *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
          uVar7 = puVar4[-3];
          uVar9 = 0x138cb20;
          (*pcVar19)(uVar11 + 7,uVar12 + 7);
          puVar4[-4] = 0;
          puVar4[-3] = uVar7;
          *(undefined8 *)(unaff_x26 + 0x38) = 0;
          uVar7 = puVar4[3];
          auVar20._8_8_ = extraout_x1;
          auVar20._0_8_ = puVar4[6];
          uVar10 = puVar4[7];
          uVar11 = puVar4[4];
        }
        else if (uVar18 != 7) {
          uVar14 = 7;
          do {
            uVar13 = uVar14 + 4;
            *(undefined4 *)(uVar11 + uVar14) = *(undefined4 *)(uVar12 + uVar14);
            uVar14 = uVar13;
            auVar20 = auVar3;
          } while (uVar13 != uVar18);
        }
      }
    }
    else {
      uVar11 = puVar4[2];
    }
    lVar15 = uVar7 * 4 + 7;
    *(int *)(uVar11 + lVar15) = auVar20._0_4_;
    if (((((uint)*(undefined8 *)((uVar11 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
        ((auVar20._0_8_ & 1) != 0)) &&
       (((uint)*(undefined8 *)((unaff_x26 + (auVar20._0_8_ & 0xffffffff) & 0xfffffffffffc0000) + 8)
         >> 1 & 1) != 0)) {
      puVar4[-6] = param_3;
      puVar4[-5] = uVar10;
      puVar4[-4] = uVar7;
      puVar4[-3] = uVar9;
      *(undefined1 (*) [16])(puVar4 + -8) = auVar20;
      FUN_0133eb00(uVar11,uVar11 + lVar15,0,2);
      param_3 = puVar4[-6];
      uVar10 = puVar4[-5];
      uVar7 = puVar4[-4];
    }
    uVar7 = uVar7 + 1;
    uVar8 = puVar4[-2];
    puVar4 = puVar4 + -2;
  } while( true );
}

