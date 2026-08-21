
undefined1  [16] LogL16toY(uint param_1)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  
  if ((param_1 & 0x7fff) == 0) {
    dVar2 = 0.0;
  }
  else {
    dVar1 = exp(((double)(param_1 & 0x7fff) + 0.5) * 0.0027076061740622863 + -44.3614195558365);
    dVar2 = -dVar1;
    if ((param_1 & 0x8000) == 0) {
      dVar2 = dVar1;
    }
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = dVar2;
  return auVar3;
}

