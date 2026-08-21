
/* std::__ndk1::ctype<wchar_t>::do_toupper(wchar_t) const */

wchar_t __thiscall std::__ndk1::ctype<wchar_t>::do_toupper(ctype<wchar_t> *this,wchar_t param_1)

{
  int iVar1;
  
  if ((uint)param_1 < 0x80) {
    if (((DAT_017942d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_017942d8), iVar1 != 0)) {
      DAT_017942d0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      __cxa_guard_release(&DAT_017942d8);
    }
    iVar1 = iswlower(param_1);
    if (iVar1 != 0) {
      param_1 = param_1 + L'\xffffffe0';
    }
  }
  return param_1;
}

