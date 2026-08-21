
/* dragonBones::Animation::gotoAndPlayByFrame(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned int, int) */

void __thiscall
dragonBones::Animation::gotoAndPlayByFrame
          (Animation *this,basic_string *param_1,uint param_2,int param_3)

{
  ulong uVar1;
  basic_string *pbVar2;
  Animation *pAVar3;
  long lVar4;
  float fVar5;
  
  AnimationConfig::clear(*(AnimationConfig **)(this + 0x70));
  lVar4 = *(long *)(this + 0x70);
  *(undefined1 *)(lVar4 + 0x20) = 1;
  *(int *)(lVar4 + 0x28) = param_3;
  *(undefined4 *)(lVar4 + 0x40) = 0;
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (lVar4 + 0x60) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
    uVar1 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar4 + 0x60),(char *)pbVar2,uVar1);
  }
  pAVar3 = (Animation *)
           std::__ndk1::
           __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>>>
           ::
           find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                     ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>>>
                       *)(this + 0x50),param_1);
  if ((this + 0x58 != pAVar3) && (lVar4 = *(long *)(pAVar3 + 0x38), lVar4 != 0)) {
    fVar5 = (float)NEON_ucvtf(*(undefined4 *)(lVar4 + 0x1c));
    *(float *)(*(long *)(this + 0x70) + 0x30) = (*(float *)(lVar4 + 0x24) * (float)param_2) / fVar5;
  }
  playConfig(this,*(AnimationConfig **)(this + 0x70));
  return;
}

