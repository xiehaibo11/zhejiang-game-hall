
undefined8 FUN_01422920(undefined8 param_1,ulong param_2,ulong param_3)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  long unaff_x26;
  
  bVar1 = (param_3 & 1) == 0;
  if ((param_2 & 1) == 0) {
    if (bVar1) {
      *(undefined8 *)(unaff_x26 + 0x40) = 0x14229f8;
      *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
      uVar3 = (**(code **)(unaff_x26 + 0x1248))();
      *(undefined8 *)(unaff_x26 + 0x38) = 0;
      return uVar3;
    }
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if ((bVar4) || (0x3f < *(ushort *)(unaff_x26 + (ulong)*(uint *)(param_2 - 1) + 7))) {
    param_2 = FUN_013e8ae0(param_2);
  }
  if ((bVar1) || (0x3f < *(ushort *)(unaff_x26 + (ulong)*(uint *)(param_3 - 1) + 7))) {
    param_3 = FUN_013e8ae0(param_3);
  }
  iVar2 = FUN_01345d20(param_3,param_2);
  if (iVar2 == (int)*(undefined8 *)(unaff_x26 + 0xb8)) {
    uVar3 = 0xfffffffffffffffe;
  }
  else {
    iVar2 = FUN_01345d20(param_2,param_3);
    if (iVar2 == (int)*(undefined8 *)(unaff_x26 + 0xb8)) {
      uVar3 = 2;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

