
float cpAreaForPoly(float param_1,uint param_2,long param_3)

{
  float *pfVar1;
  float *pfVar2;
  long lVar3;
  ulong uVar4;
  float *pfVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if ((int)param_2 < 1) {
    fVar7 = 0.0;
    fVar8 = 0.0;
  }
  else {
    uVar4 = (ulong)param_2;
    pfVar5 = (float *)(param_3 + 4);
    fVar8 = 0.0;
    lVar6 = 0x100000000;
    fVar7 = 0.0;
    do {
      uVar4 = uVar4 - 1;
      lVar3 = 0;
      if (uVar4 != 0) {
        lVar3 = lVar6 >> 0x20;
      }
      pfVar2 = (float *)(param_3 + lVar3 * 8);
      pfVar1 = pfVar5 + -1;
      fVar9 = *pfVar5;
      fVar11 = *pfVar2;
      fVar13 = pfVar2[1];
      pfVar5 = pfVar5 + 2;
      lVar6 = lVar6 + 0x100000000;
      fVar12 = *pfVar1 - fVar11;
      fVar10 = fVar9 - fVar13;
      fVar8 = (fVar8 - fVar9 * fVar11) + *pfVar1 * fVar13;
      fVar7 = SQRT(fVar12 * fVar12 + fVar10 * fVar10) + fVar7;
    } while (uVar4 != 0);
    fVar8 = fVar8 * 0.5;
  }
  return fVar8 + param_1 * (fVar7 + ABS(param_1) * 3.1415927);
}

