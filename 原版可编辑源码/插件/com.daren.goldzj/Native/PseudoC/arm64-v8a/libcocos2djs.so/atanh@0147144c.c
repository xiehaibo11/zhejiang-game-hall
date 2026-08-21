
/* v8::base::ieee754::atanh(double) */

double v8::base::ieee754::atanh(double param_1)

{
  uint uVar1;
  ulong uVar2;
  double dVar3;
  double dVar4;
  
  uVar2 = (ulong)param_1 >> 0x20 & 0x7fffffff;
  uVar1 = (uint)uVar2;
  if ((uVar1 | (-SUB84(param_1,0) | SUB84(param_1,0)) >> 0x1f) < 0x3ff00001) {
    if (uVar1 == 0x3ff00000) {
      dVar3 = INFINITY;
      if (param_1 <= 0.0) {
        dVar3 = -INFINITY;
      }
    }
    else if ((param_1 + 1e+300 <= 0.0) || (dVar3 = param_1, 0x3e2 < uVar1 >> 0x14)) {
      dVar3 = (double)((ulong)param_1 & 0xffffffff | uVar2 << 0x20);
      dVar4 = dVar3 + dVar3;
      if (uVar1 >> 0x15 < 0x1ff) {
        dVar4 = dVar4 + (dVar4 * dVar3) / (1.0 - dVar3);
      }
      else {
        dVar4 = dVar4 / (1.0 - dVar3);
      }
      dVar4 = (double)log1p(dVar4);
      dVar3 = dVar4 * 0.5;
      if ((long)param_1 < 0) {
        dVar3 = dVar4 * -0.5;
      }
    }
  }
  else {
    dVar3 = NAN;
  }
  return dVar3;
}

