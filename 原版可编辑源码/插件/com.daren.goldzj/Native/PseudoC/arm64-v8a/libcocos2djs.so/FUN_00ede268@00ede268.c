
void FUN_00ede268(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  puVar1 = operator_new(0x18);
  *puVar1 = &PTR_FUN_01ca11c0;
  if (param_3 == 0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
  }
  else {
    pvVar2 = operator_new__((long)param_3);
    puVar1[1] = pvVar2;
    puVar1[2] = (long)param_3;
  }
  *param_1 = puVar1;
  return;
}

