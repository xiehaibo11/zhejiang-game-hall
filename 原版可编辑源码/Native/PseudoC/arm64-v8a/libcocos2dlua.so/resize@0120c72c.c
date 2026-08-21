
/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::resize(unsigned long, wchar_t) */

void __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::resize(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
         *this,ulong param_1,wchar_t param_2)

{
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar1;
  ulong uVar2;
  
  bVar1 = *this;
  if (((byte)bVar1 & 1) == 0) {
    uVar2 = (ulong)((byte)bVar1 >> 1);
  }
  else {
    uVar2 = *(ulong *)(this + 8);
  }
  if (param_1 <= uVar2) {
    if (((byte)bVar1 & 1) != 0) {
      *(undefined4 *)(*(long *)(this + 0x10) + param_1 * 4) = 0;
      *(ulong *)(this + 8) = param_1;
      return;
    }
    *(undefined4 *)(this + param_1 * 4 + 4) = 0;
    *this = SUB41((int)param_1 << 1,0);
    return;
  }
  append(this,param_1 - uVar2,param_2);
  return;
}

