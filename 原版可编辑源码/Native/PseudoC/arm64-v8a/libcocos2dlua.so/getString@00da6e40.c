
/* dragonBones::UserData::getString(unsigned int) const */

void dragonBones::UserData::getString(uint param_1)

{
  long lVar1;
  ulong in_x1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = *(long *)((ulong)param_1 + 0x40);
  uVar2 = in_x1 & 0xffffffff;
  uVar3 = (*(long *)((ulong)param_1 + 0x48) - lVar1 >> 3) * -0x5555555555555555;
  if (uVar2 <= uVar3 && uVar3 - uVar2 != 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(in_x8,(basic_string *)(lVar1 + uVar2 * 0x18));
    return;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(in_x8,(char *)0x0);
  return;
}

