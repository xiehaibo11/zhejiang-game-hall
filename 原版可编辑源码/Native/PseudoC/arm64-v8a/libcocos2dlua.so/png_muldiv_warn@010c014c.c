
int png_muldiv_warn(undefined8 param_1,int param_2,int param_3,int param_4)

{
  double dVar1;
  
  if (param_4 != 0) {
    if (param_2 == 0) {
      return 0;
    }
    if (param_3 == 0) {
      return 0;
    }
    dVar1 = (double)(long)(((double)param_2 * (double)param_3) / (double)param_4 + 0.5);
    if ((dVar1 <= 2147483647.0) && (-2147483648.0 <= dVar1)) {
      return (int)dVar1;
    }
  }
  png_warning(param_1,"fixed point overflow ignored");
  return 0;
}

