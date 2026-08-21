
/* std::__ndk1::ctype<wchar_t>::do_is(wchar_t const*, wchar_t const*, unsigned long*) const */

wchar_t * __thiscall
std::__ndk1::ctype<wchar_t>::do_is
          (ctype<wchar_t> *this,wchar_t *param_1,wchar_t *param_2,ulong *param_3)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = param_1;
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if ((uint)*param_1 < 0x80) {
      uVar2 = *(ulong *)(&DAT_014a2658 + (ulong)(uint)*param_1 * 8);
    }
    else {
      uVar2 = 0;
    }
    *param_3 = uVar2;
    pwVar1 = param_2;
    param_3 = param_3 + 1;
  }
  return pwVar1;
}

