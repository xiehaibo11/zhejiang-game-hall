
float cpMomentForPoly(float param_1,float param_2,float param_3,uint param_4,float *param_5)

{
  float *pfVar1;
  long lVar2;
  ulong uVar3;
  float *pfVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if (param_4 == 2) {
    fVar6 = param_5[2] - *param_5;
    fVar7 = param_5[3] - param_5[1];
    fVar9 = (param_5[2] + *param_5) * 0.5;
    fVar8 = (param_5[3] + param_5[1]) * 0.5;
    return (fVar9 * fVar9 + fVar8 * fVar8 + (fVar6 * fVar6 + fVar7 * fVar7) * 0.083333336) * param_1
    ;
  }
  if ((int)param_4 < 1) {
    fVar6 = 0.0;
    fVar7 = 0.0;
  }
  else {
    uVar3 = (ulong)param_4;
    pfVar4 = param_5 + 1;
    fVar7 = 0.0;
    lVar5 = 0x100000000;
    fVar6 = 0.0;
    do {
      uVar3 = uVar3 - 1;
      lVar2 = 0;
      if (uVar3 != 0) {
        lVar2 = lVar5 >> 0x20;
      }
      pfVar1 = pfVar4 + -1;
      fVar9 = *pfVar4;
      pfVar4 = pfVar4 + 2;
      fVar8 = *pfVar1 + param_2;
      fVar9 = fVar9 + param_3;
      fVar11 = param_5[lVar2 * 2] + param_2;
      fVar12 = (param_5 + lVar2 * 2)[1] + param_3;
      fVar10 = fVar11 * fVar9 - fVar12 * fVar8;
      fVar6 = fVar10 + fVar6;
      fVar7 = fVar7 + fVar10 * (fVar8 * fVar8 + fVar9 * fVar9 + fVar11 * (fVar11 + fVar8) +
                               fVar12 * (fVar12 + fVar9));
      lVar5 = lVar5 + 0x100000000;
    } while (uVar3 != 0);
    fVar6 = fVar6 * 6.0;
  }
  return (fVar7 * param_1) / fVar6;
}

