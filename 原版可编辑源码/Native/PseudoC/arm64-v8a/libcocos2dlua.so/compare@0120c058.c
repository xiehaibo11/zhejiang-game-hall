
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::compare(unsigned long, unsigned long, char const*, unsigned long) const */

uint __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::compare
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,ulong param_2,char *param_3,ulong param_4)

{
  ulong uVar1;
  size_t __n;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar2;
  uint uVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar4;
  ulong uVar5;
  
  bVar2 = *this;
  if (((byte)bVar2 & 1) == 0) {
    uVar5 = (ulong)((byte)bVar2 >> 1);
  }
  else {
    uVar5 = *(ulong *)(this + 8);
  }
  if ((param_4 != 0xffffffffffffffff) && (param_1 <= uVar5)) {
    uVar1 = uVar5 - param_1;
    if (param_2 <= uVar5 - param_1) {
      uVar1 = param_2;
    }
    if (((byte)bVar2 & 1) == 0) {
      pbVar4 = this + 1;
    }
    else {
      pbVar4 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (this + 0x10);
    }
    __n = param_4;
    if (uVar1 <= param_4) {
      __n = uVar1;
    }
    if (((__n == 0) || (uVar3 = memcmp(pbVar4 + param_1,param_3,__n), uVar3 == 0)) &&
       (uVar3 = (uint)(param_4 < uVar1), uVar1 < param_4)) {
      uVar3 = 0xffffffff;
    }
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __basic_string_common<true>::__throw_out_of_range();
}

