
/* dragonBones::ArmatureCache::AnimationData::needUpdate(int) const */

bool __thiscall
dragonBones::ArmatureCache::AnimationData::needUpdate(AnimationData *this,int param_1)

{
  if (this[0x18] != (AnimationData)0x0) {
    return false;
  }
  if (MaxCacheTime < *(float *)(this + 0x1c)) {
    return false;
  }
  if (param_1 != -1) {
    return (ulong)(*(long *)(this + 0x28) - *(long *)(this + 0x20) >> 3) <
           (ulong)(long)(param_1 + 1);
  }
  return true;
}

