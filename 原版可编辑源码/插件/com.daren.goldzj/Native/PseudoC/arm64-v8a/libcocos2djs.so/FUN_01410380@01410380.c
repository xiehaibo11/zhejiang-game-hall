
void FUN_01410380(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 ulong param_5)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x26;
  
  if ((param_1 & 1) == 0) {
    param_1 = FUN_0134a300();
  }
  else if (0x3f < *(ushort *)(unaff_x26 + (ulong)*(uint *)(param_1 - 1) + 7)) {
    if ((int)param_1 == (int)*(undefined8 *)(unaff_x26 + 0xa0) ||
        (int)param_1 == (int)*(undefined8 *)(unaff_x26 + 0xb0)) {
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x20e8));
    }
    param_1 = FUN_013e8ae0();
  }
  uVar2 = FUN_013bf600(unaff_x26 + (ulong)*(uint *)(*(long *)(unaff_x26 + 0xf30) + 0x27b),param_3);
  if ((int)param_4 != (int)*(undefined8 *)(unaff_x26 + 200)) {
    if (((param_5 & 1) == 0) || (0x3f < *(ushort *)(unaff_x26 + (ulong)*(uint *)(param_5 - 1) + 7)))
    {
      FUN_013e8ae0(param_5,param_4,uVar2);
    }
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x2590),uVar2,param_4);
  }
  lVar1 = unaff_x26 + (ulong)*(uint *)(*(long *)(unaff_x26 + 0xf30) + 0x28b);
  uVar2 = FUN_013bf600(uVar2,lVar1,lVar1);
  uVar2 = FUN_013bf600(uVar2,param_1);
  uVar2 = FUN_013bf600(uVar2,unaff_x26 + (ulong)*(uint *)(*(long *)(unaff_x26 + 0xf30) + 0x28f));
  uVar2 = FUN_013bf600(uVar2,param_3);
  FUN_013bf600(uVar2,unaff_x26 + (ulong)*(uint *)(*(long *)(unaff_x26 + 0xf30) + 0x28b));
  return;
}

