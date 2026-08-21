
/* cocos2d::PUBillboardChain::PUBillboardChain(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, unsigned long, unsigned long, bool, bool, bool) */

void __thiscall
cocos2d::PUBillboardChain::PUBillboardChain
          (PUBillboardChain *this,basic_string *param_1,basic_string *param_2,ulong param_3,
          ulong param_4,bool param_5,bool param_6,bool param_7)

{
  Ref *this_00;
  StateBlock *this_01;
  
  *(ulong *)(this + 0x10) = param_4;
  *(undefined4 *)(this + 0x20) = 0;
  this[0x18] = (PUBillboardChain)param_5;
  this[0x19] = (PUBillboardChain)param_6;
  this[0x1a] = (PUBillboardChain)param_7;
  *(undefined4 *)(this + 0x1b) = 0x1010101;
  this[0x1f] = (PUBillboardChain)0x1;
  this[0x2c] = (PUBillboardChain)0x1;
  *(undefined ***)this = &PTR__PUBillboardChain_016f2c18;
  *(ulong *)(this + 8) = param_3;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0x3f800000;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (this + 0xd0),param_2);
  this_00 = (Ref *)RenderState::StateBlock::create();
  *(Ref **)(this + 0x78) = this_00;
  this_01 = (StateBlock *)0x0;
  if (this_00 != (Ref *)0x0) {
    Ref::retain(this_00);
    this_01 = *(StateBlock **)(this + 0x78);
  }
  RenderState::StateBlock::setCullFace(this_01,false);
  RenderState::StateBlock::setCullFaceSide(*(StateBlock **)(this + 0x78),0x405);
  RenderState::StateBlock::setDepthTest(*(StateBlock **)(this + 0x78),false);
  RenderState::StateBlock::setDepthWrite(*(StateBlock **)(this + 0x78),false);
  RenderState::StateBlock::setBlend(*(StateBlock **)(this + 0x78),true);
  *(undefined8 *)(this + 0x24) = 0x3f80000000000000;
  (**(code **)(*(long *)this + 0xb8))(this);
  init(this,param_2);
  return;
}

