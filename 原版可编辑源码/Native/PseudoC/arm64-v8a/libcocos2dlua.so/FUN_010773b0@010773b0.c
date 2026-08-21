
void FUN_010773b0(undefined8 param_1,long param_2,uint param_3,long param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x10) + (ulong)(param_3 & 0xffff) * 0x10;
  *(long *)(lVar1 + 8) = *(long *)(lVar1 + 8) + param_4;
  return;
}

