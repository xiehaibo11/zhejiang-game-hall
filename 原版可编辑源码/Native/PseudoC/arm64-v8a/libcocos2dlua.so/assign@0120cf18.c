
/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::assign(std::__ndk1::basic_string<wchar_t,
   std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> > const&, unsigned long,
   unsigned long) */

void __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::assign(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
         *this,basic_string *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  basic_string *pbVar2;
  ulong uVar3;
  basic_string bVar4;
  
  bVar4 = *param_1;
  uVar1 = (ulong)((byte)bVar4 >> 1);
  if (((byte)bVar4 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (param_2 <= uVar1) {
    pbVar2 = param_1 + 4;
    if (((byte)bVar4 & 1) != 0) {
      pbVar2 = *(basic_string **)(param_1 + 0x10);
    }
    uVar3 = uVar1 - param_2;
    if (param_3 <= uVar1 - param_2) {
      uVar3 = param_3;
    }
    assign(this,(wchar_t *)(pbVar2 + param_2 * 4),uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __basic_string_common<true>::__throw_out_of_range();
}

