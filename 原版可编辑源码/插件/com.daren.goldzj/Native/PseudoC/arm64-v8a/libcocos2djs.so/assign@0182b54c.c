
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::assign(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, unsigned long, unsigned long) */

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          basic_string *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  basic_string bVar3;
  basic_string *pbVar4;
  
  bVar3 = *param_1;
  uVar1 = (ulong)((byte)bVar3 >> 1);
  if (((byte)bVar3 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (param_2 <= uVar1) {
    pbVar4 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar3 & 1) == 0) {
      pbVar4 = param_1 + 1;
    }
    uVar2 = uVar1 - param_2;
    if (param_3 <= uVar1 - param_2) {
      uVar2 = param_3;
    }
    assign(this,(char *)(pbVar4 + param_2),uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __basic_string_common<true>::__throw_out_of_range();
}

