
undefined8 FUN_00dd5770(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x358) * (ulong)param_2;
  *(long *)(param_1 + 0x388) = *(long *)(param_1 + 0x388) + lVar1;
  *(long *)(param_1 + 0x390) = *(long *)(param_1 + 0x390) - lVar1;
  return 1;
}

