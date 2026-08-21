
int png_fixed(double param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5)

{
  double dVar1;
  undefined1 auVar2 [12];
  
  dVar1 = (double)(long)(param_1 * 100000.0 + 0.5);
  if ((dVar1 <= 2147483647.0) && (-2147483648.0 <= dVar1)) {
    return (int)dVar1;
  }
  auVar2 = png_fixed_error();
  if (param_5 != 0) {
    if (auVar2._8_4_ == 0) {
      return 0;
    }
    if (param_4 == 0) {
      return 0;
    }
    dVar1 = (double)(long)(((double)auVar2._8_4_ * (double)param_4) / (double)param_5 + 0.5);
    if ((dVar1 <= 2147483647.0) && (-2147483648.0 <= dVar1)) {
      return (int)dVar1;
    }
  }
  png_warning(auVar2._0_8_,"fixed point overflow ignored");
  return 0;
}

