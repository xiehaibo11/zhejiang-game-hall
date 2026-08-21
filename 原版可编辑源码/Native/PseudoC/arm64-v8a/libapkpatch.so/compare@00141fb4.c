
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::compare(unsigned long, unsigned long, char const*) const */

uint __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::compare
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,ulong param_2,char *param_3)

{
  ulong uVar1;
  ulong uVar2;
  size_t __n;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar3;
  uint uVar4;
  size_t sVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar6;
  
  sVar5 = strlen(param_3);
  bVar3 = *this;
  uVar1 = (ulong)((byte)bVar3 >> 1);
  if (((byte)bVar3 & 1) != 0) {
    uVar1 = *(ulong *)(this + 8);
  }
  if ((uVar1 < param_1) || (sVar5 == 0xffffffffffffffff)) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_out_of_range();
  }
  uVar2 = uVar1 - param_1;
  if (param_2 <= uVar1 - param_1) {
    uVar2 = param_2;
  }
  __n = sVar5;
  if (uVar2 <= sVar5) {
    __n = uVar2;
  }
  if (__n != 0) {
    pbVar6 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
    if (((byte)bVar3 & 1) == 0) {
      pbVar6 = this + 1;
    }
    uVar4 = memcmp(pbVar6 + param_1,param_3,__n);
    if (uVar4 != 0) {
      return uVar4;
    }
  }
  uVar4 = (uint)(sVar5 < uVar2);
  if (uVar2 < sVar5) {
    uVar4 = 0xffffffff;
  }
  return uVar4;
}

