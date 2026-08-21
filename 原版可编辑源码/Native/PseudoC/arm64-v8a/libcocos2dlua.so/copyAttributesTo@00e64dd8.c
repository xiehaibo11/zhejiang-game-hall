
/* cocos2d::PUBehaviour::copyAttributesTo(cocos2d::PUBehaviour*) */

void __thiscall cocos2d::PUBehaviour::copyAttributesTo(PUBehaviour *this,PUBehaviour *param_1)

{
  ulong uVar1;
  PUBehaviour *pPVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(this + 0x28);
  if (param_1 != this) {
    uVar1 = *(ulong *)(this + 0x38);
    pPVar2 = *(PUBehaviour **)(this + 0x40);
    if (((byte)this[0x30] & 1) == 0) {
      pPVar2 = this + 0x31;
      uVar1 = (ulong)((byte)this[0x30] >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (param_1 + 0x30),(char *)pPVar2,uVar1);
  }
  uVar3 = *(undefined8 *)(this + 0x48);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(this + 0x50);
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  return;
}

