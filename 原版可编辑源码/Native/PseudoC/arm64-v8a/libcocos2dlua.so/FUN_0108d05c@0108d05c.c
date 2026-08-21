
undefined8 FUN_0108d05c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  
  FUN_0108d158();
  if (*(int *)(param_1 + 0x1a8) != *(int *)(param_1 + 0x1ac)) {
    lVar1 = 0;
    if (*param_4 != 0) {
      lVar1 = FT_MulDiv();
      *param_4 = lVar1;
    }
    if (param_4[1] != 0) {
      lVar1 = FT_MulDiv(lVar1,*(undefined4 *)(param_1 + 0x1a8),*(undefined4 *)(param_1 + 0x1ac));
      param_4[1] = lVar1;
    }
  }
  return 0;
}

