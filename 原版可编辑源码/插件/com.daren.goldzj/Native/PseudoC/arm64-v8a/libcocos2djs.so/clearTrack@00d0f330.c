
/* spine::SkeletonAnimation::clearTrack(int) */

void __thiscall spine::SkeletonAnimation::clearTrack(SkeletonAnimation *this,int param_1)

{
  if (*(AnimationState **)(this + 0xb0) != (AnimationState *)0x0) {
    AnimationState::clearTrack(*(AnimationState **)(this + 0xb0),(long)param_1);
    return;
  }
  return;
}

