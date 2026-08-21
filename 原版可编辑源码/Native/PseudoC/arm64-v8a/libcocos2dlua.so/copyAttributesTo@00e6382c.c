
/* cocos2d::PUDoPlacementParticleEventHandler::copyAttributesTo(cocos2d::PUEventHandler*) */

void __thiscall
cocos2d::PUDoPlacementParticleEventHandler::copyAttributesTo
          (PUDoPlacementParticleEventHandler *this,PUEventHandler *param_1)

{
  ulong uVar1;
  PUDoPlacementParticleEventHandler *pPVar2;
  
  PUEventHandler::copyAttributesTo((PUEventHandler *)this,param_1);
  if (this != (PUDoPlacementParticleEventHandler *)param_1) {
    uVar1 = *(ulong *)(this + 0x80);
    pPVar2 = *(PUDoPlacementParticleEventHandler **)(this + 0x88);
    if (((byte)this[0x78] & 1) == 0) {
      pPVar2 = this + 0x79;
      uVar1 = (ulong)((byte)this[0x78] >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (param_1 + 0x78),(char *)pPVar2,uVar1);
  }
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(this + 0x90);
  *(PUDoPlacementParticleEventHandler *)(param_1 + 0xa9) = this[0xa9];
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(this + 0xb8);
  *(PUDoPlacementParticleEventHandler *)(param_1 + 0xc0) = this[0xc0];
  *(PUDoPlacementParticleEventHandler *)(param_1 + 0xc1) = this[0xc1];
  return;
}

