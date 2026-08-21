
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::assign(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, unsigned long, unsigned long) */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          basic_string *param_1,ulong param_2,ulong param_3)

{
  ulong __n;
  ulong uVar1;
  ulong uVar2;
  basic_string bVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__dest;
  basic_string *pbVar5;
  
  bVar3 = *param_1;
  uVar1 = (ulong)((byte)bVar3 >> 1);
  if (((byte)bVar3 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (param_2 <= uVar1) {
    pbVar5 = *(basic_string **)(param_1 + 0x10);
    bVar4 = *this;
    if (((byte)bVar3 & 1) == 0) {
      pbVar5 = param_1 + 1;
    }
    __n = uVar1 - param_2;
    if (param_3 <= uVar1 - param_2) {
      __n = param_3;
    }
    uVar1 = 0x16;
    if (((byte)bVar4 & 1) != 0) {
      uVar1 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
    }
    if (__n < uVar1 || __n - uVar1 == 0) {
      __dest = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (this + 0x10);
      if (((byte)bVar4 & 1) == 0) {
        __dest = this + 1;
      }
      if (__n != 0) {
        memmove(__dest,pbVar5 + param_2,__n);
      }
      __dest[__n] = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                    0x0;
      if (((byte)*this & 1) == 0) {
        *this = SUB41((int)__n << 1,0);
      }
      else {
        *(ulong *)(this + 8) = __n;
      }
    }
    else {
      uVar2 = (ulong)((byte)bVar4 >> 1);
      if (((byte)bVar4 & 1) != 0) {
        uVar2 = *(ulong *)(this + 8);
      }
      __grow_by_and_replace(this,uVar1,__n - uVar1,uVar2,0,uVar2,__n,(char *)(pbVar5 + param_2));
    }
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __basic_string_common<true>::__throw_out_of_range();
}

