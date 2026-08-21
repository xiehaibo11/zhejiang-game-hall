
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::compare(char const*) const */

uint __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::compare
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char *param_1)

{
  size_t __n;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar1;
  uint uVar2;
  size_t sVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__s1;
  ulong uVar4;
  
  sVar3 = strlen(param_1);
  bVar1 = *this;
  if (((byte)bVar1 & 1) == 0) {
    uVar4 = (ulong)((byte)bVar1 >> 1);
  }
  else {
    uVar4 = *(ulong *)(this + 8);
  }
  if (sVar3 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_out_of_range();
  }
  if (((byte)bVar1 & 1) == 0) {
    __s1 = this + 1;
  }
  else {
    __s1 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
            (this + 0x10);
  }
  __n = sVar3;
  if (uVar4 <= sVar3) {
    __n = uVar4;
  }
  if (((__n == 0) || (uVar2 = memcmp(__s1,param_1,__n), uVar2 == 0)) &&
     (uVar2 = (uint)(sVar3 < uVar4), uVar4 < sVar3)) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

