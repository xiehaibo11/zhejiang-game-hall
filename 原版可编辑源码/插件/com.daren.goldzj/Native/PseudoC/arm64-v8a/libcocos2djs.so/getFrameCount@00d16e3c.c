
/* spine::SkeletonCache::AnimationData::getFrameCount() const */

long __thiscall spine::SkeletonCache::AnimationData::getFrameCount(AnimationData *this)

{
  return *(long *)(this + 0x28) - *(long *)(this + 0x20) >> 3;
}

