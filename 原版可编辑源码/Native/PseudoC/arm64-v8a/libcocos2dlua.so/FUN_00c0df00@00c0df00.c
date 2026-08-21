
undefined8 FUN_00c0df00(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  if (param_2[1] != 0) {
    *param_3 = param_2[1];
    param_2[1] = 0;
    return *param_2;
  }
  return 0;
}

