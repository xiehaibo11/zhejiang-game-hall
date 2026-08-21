
void FUN_00e34e3c(undefined8 param_1,long param_2,ushort param_3,long param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x10) + (ulong)param_3 * 0x10;
  *(long *)(lVar1 + 8) = *(long *)(lVar1 + 8) + param_4;
  return;
}

