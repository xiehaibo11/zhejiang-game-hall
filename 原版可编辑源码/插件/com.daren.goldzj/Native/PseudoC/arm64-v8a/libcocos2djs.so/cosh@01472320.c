
/* v8::base::ieee754::cosh(double) */

undefined1  [16] v8::base::ieee754::cosh(double param_1)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  uVar1 = (uint)((ulong)param_1 >> 0x20) & 0x7fffffff;
  if (uVar1 < 0x3fd62e43) {
    dVar2 = (double)expm1(ABS(param_1));
    dVar3 = dVar2 + 1.0;
    if (0x78 < uVar1 >> 0x17) {
      dVar3 = (dVar2 * dVar2) / (dVar3 + dVar3) + 1.0;
    }
  }
  else if (uVar1 < 0x40360000) {
    dVar3 = (double)exp(ABS(param_1));
    dVar3 = dVar3 * 0.5 + 0.5 / dVar3;
  }
  else {
    dVar3 = ABS(param_1);
    if (uVar1 < 0x40862e42) {
      dVar3 = (double)exp(dVar3);
      dVar2 = 0.5;
    }
    else if (dVar3 <= 710.4758600739439) {
      dVar3 = (double)exp(dVar3 * 0.5);
      dVar2 = dVar3 * 0.5;
    }
    else {
      dVar3 = DAT_01d358e0;
      dVar2 = DAT_01d358e0;
      if (0x7fe < uVar1 >> 0x14) {
        dVar3 = param_1 * param_1;
        goto LAB_01472410;
      }
    }
    dVar3 = dVar3 * dVar2;
  }
LAB_01472410:
  auVar4._8_8_ = 0;
  auVar4._0_8_ = dVar3;
  return auVar4;
}

