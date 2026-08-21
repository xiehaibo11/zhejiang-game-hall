
void FUN_00a4ae00(long param_1,long *param_2)

{
  (*(code *)PTR_free_01769a00)(param_2[1]);
  param_2[1] = 0;
  if (*param_2 != 0) {
    (**(code **)(param_1 + 0x18))();
    *param_2 = 0;
  }
  param_2[2] = 0;
  (*(code *)PTR_free_01769a00)(param_2);
  return;
}

