
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::append(char const*, unsigned long) */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar4;
  bool bVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar6;
  
  bVar4 = *this;
  bVar5 = ((byte)bVar4 & 1) != 0;
  uVar2 = 0x16;
  if (bVar5) {
    uVar2 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
  }
  uVar3 = (ulong)((byte)bVar4 >> 1);
  if (bVar5) {
    uVar3 = *(ulong *)(this + 8);
  }
  if (uVar2 - uVar3 < param_2) {
    __grow_by_and_replace(this,uVar2,(uVar3 + param_2) - uVar2,uVar3,uVar3,0,param_2,param_1);
  }
  else if (param_2 != 0) {
    pbVar6 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
    if (((byte)bVar4 & 1) == 0) {
      pbVar6 = this + 1;
    }
    memcpy(pbVar6 + uVar3,param_1,param_2);
    lVar1 = uVar3 + param_2;
    if (((byte)*this & 1) == 0) {
      *this = SUB41((int)lVar1 << 1,0);
    }
    else {
      *(long *)(this + 8) = lVar1;
    }
    pbVar6[lVar1] =
         (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  }
  return this;
}

