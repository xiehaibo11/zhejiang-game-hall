
/* dtObstacleAvoidanceQuery::addSegment(float const*, float const*) */

void __thiscall
dtObstacleAvoidanceQuery::addSegment(dtObstacleAvoidanceQuery *this,float *param_1,float *param_2)

{
  int iVar1;
  float *pfVar2;
  
  iVar1 = *(int *)(this + 0x48);
  if (iVar1 < *(int *)(this + 0x3c)) {
    *(int *)(this + 0x48) = iVar1 + 1;
    pfVar2 = (float *)(*(long *)(this + 0x40) + (long)iVar1 * 0x1c);
    *pfVar2 = *param_1;
    pfVar2[1] = param_1[1];
    pfVar2[2] = param_1[2];
    pfVar2[3] = *param_2;
    pfVar2[4] = param_2[1];
    pfVar2[5] = param_2[2];
  }
  return;
}

