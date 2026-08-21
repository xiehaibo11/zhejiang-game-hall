
void FUN_013999b8(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x26;
  
  uVar2 = FUN_013c0ba0(param_1,*(undefined8 *)(unaff_x26 + 0xc78),param_1);
  if (((uVar2 & 1) != 0) && (*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar2 - 1) + 7) < 0x40)) {
    lVar1 = unaff_x26 + (ulong)*(uint *)(*(long *)(unaff_x26 + 0xf30) + 99);
    uVar3 = FUN_013bf600(lVar1,uVar2,lVar1);
    FUN_013bf600(uVar3,unaff_x26 + (ulong)*(uint *)(*(long *)(unaff_x26 + 0xf30) + 0x67));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x21c0));
}

