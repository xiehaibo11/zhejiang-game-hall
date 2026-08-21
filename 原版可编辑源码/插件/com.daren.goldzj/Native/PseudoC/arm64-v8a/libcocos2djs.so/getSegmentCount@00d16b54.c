
/* spine::SkeletonCache::FrameData::getSegmentCount() const */

long __thiscall spine::SkeletonCache::FrameData::getSegmentCount(FrameData *this)

{
  return *(long *)(this + 0x38) - *(long *)(this + 0x30) >> 3;
}

