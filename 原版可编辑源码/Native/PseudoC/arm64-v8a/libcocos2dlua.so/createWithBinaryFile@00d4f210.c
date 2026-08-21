
/* spine::SkeletonAnimation::createWithBinaryFile(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, spAtlas*, float) */

SkeletonRenderer *
spine::SkeletonAnimation::createWithBinaryFile(basic_string *param_1,spAtlas *param_2,float param_3)

{
  SkeletonRenderer *this;
  
                    /* catch() { ... } // from try @ 00d4f14c with catch @ 00d4f218 */
                    /* catch() { ... } // from try @ 00d4f280 with catch @ 00d4f234 */
  this = operator_new(0x4e0);
  SkeletonRenderer::SkeletonRenderer(this);
  *(undefined8 *)(this + 0x3e0) = 0;
  *(undefined8 *)(this + 0x410) = 0;
  *(undefined8 *)(this + 0x440) = 0;
  *(undefined8 *)(this + 0x470) = 0;
  *(undefined8 *)(this + 0x4a0) = 0;
  *(undefined ***)this = &PTR__SkeletonAnimation_016d5190;
                    /* try { // try from 00d4f278 to 00e4f27f has its CatchHandler @ 00d4f404 */
  *(undefined ***)(this + 0x2f8) = &PTR__SkeletonAnimation_016d5710;
  *(undefined8 *)(this + 0x4d0) = 0;
                    /* try { // try from 00d4f280 to 00e4f41f has its CatchHandler @ 00d4f234 */
  SkeletonRenderer::initWithBinaryFile(this,param_1,param_2,param_3);
  cocos2d::Ref::autorelease((Ref *)this);
  return this;
}

