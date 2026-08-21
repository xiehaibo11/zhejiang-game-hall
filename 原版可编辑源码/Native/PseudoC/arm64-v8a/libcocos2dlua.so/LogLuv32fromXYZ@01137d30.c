
uint LogLuv32fromXYZ(float *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar5 = (double)param_1[1];
  if (1.8371976e+19 <= dVar5) {
    uVar4 = 0x7fff;
  }
  else if (dVar5 <= -1.8371976e+19) {
    uVar4 = 0xffff;
  }
  else if (dVar5 <= 5.4136769e-20) {
    if (-5.4136769e-20 <= dVar5) {
      uVar4 = 0;
    }
    else {
      dVar5 = log(-dVar5);
                    /* try { // try from 01137f18 to 01238147 has its CatchHandler @ 01137f18
                       catch() { ... } // from try @ 01137f18 with catch @ 01137f18
                       catch() { ... } // from try @ 01138154 with catch @ 01137f18 */
      dVar5 = (dVar5 * 1.4426950408889634 + 64.0) * 256.0;
      if (param_2 != 0) {
        iVar1 = rand();
        dVar5 = dVar5 + (double)iVar1 * 4.656612875245797e-10 + -0.5;
      }
      uVar4 = (int)dVar5 | 0xffff8000;
    }
  }
  else {
    dVar5 = log(dVar5);
    dVar5 = (dVar5 * 1.4426950408889634 + 64.0) * 256.0;
    if (param_2 != 0) {
      iVar1 = rand();
      dVar5 = dVar5 + (double)iVar1 * 4.656612875245797e-10 + -0.5;
    }
    uVar4 = (uint)dVar5;
  }
  dVar5 = 0.210526316;
  dVar7 = 0.473684211;
  if (uVar4 != 0) {
    dVar6 = (double)param_1[1] * 15.0 + (double)*param_1 + (double)param_1[2] * 3.0;
    if (0.0 < dVar6) {
      dVar5 = ((double)*param_1 * 4.0) / dVar6;
      dVar7 = ((double)param_1[1] * 9.0) / dVar6;
      if (dVar5 <= 0.0) {
        uVar2 = 0;
        goto LAB_01137e88;
      }
    }
  }
  dVar5 = dVar5 * 410.0;
  if (param_2 != 0) {
    iVar1 = rand();
    dVar5 = dVar5 + (double)iVar1 * 4.656612875245797e-10 + -0.5;
  }
  uVar2 = (uint)dVar5;
LAB_01137e88:
  if (0xfe < uVar2) {
    uVar2 = 0xff;
  }
  if (dVar7 <= 0.0) {
    uVar3 = 0;
  }
  else {
    dVar7 = dVar7 * 410.0;
    if (param_2 != 0) {
      iVar1 = rand();
      dVar7 = dVar7 + (double)iVar1 * 4.656612875245797e-10 + -0.5;
    }
    uVar3 = (uint)dVar7;
  }
  if (0xfe < uVar3) {
    uVar3 = 0xff;
  }
  return uVar2 << 8 | uVar4 << 0x10 | uVar3;
}

