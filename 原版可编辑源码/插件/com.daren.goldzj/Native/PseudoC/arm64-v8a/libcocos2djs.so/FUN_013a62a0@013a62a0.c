
long FUN_013a62a0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long extraout_x9;
  long lVar18;
  long extraout_x10;
  long unaff_x26;
  long unaff_x27;
  undefined8 unaff_x30;
  
  bVar5 = *(short *)(unaff_x26 + (ulong)*(uint *)(param_1 - 1) + 7) == 0x41d;
  uVar10 = (ulong)bVar5;
  uVar7 = param_1;
  uVar11 = uVar10;
  if (bVar5) {
    uVar13 = unaff_x26 + (ulong)*(uint *)(param_1 + 0xb);
  }
  else {
    uVar13 = unaff_x26 + (ulong)*(uint *)(param_1 + 0xb);
    iVar6 = *(int *)(param_1 + 0xf);
    if ((unaff_x26 + (ulong)*(uint *)(uVar13 + 7) & 1) != 0) {
      while( true ) {
        uVar15 = unaff_x26 + (ulong)*(uint *)(uVar13 + 7);
        iVar6 = (iVar6 >> 1) * 2;
        if ((uVar15 & 1) == 0) break;
        unaff_x30 = 0x13a65f4;
        iVar6 = FUN_01346ea0(uVar13);
        uVar13 = uVar15;
      }
      *(int *)(param_1 + 0xb) = (int)uVar13;
      if (((((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
          ((uVar13 & 1) != 0)) &&
         (uVar13 = unaff_x26 + (uVar13 & 0xffffffff),
         ((uint)*(undefined8 *)((uVar13 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
        FUN_0133eb00(param_1,param_1 + 0xb,0,2,uVar13,param_1,0,uVar15,param_1,iVar6,param_3,0,
                     uVar13,unaff_x30);
      }
      *(int *)(uVar7 + 0xf) = iVar6;
    }
  }
  iVar6 = *(int *)(uVar13 + 7) >> 1;
  uVar15 = (ulong)iVar6;
  uVar2 = *(undefined4 *)
           (unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13) +
           0x167);
  if (uVar15 == 0) {
    uVar17 = **(ulong **)(unaff_x26 + 0x1428);
    uVar16 = uVar17 + 0x10;
    if (uVar16 < **(ulong **)(unaff_x26 + 0x1430)) {
      lVar9 = uVar17 + 1;
      **(ulong **)(unaff_x26 + 0x1428) = uVar16;
      param_1 = uVar7;
      uVar10 = uVar11;
    }
    else {
      lVar9 = FUN_01348560(uVar7,0x10);
    }
    *(undefined4 *)(lVar9 + -1) = uVar2;
    *(int *)(lVar9 + 0xb) = iVar6 * 2;
    lVar12 = *(long *)(unaff_x26 + 0x168);
    *(int *)(lVar9 + 3) = (int)lVar12;
    *(int *)(lVar9 + 7) = (int)lVar12;
    bVar5 = true;
  }
  else {
    uVar16 = uVar15 * 4 + 0x18;
    if (uVar16 < 0x20001) {
      uVar17 = **(ulong **)(unaff_x26 + 0x1428);
      uVar16 = uVar17 + uVar16;
      if (uVar16 < **(ulong **)(unaff_x26 + 0x1430)) {
        lVar9 = uVar17 + 1;
        **(ulong **)(unaff_x26 + 0x1428) = uVar16;
        param_1 = uVar7;
        uVar10 = uVar11;
      }
      else {
        lVar9 = FUN_01348560();
      }
      *(undefined4 *)(lVar9 + -1) = uVar2;
      *(int *)(lVar9 + 0xb) = iVar6 * 2;
      lVar12 = lVar9 + 0x10;
      *(int *)(lVar9 + 3) = (int)*(undefined8 *)(unaff_x26 + 0x168);
      *(int *)(lVar9 + 7) = (int)lVar12;
      *(int *)(lVar9 + 0xf) = (int)*(undefined8 *)(unaff_x26 + 0xe0);
      *(int *)(lVar9 + 0x13) = iVar6 * 2;
      bVar5 = false;
    }
    else {
      if (0x2000000 < uVar15) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(0,0x13a6630);
        (*pcVar4)();
      }
      if (0x7fffffd < (long)uVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
      }
      uVar16 = **(ulong **)(unaff_x26 + 0x1428);
      uVar7 = uVar15 * 4 + 8;
      uVar11 = uVar16 + uVar7;
      if ((uVar11 < **(ulong **)(unaff_x26 + 0x1430)) && (uVar7 < 0x20000)) {
        lVar12 = uVar16 + 1;
        **(ulong **)(unaff_x26 + 0x1428) = uVar11;
      }
      else {
        lVar12 = FUN_01348500();
      }
      *(int *)(lVar12 + -1) = (int)*(undefined8 *)(unaff_x26 + 0xe0);
      *(int *)(lVar12 + 3) = iVar6 * 2;
      *(undefined8 *)(unaff_x26 + 0x40) = 0x13a63c4;
      *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
      uVar8 = (**(code **)(unaff_x26 + 0x11e0))(lVar12 + 7,0);
      *(undefined8 *)(unaff_x26 + 0x38) = 0;
      uVar11 = **(ulong **)(unaff_x26 + 0x1428);
      uVar7 = uVar11 + 0x10;
      if (uVar7 < **(ulong **)(unaff_x26 + 0x1430)) {
        lVar9 = uVar11 + 1;
        **(ulong **)(unaff_x26 + 0x1428) = uVar7;
      }
      else {
        lVar9 = FUN_01348560(uVar8,0x10);
      }
      *(undefined4 *)(lVar9 + -1) = uVar2;
      *(int *)(lVar9 + 0xb) = iVar6 * 2;
      *(int *)(lVar9 + 3) = (int)*(undefined8 *)(unaff_x26 + 0x168);
      *(int *)(lVar9 + 7) = (int)lVar12;
      bVar5 = false;
    }
  }
  if ((!bVar5) && (lVar14 = uVar15 * 4 + 7, lVar14 != 7)) {
    uVar8 = *(undefined8 *)(unaff_x26 + 0xa8);
    do {
      lVar14 = lVar14 + -4;
      *(int *)(lVar12 + lVar14) = (int)uVar8;
    } while (lVar14 != 7);
  }
  uVar7 = unaff_x26 + (ulong)*(uint *)(lVar9 + 7);
  lVar14 = 0;
  lVar12 = 7;
  do {
    lVar18 = lVar14;
    do {
      if (((long)((ulong)*(uint *)(uVar13 + 7) << 0x20) >> 0x21) +
          ((long)((ulong)*(uint *)(uVar13 + 0xb) << 0x20) >> 0x21) <= lVar18) {
        if ((int)uVar10 == 0) {
          *(int *)(param_1 + 0xb) = (int)*(undefined8 *)(unaff_x26 + 0x3f8);
          *(int *)(param_1 + 0xf) = (int)lVar14 * 2;
        }
        return lVar9;
      }
      lVar1 = lVar18 * 2;
      lVar18 = lVar18 + 1;
      uVar3 = *(uint *)(uVar13 + (((long)((ulong)*(uint *)(uVar13 + 0xf) << 0x20) >> 0x21) + lVar1)
                                 * 4 + 0x13);
    } while (uVar3 == (uint)*(undefined8 *)(unaff_x26 + 0xa8));
    *(uint *)(uVar7 + lVar12) = uVar3;
    lVar14 = lVar18;
    if (((((uint)*(undefined8 *)((uVar7 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
        ((uVar3 & 1) != 0)) &&
       (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar3 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0))
    {
      FUN_0133eb00(uVar7,uVar7 + lVar12,0,2);
      lVar9 = extraout_x9;
      lVar14 = extraout_x10;
    }
    lVar12 = lVar12 + 4;
  } while( true );
}

