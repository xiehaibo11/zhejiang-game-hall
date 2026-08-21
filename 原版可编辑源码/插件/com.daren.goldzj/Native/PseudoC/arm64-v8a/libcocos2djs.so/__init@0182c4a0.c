
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::__init(unsigned long, char) */

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::__init
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,char param_2)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__s;
  ulong uVar1;
  
  if (0xffffffffffffffef < param_1) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (param_1 < 0x17) {
    __s = this + 1;
    *this = SUB41((int)param_1 << 1,0);
    if (param_1 == 0) goto LAB_0182c50c;
  }
  else {
    uVar1 = param_1 + 0x10 & 0xfffffffffffffff0;
    __s = operator_new(uVar1);
    *(ulong *)(this + 8) = param_1;
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (this + 0x10) = __s;
    *(ulong *)this = uVar1 | 1;
  }
  memset(__s,(uint)(byte)param_2,param_1);
LAB_0182c50c:
  __s[param_1] = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0
  ;
  return;
}

