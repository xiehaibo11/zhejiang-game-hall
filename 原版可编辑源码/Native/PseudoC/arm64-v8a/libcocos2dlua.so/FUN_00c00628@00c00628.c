
void FUN_00c00628(double param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 < 9.223372036854776e+18) {
    FUN_00bffbc4(param_2,param_3,(long)param_1);
    return;
  }
  FUN_00bffbc4(param_2,param_3,(long)(param_1 - 1.8446744073709552e+19));
  return;
}

