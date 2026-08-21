
/* spine::SkeletonAnimation::addEmptyAnimation(int, float, float) */

void __thiscall
spine::SkeletonAnimation::addEmptyAnimation
          (SkeletonAnimation *this,int param_1,float param_2,float param_3)

{
  if (*(AnimationState **)(this + 0xb0) != (AnimationState *)0x0) {
    AnimationState::addEmptyAnimation
              (*(AnimationState **)(this + 0xb0),(long)param_1,param_2,param_3);
    return;
  }
  return;
}

