
/* dragonBones::Animation::fadeIn(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, float, int, int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   dragonBones::AnimationFadeOutMode) */

void __thiscall
dragonBones::Animation::fadeIn
          (undefined4 param_2,Animation *this,
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *param_1,
          undefined4 param_3,undefined4 param_4,
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *param_5,
          undefined4 param_7)

{
  ulong uVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  AnimationConfig *pAVar3;
  
                    /* try { // try from 00d723e8 to 00e723f7 has its CatchHandler @ 00d732d8 */
  AnimationConfig::clear(*(AnimationConfig **)(this + 0x70));
  pAVar3 = *(AnimationConfig **)(this + 0x70);
  *(undefined4 *)(pAVar3 + 0x10) = param_7;
  *(undefined4 *)(pAVar3 + 0x28) = param_3;
  *(undefined4 *)(pAVar3 + 0x2c) = param_4;
  *(undefined4 *)(pAVar3 + 0x40) = param_2;
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (pAVar3 + 0x60) != param_1) {
    uVar1 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (pAVar3 + 0x60),(char *)pbVar2,uVar1);
    pAVar3 = *(AnimationConfig **)(this + 0x70);
  }
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (pAVar3 + 0x78) != param_5) {
    uVar1 = *(ulong *)(param_5 + 8);
    pbVar2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (param_5 + 0x10);
    if (((byte)*param_5 & 1) == 0) {
      pbVar2 = param_5 + 1;
      uVar1 = (ulong)((byte)*param_5 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (pAVar3 + 0x78),(char *)pbVar2,uVar1);
    pAVar3 = *(AnimationConfig **)(this + 0x70);
  }
  playConfig(this,pAVar3);
  return;
}

