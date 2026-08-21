
/* spine::SkeletonAnimation::setEmptyAnimations(float) */

void __thiscall spine::SkeletonAnimation::setEmptyAnimations(SkeletonAnimation *this,float param_1)

{
  if (*(AnimationState **)(this + 0xb0) != (AnimationState *)0x0) {
    AnimationState::setEmptyAnimations(*(AnimationState **)(this + 0xb0),param_1);
    return;
  }
  return;
}

