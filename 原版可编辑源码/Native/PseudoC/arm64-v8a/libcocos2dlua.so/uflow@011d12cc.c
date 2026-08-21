
/* std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::uflow() */

ulong __thiscall
std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::uflow
          (basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>> *this)

{
  ulong uVar1;
  uint *puVar2;
  
  uVar1 = (**(code **)(*(long *)this + 0x48))();
  if ((int)uVar1 != -1) {
    puVar2 = *(uint **)(this + 0x18);
    *(uint **)(this + 0x18) = puVar2 + 1;
    uVar1 = (ulong)*puVar2;
  }
  return uVar1;
}

