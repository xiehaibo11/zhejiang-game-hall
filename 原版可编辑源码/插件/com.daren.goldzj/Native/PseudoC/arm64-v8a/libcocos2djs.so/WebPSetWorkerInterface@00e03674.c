
undefined8 WebPSetWorkerInterface(long *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != (long *)0x0) {
    if (*param_1 == 0) {
      return 0;
    }
    if (param_1[1] == 0) {
      return 0;
    }
    if (param_1[2] == 0) {
      return 0;
    }
    if (param_1[3] == 0) {
      return 0;
    }
    if (param_1[4] == 0) {
      return 0;
    }
    if (param_1[5] == 0) {
      return 0;
    }
    PTR_FUN_01d2b778 = (undefined *)param_1[5];
    PTR_FUN_01d2b770 = (undefined *)param_1[4];
    PTR_FUN_01d2b768 = (undefined *)param_1[3];
    PTR_FUN_01d2b760 = (undefined *)param_1[2];
    PTR_FUN_01d2b758 = (undefined *)param_1[1];
    PTR_FUN_01d2b750 = (undefined *)*param_1;
    uVar1 = 1;
  }
  return uVar1;
}

