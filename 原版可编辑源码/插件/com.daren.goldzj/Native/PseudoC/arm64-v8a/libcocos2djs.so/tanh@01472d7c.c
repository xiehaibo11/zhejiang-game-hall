
/* v8::base::ieee754::tanh(double) */

double v8::base::ieee754::tanh(double param_1)

{
  uint uVar1;
  ulong uVar2;
  double dVar3;
  
  if (((uint)((ulong)param_1 >> 0x34) & 0x7ff) < 0x7ff) {
    uVar2 = (ulong)param_1 >> 0x20 & 0x7fffffff;
    if ((uint)uVar2 < 0x40360000) {
      uVar1 = (uint)(uVar2 >> 0x14);
      if ((1.0 < param_1 + 1e+300) && (uVar1 < 0x3e3)) {
        return param_1;
      }
      dVar3 = ABS(param_1);
      if (uVar1 < 0x3ff) {
        dVar3 = (double)expm1(dVar3 * -2.0);
        dVar3 = -dVar3 / (dVar3 + 2.0);
      }
      else {
        dVar3 = (double)expm1(dVar3 + dVar3);
        dVar3 = 1.0 - 2.0 / (dVar3 + 2.0);
      }
    }
    else {
      dVar3 = 1.0;
    }
    if ((long)param_1 < 0) {
      dVar3 = -dVar3;
    }
  }
  else if ((long)param_1 < 0) {
    dVar3 = 1.0 / param_1 + -1.0;
  }
  else {
    dVar3 = 1.0 / param_1 + 1.0;
  }
  return dVar3;
}

