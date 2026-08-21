
/* cocos2d::PUAffector::copyAttributesTo(cocos2d::PUAffector*) */

void __thiscall cocos2d::PUAffector::copyAttributesTo(PUAffector *this,PUAffector *param_1)

{
  ulong uVar1;
  PUAffector *pPVar2;
  undefined8 uVar3;
  
  if (param_1 != this) {
    uVar1 = *(ulong *)(this + 0x98);
    pPVar2 = *(PUAffector **)(this + 0xa0);
                    /* try { // try from 00e20ff0 to 00f20ffb has its CatchHandler @ 00e211a8 */
    if (((byte)this[0x90] & 1) == 0) {
      pPVar2 = this + 0x91;
      uVar1 = (ulong)((byte)this[0x90] >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (param_1 + 0x90),(char *)pPVar2,uVar1);
                    /* try { // try from 00e2100c to 00f21013 has its CatchHandler @ 00e211bc */
    uVar1 = (ulong)((byte)this[0x60] >> 1);
    pPVar2 = this + 0x61;
    if (((byte)this[0x60] & 1) != 0) {
      uVar1 = *(ulong *)(this + 0x68);
      pPVar2 = *(PUAffector **)(this + 0x70);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (param_1 + 0x60),(char *)pPVar2,uVar1);
  }
  uVar3 = *(undefined8 *)(this + 0x34);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(this + 0x3c);
  *(undefined8 *)(param_1 + 0x34) = uVar3;
  param_1[0x30] = this[0x30];
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(this + 0x28);
  uVar3 = *(undefined8 *)(this + 0x40);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(this + 0x48);
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(this + 0x58);
  if (param_1 != this) {
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::
    assign<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>*>
              ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                *)(param_1 + 0x78),*(basic_string **)(this + 0x78),*(basic_string **)(this + 0x80));
    return;
  }
  return;
}

