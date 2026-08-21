
/* non-virtual thunk to spine::SkeletonCache::update(float) */

void __thiscall spine::SkeletonCache::update(SkeletonCache *this,float param_1)

{
  if (*(Skeleton **)(this + 0x20) != (Skeleton *)0x0) {
    if (this[9] != (SkeletonCache)0x0) {
      Skeleton::update(*(Skeleton **)(this + 0x20),param_1);
    }
    AnimationState::update(*(AnimationState **)(this + 0xa0),param_1);
    AnimationState::apply(*(AnimationState **)(this + 0xa0),*(Skeleton **)(this + 0x20));
    Skeleton::updateWorldTransform(*(Skeleton **)(this + 0x20));
    return;
  }
  return;
}

