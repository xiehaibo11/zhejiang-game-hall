
/* spine::SkeletonBounds::aabbcontainsPoint(float, float) */

bool __thiscall
spine::SkeletonBounds::aabbcontainsPoint(SkeletonBounds *this,float param_1,float param_2)

{
  if (param_1 < *(float *)(this + 0x68)) {
    return false;
  }
  if (*(float *)(this + 0x70) < param_1) {
    return false;
  }
  if (param_2 < *(float *)(this + 0x6c)) {
    return false;
  }
  return param_2 <= *(float *)(this + 0x74);
}

