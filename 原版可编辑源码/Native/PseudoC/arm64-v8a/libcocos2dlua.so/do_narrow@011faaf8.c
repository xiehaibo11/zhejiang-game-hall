
/* std::__ndk1::ctype<wchar_t>::do_narrow(wchar_t, char) const */

wchar_t __thiscall
std::__ndk1::ctype<wchar_t>::do_narrow(ctype<wchar_t> *this,wchar_t param_1,char param_2)

{
  if (0x7f < (uint)param_1) {
    param_1 = (wchar_t)(byte)param_2;
  }
  return param_1;
}

