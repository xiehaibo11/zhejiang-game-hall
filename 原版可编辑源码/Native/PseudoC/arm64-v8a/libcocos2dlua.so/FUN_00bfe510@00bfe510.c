
void FUN_00bfe510(long param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (param_2 == *(long *)(param_1 + 0x158)) {
    *(undefined8 *)(param_1 + 0x158) = 0;
  }
  FUN_00bfbd3c(param_2,*(undefined8 *)(param_2 + 0x38));
  uVar1 = *(uint *)(param_2 + 0x58);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  *(ulong *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + (ulong)uVar1 * -8;
  (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 0x18),uVar2,(ulong)uVar1 * 8,0);
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x60;
  (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 0x18),param_2,0x60,0);
  return;
}

