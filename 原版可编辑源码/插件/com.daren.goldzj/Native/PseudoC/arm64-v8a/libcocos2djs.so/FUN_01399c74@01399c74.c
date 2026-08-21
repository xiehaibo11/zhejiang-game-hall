
void FUN_01399c74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x26;
  undefined1 auVar4 [16];
  
  uVar2 = FUN_013492a0();
  auVar4 = FUN_013c0ba0(uVar2,*(undefined8 *)(unaff_x26 + 0xc78));
  uVar3 = auVar4._0_8_;
  if ((uVar3 & 1) == 0) {
    FUN_013999b0(uVar3,auVar4._8_8_,param_3);
    return;
  }
  if (0x3f < *(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar3 - 1) + 7)) {
    FUN_013999b0(uVar3,auVar4._8_8_,param_3);
    return;
  }
  lVar1 = unaff_x26 + (ulong)*(uint *)(*(long *)(unaff_x26 + 0xf30) + 99);
  uVar2 = FUN_013bf600(lVar1,uVar3,lVar1);
  FUN_013bf600(uVar2,unaff_x26 + (ulong)*(uint *)(*(long *)(unaff_x26 + 0xf30) + 0x67));
  return;
}

