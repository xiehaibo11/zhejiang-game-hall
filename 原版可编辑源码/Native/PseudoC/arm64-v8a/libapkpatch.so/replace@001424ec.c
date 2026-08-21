
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::replace(unsigned long, unsigned long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned long, unsigned
   long) */

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::replace
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,ulong param_2,basic_string *param_3,ulong param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  basic_string bVar3;
  basic_string *pbVar4;
  
  bVar3 = *param_3;
  uVar1 = (ulong)((byte)bVar3 >> 1);
  if (((byte)bVar3 & 1) != 0) {
    uVar1 = *(ulong *)(param_3 + 8);
  }
  if (param_4 <= uVar1) {
    pbVar4 = *(basic_string **)(param_3 + 0x10);
    if (((byte)bVar3 & 1) == 0) {
      pbVar4 = param_3 + 1;
    }
    uVar2 = uVar1 - param_4;
    if (param_5 <= uVar1 - param_4) {
      uVar2 = param_5;
    }
    replace(this,param_1,param_2,(char *)(pbVar4 + param_4),uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __basic_string_common<true>::__throw_out_of_range();
}

