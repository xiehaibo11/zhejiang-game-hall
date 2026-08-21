
/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::rfind(wchar_t, unsigned long) const */

long __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::rfind(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
        *this,wchar_t param_1,ulong param_2)

{
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  if (((byte)*this & 1) == 0) {
    pbVar1 = this + 4;
    uVar3 = (ulong)((byte)*this >> 1);
  }
  else {
    uVar3 = *(ulong *)(this + 8);
    pbVar1 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
  }
  if (uVar3 != 0) {
    if (param_2 < uVar3) {
      uVar3 = param_2 + 1;
    }
    lVar4 = uVar3 << 2;
    do {
      if (lVar4 == 0) {
        return -1;
      }
      lVar2 = lVar4 + -4;
      lVar4 = lVar4 + -4;
    } while (*(wchar_t *)(pbVar1 + lVar2) != param_1);
    return lVar4 >> 2;
  }
  return -1;
}

