
/* cocos2d::PUDoEnableComponentEventHandler::copyAttributesTo(cocos2d::PUEventHandler*) */

void __thiscall
cocos2d::PUDoEnableComponentEventHandler::copyAttributesTo
          (PUDoEnableComponentEventHandler *this,PUEventHandler *param_1)

{
  ulong uVar1;
  PUDoEnableComponentEventHandler *pPVar2;
  
  PUEventHandler::copyAttributesTo((PUEventHandler *)this,param_1);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(this + 0x88);
  if (this != (PUDoEnableComponentEventHandler *)param_1) {
    uVar1 = *(ulong *)(this + 0x78);
    pPVar2 = *(PUDoEnableComponentEventHandler **)(this + 0x80);
    if (((byte)this[0x70] & 1) == 0) {
      pPVar2 = this + 0x71;
      uVar1 = (ulong)((byte)this[0x70] >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (param_1 + 0x70),(char *)pPVar2,uVar1);
  }
  *(PUDoEnableComponentEventHandler *)(param_1 + 0x8c) = this[0x8c];
  return;
}

