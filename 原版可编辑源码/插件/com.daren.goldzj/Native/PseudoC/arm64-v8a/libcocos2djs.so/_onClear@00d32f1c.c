
/* dragonBones::AnimationConfig::_onClear() */

void __thiscall dragonBones::AnimationConfig::_onClear(AnimationConfig *this)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined8 uVar4;
  
  uVar4 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)(this + 0x40) = uVar4;
  *(undefined8 *)(this + 0x10) = 0x100000004;
  *(undefined8 *)(this + 0x24) = 0xffffffff00000001;
  *(undefined4 *)(this + 0x2c) = 0;
  this[0xd] = (AnimationConfig)0x1;
  *(undefined8 *)(this + 0x18) = 0x1010001bf800000;
  this[0x20] = (AnimationConfig)0x1;
  *(undefined8 *)(this + 0x38) = 0x3f800000c2c80000;
  *(undefined8 *)(this + 0x30) = 0xbf80000000000000;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x48),"",0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x60),"",0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x78),"",0);
  pbVar1 = *(byte **)(this + 0x90);
  pbVar3 = *(byte **)(this + 0x98);
  while (pbVar2 = pbVar3, pbVar2 != pbVar1) {
    pbVar3 = pbVar2 + -0x18;
    if ((*pbVar3 & 1) != 0) {
      operator_delete(*(void **)(pbVar2 + -8));
    }
  }
  *(byte **)(this + 0x98) = pbVar1;
  return;
}

