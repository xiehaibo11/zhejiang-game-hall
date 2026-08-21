
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::copy(char*, unsigned long, unsigned long) const */

size_t __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::copy
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char *param_1,ulong param_2,ulong param_3)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar1;
  size_t __n;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  ulong uVar3;
  
  bVar1 = *this;
  if (((byte)bVar1 & 1) == 0) {
    uVar3 = (ulong)((byte)bVar1 >> 1);
    __n = uVar3 - param_3;
  }
  else {
    uVar3 = *(ulong *)(this + 8);
    __n = uVar3 - param_3;
  }
  if (param_3 <= uVar3) {
    if (param_2 <= __n) {
      __n = param_2;
    }
    if (((byte)bVar1 & 1) == 0) {
      pbVar2 = this + 1;
    }
    else {
      pbVar2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (this + 0x10);
    }
    if (__n != 0) {
      memcpy(param_1,pbVar2 + param_3,__n);
    }
    return __n;
  }
                    /* WARNING: Subroutine does not return */
  __basic_string_common<true>::__throw_out_of_range();
}

