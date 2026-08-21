
long FUN_0138b860(undefined8 param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  long *plVar3;
  uint uVar4;
  long lVar5;
  undefined8 extraout_x1;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  uint uVar14;
  long lVar15;
  code *pcVar16;
  long unaff_x26;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  long local_b0 [18];
  
  local_b0[6] = param_1;
  if (((param_2 & 1) == 0) ||
     ((*(byte *)(unaff_x26 + (ulong)*(uint *)(param_2 - 1) + 9) >> 1 & 1) == 0)) {
    local_b0[7] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x2090));
  }
  local_b0[7] = 0;
  local_b0[6] = FUN_0133fcc0();
  if (((local_b0[6] & 1U) == 0) ||
     (*(ushort *)(unaff_x26 + (ulong)*(uint *)(local_b0[6] - 1) + 7) < 0xa9)) {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x20d8));
  }
  lVar5 = FUN_013c0ba0(local_b0[6],*(undefined8 *)(unaff_x26 + 0x848));
  uVar7 = *(ulong *)(unaff_x26 + 0x168);
  local_b0[7] = lVar5;
  lVar9 = 0;
  uVar10 = 0;
  plVar3 = local_b0 + 6;
  do {
    plVar3[-1] = 0;
    plVar3[-2] = *plVar3;
    plVar3[8] = lVar9;
    plVar3[7] = uVar7;
    plVar3[6] = uVar10;
    uVar10 = FUN_0133fcc0(0,lVar5);
    plVar3[7] = uVar10;
    if (((uVar10 & 1) == 0) || (*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar10 - 1) + 7) < 0xa9)) {
      plVar3[-3] = 0;
      plVar3[-4] = uVar10;
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x2098));
    }
    uVar10 = FUN_013c0ba0(uVar10,*(undefined8 *)(unaff_x26 + 0x610));
    uVar4 = (uint)uVar10;
    if (uVar4 != (uint)*(undefined8 *)(unaff_x26 + 0xc0)) {
      if ((uVar10 & 1) == 0) {
joined_r0x0138b9bc:
        if (uVar4 != 0) {
LAB_0138bb38:
          uVar4 = *(uint *)(unaff_x26 +
                            (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(plVar3[8] + -1) + 0x13) +
                           0x167);
          lVar9 = plVar3[6];
          plVar3[8] = (ulong)uVar4;
          if (lVar9 == plVar3[4]) {
            uVar7 = plVar3[5];
          }
          else {
            lVar5 = plVar3[5];
            uVar8 = (ulong)*(uint *)(lVar5 + -1);
            if (lVar9 == 0) {
              uVar7 = *(ulong *)(unaff_x26 + 0x168);
            }
            else {
              if (*(uint *)(lVar5 + -1) == (uint)*(undefined8 *)(unaff_x26 + 0xe8)) {
                uVar8 = *(ulong *)(unaff_x26 + 0xe0);
              }
              if (0x7fffffd < lVar9) {
                    /* WARNING: Subroutine does not return */
                FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
              }
              lVar11 = **(long **)(unaff_x26 + 0x1428);
              lVar6 = lVar9 * 4;
              uVar14 = (int)lVar9 * 2;
              uVar7 = lVar11 + lVar6 + 8U;
              if ((uVar7 < **(ulong **)(unaff_x26 + 0x1430)) && (lVar6 + 8U < 0x20000)) {
                **(ulong **)(unaff_x26 + 0x1428) = uVar7;
                uVar7 = lVar11 + 1;
              }
              else {
                plVar3[4] = lVar6;
                plVar3[3] = uVar8;
                plVar3[2] = (ulong)uVar14;
                uVar10 = FUN_01348500();
                uVar4 = (uint)plVar3[8];
                lVar9 = plVar3[6];
                lVar5 = plVar3[5];
                lVar6 = plVar3[4];
                uVar8 = plVar3[3];
                uVar14 = (uint)plVar3[2];
                uVar7 = uVar10;
              }
              *(int *)(uVar7 - 1) = (int)uVar8;
              *(uint *)(uVar7 + 3) = uVar14;
              lVar11 = *(long *)((uVar7 & 0xfffffffffffc0000) + 8);
              plVar3[7] = uVar7;
              if (((uint)lVar11 >> 2 & 1) == 0) {
                pcVar16 = *(code **)(unaff_x26 + 0x11d0);
                plVar3[-4] = lVar9;
                plVar3[-3] = lVar11;
                *(undefined8 *)(unaff_x26 + 0x40) = 0x138bc28;
                *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
                lVar9 = plVar3[-3];
                uVar10 = (*pcVar16)(uVar7 + 7,lVar5 + 7);
                plVar3[-4] = 0;
                plVar3[-3] = lVar9;
                *(undefined8 *)(unaff_x26 + 0x38) = 0;
                uVar4 = (uint)plVar3[8];
                lVar9 = plVar3[6];
                uVar7 = plVar3[7];
              }
              else if (lVar6 + 7 != 7) {
                lVar11 = 7;
                do {
                  lVar15 = lVar11 + 4;
                  *(undefined4 *)(uVar7 + lVar11) = *(undefined4 *)(lVar5 + lVar11);
                  lVar11 = lVar15;
                } while (lVar15 != lVar6 + 7);
              }
            }
          }
          uVar12 = **(ulong **)(unaff_x26 + 0x1428);
          uVar14 = (int)lVar9 * 2;
          uVar8 = uVar12 + 0x10;
          if (uVar8 < **(ulong **)(unaff_x26 + 0x1430)) {
            lVar9 = uVar12 + 1;
            **(ulong **)(unaff_x26 + 0x1428) = uVar8;
          }
          else {
            plVar3[5] = uVar7;
            plVar3[7] = (ulong)uVar14;
            lVar9 = FUN_01348560(uVar10,0x10);
            uVar7 = plVar3[5];
            uVar4 = (uint)plVar3[8];
            uVar14 = (uint)plVar3[7];
          }
          *(uint *)(lVar9 + -1) = uVar4;
          *(uint *)(lVar9 + 0xb) = uVar14;
          *(int *)(lVar9 + 3) = (int)*(undefined8 *)(unaff_x26 + 0x168);
          *(int *)(lVar9 + 7) = (int)uVar7;
          return lVar9;
        }
      }
      else if ((uVar4 != (uint)*(undefined8 *)(unaff_x26 + 200)) &&
              (lVar9 = unaff_x26 + (ulong)*(uint *)(uVar10 - 1),
              (*(byte *)(lVar9 + 9) >> 4 & 1) == 0)) {
        if ((int)lVar9 != (int)*(undefined8 *)(unaff_x26 + 0x140)) {
          if (*(short *)(lVar9 + 7) != 0x41) goto LAB_0138bb38;
          uVar4 = *(uint *)(uVar10 + 3) >> 1 & 0x3fffffff;
          goto joined_r0x0138b9bc;
        }
        if (0.0 < ABS(*(double *)(uVar10 + 3))) goto LAB_0138bb38;
      }
    }
    lVar5 = 0x138b9d0;
    auVar17 = FUN_013c0ba0(plVar3[7],*(undefined8 *)(unaff_x26 + 0xac8));
    lVar9 = auVar17._0_8_;
    uVar10 = plVar3[4];
    plVar3[7] = lVar9;
    uVar8 = plVar3[6];
    if (uVar10 == uVar8) {
      lVar6 = plVar3[5];
      uVar4 = *(uint *)(lVar6 + -1);
      uVar12 = (ulong)uVar4;
      uVar10 = uVar10 + (uVar10 >> 1) + 0x10;
      plVar3[4] = uVar10;
      if (uVar10 == 0) {
        uVar7 = *(ulong *)(unaff_x26 + 0x168);
      }
      else {
        if (uVar4 == (uint)*(undefined8 *)(unaff_x26 + 0xe8)) {
          uVar12 = *(ulong *)(unaff_x26 + 0xe0);
        }
        if (0x7fffffd < (long)uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
        }
        lVar15 = uVar10 * 4;
        uVar7 = lVar15 + 8;
        lVar11 = uVar8 * 4 + 7;
        uVar1 = **(long **)(unaff_x26 + 0x1428) + uVar7;
        if ((uVar1 < **(ulong **)(unaff_x26 + 0x1430)) && (uVar7 < 0x20000)) {
          auVar18._8_8_ = uVar7;
          auVar18._0_8_ = **(long **)(unaff_x26 + 0x1428) + 1;
          **(ulong **)(unaff_x26 + 0x1428) = uVar1;
        }
        else {
          plVar3[2] = lVar11;
          plVar3[1] = uVar12;
          *plVar3 = lVar15;
          lVar5 = 0x138bcf4;
          auVar18 = FUN_01348500();
          uVar8 = plVar3[6];
          lVar6 = plVar3[5];
          lVar9 = plVar3[7];
          uVar10 = plVar3[4];
          lVar11 = plVar3[2];
          uVar12 = plVar3[1];
          lVar15 = *plVar3;
        }
        uVar7 = auVar18._0_8_;
        auVar2._8_8_ = auVar18._8_8_;
        auVar2._0_8_ = lVar9;
        auVar17._8_8_ = auVar18._8_8_;
        auVar17._0_8_ = lVar9;
        *(int *)(uVar7 - 1) = (int)uVar12;
        *(int *)(uVar7 + 3) = (int)uVar10 * 2;
        lVar15 = lVar15 + 7;
        plVar3[3] = uVar7;
        if (lVar15 != lVar11) {
          uVar13 = *(undefined8 *)(unaff_x26 + 0xa8);
          do {
            lVar15 = lVar15 + -4;
            *(int *)(uVar7 + lVar15) = (int)uVar13;
          } while (lVar15 != lVar11);
        }
        if (((uint)*(undefined8 *)((uVar7 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
          param_3 = uVar8 << 2;
          pcVar16 = *(code **)(unaff_x26 + 0x11d0);
          plVar3[-4] = uVar8;
          plVar3[-3] = uVar7;
          *(undefined8 *)(unaff_x26 + 0x40) = 0x138baec;
          *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
          lVar11 = plVar3[-3];
          lVar5 = 0x138bb08;
          (*pcVar16)(uVar7 + 7,lVar6 + 7,param_3,lVar9,lVar11,plVar3[-4]);
          plVar3[-4] = 0;
          plVar3[-3] = lVar11;
          *(undefined8 *)(unaff_x26 + 0x38) = 0;
          uVar8 = plVar3[6];
          auVar17._8_8_ = extraout_x1;
          auVar17._0_8_ = plVar3[7];
          uVar10 = plVar3[4];
          uVar7 = plVar3[3];
        }
        else if (lVar11 != 7) {
          lVar9 = 7;
          do {
            lVar15 = lVar9 + 4;
            *(undefined4 *)(uVar7 + lVar9) = *(undefined4 *)(lVar6 + lVar9);
            lVar9 = lVar15;
            auVar17 = auVar2;
          } while (lVar15 != lVar11);
        }
      }
    }
    else {
      uVar7 = plVar3[5];
    }
    lVar9 = uVar8 * 4 + 7;
    *(int *)(uVar7 + lVar9) = auVar17._0_4_;
    if (((((uint)*(undefined8 *)((uVar7 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
        ((auVar17._0_8_ & 1) != 0)) &&
       (uVar12 = unaff_x26 + (auVar17._0_8_ & 0xffffffff),
       ((uint)*(undefined8 *)((uVar12 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
      plVar3[-6] = param_3;
      plVar3[-5] = lVar9;
      plVar3[-4] = uVar12;
      plVar3[-3] = lVar5;
      *(undefined1 (*) [16])(plVar3 + -8) = auVar17;
      FUN_0133eb00(uVar7,uVar7 + lVar9,0,2);
      param_3 = plVar3[-6];
    }
    lVar9 = uVar8 + 1;
    lVar5 = plVar3[-1];
    plVar3 = plVar3 + -2;
  } while( true );
}

