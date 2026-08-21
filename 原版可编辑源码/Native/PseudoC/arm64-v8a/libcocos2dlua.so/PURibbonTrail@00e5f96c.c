
/* cocos2d::PURibbonTrail::PURibbonTrail(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, unsigned long, unsigned long, bool, bool) */

void __thiscall
cocos2d::PURibbonTrail::PURibbonTrail
          (PURibbonTrail *this,basic_string *param_1,basic_string *param_2,ulong param_3,
          ulong param_4,bool param_5,bool param_6)

{
  float fVar1;
  
  PUBillboardChain::PUBillboardChain
            ((PUBillboardChain *)this,param_1,param_2,param_3,0,param_5,param_6,true);
  *(undefined ***)this = &PTR__PURibbonTrail_016f3028;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined4 *)(this + 0x150) = 0x3f800000;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined8 *)(this + 0x1c0) = 0;
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined8 *)(this + 0x1c9) = 0;
  *(undefined8 *)(this + 0x1c1) = 0;
  *(undefined4 *)(this + 0x158) = 0x42c80000;
  fVar1 = 100.0 / (float)*(ulong *)(this + 8);
  *(float *)(this + 0x15c) = fVar1;
  *(float *)(this + 0x160) = fVar1 * fVar1;
  setNumberOfChains(this,param_4);
  (**(code **)(*(long *)this + 0x40))(this,1);
  return;
}

