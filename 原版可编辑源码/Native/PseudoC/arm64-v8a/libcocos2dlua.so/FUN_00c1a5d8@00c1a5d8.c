
long * FUN_00c1a5d8(long *param_1,void *param_2,uint param_3)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  if ((uint)((int)param_1[1] - (int)pvVar1) < param_3) {
    pvVar1 = (void *)FUN_00c1a4a8(param_1,param_3);
  }
  pvVar1 = memcpy(pvVar1,param_2,(ulong)param_3);
  *param_1 = (long)pvVar1 + (ulong)param_3;
  return param_1;
}

