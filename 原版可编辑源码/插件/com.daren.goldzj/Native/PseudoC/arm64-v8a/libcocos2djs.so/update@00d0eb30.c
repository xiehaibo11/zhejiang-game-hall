
/* non-virtual thunk to spine::SkeletonAnimation::update(float) */

void __thiscall spine::SkeletonAnimation::update(SkeletonAnimation *this,float param_1)

{
  float fVar1;
  
  if ((*(Skeleton **)(this + 0x20) != (Skeleton *)0x0) && (this[0x34] == (SkeletonAnimation)0x0)) {
    fVar1 = *(float *)(this + 0x30) * GlobalTimeScale * param_1;
    if (this[9] != (SkeletonAnimation)0x0) {
      Skeleton::update(*(Skeleton **)(this + 0x20),fVar1);
    }
    AnimationState::update(*(AnimationState **)(this + 0xa0),fVar1);
    AnimationState::apply(*(AnimationState **)(this + 0xa0),*(Skeleton **)(this + 0x20));
    Skeleton::updateWorldTransform(*(Skeleton **)(this + 0x20));
    return;
  }
  return;
}

