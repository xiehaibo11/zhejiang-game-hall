
long * FUN_00c1a6b4(long *param_1,long param_2)

{
  uint uVar1;
  void *pvVar2;
  
  pvVar2 = (void *)*param_1;
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uint)((int)param_1[1] - (int)pvVar2) < uVar1) {
    pvVar2 = (void *)FUN_00c1a4a8(param_1,uVar1);
  }
  pvVar2 = memcpy(pvVar2,(void *)(param_2 + 0x18),(ulong)uVar1);
  *param_1 = (long)pvVar2 + (ulong)uVar1;
  return param_1;
}

