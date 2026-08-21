
/* btVoronoiSimplexSolver::pointOutsideOfPlane(btVector3 const&, btVector3 const&, btVector3 const&,
   btVector3 const&, btVector3 const&) */

uint __thiscall
btVoronoiSimplexSolver::pointOutsideOfPlane
          (btVoronoiSimplexSolver *this,btVector3 *param_1,btVector3 *param_2,btVector3 *param_3,
          btVector3 *param_4,btVector3 *param_5)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar4 = *(float *)param_2;
  fVar5 = *(float *)(param_2 + 4);
  fVar7 = *(float *)(param_2 + 8);
  fVar8 = (*(float *)(param_3 + 4) - fVar5) * (*(float *)(param_4 + 8) - fVar7) -
          (*(float *)(param_3 + 8) - fVar7) * (*(float *)(param_4 + 4) - fVar5);
  fVar6 = (*(float *)(param_3 + 8) - fVar7) * (*(float *)param_4 - fVar4) -
          (*(float *)param_3 - fVar4) * (*(float *)(param_4 + 8) - fVar7);
  fVar2 = (*(float *)param_3 - fVar4) * (*(float *)(param_4 + 4) - fVar5) -
          (*(float *)(param_3 + 4) - fVar5) * (*(float *)param_4 - fVar4);
  fVar3 = fVar8 * (*(float *)param_5 - fVar4) + fVar6 * (*(float *)(param_5 + 4) - fVar5) +
          fVar2 * (*(float *)(param_5 + 8) - fVar7);
  uVar1 = (uint)(((*(float *)param_1 - fVar4) * fVar8 + (*(float *)(param_1 + 4) - fVar5) * fVar6 +
                 fVar2 * (*(float *)(param_1 + 8) - fVar7)) * fVar3 < 0.0);
  if (fVar3 * fVar3 < 9.999999e-09) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

