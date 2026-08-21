
/* btHeightfieldTerrainShape::quantizeWithClamp(int*, btVector3 const&, int) const */

void btHeightfieldTerrainShape::quantizeWithClamp(int *param_1,btVector3 *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  pfVar3 = (float *)(ulong)(uint)param_3;
  fVar4 = (float)param_1[7];
  if ((float)param_1[7] <= *pfVar3) {
    fVar4 = *pfVar3;
  }
  fVar6 = (float)param_1[8];
  if ((float)param_1[8] <= pfVar3[1]) {
    fVar6 = pfVar3[1];
  }
  fVar7 = (float)param_1[9];
  if ((float)param_1[9] <= pfVar3[2]) {
    fVar7 = pfVar3[2];
  }
  fVar5 = (float)param_1[0xb];
  if (fVar4 <= (float)param_1[0xb]) {
    fVar5 = fVar4;
  }
  fVar4 = (float)param_1[0xc];
  if (fVar6 <= (float)param_1[0xc]) {
    fVar4 = fVar6;
  }
  fVar6 = (float)param_1[0xd];
  if (fVar7 <= (float)param_1[0xd]) {
    fVar6 = fVar7;
  }
  fVar7 = -0.5;
  if (0.0 <= fVar5) {
    fVar7 = 0.5;
  }
  fVar2 = -0.5;
  if (0.0 <= fVar4) {
    fVar2 = 0.5;
  }
  fVar1 = -0.5;
  if (0.0 <= fVar6) {
    fVar1 = 0.5;
  }
  *(int *)param_2 = (int)(fVar7 + fVar5);
  *(int *)(param_2 + 4) = (int)(fVar2 + fVar4);
  *(int *)(param_2 + 8) = (int)(fVar1 + fVar6);
  return;
}

