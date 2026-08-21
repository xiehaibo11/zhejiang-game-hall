
/* dragonBones::AnimationState::isPlaying() const */

bool __thiscall dragonBones::AnimationState::isPlaying(AnimationState *this)

{
  if (((byte)this[0x60] >> 1 & 1) == 0) {
    return false;
  }
  return *(int *)(*(long *)(this + 0x88) + 0x10) < 1;
}

