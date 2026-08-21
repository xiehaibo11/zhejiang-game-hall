
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::__init(char const*, unsigned long, unsigned long) */

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::__init
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char *param_1,ulong param_2,ulong param_3)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__dest;
  ulong uVar1;
  
  if (param_3 < 0xfffffffffffffff0) {
    if (param_3 < 0x17) {
      __dest = this + 1;
      *this = SUB41((int)param_2 << 1,0);
    }
    else {
      uVar1 = param_3 + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar1);
      *(ulong *)(this + 8) = param_2;
      *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
       (this + 0x10) = __dest;
      *(ulong *)this = uVar1 | 1;
    }
    if (param_2 != 0) {
      memcpy(__dest,param_1,param_2);
    }
    __dest[param_2] =
         (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __basic_string_common<true>::__throw_length_error();
}

