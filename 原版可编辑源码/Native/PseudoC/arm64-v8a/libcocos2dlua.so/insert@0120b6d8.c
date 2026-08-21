
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::insert(std::__ndk1::__wrap_iter<char const*>, char) */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          long param_2,
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> param_3)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar6;
  
  bVar2 = *this;
  if (((byte)bVar2 & 1) == 0) {
    pbVar6 = this + 1;
    uVar5 = (ulong)((byte)bVar2 >> 1);
    uVar3 = 0x16;
  }
  else {
    uVar5 = *(ulong *)(this + 8);
    pbVar6 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
    uVar3 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
  }
  uVar4 = param_2 - (long)pbVar6;
  if (uVar3 == uVar5) {
    __grow_by(this,uVar5,1,uVar5,uVar4,0,1);
    pbVar6 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
  }
  else {
    if (((byte)bVar2 & 1) == 0) {
      pbVar6 = this + 1;
    }
    else {
      pbVar6 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (this + 0x10);
    }
    if (uVar5 - uVar4 != 0) {
      memmove(pbVar6 + uVar4 + 1,pbVar6 + uVar4,uVar5 - uVar4);
    }
  }
  lVar1 = uVar5 + 1;
  pbVar6[uVar4] = param_3;
  pbVar6[lVar1] =
       (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  if (((byte)*this & 1) == 0) {
    *this = SUB41((int)lVar1 << 1,0);
  }
  else {
    *(long *)(this + 8) = lVar1;
    if (((byte)*this & 1) != 0) {
      this = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
      goto LAB_0120b7b0;
    }
  }
  this = this + 1;
LAB_0120b7b0:
  return this + uVar4;
}

