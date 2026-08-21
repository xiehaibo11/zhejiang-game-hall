
/* dragonBones::ArmatureCache::AnimationData::getFrameCount() const */

long __thiscall dragonBones::ArmatureCache::AnimationData::getFrameCount(AnimationData *this)

{
  return *(long *)(this + 0x28) - *(long *)(this + 0x20) >> 3;
}

