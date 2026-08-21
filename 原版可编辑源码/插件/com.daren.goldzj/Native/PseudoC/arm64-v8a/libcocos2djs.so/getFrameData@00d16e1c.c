
/* spine::SkeletonCache::AnimationData::getFrameData(unsigned long) const */

undefined8 __thiscall
spine::SkeletonCache::AnimationData::getFrameData(AnimationData *this,ulong param_1)

{
  if (param_1 < (ulong)(*(long *)(this + 0x28) - *(long *)(this + 0x20) >> 3)) {
    return *(undefined8 *)(*(long *)(this + 0x20) + param_1 * 8);
  }
  return 0;
}

