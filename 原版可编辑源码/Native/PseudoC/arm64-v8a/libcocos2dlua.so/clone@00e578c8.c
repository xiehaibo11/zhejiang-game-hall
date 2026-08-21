
/* cocos2d::PUParticle3DBoxRender::clone() */

PUParticle3DEntityRender * __thiscall
cocos2d::PUParticle3DBoxRender::clone(PUParticle3DBoxRender *this)

{
  ulong uVar1;
  PUParticle3DBoxRender *pPVar2;
  PUParticle3DEntityRender *this_00;
  
  this_00 = operator_new(0xe0,(nothrow_t *)&std::nothrow);
  if (this_00 != (PUParticle3DEntityRender *)0x0) {
    PUParticle3DEntityRender::PUParticle3DEntityRender(this_00);
    this_00[0x4a] = (PUParticle3DEntityRender)0x0;
    *(undefined ***)this_00 = &PTR__PUParticle3DBoxRender_016f2938;
    PUParticle3DEntityRender::initRender(this_00,(basic_string *)(this + 200));
    Ref::autorelease((Ref *)this_00);
  }
  Particle3DRender::copyAttributesTo((Particle3DRender *)this,(Particle3DRender *)this_00);
  if (this_00 != (PUParticle3DEntityRender *)this) {
    uVar1 = *(ulong *)(this + 0x58);
    pPVar2 = *(PUParticle3DBoxRender **)(this + 0x60);
    if (((byte)this[0x50] & 1) == 0) {
      pPVar2 = this + 0x51;
      uVar1 = (ulong)((byte)this[0x50] >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this_00 + 0x50),(char *)pPVar2,uVar1);
  }
  return this_00;
}

