
/* spine::SkeletonAnimation::clearTracks() */

void __thiscall spine::SkeletonAnimation::clearTracks(SkeletonAnimation *this)

{
  if (*(AnimationState **)(this + 0xb0) != (AnimationState *)0x0) {
    AnimationState::clearTracks(*(AnimationState **)(this + 0xb0));
    return;
  }
  return;
}

