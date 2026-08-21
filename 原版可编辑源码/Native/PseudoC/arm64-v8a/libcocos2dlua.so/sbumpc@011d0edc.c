
/* std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::sbumpc() */

ulong __thiscall
std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::sbumpc
          (basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>> *this)

{
  uint *puVar1;
  ulong uVar2;
  
  puVar1 = *(uint **)(this + 0x18);
  if (puVar1 != *(uint **)(this + 0x20)) {
    *(uint **)(this + 0x18) = puVar1 + 1;
    return (ulong)*puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x011d0f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*(long *)this + 0x50))();
  return uVar2;
}

