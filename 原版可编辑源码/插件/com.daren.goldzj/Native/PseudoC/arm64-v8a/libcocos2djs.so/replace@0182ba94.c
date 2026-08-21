
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::replace(unsigned long, unsigned long, unsigned long, char) */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::replace
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,ulong param_2,ulong param_3,char param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar4;
  size_t __n;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__dest;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__src;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  bVar4 = *this;
  if (((byte)bVar4 & 1) == 0) {
    uVar6 = (ulong)((byte)bVar4 >> 1);
    uVar5 = uVar6 - param_1;
  }
  else {
    uVar6 = *(ulong *)(this + 8);
    uVar5 = uVar6 - param_1;
  }
  if (uVar6 < param_1) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_out_of_range();
  }
  uVar2 = uVar5;
  if (param_2 <= uVar5) {
    uVar2 = param_2;
  }
  if (((byte)bVar4 & 1) == 0) {
    uVar7 = 0x16;
  }
  else {
    uVar7 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
  }
  if ((uVar2 - uVar6) + uVar7 < param_3) {
    uVar5 = (uVar6 - uVar2) + param_3;
    if (-uVar7 - 0x11 < uVar5 - uVar7) {
                    /* WARNING: Subroutine does not return */
      __basic_string_common<true>::__throw_length_error();
    }
    if (((byte)bVar4 & 1) == 0) {
      __src = this + 1;
    }
    else {
      __src = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
               (this + 0x10);
    }
    if (uVar7 < 0x7fffffffffffffe7) {
      uVar3 = uVar7 << 1;
      if (uVar7 << 1 <= uVar5) {
        uVar3 = uVar5;
      }
      if (uVar3 < 0x17) {
        uVar5 = 0x17;
      }
      else {
        uVar5 = uVar3 + 0x10 & 0xfffffffffffffff0;
      }
    }
    else {
      uVar5 = 0xffffffffffffffef;
    }
    __dest = operator_new(uVar5);
    if (param_1 != 0) {
      memcpy(__dest,__src,param_1);
    }
    __n = (uVar6 - uVar2) - param_1;
    if (__n != 0) {
      memcpy(__dest + param_3 + param_1,__src + uVar2 + param_1,__n);
    }
    if (uVar7 != 0x16) {
      operator_delete(__src);
    }
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (this + 0x10) = __dest;
    *(ulong *)this = uVar5 | 1;
  }
  else {
    if (((byte)bVar4 & 1) == 0) {
      __dest = this + 1;
    }
    else {
      __dest = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (this + 0x10);
    }
    if ((uVar2 != param_3) && (uVar5 - uVar2 != 0)) {
      memmove(__dest + param_3 + param_1,__dest + uVar2 + param_1,uVar5 - uVar2);
    }
    if (param_3 == 0) goto LAB_0182bc34;
  }
  memset(__dest + param_1,(uint)(byte)param_4,param_3);
LAB_0182bc34:
  lVar1 = (param_3 - uVar2) + uVar6;
  if (((byte)*this & 1) == 0) {
    *this = SUB41((int)lVar1 << 1,0);
  }
  else {
    *(long *)(this + 8) = lVar1;
  }
  __dest[lVar1] =
       (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  return this;
}

