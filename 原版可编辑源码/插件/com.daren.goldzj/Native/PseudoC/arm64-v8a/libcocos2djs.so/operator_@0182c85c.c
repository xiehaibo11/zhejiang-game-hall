
/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_string<wchar_t,
   std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> > const&) */

basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> * __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::operator=(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
            *this,basic_string *param_1)

{
  ulong uVar1;
  basic_string *pbVar2;
  
  if (this != (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               *)param_1) {
    uVar1 = (ulong)((byte)*param_1 >> 1);
    pbVar2 = param_1 + 4;
    if (((byte)*param_1 & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 8);
      pbVar2 = *(basic_string **)(param_1 + 0x10);
    }
    assign(this,(wchar_t *)pbVar2,uVar1);
  }
  return this;
}

