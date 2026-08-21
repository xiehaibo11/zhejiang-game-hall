
/* dragonBones::ArmatureCache::FrameData::getSegmentCount() const */

long __thiscall dragonBones::ArmatureCache::FrameData::getSegmentCount(FrameData *this)

{
  return *(long *)(this + 0x38) - *(long *)(this + 0x30) >> 3;
}

