
ulong FUN_01348680(ulong param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong extraout_x8;
  long unaff_x26;
  
  lVar2 = unaff_x26 + (ulong)*(uint *)(param_1 + 7);
  uVar6 = (ulong)*(uint *)(lVar2 + -1);
  iVar4 = (int)unaff_x26 + *(int *)(lVar2 + 3) >> 1;
  lVar8 = (long)iVar4;
  if (lVar8 == 0) {
    uVar9 = *(ulong *)(unaff_x26 + 0x168);
  }
  else {
    if (*(uint *)(lVar2 + -1) == (uint)*(undefined8 *)(unaff_x26 + 0xe8)) {
      uVar6 = *(ulong *)(unaff_x26 + 0xe0);
    }
    if (0x7fffffd < lVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
    }
    uVar9 = **(ulong **)(unaff_x26 + 0x1428);
    lVar8 = lVar8 * 4;
    uVar3 = uVar9 + lVar8 + 8U;
    if ((uVar3 < **(ulong **)(unaff_x26 + 0x1430)) && (lVar8 + 8U < 0x20000)) {
      uVar9 = uVar9 + 1;
      **(ulong **)(unaff_x26 + 0x1428) = uVar3;
    }
    else {
      uVar9 = FUN_01348500();
    }
    *(int *)(uVar9 - 1) = (int)uVar6;
    *(int *)(uVar9 + 3) = iVar4 * 2;
    uVar5 = *(undefined8 *)((uVar9 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar5 >> 2 & 1) == 0) {
      *(undefined8 *)(unaff_x26 + 0x40) = 0x1348774;
      *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
      (**(code **)(unaff_x26 + 0x11d0))(uVar9 + 7,lVar2 + 7,lVar8,param_1,uVar5,uVar6);
      *(undefined8 *)(unaff_x26 + 0x38) = 0;
    }
    else if (lVar8 + 7 != 7) {
      lVar7 = 7;
      do {
        lVar1 = lVar7 + 4;
        *(undefined4 *)(uVar9 + lVar7) = *(undefined4 *)(lVar2 + lVar7);
        lVar7 = lVar1;
      } while (lVar1 != lVar8 + 7);
    }
  }
  *(int *)(param_1 + 7) = (int)uVar9;
  if (((((uint)*(undefined8 *)((param_1 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
      ((uVar9 & 1) != 0)) &&
     (uVar9 = unaff_x26 + (uVar9 & 0xffffffff),
     ((uint)*(undefined8 *)((uVar9 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0)) {
    FUN_0133eb00(param_1,param_1 + 7,0,2);
    uVar9 = extraout_x8;
  }
  return uVar9;
}

