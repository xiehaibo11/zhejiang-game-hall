
/* std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::setp(wchar_t*,
   wchar_t*) */

void __thiscall
std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::setp
          (basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,wchar_t *param_1,
          wchar_t *param_2)

{
  *(wchar_t **)(this + 0x28) = param_1;
  *(wchar_t **)(this + 0x30) = param_1;
  *(wchar_t **)(this + 0x38) = param_2;
  return;
}

