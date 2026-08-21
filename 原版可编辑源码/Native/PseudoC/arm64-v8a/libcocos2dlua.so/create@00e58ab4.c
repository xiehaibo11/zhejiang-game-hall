
/* cocos2d::PUBeamRender::create(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

Particle3DRender * cocos2d::PUBeamRender::create(basic_string *param_1)

{
  ulong uVar1;
  basic_string *pbVar2;
  Particle3DRender *this;
  
  this = operator_new(0x108,(nothrow_t *)&std::nothrow);
  if (this != (Particle3DRender *)0x0) {
    Particle3DRender::Particle3DRender(this);
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined ***)this = &PTR__PURender_016f2a08;
    PUListener::PUListener((PUListener *)(this + 0x68));
    *(undefined8 *)(this + 0xe8) = 10;
    *(undefined8 *)(this + 0x78) = 0;
    *(undefined8 *)(this + 0x70) = 0;
    *(undefined8 *)(this + 0x88) = 0;
    *(undefined8 *)(this + 0x80) = 0;
    *(undefined8 *)(this + 0x98) = 0;
    *(undefined8 *)(this + 0x90) = 0;
    *(undefined8 *)(this + 0xa8) = 0;
    *(undefined8 *)(this + 0xa0) = 0;
    *(undefined8 *)(this + 0xb8) = 0;
    *(undefined8 *)(this + 0xb0) = 0;
    *(undefined8 *)(this + 200) = 0;
    *(undefined8 *)(this + 0xc0) = 0;
    *(undefined8 *)(this + 0xd8) = 0;
    *(undefined8 *)(this + 0xd0) = 0;
    *(undefined8 *)(this + 0xf8) = 2;
    *(undefined ***)this = &PTR__PUBeamRender_016f2b00;
    this[0xe0] = (Particle3DRender)0x0;
    this[0x100] = (Particle3DRender)0x0;
    *(undefined4 *)(this + 0x104) = 1;
    *(undefined ***)(this + 0x68) = &PTR__PUBeamRender_016f2b78;
    *(undefined8 *)(this + 0xf0) = 0x439600003dcccccd;
    this[0x4a] = (Particle3DRender)0x1;
  }
  Ref::autorelease((Ref *)this);
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x70) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
    uVar1 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x70),(char *)pbVar2,uVar1);
  }
  return this;
}

