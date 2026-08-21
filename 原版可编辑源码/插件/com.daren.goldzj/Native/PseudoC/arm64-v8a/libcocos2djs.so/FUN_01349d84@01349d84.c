
ulong FUN_01349d84(ulong param_1,undefined8 param_2)

{
  long lVar1;
  ushort uVar2;
  ulong uVar3;
  long unaff_x26;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000000;
  
  uVar2 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(param_1 - 1) + 7);
  if (uVar2 < 0x40) {
    if ((*(uint *)(param_1 + 3) & 0xc0000002) == 0) {
      return (ulong)((*(uint *)(param_1 + 3) >> 3 & 0xffffff) * 2);
    }
    *unaff_x29 = *unaff_x29;
    unaff_x29[1] = unaff_x29[1];
    unaff_x29[-1] = 0x1a;
    unaff_x29[-3] = 0;
    unaff_x29[-4] = param_1;
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x2190));
  }
  if (uVar2 == 0x41) {
    return param_1;
  }
  if (uVar2 == 0x43) {
    return unaff_x26 + (ulong)*(uint *)(param_1 + 0xf);
  }
  *unaff_x29 = *unaff_x29;
  unaff_x29[1] = unaff_x29[1];
  unaff_x29[-1] = 0x1a;
  unaff_x29[-2] = in_stack_00000000;
  if (0xa8 < uVar2) {
    uVar3 = FUN_013498a0(param_1,param_2,in_stack_00000000);
    if ((uVar3 & 1) != 0) {
      lVar1 = unaff_x26 + (ulong)*(uint *)(uVar3 - 1);
      if ((int)lVar1 != (int)*(undefined8 *)(unaff_x26 + 0x140) && *(short *)(lVar1 + 7) != 0x41) {
        uVar3 = FUN_01349d84();
        return uVar3;
      }
    }
    return uVar3;
  }
  unaff_x29[-3] = 0;
  unaff_x29[-4] = param_1;
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x2358),1);
}

