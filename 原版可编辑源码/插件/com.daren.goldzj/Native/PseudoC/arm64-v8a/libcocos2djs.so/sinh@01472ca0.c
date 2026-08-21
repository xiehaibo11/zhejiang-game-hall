
/* v8::base::ieee754::sinh(double) */

double v8::base::ieee754::sinh(double param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = ABS(param_1);
  dVar3 = -0.5;
  if (0.0 <= param_1) {
    dVar3 = 0.5;
  }
  if (22.0 <= dVar2) {
    if (709.7822265625 <= dVar2) {
      if (dVar2 <= 710.4758600739439) {
        param_1 = (double)exp(dVar2 * 0.5);
        dVar3 = dVar3 * param_1;
      }
      else {
        dVar3 = 1e+307;
      }
      param_1 = param_1 * dVar3;
    }
    else {
      dVar2 = (double)exp(dVar2);
      param_1 = dVar3 * dVar2;
    }
  }
  else if (3.725290298461914e-09 <= dVar2) {
    dVar1 = (double)expm1(dVar2);
    if (1.0 <= dVar2) {
      param_1 = dVar3 * (dVar1 + dVar1 / (dVar1 + 1.0));
    }
    else {
      param_1 = dVar3 * ((dVar1 + dVar1) - (dVar1 * dVar1) / (dVar1 + 1.0));
    }
  }
  return param_1;
}

