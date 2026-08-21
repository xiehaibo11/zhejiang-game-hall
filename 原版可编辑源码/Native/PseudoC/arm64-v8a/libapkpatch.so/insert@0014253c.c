
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::insert(std::__ndk1::__wrap_iter<char const*>, char) */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          long param_2,
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar4;
  bool bVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar6;
  ulong uVar7;
  
  uVar3 = *(ulong *)(this + 8);
  pbVar6 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
            (this + 0x10);
  bVar5 = ((byte)*this & 1) != 0;
  if (!bVar5) {
    pbVar6 = this + 1;
    uVar3 = (ulong)((byte)*this >> 1);
  }
  uVar2 = 0x16;
  if (bVar5) {
    uVar2 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
  }
  uVar7 = param_2 - (long)pbVar6;
  if (uVar2 == uVar3) {
    __grow_by(this,uVar3,1,uVar3,uVar7,0,1);
    pbVar6 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
  }
  else if (uVar3 - uVar7 != 0) {
    memmove(pbVar6 + uVar7 + 1,pbVar6 + uVar7,uVar3 - uVar7);
  }
  lVar1 = uVar3 + 1;
  pbVar6[uVar7] = param_3;
  pbVar6[lVar1] =
       (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  bVar4 = *this;
  if (((byte)bVar4 & 1) == 0) {
    *this = SUB41((int)lVar1 << 1,0);
  }
  else {
    *(long *)(this + 8) = lVar1;
  }
  pbVar6 = this + 1;
  if (((byte)bVar4 & 1) != 0) {
    pbVar6 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
  }
  return pbVar6 + uVar7;
}

