
void FUN_00d2a634(undefined8 param_1,byte *param_2)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_2 + 0x78);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_2 + 0x80) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(param_2 + 0x60);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_2 + 0x68) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(param_2 + 0x48);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_2 + 0x50) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(param_2 + 0x30);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_2 + 0x38) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(param_2 + 0x18);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_2 + 0x20) = pvVar1;
    operator_delete(pvVar1);
  }
  if ((*param_2 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_2 + 0x10));
  return;
}

