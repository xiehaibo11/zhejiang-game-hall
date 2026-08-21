
/* dragonBones::AnimationState::stop() */

void __thiscall dragonBones::AnimationState::stop(AnimationState *this)

{
  *(uint *)(this + 0x60) = *(uint *)(this + 0x60) & 1;
  return;
}

