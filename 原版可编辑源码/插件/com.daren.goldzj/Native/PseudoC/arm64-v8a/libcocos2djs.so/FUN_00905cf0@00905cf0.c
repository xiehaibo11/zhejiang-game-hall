
void FUN_00905cf0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  
  puVar2 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  puVar1 = (void *)puVar2[2];
  while (puVar1 != (void *)0x0) {
    pvVar3 = (void *)*puVar1;
    operator_delete(puVar1);
    puVar1 = pvVar3;
  }
  pvVar3 = (void *)*puVar2;
  *puVar2 = 0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  operator_delete(puVar2);
  return;
}

