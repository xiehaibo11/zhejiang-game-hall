
/* cocos2d::PUSlaveEmitter::copyAttributesTo(cocos2d::PUEmitter*) */

void __thiscall cocos2d::PUSlaveEmitter::copyAttributesTo(PUSlaveEmitter *this,PUEmitter *param_1)

{
  PUSlaveEmitter *pPVar1;
  ulong uVar2;
  
  PUEmitter::copyAttributesTo((PUEmitter *)this,param_1);
  if (this != (PUSlaveEmitter *)param_1) {
    pPVar1 = *(PUSlaveEmitter **)(this + 0x220);
    uVar2 = *(ulong *)(this + 0x218);
    if (((byte)this[0x210] & 1) == 0) {
      pPVar1 = this + 0x211;
      uVar2 = (ulong)((byte)this[0x210] >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (param_1 + 0x210),(char *)pPVar1,uVar2);
  }
  if (this != (PUSlaveEmitter *)param_1) {
    pPVar1 = *(PUSlaveEmitter **)(this + 0x238);
    uVar2 = *(ulong *)(this + 0x230);
    if (((byte)this[0x228] & 1) == 0) {
      pPVar1 = this + 0x229;
      uVar2 = (ulong)((byte)this[0x228] >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (param_1 + 0x228),(char *)pPVar1,uVar2);
  }
  *(PUSlaveEmitter *)(param_1 + 600) = this[600];
  return;
}

