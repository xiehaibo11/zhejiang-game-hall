
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::compare(char const*) const */

uint __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::compare
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char *param_1)

{
  ulong uVar1;
  size_t __n;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar2;
  uint uVar3;
  size_t sVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__s1;
  
  sVar4 = strlen(param_1);
  bVar2 = *this;
  uVar1 = (ulong)((byte)bVar2 >> 1);
  if (((byte)bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(this + 8);
  }
  if (sVar4 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_out_of_range();
  }
  __n = sVar4;
  if (uVar1 <= sVar4) {
    __n = uVar1;
  }
  if (__n != 0) {
    __s1 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
            (this + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      __s1 = this + 1;
    }
    uVar3 = memcmp(__s1,param_1,__n);
    if (uVar3 != 0) {
      return uVar3;
    }
  }
  uVar3 = (uint)(sVar4 < uVar1);
  if (uVar1 < sVar4) {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

