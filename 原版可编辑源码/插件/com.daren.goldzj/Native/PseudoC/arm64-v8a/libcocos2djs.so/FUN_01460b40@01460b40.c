
void FUN_01460b40(ulong param_1)

{
  long lVar1;
  short sVar2;
  bool bVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  uint extraout_w8;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  ulong extraout_x8;
  ulong uVar15;
  ulong uVar16;
  ulong extraout_x9;
  ulong uVar17;
  long extraout_x10;
  long extraout_x10_00;
  long lVar18;
  long lVar19;
  undefined8 extraout_x11;
  undefined8 uVar20;
  uint extraout_w12;
  double dVar21;
  uint extraout_w13;
  uint extraout_w13_00;
  uint uVar22;
  uint uVar23;
  undefined8 uVar24;
  undefined8 extraout_x14;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x26;
  long unaff_x29;
  double dVar25;
  
  uVar6 = *(ulong *)(unaff_x29 + (long)*(int *)(unaff_x20 + unaff_x19 + 1) * 8);
  lVar7 = unaff_x26 +
          (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(*(long *)(unaff_x29 + -0x10) + 0x13) + 3);
  if (*(int *)(lVar7 + -1) != (int)*(undefined8 *)(unaff_x26 + 0x158)) {
    lVar7 = *(long *)(unaff_x26 + 0xa0);
  }
  lVar19 = unaff_x19 + 9;
  bVar3 = (int)lVar7 == (int)*(undefined8 *)(unaff_x26 + 0xa0);
  uVar14 = (ulong)bVar3;
  uVar9 = ((int)unaff_x19 + -1) * 2;
  uVar16 = (ulong)uVar9;
  lVar11 = (ulong)*(uint *)(unaff_x20 + unaff_x19 + 5) * 4 + 0x1f;
  uVar24 = *(undefined8 *)(unaff_x26 + 0x140);
  uVar23 = 0;
  while( true ) {
    uVar20 = 0;
    lVar4 = unaff_x29;
    lVar8 = lVar7;
    lVar10 = lVar11;
    uVar15 = uVar14;
    uVar17 = uVar16;
    lVar18 = lVar19;
    if ((uVar6 & 1) == 0) break;
    lVar1 = unaff_x26 + (ulong)*(uint *)(uVar6 - 1);
    if ((int)lVar1 == (int)uVar24) {
      dVar25 = *(double *)(uVar6 + 3);
      uVar23 = uVar23 | 0xe;
      dVar21 = (double)(long)dVar25;
      if (SBORROW8((long)dVar21,1) || SCARRY8((long)dVar21,1)) {
        param_1 = FUN_013c0b40();
        uVar15 = extraout_x8;
        uVar17 = extraout_x9;
        lVar18 = extraout_x10;
        uVar20 = extraout_x11;
        dVar21 = dVar25;
        uVar24 = extraout_x14;
        uVar23 = extraout_w13;
      }
      uVar12 = SUB84(dVar21,0);
      goto LAB_01460d7c;
    }
    sVar2 = *(short *)(lVar1 + 7);
    if (sVar2 == 0x41) {
      if (((((param_1 & 1) != 0) &&
           (lVar7 = unaff_x26 + (ulong)*(uint *)(param_1 - 1), (int)lVar7 != (int)uVar24)) &&
          (sVar2 = *(short *)(lVar7 + 7), sVar2 != 0x41)) && (sVar2 != 0x43)) {
        *(uint *)(unaff_x29 + -0x20) = uVar9;
        thunk_FUN_01349d90();
      }
      goto LAB_01460e18;
    }
    if (sVar2 == 0x43) {
      uVar6 = unaff_x26 + (ulong)*(uint *)(uVar6 + 0xf);
      uVar23 = 0x1e;
    }
    else {
      *(uint *)(unaff_x29 + -0x20) = uVar9;
      uVar6 = thunk_FUN_01349d90(uVar6);
      uVar24 = *(undefined8 *)(unaff_x26 + 0x140);
      uVar23 = 0xfe;
    }
  }
  uVar23 = uVar23 | 2;
  uVar12 = (int)uVar6 >> 1;
LAB_01460d7c:
  do {
    uVar9 = (uint)uVar17;
    uVar13 = (uint)uVar15;
    uVar22 = uVar23;
    if ((param_1 & 1) == 0) {
      uVar5 = (uint)uVar20 | 2;
      uVar9 = (int)param_1 >> 1;
LAB_01460ee4:
      uVar12 = uVar12 ^ uVar9;
      if (SCARRY4(uVar12,uVar12)) {
        uVar14 = **(ulong **)(unaff_x26 + 0x1428);
        uVar6 = uVar14 + 0xc;
        if (uVar6 < **(ulong **)(unaff_x26 + 0x1430)) {
          uVar14 = uVar14 + 1;
          **(ulong **)(unaff_x26 + 0x1428) = uVar6;
        }
        else {
          uVar14 = FUN_01348560(param_1,0xc);
        }
        *(int *)(uVar14 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
        *(double *)(uVar14 + 3) = (double)(int)uVar12;
        uVar13 = (uint)bVar3;
      }
      else {
        uVar14 = (ulong)(int)(uVar12 * 2);
        unaff_x29 = lVar4;
        lVar7 = lVar8;
        lVar11 = lVar10;
        lVar19 = lVar18;
        uVar23 = uVar22;
      }
      if ((uVar14 & 1) == 0) {
        uVar9 = 2;
      }
      else {
        uVar9 = 0xe;
      }
      if ((uVar13 == 0) &&
         (uVar12 = (int)unaff_x26 + *(int *)(lVar7 + lVar11),
         uVar23 = uVar12 | uVar9 | uVar23 | uVar5, uVar12 != uVar23)) {
        *(uint *)(lVar7 + lVar11) = uVar23;
        *(undefined4 *)(lVar7 + 0x17) = 0;
      }
                    /* WARNING: Could not recover jumptable at 0x01460f54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(unaff_x29 + -0x18) + lVar19) * 8))(uVar14)
      ;
      return;
    }
    lVar1 = unaff_x26 + (ulong)*(uint *)(param_1 - 1);
    if ((int)lVar1 == (int)uVar24) {
      dVar25 = *(double *)(param_1 + 3);
      uVar5 = (uint)uVar20 | 0xe;
      dVar21 = (double)(long)dVar25;
      if (SBORROW8((long)dVar21,1) || SCARRY8((long)dVar21,1)) {
        param_1 = FUN_013c0b40();
        dVar21 = dVar25;
        lVar18 = extraout_x10_00;
        uVar12 = extraout_w12;
        uVar13 = extraout_w8;
        uVar22 = extraout_w13_00;
      }
      uVar9 = SUB84(dVar21,0);
      goto LAB_01460ee4;
    }
    sVar2 = *(short *)(lVar1 + 7);
    if (sVar2 == 0x41) {
LAB_01460e18:
      *(uint *)(lVar4 + -0x20) = uVar9;
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x1bf0));
    }
    if (sVar2 == 0x43) {
      param_1 = unaff_x26 + (ulong)*(uint *)(param_1 + 0xf);
      uVar20 = 0x1e;
    }
    else {
      *(uint *)(lVar4 + -0x20) = uVar9;
      param_1 = thunk_FUN_01349d90();
      uVar24 = *(undefined8 *)(unaff_x26 + 0x140);
      lVar4 = unaff_x29;
      lVar8 = lVar7;
      lVar10 = lVar11;
      uVar15 = uVar14;
      uVar17 = uVar16;
      lVar18 = lVar19;
      uVar20 = 0xfe;
    }
  } while( true );
}

