
void FUN_017c3e78(long param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  pvVar1 = *(void **)(param_1 + 0x1d8);
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  if (*(void **)(param_1 + 0x60) != (void *)(param_1 + 0x78)) {
    free(*(void **)(param_1 + 0x60));
  }
  puVar2 = *(undefined8 **)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (puVar2 != (undefined8 *)0x0) {
    if ((undefined8 *)puVar2[1] != puVar2 + 4) {
      free((undefined8 *)puVar2[1]);
    }
    pvVar1 = (void *)*puVar2;
    *puVar2 = 0;
    if (pvVar1 != (void *)0x0) {
      operator_delete(pvVar1);
    }
    operator_delete(puVar2);
    return;
  }
  return;
}

