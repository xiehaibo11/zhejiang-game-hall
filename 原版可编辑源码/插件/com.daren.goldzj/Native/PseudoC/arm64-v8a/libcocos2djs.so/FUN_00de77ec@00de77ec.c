
undefined8 FUN_00de77ec(int *param_1,int param_2,undefined8 param_3)

{
  if (*param_1 != 0) {
    return 0;
  }
  *(undefined8 *)(param_1 + 2) = param_3;
  *param_1 = param_2;
  param_1[1] = 0;
  return 0;
}

