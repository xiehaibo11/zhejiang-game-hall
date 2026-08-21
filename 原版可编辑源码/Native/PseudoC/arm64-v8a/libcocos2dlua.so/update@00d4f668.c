
/* spine::SkeletonAnimation::update(float) */

void __thiscall spine::SkeletonAnimation::update(SkeletonAnimation *this,float param_1)

{
  SkeletonRenderer::update((SkeletonRenderer *)this,param_1);
  spAnimationState_update(*(float *)(this + 0x390) * param_1,*(undefined8 *)(this + 0x3a8));
  spAnimationState_apply(*(undefined8 *)(this + 0x3a8),*(undefined8 *)(this + 0x388));
  spSkeleton_updateWorldTransform(*(undefined8 *)(this + 0x388));
  return;
}

