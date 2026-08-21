
undefined1  [16] FUN_013d2144(long param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long unaff_x26;
  long unaff_x27;
  undefined1 auVar10 [16];
  
  iVar6 = *(int *)(param_1 + -1);
  lVar5 = param_4 + (param_4 >> 1) + 0x10;
  if (lVar5 == 0) {
    uVar9 = *(ulong *)(unaff_x26 + 0x168);
  }
  else {
    if (iVar6 == (int)*(undefined8 *)(unaff_x26 + 0xe8)) {
      iVar6 = (int)*(undefined8 *)(unaff_x26 + 0xe0);
    }
    if (0x7fffffd < lVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x1fd0));
    }
    uVar9 = **(ulong **)(unaff_x26 + 0x1428);
    uVar1 = lVar5 * 4 + 8;
    uVar3 = uVar9 + uVar1;
    if ((uVar3 < **(ulong **)(unaff_x26 + 0x1430)) && (uVar1 < 0x20000)) {
      uVar9 = uVar9 + 1;
      **(ulong **)(unaff_x26 + 0x1428) = uVar3;
    }
    else {
      uVar9 = FUN_01348500(param_1,uVar1,param_3,param_4,param_2);
    }
    *(int *)(uVar9 - 1) = iVar6;
    *(int *)(uVar9 + 3) = (int)lVar5 * 2;
    lVar5 = lVar5 * 4 + 7;
    lVar8 = param_4 * 4 + 7;
    if (lVar5 != lVar8) {
      uVar7 = *(undefined8 *)(unaff_x26 + 0xa8);
      do {
        lVar5 = lVar5 + -4;
        *(int *)(uVar9 + lVar5) = (int)uVar7;
      } while (lVar5 != lVar8);
    }
    if (((uint)*(undefined8 *)((uVar9 & 0xfffffffffffc0000) + 8) >> 2 & 1) == 0) {
      *(undefined8 *)(unaff_x26 + 0x40) = 0x13d2298;
      *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
      (**(code **)(unaff_x26 + 0x11d0))(uVar9 + 7,param_1 + 7,param_4 * 4,uVar9,param_4,param_2);
      *(undefined8 *)(unaff_x26 + 0x38) = 0;
    }
    else {
      lVar5 = param_4 * 4 + 7;
      if (lVar5 != 7) {
        lVar8 = 7;
        do {
          lVar2 = lVar8 + 4;
          *(undefined4 *)(uVar9 + lVar8) = *(undefined4 *)(param_1 + lVar8);
          lVar8 = lVar2;
        } while (lVar2 != lVar5);
      }
    }
  }
  if (param_4 < (ulong)((long)((ulong)*(uint *)(uVar9 + 3) << 0x20) >> 0x21)) {
    lVar5 = param_4 * 4 + 7;
    *(int *)(uVar9 + lVar5) = (int)param_2;
    if (((((uint)*(undefined8 *)((uVar9 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
        ((param_2 & 1) != 0)) &&
       (((uint)*(undefined8 *)((unaff_x26 + (param_2 & 0xffffffff) & 0xfffffffffffc0000) + 8) >> 1 &
        1) != 0)) {
      FUN_0133eb00(uVar9,uVar9 + lVar5,0,2);
    }
    uVar1 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13);
    *(int *)(uVar1 + 0x33) = (int)uVar9;
    if (((((uint)*(undefined8 *)((uVar1 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
        ((uVar9 & 1) != 0)) &&
       (((uint)*(undefined8 *)((unaff_x26 + (uVar9 & 0xffffffff) & 0xfffffffffffc0000) + 8) >> 1 & 1
        ) != 0)) {
      FUN_0133eb00(uVar1,uVar1 + 0x33,0,2);
    }
    auVar10._0_8_ = *(undefined8 *)(unaff_x26 + 0xb8);
    auVar10._8_8_ = param_2;
    return auVar10;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(0,0x13d230c);
  (*pcVar4)();
}

