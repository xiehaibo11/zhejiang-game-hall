
uint LogLuv24fromXYZ(float *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  double dVar7;
  
  fVar6 = param_1[1];
  dVar4 = (double)fVar6;
  if (15.742 <= dVar4) {
    iVar2 = 0x3ff;
  }
  else if (dVar4 <= 0.00024283) {
    iVar2 = 0;
  }
  else {
    dVar4 = log(dVar4);
    dVar4 = (dVar4 * 1.4426950408889634 + 12.0) * 64.0;
    if (param_2 != 0) {
      iVar2 = rand();
      dVar4 = dVar4 + (double)iVar2 * 4.656612875245797e-10 + -0.5;
    }
    fVar6 = param_1[1];
    iVar2 = (int)dVar4;
  }
  dVar5 = 0.473684211;
  dVar4 = 0.210526316;
  if (iVar2 != 0) {
    dVar7 = (double)fVar6 * 15.0 + (double)*param_1 + (double)param_1[2] * 3.0;
    if (0.0 < dVar7) {
      dVar4 = ((double)*param_1 * 4.0) / dVar7;
      dVar5 = ((double)fVar6 * 9.0) / dVar7;
    }
  }
  uVar3 = uv_encode(dVar4,dVar5,param_2);
  uVar1 = 0x2fea;
  if (-1 < (int)uVar3) {
    uVar1 = uVar3;
  }
  return uVar1 | iVar2 << 0xe;
}

