
/* std::__ndk1::ctype<wchar_t>::do_scan_is(unsigned long, wchar_t const*, wchar_t const*) const */

wchar_t * __thiscall
std::__ndk1::ctype<wchar_t>::do_scan_is
          (ctype<wchar_t> *this,ulong param_1,wchar_t *param_2,wchar_t *param_3)

{
  if (param_2 != param_3) {
    while ((0x7f < (uint)*param_2 ||
           ((*(ulong *)(&DAT_014a2658 + (ulong)(uint)*param_2 * 8) & param_1) == 0))) {
      param_2 = param_2 + 1;
      if (param_3 == param_2) {
        return param_3;
      }
    }
  }
  return param_2;
}

