
/* spine::SkeletonAnimation::createWithData(spSkeletonData*, bool) */

SkeletonRenderer * spine::SkeletonAnimation::createWithData(spSkeletonData *param_1,bool param_2)

{
  SkeletonRenderer *this;
  
  this = operator_new(0x4e0);
  SkeletonRenderer::SkeletonRenderer(this);
  *(undefined8 *)(this + 0x3e0) = 0;
  *(undefined8 *)(this + 0x410) = 0;
  *(undefined8 *)(this + 0x440) = 0;
  *(undefined8 *)(this + 0x470) = 0;
  *(undefined8 *)(this + 0x4a0) = 0;
  *(undefined ***)this = &PTR__SkeletonAnimation_016d5190;
  *(undefined ***)(this + 0x2f8) = &PTR__SkeletonAnimation_016d5710;
  *(undefined8 *)(this + 0x4d0) = 0;
  SkeletonRenderer::initWithData(this,param_1,param_2);
  cocos2d::Ref::autorelease((Ref *)this);
  return this;
}

