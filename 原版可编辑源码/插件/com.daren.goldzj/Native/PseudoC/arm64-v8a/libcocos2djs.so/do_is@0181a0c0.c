
/* std::__ndk1::ctype<wchar_t>::do_is(wchar_t const*, wchar_t const*, unsigned long*) const */

wchar_t * __thiscall
std::__ndk1::ctype<wchar_t>::do_is
          (ctype<wchar_t> *this,wchar_t *param_1,wchar_t *param_2,ulong *param_3)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  if (param_1 != param_2) {
    pwVar1 = param_1;
    do {
      if ((uint)*pwVar1 < 0x80) {
        uVar2 = *(ulong *)(&DAT_01a64ec8 + (ulong)(uint)*pwVar1 * 8);
      }
      else {
        uVar2 = 0;
      }
      pwVar1 = pwVar1 + 1;
      *param_3 = uVar2;
      param_3 = param_3 + 1;
    } while (param_2 != pwVar1);
    param_1 = param_1 + ((ulong)((long)param_2 + (-4 - (long)param_1)) >> 2) + 1;
  }
  return param_1;
}

