
void FUN_00ede220(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[1];
  *param_1 = &PTR_FUN_01ca11c0;
  param_1[1] = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  operator_delete(param_1);
  return;
}

