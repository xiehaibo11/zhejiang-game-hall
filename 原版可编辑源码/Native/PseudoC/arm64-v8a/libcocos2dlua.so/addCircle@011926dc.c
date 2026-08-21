
/* dtObstacleAvoidanceQuery::addCircle(float const*, float, float const*, float const*) */

void __thiscall
dtObstacleAvoidanceQuery::addCircle
          (dtObstacleAvoidanceQuery *this,float *param_1,float param_2,float *param_3,float *param_4
          )

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  
  iVar3 = *(int *)(this + 0x38);
  if (iVar3 < *(int *)(this + 0x28)) {
    *(int *)(this + 0x38) = iVar3 + 1;
    pfVar1 = (float *)(*(long *)(this + 0x30) + (long)iVar3 * 0x40);
    *pfVar1 = *param_1;
    pfVar1[1] = param_1[1];
    fVar2 = param_1[2];
    pfVar1[9] = param_2;
    pfVar1[2] = fVar2;
    pfVar1[3] = *param_3;
    pfVar1[4] = param_3[1];
    pfVar1[5] = param_3[2];
    pfVar1[6] = *param_4;
    pfVar1[7] = param_4[1];
    pfVar1[8] = param_4[2];
  }
  return;
}

