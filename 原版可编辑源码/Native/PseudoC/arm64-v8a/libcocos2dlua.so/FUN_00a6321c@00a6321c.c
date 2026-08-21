
void FUN_00a6321c(long *param_1)

{
  ulong uVar1;
  long lVar2;
  
  while (param_1 != (long *)0x0) {
    lVar2 = *param_1;
    FUN_00a6321c(param_1[9]);
    uVar1 = param_1[10];
    if (((uint)uVar1 >> 2 & 1) == 0) {
      (*(code *)PTR_free_01769a00)(param_1[1]);
      uVar1 = param_1[10];
    }
    if ((uVar1 & 0x58) == 0) {
      (*(code *)PTR_free_01769a00)(param_1[3]);
    }
    (*(code *)PTR_free_01769a00)(param_1[7]);
    (*(code *)PTR_free_01769a00)(param_1[0xb]);
    (*(code *)PTR_free_01769a00)(param_1);
    param_1 = (long *)lVar2;
  }
  return;
}

