
/* spine::SkeletonAnimation::setAnimationStateData(spine::AnimationStateData*) */

void __thiscall
spine::SkeletonAnimation::setAnimationStateData(SkeletonAnimation *this,AnimationStateData *param_1)

{
  long *plVar1;
  AnimationState *this_00;
  AnimationState *this_01;
  SkeletonAnimation *pSVar2;
  
  if (*(AnimationState **)(this + 0xb0) != (AnimationState *)0x0) {
    if ((this[0xb8] != (SkeletonAnimation)0x0) &&
       (plVar1 = (long *)AnimationState::getData(*(AnimationState **)(this + 0xb0)),
       plVar1 != (long *)0x0)) {
      (**(code **)(*plVar1 + 8))();
    }
    if (*(long **)(this + 0xb0) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0xb0) + 8))();
    }
  }
  this[0xb8] = (SkeletonAnimation)0x0;
  this_00 = SpineObject::operator_new
                      (0xd0,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine-creator-support/SkeletonAnimation.cpp"
                       ,0xae);
  AnimationState::AnimationState(this_00,param_1);
  *(AnimationState **)(this + 0xb0) = this_00;
  this_01 = this_00;
  if (((*(code **)(this_00 + 0x18) != (code *)0x0) &&
      (pSVar2 = *(SkeletonAnimation **)(this_00 + 0x10), pSVar2 != (SkeletonAnimation *)0x0)) &&
     (pSVar2 != this)) {
    (**(code **)(this_00 + 0x18))(pSVar2);
    this_01 = *(AnimationState **)(this + 0xb0);
  }
  *(SkeletonAnimation **)(this_00 + 0x10) = this;
  *(undefined8 *)(this_00 + 0x18) = 0;
  AnimationState::setListener(this_01,animationCallback);
  return;
}

