
/* std::__ndk1::ctype<wchar_t>::do_scan_not(unsigned long, wchar_t const*, wchar_t const*) const */

wchar_t * __thiscall
std::__ndk1::ctype<wchar_t>::do_scan_not
          (ctype<wchar_t> *this,ulong param_1,wchar_t *param_2,wchar_t *param_3)

{
  wchar_t *pwVar1;
  
  pwVar1 = param_2;
  while (((param_2 != param_3 && (pwVar1 = param_2, (uint)*param_2 < 0x80)) &&
         ((*(ulong *)(&DAT_014a2658 + (ulong)(uint)*param_2 * 8) & param_1) != 0))) {
    param_2 = param_2 + 1;
    pwVar1 = param_3;
  }
  return pwVar1;
}

