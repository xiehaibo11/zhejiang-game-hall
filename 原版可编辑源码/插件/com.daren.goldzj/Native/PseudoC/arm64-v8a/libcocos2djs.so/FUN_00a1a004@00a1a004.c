
void FUN_00a1a004(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  param_1[2] = lVar1 + -1;
  if (lVar1 + -1 != 0) {
    return;
  }
  FUN_00a162dc(*param_1);
  (*(code *)PTR_free_01d1b748)(param_1);
  return;
}

