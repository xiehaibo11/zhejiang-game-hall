
/* spine::SkeletonAnimation::setEmptyAnimation(int, float) */

void __thiscall
spine::SkeletonAnimation::setEmptyAnimation(SkeletonAnimation *this,int param_1,float param_2)

{
  if (*(AnimationState **)(this + 0xb0) != (AnimationState *)0x0) {
    AnimationState::setEmptyAnimation(*(AnimationState **)(this + 0xb0),(long)param_1,param_2);
    return;
  }
  return;
}

