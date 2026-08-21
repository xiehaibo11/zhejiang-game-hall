
/* dragonBones::ArmatureCache::FrameData::getColorCount() const */

long __thiscall dragonBones::ArmatureCache::FrameData::getColorCount(FrameData *this)

{
  return *(long *)(this + 0x20) - *(long *)(this + 0x18) >> 3;
}

