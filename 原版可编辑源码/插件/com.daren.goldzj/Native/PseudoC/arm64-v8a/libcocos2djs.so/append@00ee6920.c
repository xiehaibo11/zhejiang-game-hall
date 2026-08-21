
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::append(char const*) */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char *param_1)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar2;
  size_t __n;
  ulong uVar3;
  ulong uVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar5;
  
  __n = strlen(param_1);
  bVar2 = *this;
  if (((byte)bVar2 & 1) == 0) {
    uVar4 = (ulong)((byte)bVar2 >> 1);
    uVar3 = 0x16;
  }
  else {
    uVar4 = *(ulong *)(this + 8);
    uVar3 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
  }
  if (uVar3 - uVar4 < __n) {
    __grow_by_and_replace(this,uVar3,(uVar4 + __n) - uVar3,uVar4,uVar4,0,__n,param_1);
  }
  else if (__n != 0) {
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = this + 1;
    }
    else {
      pbVar5 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (this + 0x10);
    }
    memcpy(pbVar5 + uVar4,param_1,__n);
    lVar1 = uVar4 + __n;
    if (((byte)*this & 1) == 0) {
      *this = SUB41((int)lVar1 << 1,0);
    }
    else {
      *(long *)(this + 8) = lVar1;
    }
    pbVar5[lVar1] =
         (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  }
  return this;
}

