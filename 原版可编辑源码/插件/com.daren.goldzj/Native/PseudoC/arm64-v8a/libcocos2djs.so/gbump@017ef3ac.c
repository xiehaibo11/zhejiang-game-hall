
/* std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::gbump(int) */

void __thiscall
std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::gbump
          (basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,int param_1)

{
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + (long)param_1 * 4;
  return;
}

