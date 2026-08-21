
/* cocos2d::PUParticle3DModelRender::clone() */

Particle3DRender * __thiscall cocos2d::PUParticle3DModelRender::clone(PUParticle3DModelRender *this)

{
  ulong uVar1;
  PUParticle3DModelRender *pPVar2;
  Particle3DRender *pPVar3;
  
  pPVar3 = (Particle3DRender *)create((basic_string *)(this + 0x80),(basic_string *)(this + 0x98));
  Particle3DRender::copyAttributesTo((Particle3DRender *)this,pPVar3);
  if (pPVar3 != (Particle3DRender *)this) {
    uVar1 = *(ulong *)(this + 0x58);
    pPVar2 = *(PUParticle3DModelRender **)(this + 0x60);
    if (((byte)this[0x50] & 1) == 0) {
      pPVar2 = this + 0x51;
      uVar1 = (ulong)((byte)this[0x50] >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (pPVar3 + 0x50),(char *)pPVar2,uVar1);
  }
  return pPVar3;
}

