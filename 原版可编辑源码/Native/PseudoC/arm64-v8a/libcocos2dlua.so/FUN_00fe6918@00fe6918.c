
void FUN_00fe6918(undefined8 param_1,undefined8 *param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_2[0xc];
  if (pvVar1 != (void *)0x0) {
    param_2[0xd] = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_2[9];
  if (pvVar1 != (void *)0x0) {
    param_2[10] = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_2[6];
  if (pvVar1 != (void *)0x0) {
    param_2[7] = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_2[3];
  if (pvVar1 != (void *)0x0) {
    param_2[4] = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)*param_2;
  if (pvVar1 != (void *)0x0) {
    param_2[1] = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}

