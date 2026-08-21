
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
    PTR_FUN_017816c0 = (undefined *)param_1[5];
    PTR_FUN_017816b8 = (undefined *)param_1[4];
    PTR_FUN_017816b0 = (undefined *)param_1[3];
    PTR_FUN_017816a8 = (undefined *)param_1[2];
    PTR_FUN_017816a0 = (undefined *)param_1[1];
    PTR_FUN_01781698 = (undefined *)*param_1;
    uVar1 = 1;
  }
  return uVar1;
}

