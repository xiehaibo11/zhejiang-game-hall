
/* std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::sgetc() */

ulong __thiscall
std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::sgetc
          (basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>> *this)

{
  ulong uVar1;
  
  if (*(uint **)(this + 0x18) != *(uint **)(this + 0x20)) {
    return (ulong)**(uint **)(this + 0x18);
  }
                    /* WARNING: Could not recover jumptable at 0x017ef144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(long *)this + 0x48))();
  return uVar1;
}

