
/* dragonBones::ArmatureCache::FrameData::getBoneCount() const */

long __thiscall dragonBones::ArmatureCache::FrameData::getBoneCount(FrameData *this)

{
  return *(long *)(this + 8) - *(long *)this >> 3;
}

