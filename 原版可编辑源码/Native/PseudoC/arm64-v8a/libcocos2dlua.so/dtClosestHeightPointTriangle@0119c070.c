
/* dtClosestHeightPointTriangle(float const*, float const*, float const*, float const*, float&) */

undefined8
dtClosestHeightPointTriangle
          (float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar3 = *param_2;
  fVar5 = param_2[2];
  fVar10 = *param_4 - fVar3;
  fVar4 = param_4[2] - fVar5;
  fVar6 = *param_3 - fVar3;
  fVar8 = param_3[2] - fVar5;
  fVar9 = fVar10 * fVar10 + fVar4 * fVar4;
  fVar2 = fVar10 * fVar6 + fVar4 * fVar8;
  fVar7 = fVar6 * fVar6 + fVar8 * fVar8;
  fVar10 = fVar10 * (*param_1 - fVar3) + fVar4 * (param_1[2] - fVar5);
  fVar5 = fVar6 * (*param_1 - fVar3) + fVar8 * (param_1[2] - fVar5);
  fVar3 = 1.0 / (fVar9 * fVar7 - fVar2 * fVar2);
  fVar4 = fVar3 * (fVar9 * fVar5 - fVar2 * fVar10);
  uVar1 = 0;
  if (((-0.0001 <= fVar4) && (fVar3 = fVar3 * (fVar7 * fVar10 - fVar2 * fVar5), -0.0001 <= fVar3))
     && (fVar3 + fVar4 <= 1.0001)) {
    fVar2 = param_2[1];
    uVar1 = 1;
    *param_5 = fVar4 * (param_3[1] - fVar2) + fVar2 + fVar3 * (param_4[1] - fVar2);
  }
  return uVar1;
}

