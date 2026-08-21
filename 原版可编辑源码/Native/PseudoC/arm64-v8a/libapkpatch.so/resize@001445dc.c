
/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::resize(unsigned long, wchar_t) */

void __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::resize(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
         *this,ulong param_1,wchar_t param_2)

{
  ulong uVar1;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar2;
  
  bVar2 = *this;
  uVar1 = (ulong)((byte)bVar2 >> 1);
  if (((byte)bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(this + 8);
  }
  if (uVar1 < param_1) {
    append(this,param_1 - uVar1,param_2);
    return;
  }
  if (((byte)bVar2 & 1) == 0) {
    *(undefined4 *)(this + param_1 * 4 + 4) = 0;
    *this = SUB41((int)param_1 << 1,0);
    return;
  }
  *(undefined4 *)(*(long *)(this + 0x10) + param_1 * 4) = 0;
  *(ulong *)(this + 8) = param_1;
  return;
}

