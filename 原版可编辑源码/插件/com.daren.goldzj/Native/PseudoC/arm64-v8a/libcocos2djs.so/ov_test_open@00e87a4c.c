
undefined8 ov_test_open(long param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0xb0) == 1) {
    uVar1 = FUN_00e87568();
    return uVar1;
  }
  return 0xffffff7d;
}

