
/* cocos2d::PUSphereRender::clone() */

PUParticle3DEntityRender * __thiscall cocos2d::PUSphereRender::clone(PUSphereRender *this)

{
  ulong uVar1;
  PUSphereRender *pPVar2;
  PUParticle3DEntityRender *this_00;
  
  this_00 = operator_new(0x100,(nothrow_t *)&std::nothrow);
  if (this_00 != (PUParticle3DEntityRender *)0x0) {
    PUParticle3DEntityRender::PUParticle3DEntityRender(this_00);
    *(undefined8 *)(this_00 + 0xf0) = 0;
    *(undefined8 *)(this_00 + 0xf8) = 0;
    *(undefined8 *)(this_00 + 0xe8) = 0;
    *(undefined4 *)(this_00 + 0xe0) = 0x100010;
    *(undefined ***)this_00 = &PTR__PUSphereRender_016f29a0;
    this_00[0x4a] = (PUParticle3DEntityRender)0x0;
    PUParticle3DEntityRender::initRender(this_00,(basic_string *)(this + 200));
    Ref::autorelease((Ref *)this_00);
  }
  Particle3DRender::copyAttributesTo((Particle3DRender *)this,(Particle3DRender *)this_00);
  if (this_00 != (PUParticle3DEntityRender *)this) {
    uVar1 = *(ulong *)(this + 0x58);
    pPVar2 = *(PUSphereRender **)(this + 0x60);
    if (((byte)this[0x50] & 1) == 0) {
      pPVar2 = this + 0x51;
      uVar1 = (ulong)((byte)this[0x50] >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this_00 + 0x50),(char *)pPVar2,uVar1);
  }
  *(undefined2 *)(this_00 + 0xe0) = *(undefined2 *)(this + 0xe0);
  *(undefined2 *)(this_00 + 0xe2) = *(undefined2 *)(this + 0xe2);
  return this_00;
}

