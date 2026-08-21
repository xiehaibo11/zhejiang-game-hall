
/* spine::SkeletonAnimation::initialize() */

void __thiscall spine::SkeletonAnimation::initialize(SkeletonAnimation *this)

{
  long lVar1;
  
  SkeletonRenderer::initialize((SkeletonRenderer *)this);
  this[0x3b0] = (SkeletonAnimation)0x1;
  spAnimationStateData_create(**(undefined8 **)(this + 0x388));
  lVar1 = spAnimationState_create();
  *(long *)(this + 0x3a8) = lVar1;
  *(SkeletonAnimation **)(lVar1 + 0x30) = this;
  *(code **)(lVar1 + 0x18) = animationCallback;
  return;
}

