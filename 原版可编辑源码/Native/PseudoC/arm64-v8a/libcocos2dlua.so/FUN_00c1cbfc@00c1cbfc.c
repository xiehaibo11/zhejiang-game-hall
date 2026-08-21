
void FUN_00c1cbfc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = (ulong)*(uint *)(param_2 + 0x18) + 0x30;
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) - lVar1;
  (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 0x18),param_2,lVar1,0);
  return;
}

