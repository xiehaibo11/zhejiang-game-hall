
undefined4 png_muldiv(int *param_1,int param_2,int param_3,int param_4)

{
  double dVar1;
  
  if (param_4 == 0) {
    return 0;
  }
  if ((param_2 == 0) || (param_3 == 0)) {
    *param_1 = 0;
  }
  else {
    dVar1 = (double)(long)(((double)param_2 * (double)param_3) / (double)param_4 + 0.5);
    if (2147483647.0 < dVar1) {
      return 0;
    }
    if (dVar1 < -2147483648.0) {
      return 0;
    }
    *param_1 = (int)dVar1;
  }
  return 1;
}

