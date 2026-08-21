
/* dragonBones::ArmatureCache::SegmentData::~SegmentData() */

void __thiscall dragonBones::ArmatureCache::SegmentData::~SegmentData(SegmentData *this)

{
  if (*(Ref **)(this + 0x18) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x18));
    *(undefined8 *)(this + 0x18) = 0;
  }
  return;
}

