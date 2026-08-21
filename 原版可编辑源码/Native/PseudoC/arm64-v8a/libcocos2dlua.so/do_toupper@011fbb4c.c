
/* std::__ndk1::ctype_byname<wchar_t>::do_toupper(wchar_t*, wchar_t const*) const */

wchar_t * __thiscall
std::__ndk1::ctype_byname<wchar_t>::do_toupper
          (ctype_byname<wchar_t> *this,wchar_t *param_1,wchar_t *param_2)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  
  pwVar1 = param_1;
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    wVar2 = towupper(*param_1);
    *param_1 = wVar2;
    pwVar1 = param_2;
  }
  return pwVar1;
}

