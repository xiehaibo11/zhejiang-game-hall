
void FUN_00bfbd00(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x38);
  *(ulong *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) - (ulong)uVar1;
  (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 0x18),param_2,(ulong)uVar1,0);
  return;
}

