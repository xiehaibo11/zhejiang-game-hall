
/* spine::SkeletonRenderer::createWithFile(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, spAtlas*, float) */

SkeletonRenderer *
spine::SkeletonRenderer::createWithFile(basic_string *param_1,spAtlas *param_2,float param_3)

{
  SkeletonRenderer *this;
  
  this = operator_new(0x3b0);
  SkeletonRenderer(this,param_1,param_2,param_3);
  cocos2d::Ref::autorelease((Ref *)this);
  return this;
}

