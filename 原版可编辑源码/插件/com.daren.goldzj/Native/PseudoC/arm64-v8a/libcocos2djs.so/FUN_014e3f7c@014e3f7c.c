
void FUN_014e3f7c(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[0x2b];
  *param_1 = &PTR_FUN_01cc6878;
  param_1[0x2b] = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  pvVar1 = (void *)param_1[0x2a];
  param_1[0x2a] = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  operator_delete(param_1);
  return;
}

