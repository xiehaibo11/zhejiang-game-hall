
/* dtObstacleAvoidanceDebugData::addSample(float const*, float, float, float, float, float, float)
    */

void __thiscall
dtObstacleAvoidanceDebugData::addSample
          (dtObstacleAvoidanceDebugData *this,float *param_1,float param_2,float param_3,
          float param_4,float param_5,float param_6,float param_7)

{
  float *pfVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = *(int *)this;
  if (iVar2 < *(int *)(this + 4)) {
    pfVar1 = (float *)(*(long *)(this + 8) + (long)(iVar2 * 3) * 4);
    *pfVar1 = *param_1;
    pfVar1[1] = param_1[1];
    pfVar1[2] = param_1[2];
    lVar3 = (long)iVar2 * 4;
    *(float *)(*(long *)(this + 0x10) + lVar3) = param_2;
    *(float *)(*(long *)(this + 0x18) + lVar3) = param_3;
    *(float *)(*(long *)(this + 0x20) + lVar3) = param_4;
    *(float *)(*(long *)(this + 0x28) + lVar3) = param_5;
    *(float *)(*(long *)(this + 0x30) + lVar3) = param_6;
    *(float *)(*(long *)(this + 0x38) + lVar3) = param_7;
    *(int *)this = iVar2 + 1;
  }
  return;
}

