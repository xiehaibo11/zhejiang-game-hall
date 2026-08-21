
int LogL10fromY(double param_1,int param_2)

{
  int iVar1;
  double dVar2;
  
  if (15.742 <= param_1) {
    iVar1 = 0x3ff;
  }
  else if (param_1 <= 0.00024283) {
    iVar1 = 0;
  }
  else {
    dVar2 = log(param_1);
    dVar2 = (dVar2 * 1.4426950408889634 + 12.0) * 64.0;
    if (param_2 != 0) {
      iVar1 = rand();
      dVar2 = dVar2 + (double)iVar1 * 4.656612875245797e-10 + -0.5;
    }
    iVar1 = (int)dVar2;
  }
  return iVar1;
}

