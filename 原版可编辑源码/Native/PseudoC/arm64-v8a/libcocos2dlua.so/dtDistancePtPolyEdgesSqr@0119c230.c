
/* dtDistancePtPolyEdgesSqr(float const*, float const*, int, float*, float*) */

uint dtDistancePtPolyEdgesSqr
               (float *param_1,float *param_2,int param_3,float *param_4,float *param_5)

{
  float *pfVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  float *pfVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if (0 < param_3) {
    uVar3 = 0;
    uVar5 = 0;
    uVar2 = 0;
    iVar7 = param_3 + -1;
    do {
      pfVar1 = param_2 + (uVar3 & 0xffffffff);
      fVar8 = param_1[2];
      fVar9 = pfVar1[2];
      pfVar6 = param_2 + (long)iVar7 * 3;
      fVar10 = pfVar6[2];
      if (fVar8 < fVar9 == fVar8 < fVar10) {
        fVar13 = *pfVar1;
        fVar12 = *pfVar6;
        fVar14 = *param_1;
      }
      else {
        fVar12 = *pfVar6;
        fVar13 = *pfVar1;
        fVar14 = *param_1;
        if (fVar14 < fVar13 + ((fVar8 - fVar9) * (fVar12 - fVar13)) / (fVar10 - fVar9)) {
          uVar2 = uVar2 ^ 1;
        }
      }
      fVar13 = fVar13 - fVar12;
      fVar9 = fVar9 - fVar10;
      fVar11 = fVar9 * fVar9 + fVar13 * fVar13;
      fVar10 = fVar9 * (fVar8 - fVar10) + fVar13 * (fVar14 - fVar12);
      fVar8 = fVar10 / fVar11;
      if (fVar11 <= 0.0) {
        fVar8 = fVar10;
      }
      fVar10 = 0.0;
      param_5[iVar7] = fVar8;
      if ((fVar8 < 0.0) || (fVar10 = 1.0, 1.0 < fVar8)) {
        param_5[iVar7] = fVar10;
        fVar8 = fVar10;
      }
      iVar4 = (int)uVar5;
      fVar10 = (*pfVar6 + fVar13 * fVar8) - *param_1;
      fVar8 = (fVar9 * fVar8 + pfVar6[2]) - param_1[2];
      uVar5 = uVar5 + 1;
      uVar3 = uVar3 + 3;
      param_4[iVar7] = fVar10 * fVar10 + fVar8 * fVar8;
      iVar7 = iVar4;
    } while ((uint)param_3 != uVar5);
    return uVar2;
  }
  return 0;
}

