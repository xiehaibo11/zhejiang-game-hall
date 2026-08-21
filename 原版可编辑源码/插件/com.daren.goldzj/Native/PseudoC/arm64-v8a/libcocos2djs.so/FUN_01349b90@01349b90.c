
ulong FUN_01349b90(undefined8 param_1,undefined8 param_2)

{
  ushort uVar1;
  ulong uVar2;
  long unaff_x26;
  undefined8 unaff_x27;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  do {
    uVar2 = auVar3._0_8_;
    if ((uVar2 & 1) == 0) {
LAB_01349bec:
      uVar2 = FUN_0134a300();
      return uVar2;
    }
    uVar1 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar2 - 1) + 7);
    if (uVar1 < 0x41) {
      return uVar2;
    }
    if (uVar1 < 0xa9) {
      if (uVar1 != 0x42) {
        if (uVar1 != 0x41) {
          return unaff_x26 + (ulong)*(uint *)(uVar2 + 0xb);
        }
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x2368));
      }
      goto LAB_01349bec;
    }
    auVar3 = FUN_013499c0(uVar2,auVar3._8_8_,unaff_x27);
  } while( true );
}

