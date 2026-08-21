
/* spine::SkeletonAnimation::createWithJsonFile(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, float) */

SkeletonRenderer *
spine::SkeletonAnimation::createWithJsonFile
          (basic_string *param_1,basic_string *param_2,float param_3)

{
  SkeletonRenderer *this;
  spAtlas *psVar1;
  basic_string *pbVar2;
  
                    /* try { // try from 00d4f154 to 00e4f233 has its CatchHandler @ 00d4f114 */
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
  pbVar2 = *(basic_string **)(param_2 + 0x10);
  if (((byte)*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
  }
  psVar1 = (spAtlas *)spAtlas_createFromFile(pbVar2,0);
  SkeletonRenderer::initWithJsonFile(this,param_1,psVar1,param_3);
  cocos2d::Ref::autorelease((Ref *)this);
  return this;
}

