
int FUN_0012896c(float param_1,float param_2,int param_3,long *param_4)

{
  double *pdVar1;
  int iVar2;
  double dVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double __x;
  double dVar10;
  float fVar11;
  
  if (1e-06 <= ABS(param_2)) {
    if ((float)param_3 * 0.5 < ABS(param_2)) {
      return 0;
    }
    __x = (double)(param_1 * param_2) * 3.141592653589793;
    dVar10 = (double)param_1 * 32768.0;
    dVar3 = sin(__x);
    fVar11 = ABS((param_2 + param_2) / (float)param_3);
    fVar4 = fVar11 * (float)(int)param_4[1];
    iVar2 = (int)fVar4;
    fVar4 = fVar4 - (float)iVar2;
    dVar7 = (double)fVar4;
    pdVar1 = (double *)(*param_4 + (long)iVar2 * 8);
    dVar5 = (double)(fVar4 * fVar4 * fVar4);
    dVar9 = (double)(fVar4 * fVar4) * 0.5;
    dVar6 = dVar5 * 0.1666666667;
    dVar8 = dVar6 - dVar7 * 0.1666666667;
    dVar5 = (dVar9 + dVar7) - dVar5 * 0.5;
    dVar6 = (dVar9 + dVar7 * -0.3333333333) - dVar6;
    if (((dVar10 * dVar3) / __x) *
        (pdVar1[3] * dVar8 +
        pdVar1[2] * dVar5 + *pdVar1 * dVar6 + pdVar1[1] * (((1.0 - dVar8) - dVar5) - dVar6)) <
        -32767.0) {
      return 0x8000;
    }
    dVar3 = sin(__x);
    fVar4 = fVar11 * (float)(int)param_4[1];
    iVar2 = (int)fVar4;
    fVar4 = fVar4 - (float)iVar2;
    pdVar1 = (double *)(*param_4 + (long)iVar2 * 8);
    dVar6 = (double)fVar4;
    dVar5 = (double)(fVar4 * fVar4 * fVar4);
    dVar8 = (double)(fVar4 * fVar4) * 0.5;
    dVar7 = dVar5 * 0.1666666667;
    dVar9 = dVar7 - dVar6 * 0.1666666667;
    dVar5 = (dVar8 + dVar6) - dVar5 * 0.5;
    dVar7 = (dVar8 + dVar6 * -0.3333333333) - dVar7;
    if (((dVar10 * dVar3) / __x) *
        (pdVar1[3] * dVar9 +
        pdVar1[2] * dVar5 + *pdVar1 * dVar7 + pdVar1[1] * (((1.0 - dVar9) - dVar5) - dVar7)) <=
        32766.0) {
      dVar3 = sin(__x);
      fVar11 = fVar11 * (float)(int)param_4[1];
      iVar2 = (int)fVar11;
      fVar11 = fVar11 - (float)iVar2;
      dVar6 = (double)fVar11;
      dVar5 = (double)(fVar11 * fVar11 * fVar11);
      dVar8 = (double)(fVar11 * fVar11) * 0.5;
      pdVar1 = (double *)(*param_4 + (long)iVar2 * 8);
      dVar7 = (dVar8 + dVar6) - dVar5 * 0.5;
      dVar5 = dVar5 * 0.1666666667;
      dVar9 = dVar5 - dVar6 * 0.1666666667;
      dVar5 = (dVar8 + dVar6 * -0.3333333333) - dVar5;
      dVar3 = ((dVar10 * dVar3) / __x) *
              (pdVar1[3] * dVar9 +
              pdVar1[2] * dVar7 + *pdVar1 * dVar5 + pdVar1[1] * (((1.0 - dVar9) - dVar7) - dVar5));
      goto LAB_00128c5c;
    }
  }
  else {
    dVar3 = (double)param_1 * 32768.0;
    if (dVar3 < -32767.0) {
      return 0x8000;
    }
    if (dVar3 <= 32766.0) {
LAB_00128c5c:
      return (int)dVar3;
    }
  }
  return 0x7fff;
}

