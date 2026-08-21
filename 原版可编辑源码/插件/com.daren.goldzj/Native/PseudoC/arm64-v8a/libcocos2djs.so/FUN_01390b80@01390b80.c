
long FUN_01390b80(ulong param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  bool bVar4;
  code *pcVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x10;
  long extraout_x10_00;
  long lVar16;
  long unaff_x26;
  long unaff_x27;
  
  uVar10 = unaff_x26 + (ulong)*(uint *)(param_1 + 0xb);
  lVar8 = (long)((ulong)*(uint *)(param_1 + 0xf) << 0x20) >> 0x21;
  uVar6 = param_1;
  if ((unaff_x26 + (ulong)*(uint *)(uVar10 + 7) & 1) != 0) {
    while( true ) {
      uVar14 = unaff_x26 + (ulong)*(uint *)(uVar10 + 7);
      if ((uVar14 & 1) == 0) break;
      lVar8 = FUN_01346ea0(uVar10);
      lVar8 = (lVar8 << 0x20) >> 0x21;
      uVar10 = uVar14;
    }
    *(int *)(param_1 + 0xb) = (int)uVar10;
    if (((((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
        ((uVar10 & 1) != 0)) &&
       (uVar10 = unaff_x26 + (uVar10 & 0xffffffff),
       ((uint)*(undefined8 *)((uVar10 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
      FUN_0133eb00(param_1,param_1 + 0xb,0,2,lVar8,0);
    }
    *(int *)(uVar6 + 0xf) = (int)lVar8 * 2;
  }
  iVar1 = *(int *)(uVar10 + 7) >> 1;
  uVar14 = (ulong)iVar1;
  uVar2 = *(undefined4 *)
           (unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13) +
           0x167);
  if (uVar14 == 0) {
    uVar15 = **(ulong **)(unaff_x26 + 0x1428);
    uVar11 = uVar15 + 0x10;
    if (uVar11 < **(ulong **)(unaff_x26 + 0x1430)) {
      lVar9 = uVar15 + 1;
      **(ulong **)(unaff_x26 + 0x1428) = uVar11;
      param_1 = uVar6;
    }
    else {
      lVar9 = FUN_01348560(uVar6,0x10);
    }
    *(undefined4 *)(lVar9 + -1) = uVar2;
    *(int *)(lVar9 + 0xb) = iVar1 * 2;
    lVar13 = *(long *)(unaff_x26 + 0x168);
    *(int *)(lVar9 + 3) = (int)lVar13;
    *(int *)(lVar9 + 7) = (int)lVar13;
    bVar4 = true;
  }
  else {
    uVar11 = uVar14 * 4 + 0x18;
    if (uVar11 < 0x20001) {
      uVar15 = **(ulong **)(unaff_x26 + 0x1428);
      uVar11 = uVar15 + uVar11;
      if (uVar11 < **(ulong **)(unaff_x26 + 0x1430)) {
        lVar9 = uVar15 + 1;
        **(ulong **)(unaff_x26 + 0x1428) = uVar11;
        param_1 = uVar6;
      }
      else {
        lVar9 = FUN_01348560();
      }
      *(undefined4 *)(lVar9 + -1) = uVar2;
      *(int *)(lVar9 + 0xb) = iVar1 * 2;
      lVar13 = lVar9 + 0x10;
      *(int *)(lVar9 + 3) = (int)*(undefined8 *)(unaff_x26 + 0x168);
      *(int *)(lVar9 + 7) = (int)lVar13;
      *(int *)(lVar9 + 0xf) = (int)*(undefined8 *)(unaff_x26 + 0xe0);
      *(int *)(lVar9 + 0x13) = iVar1 * 2;
      bVar4 = false;
    }
    else {
      if (0x2000000 < uVar14) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0,0x1390f10);
        (*pcVar5)();
      }
      if (0x7fffffd < (long)uVar14) {
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
      }
      uVar15 = **(ulong **)(unaff_x26 + 0x1428);
      uVar6 = uVar14 * 4 + 8;
      uVar11 = uVar15 + uVar6;
      if ((uVar11 < **(ulong **)(unaff_x26 + 0x1430)) && (uVar6 < 0x20000)) {
        lVar13 = uVar15 + 1;
        **(ulong **)(unaff_x26 + 0x1428) = uVar11;
      }
      else {
        lVar13 = FUN_01348500();
      }
      *(int *)(lVar13 + -1) = (int)*(undefined8 *)(unaff_x26 + 0xe0);
      *(int *)(lVar13 + 3) = iVar1 * 2;
      *(undefined8 *)(unaff_x26 + 0x40) = 0x1390c84;
      *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
      uVar7 = (**(code **)(unaff_x26 + 0x11e0))(lVar13 + 7,0);
      *(undefined8 *)(unaff_x26 + 0x38) = 0;
      uVar11 = **(ulong **)(unaff_x26 + 0x1428);
      uVar6 = uVar11 + 0x10;
      if (uVar6 < **(ulong **)(unaff_x26 + 0x1430)) {
        lVar9 = uVar11 + 1;
        **(ulong **)(unaff_x26 + 0x1428) = uVar6;
      }
      else {
        lVar9 = FUN_01348560(uVar7,0x10);
      }
      *(undefined4 *)(lVar9 + -1) = uVar2;
      *(int *)(lVar9 + 0xb) = iVar1 * 2;
      *(int *)(lVar9 + 3) = (int)*(undefined8 *)(unaff_x26 + 0x168);
      *(int *)(lVar9 + 7) = (int)lVar13;
      bVar4 = false;
    }
  }
  if ((!bVar4) && (lVar12 = uVar14 * 4 + 7, lVar12 != 7)) {
    uVar7 = *(undefined8 *)(unaff_x26 + 0xa8);
    do {
      lVar12 = lVar12 + -4;
      *(int *)(lVar13 + lVar12) = (int)uVar7;
    } while (lVar12 != 7);
  }
  uVar6 = unaff_x26 + (ulong)*(uint *)(lVar9 + 7);
  lVar13 = 7;
  do {
    lVar12 = lVar8;
    do {
      if (((long)((ulong)*(uint *)(uVar10 + 7) << 0x20) >> 0x21) +
          ((long)((ulong)*(uint *)(uVar10 + 0xb) << 0x20) >> 0x21) <= lVar12) {
        *(int *)(param_1 + 0xb) = (int)*(undefined8 *)(unaff_x26 + 0x3f0);
        *(int *)(param_1 + 0xf) = (int)lVar8 * 2;
        return lVar9;
      }
      lVar16 = (lVar12 * 3 + ((long)((ulong)*(uint *)(uVar10 + 0xf) << 0x20) >> 0x21)) * 4;
      uVar3 = *(uint *)(uVar10 + lVar16 + 0x13);
      lVar12 = lVar12 + 1;
    } while (uVar3 == (uint)*(undefined8 *)(unaff_x26 + 0xa8));
    lVar8 = lVar12;
    if (*(short *)(unaff_x26 + (ulong)*(uint *)(param_1 - 1) + 7) == 0x412) {
      *(uint *)(uVar6 + lVar13) = uVar3;
      if (((((uint)*(undefined8 *)((uVar6 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
          ((uVar3 & 1) != 0)) &&
         (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar3 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0
         )) {
        FUN_0133eb00(uVar6,uVar6 + lVar13,0,2);
        lVar9 = extraout_x9;
        lVar8 = extraout_x10;
      }
    }
    else {
      uVar3 = *(uint *)(uVar10 + lVar16 + 0x17);
      *(uint *)(uVar6 + lVar13) = uVar3;
      if (((((uint)*(undefined8 *)((uVar6 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
          ((uVar3 & 1) != 0)) &&
         (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar3 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0
         )) {
        FUN_0133eb00(uVar6,uVar6 + lVar13,0,2);
        lVar9 = extraout_x9_00;
        lVar8 = extraout_x10_00;
      }
    }
    lVar13 = lVar13 + 4;
  } while( true );
}

