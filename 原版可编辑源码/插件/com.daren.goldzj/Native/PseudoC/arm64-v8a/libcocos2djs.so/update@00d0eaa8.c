
/* spine::SkeletonAnimation::update(float) */

void __thiscall spine::SkeletonAnimation::update(SkeletonAnimation *this,float param_1)

{
  float fVar1;
  
  if ((*(Skeleton **)(this + 0x30) != (Skeleton *)0x0) && (this[0x44] == (SkeletonAnimation)0x0)) {
    fVar1 = *(float *)(this + 0x40) * GlobalTimeScale * param_1;
    if (this[0x19] != (SkeletonAnimation)0x0) {
      Skeleton::update(*(Skeleton **)(this + 0x30),fVar1);
    }
    AnimationState::update(*(AnimationState **)(this + 0xb0),fVar1);
    AnimationState::apply(*(AnimationState **)(this + 0xb0),*(Skeleton **)(this + 0x30));
    Skeleton::updateWorldTransform(*(Skeleton **)(this + 0x30));
    return;
  }
  return;
}

