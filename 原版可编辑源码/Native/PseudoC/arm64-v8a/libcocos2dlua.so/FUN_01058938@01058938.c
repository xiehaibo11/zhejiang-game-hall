
long FUN_01058938(long param_1,long param_2)

{
  param_2 = *(long *)(param_1 + 0x18) + param_2;
  *(long *)(param_1 + 0x18) = param_2;
  return param_2;
}

