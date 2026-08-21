
/* spine::SkeletonCache::update(float) */

void __thiscall spine::SkeletonCache::update(SkeletonCache *this,float param_1)

{
  if (*(Skeleton **)(this + 0x30) != (Skeleton *)0x0) {
    if (this[0x19] != (SkeletonCache)0x0) {
      Skeleton::update(*(Skeleton **)(this + 0x30),param_1);
    }
    AnimationState::update(*(AnimationState **)(this + 0xb0),param_1);
    AnimationState::apply(*(AnimationState **)(this + 0xb0),*(Skeleton **)(this + 0x30));
    Skeleton::updateWorldTransform(*(Skeleton **)(this + 0x30));
    return;
  }
  return;
}

