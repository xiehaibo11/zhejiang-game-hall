
undefined1  [16] edgedf(double param_1,double param_2,double param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  
  if ((param_1 == 0.0) || (param_2 == 0.0)) {
    auVar2._0_8_ = 0.5 - param_3;
    auVar2._8_8_ = 0;
    return auVar2;
  }
                    /* try { // try from 0102aefc to 0112b03b has its CatchHandler @ 0102aefc
                       catch() { ... } // from try @ 0102aefc with catch @ 0102aefc
                       catch() { ... } // from try @ 0102b138 with catch @ 0102aefc */
  dVar5 = SQRT(param_1 * param_1 + param_2 * param_2);
  if (0.0 < dVar5) {
    param_1 = param_1 / dVar5;
    param_2 = param_2 / dVar5;
  }
  param_1 = ABS(param_1);
  param_2 = ABS(param_2);
  dVar5 = param_2;
  if (param_2 <= param_1) {
    dVar5 = param_1;
    param_1 = param_2;
  }
  dVar6 = (param_1 * 0.5) / dVar5;
  if (dVar6 <= param_3) {
    if (1.0 - dVar6 <= param_3) {
      auVar4._0_8_ = SQRT((1.0 - param_3) * param_1 * (dVar5 + dVar5)) + (dVar5 + param_1) * -0.5;
      auVar4._8_8_ = 0;
      return auVar4;
    }
    auVar3._0_8_ = (0.5 - param_3) * dVar5;
    auVar3._8_8_ = 0;
    return auVar3;
  }
  auVar1._0_8_ = (dVar5 + param_1) * 0.5 - SQRT(param_1 * (dVar5 + dVar5) * param_3);
  auVar1._8_8_ = 0;
  return auVar1;
}

