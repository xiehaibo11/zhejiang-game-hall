
/* v8::base::ieee754::asinh(double) */

double v8::base::ieee754::asinh(double param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  double dVar4;
  
  uVar3 = (uint)((ulong)param_1 >> 0x20);
  if ((uVar3 >> 0x14 & 0x7ff) < 0x7ff) {
    uVar2 = (ulong)param_1 >> 0x20 & 0x7fffffff;
    if ((param_1 + 1e+300 <= 1.0) || (0x3e2 < (uint)(uVar2 >> 0x14))) {
      uVar1 = (uint)uVar2;
      if (uVar1 < 0x41b00001) {
        if (uVar1 < 0x40000001) {
          param_1 = (double)log1p(ABS(param_1) +
                                  (param_1 * param_1) / (SQRT(param_1 * param_1 + 1.0) + 1.0));
        }
        else {
          dVar4 = ABS(param_1);
          param_1 = (double)log(dVar4 + dVar4 + 1.0 / (dVar4 + SQRT(param_1 * param_1 + 1.0)));
        }
      }
      else {
        dVar4 = (double)log(ABS(param_1));
        param_1 = dVar4 + 0.6931471805599453;
      }
      if ((int)uVar3 < 1) {
        param_1 = -param_1;
      }
    }
  }
  else {
    param_1 = param_1 + param_1;
  }
  return param_1;
}

