
float cpCentroidForPoly(uint param_1,long param_2)

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
  
  if ((int)param_1 < 1) {
    fVar8 = 0.0;
    fVar7 = 0.0;
  }
  else {
    uVar4 = (ulong)param_1;
    pfVar5 = (float *)(param_2 + 4);
    fVar7 = 0.0;
    lVar6 = 0x100000000;
    fVar8 = 0.0;
    do {
      uVar4 = uVar4 - 1;
      lVar3 = 0;
      if (uVar4 != 0) {
        lVar3 = lVar6 >> 0x20;
      }
      pfVar2 = (float *)(param_2 + lVar3 * 8);
      pfVar1 = pfVar5 + -1;
      fVar9 = *pfVar5;
      fVar10 = *pfVar2;
      pfVar5 = pfVar5 + 2;
      lVar6 = lVar6 + 0x100000000;
      fVar9 = pfVar2[1] * *pfVar1 - fVar10 * fVar9;
      fVar7 = fVar9 + fVar7;
      fVar8 = fVar8 + (fVar10 + *pfVar1) * fVar9;
    } while (uVar4 != 0);
  }
  return (0.33333334 / fVar7) * fVar8;
}

