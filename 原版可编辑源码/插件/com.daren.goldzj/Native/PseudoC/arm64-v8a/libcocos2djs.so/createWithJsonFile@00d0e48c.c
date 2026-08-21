
/* spine::SkeletonAnimation::createWithJsonFile(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, float) */

SkeletonRenderer *
spine::SkeletonAnimation::createWithJsonFile
          (basic_string *param_1,basic_string *param_2,float param_3)

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
  SkeletonRenderer::initWithJsonFile(this,param_1,param_2,param_3);
  cocos2d::Ref::autorelease((Ref *)this);
  return this;
}

