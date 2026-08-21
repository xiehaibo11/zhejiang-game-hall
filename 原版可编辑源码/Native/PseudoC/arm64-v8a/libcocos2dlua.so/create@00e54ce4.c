
/* cocos2d::PUParticle3DQuadRender::create(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

PUParticle3DEntityRender * cocos2d::PUParticle3DQuadRender::create(basic_string *param_1)

{
  ulong uVar1;
  basic_string *pbVar2;
  PUParticle3DEntityRender *this;
  undefined8 uVar3;
  
  this = operator_new(0x110,(nothrow_t *)&std::nothrow);
  if (this != (PUParticle3DEntityRender *)0x0) {
    PUParticle3DEntityRender::PUParticle3DEntityRender(this);
    *(undefined4 *)(this + 0xe8) = 0;
    *(undefined ***)this = &PTR__PUParticle3DQuadRender_016f2800;
    *(undefined8 *)(this + 0xe0) = 0x400000000;
    Vec3::Vec3((Vec3 *)(this + 0xec),0.0,0.0,1.0);
    Vec3::Vec3((Vec3 *)(this + 0xf8),0.0,1.0,0.0);
    uVar3 = NEON_fmov(0x3f800000,4);
    *(undefined4 *)(this + 0x104) = 0x10001;
    *(undefined8 *)(this + 0x108) = uVar3;
    this[0x4a] = (PUParticle3DEntityRender)0x0;
    PUParticle3DEntityRender::initRender(this,param_1);
    if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
        (this + 200) !=
        (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
      uVar1 = *(ulong *)(param_1 + 8);
      pbVar2 = *(basic_string **)(param_1 + 0x10);
      if (((byte)*param_1 & 1) == 0) {
        pbVar2 = param_1 + 1;
        uVar1 = (ulong)((byte)*param_1 >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 200),(char *)pbVar2,uVar1);
    }
    Ref::autorelease((Ref *)this);
  }
  return this;
}

