
void FUN_00e34dc0(undefined8 param_1,long param_2,ulong param_3,long param_4)

{
  long lVar1;
  
  lVar1 = (param_3 & 0xffff) * 0x10;
  *(long *)(*(long *)(param_2 + 0x10) + lVar1) =
       *(long *)(*(long *)(param_2 + 0x10) + lVar1) + param_4;
  return;
}

