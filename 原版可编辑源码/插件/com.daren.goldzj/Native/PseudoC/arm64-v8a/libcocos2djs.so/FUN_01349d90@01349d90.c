
ulong FUN_01349d90(ulong param_1)

{
  long lVar1;
  ushort uVar2;
  ulong uVar3;
  long unaff_x26;
  
  uVar2 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(param_1 - 1) + 7);
  if (uVar2 < 0x40) {
    if ((*(uint *)(param_1 + 3) & 0xc0000002) == 0) {
      return (ulong)((*(uint *)(param_1 + 3) >> 3 & 0xffffff) * 2);
    }
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x2190));
  }
  if (uVar2 == 0x41) {
    return param_1;
  }
  if (uVar2 == 0x43) {
    return unaff_x26 + (ulong)*(uint *)(param_1 + 0xf);
  }
  if (0xa8 < uVar2) {
    uVar3 = FUN_013498a0();
    if ((uVar3 & 1) != 0) {
      lVar1 = unaff_x26 + (ulong)*(uint *)(uVar3 - 1);
      if ((int)lVar1 != (int)*(undefined8 *)(unaff_x26 + 0x140) && *(short *)(lVar1 + 7) != 0x41) {
        uVar3 = FUN_01349d84();
        return uVar3;
      }
    }
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x2358),1);
}

