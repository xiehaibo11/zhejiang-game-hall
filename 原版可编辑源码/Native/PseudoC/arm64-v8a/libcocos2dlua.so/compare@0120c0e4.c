
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::compare(unsigned long, unsigned long, char const*) const */

uint __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::compare
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,ulong param_2,char *param_3)

{
  ulong uVar1;
  size_t __n;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar2;
  uint uVar3;
  size_t sVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar5;
  ulong uVar6;
  
  sVar4 = strlen(param_3);
  bVar2 = *this;
  if (((byte)bVar2 & 1) == 0) {
    uVar6 = (ulong)((byte)bVar2 >> 1);
  }
  else {
    uVar6 = *(ulong *)(this + 8);
  }
  if ((sVar4 != 0xffffffffffffffff) && (param_1 <= uVar6)) {
    uVar1 = uVar6 - param_1;
    if (param_2 <= uVar6 - param_1) {
      uVar1 = param_2;
    }
    if (((byte)bVar2 & 1) == 0) {
      pbVar5 = this + 1;
    }
    else {
      pbVar5 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (this + 0x10);
    }
    __n = sVar4;
    if (uVar1 <= sVar4) {
      __n = uVar1;
    }
    if (((__n == 0) || (uVar3 = memcmp(pbVar5 + param_1,param_3,__n), uVar3 == 0)) &&
       (uVar3 = (uint)(sVar4 < uVar1), uVar1 < sVar4)) {
      uVar3 = 0xffffffff;
    }
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __basic_string_common<true>::__throw_out_of_range();
}

