
/* spine::SkeletonAnimation::initialize() */

void __thiscall spine::SkeletonAnimation::initialize(SkeletonAnimation *this)

{
  AnimationState *this_00;
  AnimationStateData *this_01;
  SkeletonData *pSVar1;
  AnimationState *this_02;
  SkeletonAnimation *pSVar2;
  
  SkeletonRenderer::initialize((SkeletonRenderer *)this);
  this[0xb8] = (SkeletonAnimation)0x1;
  this_00 = SpineObject::operator_new
                      (0xd0,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine-creator-support/SkeletonAnimation.cpp"
                       ,0x7b);
  this_01 = SpineObject::operator_new
                      (0x30,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine-creator-support/SkeletonAnimation.cpp"
                       ,0x7b);
  pSVar1 = (SkeletonData *)Skeleton::getData(*(Skeleton **)(this + 0x30));
  AnimationStateData::AnimationStateData(this_01,pSVar1);
  AnimationState::AnimationState(this_00,this_01);
  *(AnimationState **)(this + 0xb0) = this_00;
  this_02 = this_00;
  if (((*(code **)(this_00 + 0x18) != (code *)0x0) &&
      (pSVar2 = *(SkeletonAnimation **)(this_00 + 0x10), pSVar2 != (SkeletonAnimation *)0x0)) &&
     (pSVar2 != this)) {
    (**(code **)(this_00 + 0x18))(pSVar2);
    this_02 = *(AnimationState **)(this + 0xb0);
  }
  *(SkeletonAnimation **)(this_00 + 0x10) = this;
  *(undefined8 *)(this_00 + 0x18) = 0;
  AnimationState::setListener(this_02,animationCallback);
  return;
}

