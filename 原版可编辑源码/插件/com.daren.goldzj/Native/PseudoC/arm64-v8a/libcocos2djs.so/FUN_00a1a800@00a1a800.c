
void FUN_00a1a800(long param_1,undefined8 *param_2)

{
  long lVar1;
  
  if (param_1 == 0) {
    lVar1 = param_2[2];
    param_2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
      FUN_00a162dc(*param_2);
      (*(code *)PTR_free_01d1b748)(param_2);
      return;
    }
  }
  else {
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_00a3557c(param_1,3,2);
    }
    lVar1 = param_2[2];
    param_2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
      FUN_00a162dc(*param_2);
      (*(code *)PTR_free_01d1b748)(param_2);
      lVar1 = *(long *)(param_1 + 0x70);
    }
    else {
      lVar1 = *(long *)(param_1 + 0x70);
    }
    if (lVar1 != 0) {
      FUN_00a355d4(param_1,3);
      return;
    }
  }
  return;
}

