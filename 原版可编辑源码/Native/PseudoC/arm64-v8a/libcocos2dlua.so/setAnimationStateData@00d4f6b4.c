
/* spine::SkeletonAnimation::setAnimationStateData(spAnimationStateData*) */

void __thiscall
spine::SkeletonAnimation::setAnimationStateData
          (SkeletonAnimation *this,spAnimationStateData *param_1)

{
  long lVar1;
  
  if (this[0x3b0] != (SkeletonAnimation)0x0) {
    spAnimationStateData_dispose(**(undefined8 **)(this + 0x3a8));
  }
  spAnimationState_dispose(*(undefined8 *)(this + 0x3a8));
  this[0x3b0] = (SkeletonAnimation)0x0;
  lVar1 = spAnimationState_create(param_1);
  *(long *)(this + 0x3a8) = lVar1;
  *(SkeletonAnimation **)(lVar1 + 0x30) = this;
  *(code **)(lVar1 + 0x18) = animationCallback;
  return;
}

