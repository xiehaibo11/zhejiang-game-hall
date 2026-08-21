
/* cocos2d::PUParticle3DModelRender::copyAttributesTo(cocos2d::PUParticle3DModelRender*) */

void __thiscall
cocos2d::PUParticle3DModelRender::copyAttributesTo
          (PUParticle3DModelRender *this,PUParticle3DModelRender *param_1)

{
  ulong uVar1;
  PUParticle3DModelRender *pPVar2;
  
  Particle3DRender::copyAttributesTo((Particle3DRender *)this,(Particle3DRender *)param_1);
  if (param_1 != this) {
    uVar1 = *(ulong *)(this + 0x58);
    pPVar2 = *(PUParticle3DModelRender **)(this + 0x60);
    if (((byte)this[0x50] & 1) == 0) {
      pPVar2 = this + 0x51;
      uVar1 = (ulong)((byte)this[0x50] >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (param_1 + 0x50),(char *)pPVar2,uVar1);
  }
  return;
}

