
/* cocos2d::PUParticle3DQuadRender::clone() */

Particle3DRender * __thiscall cocos2d::PUParticle3DQuadRender::clone(PUParticle3DQuadRender *this)

{
  ulong uVar1;
  PUParticle3DQuadRender *pPVar2;
  Particle3DRender *pPVar3;
  undefined8 uVar4;
  
  pPVar3 = (Particle3DRender *)create((basic_string *)(this + 200));
  Particle3DRender::copyAttributesTo((Particle3DRender *)this,pPVar3);
  if (pPVar3 != (Particle3DRender *)this) {
    uVar1 = *(ulong *)(this + 0x58);
    pPVar2 = *(PUParticle3DQuadRender **)(this + 0x60);
    if (((byte)this[0x50] & 1) == 0) {
      pPVar2 = this + 0x51;
      uVar1 = (ulong)((byte)this[0x50] >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (pPVar3 + 0x50),(char *)pPVar2,uVar1);
  }
  *(undefined8 *)(pPVar3 + 0xe0) = *(undefined8 *)(this + 0xe0);
  *(undefined4 *)(pPVar3 + 0xe8) = *(undefined4 *)(this + 0xe8);
  uVar4 = *(undefined8 *)(this + 0xec);
  *(undefined4 *)(pPVar3 + 0xf4) = *(undefined4 *)(this + 0xf4);
  *(undefined8 *)(pPVar3 + 0xec) = uVar4;
  uVar4 = *(undefined8 *)(this + 0xf8);
  *(undefined4 *)(pPVar3 + 0x100) = *(undefined4 *)(this + 0x100);
  *(undefined8 *)(pPVar3 + 0xf8) = uVar4;
  *(undefined2 *)(pPVar3 + 0x104) = *(undefined2 *)(this + 0x104);
  *(undefined2 *)(pPVar3 + 0x106) = *(undefined2 *)(this + 0x106);
  *(undefined8 *)(pPVar3 + 0x108) = *(undefined8 *)(this + 0x108);
  return pPVar3;
}

