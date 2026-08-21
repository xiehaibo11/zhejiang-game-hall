
undefined8 FUN_00135798(long *param_1,ulong param_2,void *param_3,long param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_2 <= (ulong)param_1[1]) && ((ulong)(param_4 - (long)param_3) <= param_1[1] - param_2))
  {
    memcpy(param_3,(void *)(*param_1 + param_2),param_4 - (long)param_3);
    uVar1 = 1;
  }
  return uVar1;
}

