
ulong FUN_0134a028(ulong param_1,undefined8 param_2)

{
  ushort uVar1;
  long lVar2;
  long unaff_x26;
  undefined8 unaff_x27;
  undefined1 auVar4 [16];
  ulong uVar3;
  
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  if (*(int *)(param_1 - 1) != (int)*(undefined8 *)(unaff_x26 + 0x140)) {
    while( true ) {
      lVar2 = auVar4._0_8_;
      uVar1 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(lVar2 + -1) + 7);
      if (uVar1 < 0x40) break;
      if (uVar1 == 0x41) {
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x1c30));
      }
      if (uVar1 == 0x43) {
        return unaff_x26 + (ulong)*(uint *)(lVar2 + 0xf);
      }
      if (uVar1 < 0xa9) {
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x2350),1);
      }
      auVar4 = FUN_013498a0(lVar2,auVar4._8_8_,unaff_x27);
      uVar3 = auVar4._0_8_;
      if ((uVar3 & 1) == 0) {
        return uVar3;
      }
      if (*(int *)(uVar3 - 1) == (int)*(undefined8 *)(unaff_x26 + 0x140)) {
        return uVar3;
      }
    }
    if ((*(uint *)(lVar2 + 3) & 0xc0000002) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x2190));
    }
    param_1 = (ulong)((*(uint *)(lVar2 + 3) >> 3 & 0xffffff) * 2);
  }
  return param_1;
}

