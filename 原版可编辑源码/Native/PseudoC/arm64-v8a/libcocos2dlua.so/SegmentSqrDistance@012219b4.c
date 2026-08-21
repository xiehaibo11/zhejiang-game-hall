
/* SegmentSqrDistance(btVector3 const&, btVector3 const&, btVector3 const&, btVector3&) */

float SegmentSqrDistance(btVector3 *param_1,btVector3 *param_2,btVector3 *param_3,btVector3 *param_4
                        )

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
  
  fVar1 = *(float *)param_1;
  fVar2 = *(float *)(param_1 + 4);
  fVar3 = *(float *)(param_1 + 8);
  fVar6 = *(float *)param_3 - fVar1;
  fVar5 = *(float *)(param_3 + 4) - fVar2;
  fVar9 = *(float *)param_2 - fVar1;
  fVar8 = *(float *)(param_2 + 4) - fVar2;
  fVar4 = *(float *)(param_3 + 8) - fVar3;
  fVar7 = *(float *)(param_2 + 8) - fVar3;
  fVar11 = fVar6 * fVar9 + fVar5 * fVar8 + fVar4 * fVar7;
  fVar10 = 0.0;
  if (0.0 < fVar11) {
    fVar10 = fVar9 * fVar9 + fVar8 * fVar8 + fVar7 * fVar7;
    if (fVar10 <= fVar11) {
      fVar6 = fVar6 - fVar9;
      fVar5 = fVar5 - fVar8;
      fVar4 = fVar4 - fVar7;
      fVar10 = 1.0;
    }
    else {
      fVar10 = fVar11 / fVar10;
      fVar6 = fVar6 - fVar9 * fVar10;
      fVar5 = fVar5 - fVar8 * fVar10;
      fVar4 = fVar4 - fVar7 * fVar10;
    }
  }
  *(float *)param_4 = fVar9 * fVar10 + fVar1;
  *(float *)(param_4 + 4) = fVar8 * fVar10 + fVar2;
  *(float *)(param_4 + 8) = fVar7 * fVar10 + fVar3;
  *(undefined4 *)(param_4 + 0xc) = 0;
  return fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4;
}

