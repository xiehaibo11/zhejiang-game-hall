
/* cocos2d::PUEventHandler::copyAttributesTo(cocos2d::PUEventHandler*) */

void __thiscall
cocos2d::PUEventHandler::copyAttributesTo(PUEventHandler *this,PUEventHandler *param_1)

{
  ulong uVar1;
  PUEventHandler *pPVar2;
  undefined8 uVar3;
  
  if (param_1 != this) {
    uVar1 = *(ulong *)(this + 0x50);
    pPVar2 = *(PUEventHandler **)(this + 0x58);
    if (((byte)this[0x48] & 1) == 0) {
      pPVar2 = this + 0x49;
      uVar1 = (ulong)((byte)this[0x48] >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (param_1 + 0x48),(char *)pPVar2,uVar1);
  }
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(this + 0x28);
  uVar3 = *(undefined8 *)(this + 0x60);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(this + 0x68);
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  return;
}

