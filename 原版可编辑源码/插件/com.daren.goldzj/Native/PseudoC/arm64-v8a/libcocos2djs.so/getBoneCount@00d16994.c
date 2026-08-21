
/* spine::SkeletonCache::FrameData::getBoneCount() const */

long __thiscall spine::SkeletonCache::FrameData::getBoneCount(FrameData *this)

{
  return *(long *)(this + 8) - *(long *)this >> 3;
}

