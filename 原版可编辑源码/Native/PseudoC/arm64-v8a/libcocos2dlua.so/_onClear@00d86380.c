
/* dragonBones::AnimationConfig::_onClear() */

void __thiscall dragonBones::AnimationConfig::_onClear(AnimationConfig *this)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte *pbVar4;
  undefined8 uVar5;
  
  uVar5 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)(this + 0x40) = uVar5;
                    /* try { // try from 00d863a8 to 00e863af has its CatchHandler @ 00d863e8 */
  *(undefined8 *)(this + 0x10) = 0x100000004;
                    /* try { // try from 00d863b0 to 00e86403 has its CatchHandler @ 00d86378 */
  *(undefined8 *)(this + 0x24) = 0xffffffff00000001;
  *(undefined4 *)(this + 0x2c) = 0;
  this[0xd] = (AnimationConfig)0x1;
  *(undefined8 *)(this + 0x18) = 0x1010001bf800000;
  this[0x20] = (AnimationConfig)0x1;
  *(undefined8 *)(this + 0x38) = 0x3f800000c2c80000;
  *(undefined8 *)(this + 0x30) = 0xbf80000000000000;
                    /* catch() { ... } // from try @ 00d863a8 with catch @ 00d863e8 */
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
  pbVar2 = *(byte **)(this + 0x98);
  if (pbVar2 != pbVar1) {
    bVar3 = pbVar2[-0x18];
    pbVar4 = pbVar2 + -0x18;
    while( true ) {
      if ((bVar3 & 1) != 0) {
        operator_delete(*(void **)(pbVar2 + -8));
      }
      if (pbVar1 == pbVar4) break;
      bVar3 = pbVar4[-0x18];
      pbVar2 = pbVar4;
      pbVar4 = pbVar4 + -0x18;
    }
  }
  *(byte **)(this + 0x98) = pbVar1;
  return;
}

