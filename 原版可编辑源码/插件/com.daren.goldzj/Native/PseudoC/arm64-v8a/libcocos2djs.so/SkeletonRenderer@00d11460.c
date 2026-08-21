
/* spine::SkeletonRenderer::SkeletonRenderer(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, float) */

void __thiscall
spine::SkeletonRenderer::SkeletonRenderer
          (SkeletonRenderer *this,basic_string *param_1,basic_string *param_2,float param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  cocos2d::Ref::Ref((Ref *)this);
  *(undefined8 *)(this + 0x40) = 0x3f800000;
  *(undefined2 *)(this + 0x18) = 0;
  this[0x1a] = (SkeletonRenderer)0x0;
  this[0x48] = (SkeletonRenderer)0x0;
  *(undefined ***)this = &PTR__SkeletonRenderer_01c8fbf8;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined ***)(this + 0x10) = &PTR__SkeletonRenderer_01c8fc58;
  uVar2 = cocos2d::Color4F::WHITE._8_8_;
  uVar1 = cocos2d::Color4F::WHITE._0_8_;
  *(undefined8 *)(this + 0x88) = 0xffffffffffffffff;
  this[0x5c] = (SkeletonRenderer)0x0;
  *(undefined8 *)(this + 0x60) = 0;
  this[0x68] = (SkeletonRenderer)0x0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  this[0x71] = (SkeletonRenderer)0x0;
  *(undefined8 *)(this + 0x54) = uVar2;
  *(undefined8 *)(this + 0x4c) = uVar1;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  initWithJsonFile(this,param_1,param_2,param_3);
  return;
}

