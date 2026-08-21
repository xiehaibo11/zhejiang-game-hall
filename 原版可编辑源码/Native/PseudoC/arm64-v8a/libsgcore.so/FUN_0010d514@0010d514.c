
void FUN_0010d514(long *param_1)

{
  uint uVar1;
  long lVar2;
  
  while (param_1 != (long *)0x0) {
    uVar1 = *(uint *)(param_1 + 3);
    lVar2 = *param_1;
    if (((uVar1 >> 8 & 1) == 0) && (param_1[2] != 0)) {
      FUN_0010d514();
      uVar1 = *(uint *)(param_1 + 3);
    }
    if (((uVar1 >> 8 & 1) == 0) && (param_1[4] != 0)) {
      (*(code *)PTR_free_00113050)();
    }
    if (param_1[7] != 0) {
      (*(code *)PTR_free_00113050)();
    }
    (*(code *)PTR_free_00113050)(param_1);
    param_1 = (long *)lVar2;
  }
  return;
}

