
void FUN_00a32d3c(long *param_1)

{
  long lVar1;
  
  while (param_1 != (long *)0x0) {
    lVar1 = *param_1;
    (*(code *)PTR_free_01769a00)(param_1[7]);
    (*(code *)PTR_free_01769a00)(param_1[5]);
    (*(code *)PTR_free_01769a00)(param_1[3]);
    (*(code *)PTR_free_01769a00)(param_1[4]);
    (*(code *)PTR_free_01769a00)(param_1[1]);
    (*(code *)PTR_free_01769a00)(param_1[2]);
    (*(code *)PTR_free_01769a00)(param_1[10]);
    (*(code *)PTR_free_01769a00)(param_1[9]);
    (*(code *)PTR_free_01769a00)(param_1);
    param_1 = (long *)lVar1;
  }
  return;
}

