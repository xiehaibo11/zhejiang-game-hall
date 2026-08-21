
void FUN_00f9d2d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *pvVar3;
  
  puVar1 = (void *)param_1[2];
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)puVar1[3];
    pvVar3 = (void *)*puVar1;
    if (pvVar2 != (void *)0x0) {
      puVar1[4] = pvVar2;
      operator_delete(pvVar2);
    }
    operator_delete(puVar1);
    puVar1 = pvVar3;
  }
  pvVar2 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
    return;
  }
  return;
}

