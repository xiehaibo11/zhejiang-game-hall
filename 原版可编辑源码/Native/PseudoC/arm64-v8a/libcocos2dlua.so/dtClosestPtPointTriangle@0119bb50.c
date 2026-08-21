
/* dtClosestPtPointTriangle(float*, float const*, float const*, float const*, float const*) */

void dtClosestPtPointTriangle
               (float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  fVar4 = *param_4;
  fVar1 = *param_3;
  fVar10 = param_3[1];
  fVar7 = *param_5;
  fVar16 = *param_2;
  fVar17 = param_2[1];
  fVar11 = param_3[2];
  fVar18 = param_2[2];
  fVar9 = fVar4 - fVar1;
  fVar6 = param_4[1] - fVar10;
  fVar5 = param_5[1] - fVar10;
  fVar3 = param_4[2] - fVar11;
  fVar8 = fVar7 - fVar1;
  fVar2 = param_5[2] - fVar11;
  fVar12 = fVar9 * (fVar16 - fVar1) + fVar6 * (fVar17 - fVar10) + fVar3 * (fVar18 - fVar11);
  fVar10 = fVar8 * (fVar16 - fVar1) + fVar5 * (fVar17 - fVar10) + fVar2 * (fVar18 - fVar11);
  if ((fVar12 <= 0.0) && (fVar10 <= 0.0)) {
    *param_1 = fVar1;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
    return;
  }
  fVar11 = fVar17 - param_4[1];
  fVar14 = fVar18 - param_4[2];
  fVar13 = fVar9 * (fVar16 - fVar4) + fVar6 * fVar11 + fVar3 * fVar14;
  fVar11 = fVar8 * (fVar16 - fVar4) + fVar5 * fVar11 + fVar2 * fVar14;
  if ((0.0 <= fVar13) && (fVar11 <= fVar13)) {
    *param_1 = fVar4;
    param_1[1] = param_4[1];
    param_1[2] = param_4[2];
    return;
  }
  fVar14 = fVar12 * fVar11 - fVar13 * fVar10;
  if (((0.0 < fVar13) || (fVar12 < 0.0)) || (0.0 < fVar14)) {
    fVar17 = fVar17 - param_5[1];
    fVar18 = fVar18 - param_5[2];
    fVar15 = fVar8 * (fVar16 - fVar7) + fVar5 * fVar17 + fVar2 * fVar18;
    fVar17 = fVar9 * (fVar16 - fVar7) + fVar6 * fVar17 + fVar3 * fVar18;
    if ((0.0 <= fVar15) && (fVar17 <= fVar15)) {
      *param_1 = fVar7;
      param_1[1] = param_5[1];
      param_1[2] = param_5[2];
      return;
    }
    fVar18 = fVar17 * fVar10 - fVar12 * fVar15;
    if (((0.0 < fVar15) || (fVar10 < 0.0)) || (0.0 < fVar18)) {
      fVar12 = fVar13 * fVar15 - fVar17 * fVar11;
      if (((0.0 < fVar12) || (fVar11 = fVar11 - fVar13, fVar11 < 0.0)) || (fVar17 - fVar15 < 0.0)) {
        fVar12 = 1.0 / (fVar14 + fVar12 + fVar18);
        fVar18 = fVar18 * fVar12;
        fVar14 = fVar14 * fVar12;
        *param_1 = fVar8 * fVar14 + fVar1 + fVar9 * fVar18;
        param_1[1] = fVar5 * fVar14 + fVar6 * fVar18 + param_3[1];
        fVar12 = fVar2 * fVar14;
        fVar11 = fVar3 * fVar18 + param_3[2];
      }
      else {
        fVar11 = fVar11 / (fVar11 + (fVar17 - fVar15));
        *param_1 = fVar4 + (fVar7 - fVar4) * fVar11;
        param_1[1] = param_4[1] + fVar11 * (param_5[1] - param_4[1]);
        fVar12 = param_4[2];
        fVar11 = fVar11 * (param_5[2] - fVar12);
      }
      goto LAB_0119bd34;
    }
    fVar10 = fVar10 / (fVar10 - fVar15);
    *param_1 = fVar1 + fVar8 * fVar10;
    fVar1 = param_3[1];
    fVar6 = fVar5 * fVar10;
    fVar12 = fVar2 * fVar10;
  }
  else {
    fVar12 = fVar12 / (fVar12 - fVar13);
    *param_1 = fVar1 + fVar9 * fVar12;
    fVar1 = param_3[1];
    fVar6 = fVar6 * fVar12;
    fVar12 = fVar3 * fVar12;
  }
  param_1[1] = fVar6 + fVar1;
  fVar11 = param_3[2];
LAB_0119bd34:
  param_1[2] = fVar12 + fVar11;
  return;
}

