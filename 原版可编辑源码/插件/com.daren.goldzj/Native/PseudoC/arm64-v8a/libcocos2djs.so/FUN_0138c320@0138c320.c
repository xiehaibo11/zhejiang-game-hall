
undefined8 FUN_0138c320(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  long *plVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 extraout_x1;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  long unaff_x26;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  long local_c0 [19];
  
  local_c0[0x10] = param_2;
  uVar6 = FUN_013c0ba0(param_1,*(undefined8 *)(unaff_x26 + 0xc18));
  local_c0[6] = param_1;
  if (((uVar6 & 1) == 0) || ((*(byte *)(unaff_x26 + (ulong)*(uint *)(uVar6 - 1) + 9) >> 1 & 1) == 0)
     ) {
    local_c0[7] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x2090));
  }
  local_c0[7] = 0;
  local_c0[7] = FUN_0133fcc0(0,uVar6);
  if (((local_c0[7] & 1U) == 0) ||
     (*(ushort *)(unaff_x26 + (ulong)*(uint *)(local_c0[7] - 1) + 7) < 0xa9)) {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x20d8));
  }
  uVar7 = FUN_013c0ba0(local_c0[7],*(undefined8 *)(unaff_x26 + 0x848));
  local_c0[8] = uVar7;
  uVar8 = *(ulong *)(unaff_x26 + 0x168);
  lVar12 = 0;
  uVar6 = 0;
  plVar4 = local_c0 + 6;
  do {
    plVar4[-1] = 0;
    plVar4[-2] = plVar4[1];
    plVar4[10] = uVar8;
    plVar4[9] = lVar12;
    plVar4[7] = uVar6;
    uVar6 = FUN_0133fcc0(0,uVar7);
    plVar4[10] = uVar6;
    if (((uVar6 & 1) == 0) || (*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar6 - 1) + 7) < 0xa9)) {
      plVar4[-3] = 0;
      plVar4[-4] = uVar6;
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x2098));
    }
    uVar6 = FUN_013c0ba0(uVar6,*(undefined8 *)(unaff_x26 + 0x610));
    uVar5 = (uint)uVar6;
    if (uVar5 != (uint)*(undefined8 *)(unaff_x26 + 0xc0)) {
      if ((uVar6 & 1) == 0) {
joined_r0x0138c49c:
        if (uVar5 != 0) {
LAB_0138c614:
          if ((plVar4[6] << 0x20) >> 0x21 == plVar4[7]) {
            return plVar4[8];
          }
          plVar4[-3] = 0;
          plVar4[-4] = 700;
                    /* WARNING: Subroutine does not return */
          FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x20e8));
        }
      }
      else if ((uVar5 != (uint)*(undefined8 *)(unaff_x26 + 200)) &&
              (lVar12 = unaff_x26 + (ulong)*(uint *)(uVar6 - 1),
              (*(byte *)(lVar12 + 9) >> 4 & 1) == 0)) {
        if ((int)lVar12 != (int)*(undefined8 *)(unaff_x26 + 0x140)) {
          if (*(short *)(lVar12 + 7) != 0x41) goto LAB_0138c614;
          uVar5 = *(uint *)(uVar6 + 3) >> 1 & 0x3fffffff;
          goto joined_r0x0138c49c;
        }
        if (0.0 < ABS(*(double *)(uVar6 + 3))) goto LAB_0138c614;
      }
    }
    uVar17 = 0x138c4b0;
    auVar18 = FUN_013c0ba0(plVar4[10],*(undefined8 *)(unaff_x26 + 0xac8));
    uVar7 = auVar18._0_8_;
    uVar6 = plVar4[5];
    plVar4[10] = uVar7;
    uVar13 = plVar4[7];
    if (uVar6 == uVar13) {
      lVar12 = plVar4[8];
      uVar5 = *(uint *)(lVar12 + -1);
      uVar9 = (ulong)uVar5;
      uVar6 = uVar6 + (uVar6 >> 1) + 0x10;
      plVar4[5] = uVar6;
      if (uVar6 == 0) {
        uVar8 = *(ulong *)(unaff_x26 + 0x168);
      }
      else {
        if (uVar5 == (uint)*(undefined8 *)(unaff_x26 + 0xe8)) {
          uVar9 = *(ulong *)(unaff_x26 + 0xe0);
        }
        if (0x7fffffd < (long)uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
        }
        puVar11 = *(ulong **)(unaff_x26 + 0x1428);
        lVar14 = uVar6 * 4;
        uVar8 = lVar14 + 8;
        lVar15 = uVar13 * 4 + 7;
        uVar2 = *puVar11 + uVar8;
        if ((uVar2 < **(ulong **)(unaff_x26 + 0x1430)) && (uVar8 < 0x20000)) {
          auVar19._8_8_ = uVar8;
          auVar19._0_8_ = *puVar11 + 1;
          *puVar11 = uVar2;
        }
        else {
          plVar4[3] = lVar15;
          plVar4[2] = uVar9;
          plVar4[1] = lVar14;
          uVar17 = 0x138c690;
          auVar19 = FUN_01348500();
          lVar12 = plVar4[8];
          uVar13 = plVar4[7];
          uVar7 = plVar4[10];
          uVar6 = plVar4[5];
          lVar15 = plVar4[3];
          uVar9 = plVar4[2];
          lVar14 = plVar4[1];
        }
        uVar8 = auVar19._0_8_;
        auVar3._8_8_ = auVar19._8_8_;
        auVar3._0_8_ = uVar7;
        auVar18._8_8_ = auVar19._8_8_;
        auVar18._0_8_ = uVar7;
        *(int *)(uVar8 - 1) = (int)uVar9;
        *(int *)(uVar8 + 3) = (int)uVar6 * 2;
        lVar14 = lVar14 + 7;
        plVar4[4] = uVar8;
        if (lVar14 != lVar15) {
          puVar11 = *(ulong **)(unaff_x26 + 0xa8);
          do {
            lVar14 = lVar14 + -4;
            *(int *)(uVar8 + lVar14) = (int)puVar11;
          } while (lVar14 != lVar15);
        }
        uVar10 = *(undefined8 *)((uVar8 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar10 >> 2 & 1) == 0) {
          param_3 = uVar13 << 2;
          pcVar16 = *(code **)(unaff_x26 + 0x11d0);
          plVar4[-4] = (long)puVar11;
          plVar4[-3] = uVar10;
          *(undefined8 *)(unaff_x26 + 0x40) = 0x138c5c8;
          *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
          uVar10 = plVar4[-3];
          uVar17 = 0x138c5e4;
          (*pcVar16)(uVar8 + 7,lVar12 + 7,param_3,uVar7,uVar10,plVar4[-4]);
          plVar4[-4] = 0;
          plVar4[-3] = uVar10;
          *(undefined8 *)(unaff_x26 + 0x38) = 0;
          uVar13 = plVar4[7];
          auVar18._8_8_ = extraout_x1;
          auVar18._0_8_ = plVar4[10];
          uVar6 = plVar4[5];
          uVar8 = plVar4[4];
        }
        else if (lVar15 != 7) {
          lVar14 = 7;
          do {
            lVar1 = lVar14 + 4;
            *(undefined4 *)(uVar8 + lVar14) = *(undefined4 *)(lVar12 + lVar14);
            lVar14 = lVar1;
            auVar18 = auVar3;
          } while (lVar1 != lVar15);
        }
      }
    }
    else {
      uVar8 = plVar4[8];
    }
    lVar12 = uVar13 * 4 + 7;
    *(int *)(uVar8 + lVar12) = auVar18._0_4_;
    if (((((uint)*(undefined8 *)((uVar8 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
        ((auVar18._0_8_ & 1) != 0)) &&
       (uVar9 = unaff_x26 + (auVar18._0_8_ & 0xffffffff),
       ((uint)*(undefined8 *)((uVar9 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
      plVar4[-6] = param_3;
      plVar4[-5] = lVar12;
      plVar4[-4] = uVar9;
      plVar4[-3] = uVar17;
      *(undefined1 (*) [16])(plVar4 + -8) = auVar18;
      FUN_0133eb00(uVar8,uVar8 + lVar12,0,2);
      param_3 = plVar4[-6];
    }
    lVar12 = uVar13 + 1;
    uVar7 = *plVar4;
    plVar4 = plVar4 + -2;
  } while( true );
}

