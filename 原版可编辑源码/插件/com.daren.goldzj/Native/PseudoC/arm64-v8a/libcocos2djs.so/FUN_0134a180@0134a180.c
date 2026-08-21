
ulong FUN_0134a180(ulong param_1,undefined8 param_2)

{
  long lVar1;
  ushort uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x26;
  undefined8 unaff_x27;
  undefined1 auVar5 [16];
  
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_1;
  if (((param_1 & 1) == 0) ||
     (uVar4 = *(undefined8 *)(unaff_x26 + 0x140), *(int *)(param_1 - 1) == (int)uVar4)) {
    return param_1;
  }
  while( true ) {
    uVar3 = auVar5._0_8_;
    uVar2 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar3 - 1) + 7);
    if (uVar2 < 0x40) {
      if ((*(uint *)(uVar3 + 3) & 0xc0000002) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x2190));
      }
      return (ulong)((*(uint *)(uVar3 + 3) >> 3 & 0xffffff) * 2);
    }
    if (uVar2 == 0x41) {
      return uVar3;
    }
    if (uVar2 == 0x43) {
      return unaff_x26 + (ulong)*(uint *)(uVar3 + 0xf);
    }
    if (uVar2 < 0xa9) break;
    auVar5 = FUN_013498a0(uVar3,auVar5._8_8_,unaff_x27);
    uVar3 = auVar5._0_8_;
    if (((uVar3 & 1) == 0) ||
       (lVar1 = unaff_x26 + (ulong)*(uint *)(uVar3 - 1), uVar4 = *(undefined8 *)(unaff_x26 + 0x140),
       (int)lVar1 == (int)uVar4 || *(short *)(lVar1 + 7) == 0x41)) {
      return uVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x2358),1,uVar4);
}

