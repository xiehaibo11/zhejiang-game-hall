
/* cocos2d::PUSphereRender::copyAttributesTo(cocos2d::PUSphereRender*) */

void __thiscall
cocos2d::PUSphereRender::copyAttributesTo(PUSphereRender *this,PUSphereRender *param_1)

{
  ulong uVar1;
  PUSphereRender *pPVar2;
  
  Particle3DRender::copyAttributesTo((Particle3DRender *)this,(Particle3DRender *)param_1);
  if (param_1 != this) {
    uVar1 = *(ulong *)(this + 0x58);
    pPVar2 = *(PUSphereRender **)(this + 0x60);
    if (((byte)this[0x50] & 1) == 0) {
      pPVar2 = this + 0x51;
      uVar1 = (ulong)((byte)this[0x50] >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (param_1 + 0x50),(char *)pPVar2,uVar1);
  }
  *(undefined2 *)(param_1 + 0xe0) = *(undefined2 *)(this + 0xe0);
  *(undefined2 *)(param_1 + 0xe2) = *(undefined2 *)(this + 0xe2);
  return;
}

