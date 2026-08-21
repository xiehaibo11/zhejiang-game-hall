
/* dLineClosestApproach(btVector3 const&, btVector3 const&, btVector3 const&, btVector3 const&,
   float*, float*) */

void dLineClosestApproach
               (btVector3 *param_1,btVector3 *param_2,btVector3 *param_3,btVector3 *param_4,
               float *param_5,float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = *(float *)param_2 * *(float *)param_4 + *(float *)(param_2 + 4) * *(float *)(param_4 + 4)
          + *(float *)(param_2 + 8) * *(float *)(param_4 + 8);
  fVar4 = 1.0 - fVar3 * fVar3;
  if (0.0001 < fVar4) {
    fVar4 = 1.0 / fVar4;
    fVar2 = (*(float *)param_3 - *(float *)param_1) * *(float *)param_4 +
            (*(float *)(param_3 + 4) - *(float *)(param_1 + 4)) * *(float *)(param_4 + 4) +
            (*(float *)(param_3 + 8) - *(float *)(param_1 + 8)) * *(float *)(param_4 + 8);
    fVar1 = (*(float *)param_3 - *(float *)param_1) * *(float *)param_2 +
            (*(float *)(param_3 + 4) - *(float *)(param_1 + 4)) * *(float *)(param_2 + 4) +
            (*(float *)(param_3 + 8) - *(float *)(param_1 + 8)) * *(float *)(param_2 + 8);
    *param_5 = (fVar1 - fVar2 * fVar3) * fVar4;
    *param_6 = (fVar1 * fVar3 - fVar2) * fVar4;
    return;
  }
  *param_5 = 0.0;
  *param_6 = 0.0;
  return;
}

