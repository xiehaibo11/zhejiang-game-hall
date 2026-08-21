
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::insert(unsigned long, unsigned long, char) */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,ulong param_2,char param_3)

{
  long lVar1;
  ulong uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__dest;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__src;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  bVar3 = *this;
  if (((byte)bVar3 & 1) == 0) {
    uVar5 = (ulong)((byte)bVar3 >> 1);
  }
  else {
    uVar5 = *(ulong *)(this + 8);
  }
  if (param_1 <= uVar5) {
    if (param_2 != 0) {
      if (((byte)bVar3 & 1) == 0) {
        uVar6 = 0x16;
      }
      else {
        uVar6 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
      }
      if (uVar6 - uVar5 < param_2) {
        uVar4 = uVar5 + param_2;
        if (-uVar6 - 0x11 < uVar4 - uVar6) {
                    /* WARNING: Subroutine does not return */
          __basic_string_common<true>::__throw_length_error();
        }
        if (((byte)bVar3 & 1) == 0) {
          __src = this + 1;
        }
        else {
          __src = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                    **)(this + 0x10);
        }
        if (uVar6 < 0x7fffffffffffffe7) {
          uVar2 = uVar6 << 1;
          if (uVar6 << 1 <= uVar4) {
            uVar2 = uVar4;
          }
          if (uVar2 < 0x17) {
            uVar4 = 0x17;
          }
          else {
            uVar4 = uVar2 + 0x10 & 0xfffffffffffffff0;
          }
        }
        else {
          uVar4 = 0xffffffffffffffef;
        }
        __dest = operator_new(uVar4);
        if (param_1 != 0) {
          memcpy(__dest,__src,param_1);
        }
        if (uVar5 - param_1 != 0) {
          memcpy(__dest + param_2 + param_1,__src + param_1,uVar5 - param_1);
        }
        if (uVar6 != 0x16) {
          operator_delete(__src);
        }
        *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
         (this + 0x10) = __dest;
        *(ulong *)this = uVar4 | 1;
      }
      else {
        if (((byte)bVar3 & 1) == 0) {
          __dest = this + 1;
        }
        else {
          __dest = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     **)(this + 0x10);
        }
        if (uVar5 - param_1 != 0) {
          memmove(__dest + param_1 + param_2,__dest + param_1,uVar5 - param_1);
        }
      }
      memset(__dest + param_1,(uint)(byte)param_3,param_2);
      lVar1 = uVar5 + param_2;
      if (((byte)*this & 1) == 0) {
        *this = SUB41((int)lVar1 << 1,0);
      }
      else {
        *(long *)(this + 8) = lVar1;
      }
      __dest[lVar1] =
           (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    }
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __basic_string_common<true>::__throw_out_of_range();
}

