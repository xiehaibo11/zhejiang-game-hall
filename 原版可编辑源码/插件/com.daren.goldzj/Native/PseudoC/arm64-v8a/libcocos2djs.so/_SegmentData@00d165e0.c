
/* spine::SkeletonCache::SegmentData::~SegmentData() */

void __thiscall spine::SkeletonCache::SegmentData::~SegmentData(SegmentData *this)

{
  if (*(Ref **)(this + 0x10) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x10));
    *(undefined8 *)(this + 0x10) = 0;
  }
  return;
}

