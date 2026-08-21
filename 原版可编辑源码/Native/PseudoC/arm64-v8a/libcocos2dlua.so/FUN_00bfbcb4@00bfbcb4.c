
void FUN_00bfbcb4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = (ulong)*(uint *)(param_2 + 0x10) + 0x19;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) - lVar1;
  (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 0x18),param_2,lVar1,0);
  return;
}

