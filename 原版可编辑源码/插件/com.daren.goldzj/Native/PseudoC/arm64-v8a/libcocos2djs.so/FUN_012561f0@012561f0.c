
void FUN_012561f0(long param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x30);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x38) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0x18);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x20) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}

