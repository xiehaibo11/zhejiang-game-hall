
/* spine::SkeletonBounds::aabbIntersectsSkeleton(spine::SkeletonBounds) */

bool __thiscall spine::SkeletonBounds::aabbIntersectsSkeleton(SkeletonBounds *this,long param_2)

{
  if (*(float *)(param_2 + 0x70) <= *(float *)(this + 0x68)) {
    return false;
  }
  if (*(float *)(param_2 + 0x68) < *(float *)(this + 0x70)) {
    if (*(float *)(this + 0x6c) < *(float *)(param_2 + 0x74)) {
      return *(float *)(param_2 + 0x6c) < *(float *)(this + 0x74);
    }
    return false;
  }
  return false;
}

