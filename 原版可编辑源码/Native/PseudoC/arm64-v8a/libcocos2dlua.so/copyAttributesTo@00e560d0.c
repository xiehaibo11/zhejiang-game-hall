
/* cocos2d::PUParticle3DQuadRender::copyAttributesTo(cocos2d::PUParticle3DQuadRender*) */

void __thiscall
cocos2d::PUParticle3DQuadRender::copyAttributesTo
          (PUParticle3DQuadRender *this,PUParticle3DQuadRender *param_1)

{
  ulong uVar1;
  PUParticle3DQuadRender *pPVar2;
  undefined8 uVar3;
  
  Particle3DRender::copyAttributesTo((Particle3DRender *)this,(Particle3DRender *)param_1);
  if (param_1 != this) {
    uVar1 = *(ulong *)(this + 0x58);
    pPVar2 = *(PUParticle3DQuadRender **)(this + 0x60);
    if (((byte)this[0x50] & 1) == 0) {
      pPVar2 = this + 0x51;
      uVar1 = (ulong)((byte)this[0x50] >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (param_1 + 0x50),(char *)pPVar2,uVar1);
  }
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(this + 0xe0);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(this + 0xe8);
  uVar3 = *(undefined8 *)(this + 0xec);
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(this + 0xf4);
  *(undefined8 *)(param_1 + 0xec) = uVar3;
  uVar3 = *(undefined8 *)(this + 0xf8);
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(this + 0x100);
  *(undefined8 *)(param_1 + 0xf8) = uVar3;
  *(undefined2 *)(param_1 + 0x104) = *(undefined2 *)(this + 0x104);
  *(undefined2 *)(param_1 + 0x106) = *(undefined2 *)(this + 0x106);
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(this + 0x108);
  return;
}

