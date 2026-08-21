
void FUN_00f16780(undefined8 param_1,undefined8 *param_2)

{
  void *pvVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    FUN_00f16780(param_1,*param_2);
    FUN_00f16780(param_1,param_2[1]);
    pvVar1 = (void *)param_2[10];
    if (pvVar1 != (void *)0x0) {
      param_2[0xb] = pvVar1;
      operator_delete(pvVar1);
    }
    pvVar1 = (void *)param_2[7];
    if (pvVar1 != (void *)0x0) {
      param_2[8] = pvVar1;
      operator_delete(pvVar1);
    }
    operator_delete(param_2);
    return;
  }
  return;
}

