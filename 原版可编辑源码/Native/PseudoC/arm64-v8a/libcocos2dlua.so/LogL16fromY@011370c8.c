
uint LogL16fromY(double param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  double dVar3;
  
  if (1.8371976e+19 <= param_1) {
    uVar2 = 0x7fff;
  }
  else if (param_1 <= -1.8371976e+19) {
    uVar2 = 0xffff;
  }
  else if (param_1 <= 5.4136769e-20) {
    if (-5.4136769e-20 <= param_1) {
      uVar2 = 0;
    }
    else {
      dVar3 = log(-param_1);
      dVar3 = (dVar3 * 1.4426950408889634 + 64.0) * 256.0;
      if (param_2 != 0) {
        iVar1 = rand();
        dVar3 = dVar3 + (double)iVar1 * 4.656612875245797e-10 + -0.5;
      }
      uVar2 = (int)dVar3 | 0xffff8000;
    }
  }
  else {
    dVar3 = log(param_1);
    dVar3 = (dVar3 * 1.4426950408889634 + 64.0) * 256.0;
    if (param_2 != 0) {
      iVar1 = rand();
      dVar3 = dVar3 + (double)iVar1 * 4.656612875245797e-10 + -0.5;
    }
    uVar2 = (uint)dVar3;
  }
  return uVar2;
}

