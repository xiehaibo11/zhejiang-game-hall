
void FUN_01210550(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  puVar1 = (void *)param_2[7];
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = (void *)param_2[5];
  param_2[5] = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  puVar1 = (void *)param_2[2];
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = (void *)*param_2;
  *param_2 = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  operator_delete(param_2);
  return;
}

