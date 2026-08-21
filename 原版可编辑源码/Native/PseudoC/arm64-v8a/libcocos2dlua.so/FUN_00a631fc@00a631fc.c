
undefined8 FUN_00a631fc(long *param_1,long param_2)

{
  if (param_2 != 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = param_2;
    param_1[1] = 0;
    return 0;
  }
  return 1;
}

