
/* spine::SkeletonAnimation::createWithData(spine::SkeletonData*, bool) */

SkeletonRenderer * spine::SkeletonAnimation::createWithData(SkeletonData *param_1,bool param_2)

{
  SkeletonRenderer *this;
  
  this = operator_new(0x1e0);
  SkeletonRenderer::SkeletonRenderer(this);
  *(undefined8 *)(this + 0xb0) = 0;
  this[0xb8] = (SkeletonRenderer)0x0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined ***)this = &PTR__SkeletonAnimation_01c8fb00;
  *(undefined ***)(this + 0x10) = &PTR__SkeletonAnimation_01c8fb70;
  *(undefined8 *)(this + 0x1d0) = 0;
  SkeletonRenderer::initWithData(this,param_1,param_2);
  cocos2d::Ref::autorelease((Ref *)this);
  return this;
}

