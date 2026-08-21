
void FUN_00a2c624(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  while (param_1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)param_1[1];
    (*(code *)PTR_free_01769a00)(*param_1);
    *param_1 = 0;
    (*(code *)PTR_free_01769a00)(param_1);
    param_1 = puVar1;
  }
  return;
}

