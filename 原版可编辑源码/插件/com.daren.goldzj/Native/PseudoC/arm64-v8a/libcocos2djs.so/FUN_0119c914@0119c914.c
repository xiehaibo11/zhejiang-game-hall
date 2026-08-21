
void FUN_0119c914(undefined8 param_1,void *param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  if (param_2 == (void *)0x0) {
    return;
  }
  puVar1 = *(void **)((long)param_2 + 0x60);
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = *(void **)((long)param_2 + 0x50);
  *(undefined8 *)((long)param_2 + 0x50) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)((long)param_2 + 0x38);
  if (pvVar2 != (void *)0x0) {
    *(void **)((long)param_2 + 0x40) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)((long)param_2 + 0x20);
  if (pvVar2 != (void *)0x0) {
    *(void **)((long)param_2 + 0x28) = pvVar2;
    operator_delete(pvVar2);
  }
  free(*(void **)((long)param_2 + 8));
  operator_delete(param_2);
  return;
}

