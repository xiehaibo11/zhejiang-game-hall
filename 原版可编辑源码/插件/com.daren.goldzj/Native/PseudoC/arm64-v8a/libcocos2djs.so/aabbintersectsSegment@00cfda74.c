
/* spine::SkeletonBounds::aabbintersectsSegment(float, float, float, float) */

bool __thiscall
spine::SkeletonBounds::aabbintersectsSegment
          (SkeletonBounds *this,float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar3 = *(float *)(this + 0x68);
  fVar6 = *(float *)(this + 0x6c);
  fVar4 = *(float *)(this + 0x70);
  fVar5 = *(float *)(this + 0x74);
  if ((param_1 <= fVar3) && (param_3 <= fVar3)) {
    return false;
  }
  if ((param_2 <= fVar6) && (param_4 <= fVar6)) {
    return false;
  }
  if ((fVar4 <= param_1) && (fVar4 <= param_3)) {
    return false;
  }
  if ((fVar5 <= param_2) && (fVar5 <= param_4)) {
    return false;
  }
  fVar1 = (param_4 - param_2) / (param_3 - param_1);
  fVar2 = fVar1 * (fVar3 - param_1) + param_2;
  if ((fVar6 < fVar2) && (fVar2 < fVar5)) {
    return true;
  }
  fVar2 = fVar1 * (fVar4 - param_1) + param_2;
  if ((fVar6 < fVar2) && (fVar2 < fVar5)) {
    return true;
  }
  fVar6 = (fVar6 - param_2) / fVar1 + param_1;
  if ((fVar3 < fVar6) && (fVar6 < fVar4)) {
    return true;
  }
  fVar5 = (fVar5 - param_2) / fVar1 + param_1;
  return fVar3 < fVar5 && fVar5 < fVar4;
}

