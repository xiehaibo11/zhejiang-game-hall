
/* std::__ndk1::ctype<wchar_t>::do_toupper(wchar_t*, wchar_t const*) const */

wchar_t * __thiscall
std::__ndk1::ctype<wchar_t>::do_toupper(ctype<wchar_t> *this,wchar_t *param_1,wchar_t *param_2)

{
  wchar_t *pwVar1;
  int iVar2;
  wchar_t wVar3;
  
  pwVar1 = param_1;
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    wVar3 = *param_1;
    if ((uint)wVar3 < 0x80) {
      if (((DAT_017942d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_017942d8), iVar2 != 0)) {
        DAT_017942d0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
        __cxa_guard_release(&DAT_017942d8);
      }
      iVar2 = islower(wVar3);
      wVar3 = *param_1;
      if (iVar2 != 0) {
        wVar3 = *param_1 + L'\xffffffe0';
      }
    }
    *param_1 = wVar3;
    pwVar1 = param_2;
  }
  return pwVar1;
}

