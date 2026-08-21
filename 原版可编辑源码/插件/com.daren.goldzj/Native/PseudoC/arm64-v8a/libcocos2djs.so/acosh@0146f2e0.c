
/* v8::base::ieee754::acosh(double) */

undefined1  [16] v8::base::ieee754::acosh(double param_1)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((long)param_1 < 0x3ff0000000000000) {
    return ZEXT816(0x7ff4000000000000);
  }
  if (0x41afffffffffffff < (long)param_1) {
    if (0x7fefffffffffffff < (long)param_1) {
      auVar2._0_8_ = param_1 + param_1;
      auVar2._8_8_ = 0;
      return auVar2;
    }
    dVar1 = (double)log(param_1);
    auVar3._0_8_ = dVar1 + 0.6931471805599453;
    auVar3._8_8_ = 0;
    return auVar3;
  }
  if (param_1 == 1.0) {
    return ZEXT816(0);
  }
  if (0x40000000ffffffff < (long)param_1) {
    auVar3 = log(param_1 + param_1 + -1.0 / (SQRT(param_1 * param_1 + -1.0) + param_1));
    return auVar3;
  }
  dVar1 = param_1 + -1.0;
  auVar3 = log1p(dVar1 + SQRT(dVar1 + dVar1 + dVar1 * dVar1));
  return auVar3;
}

