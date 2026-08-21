
/* std::__ndk1::ctype_byname<wchar_t>::do_toupper(wchar_t) const */

wint_t __thiscall
std::__ndk1::ctype_byname<wchar_t>::do_toupper(ctype_byname<wchar_t> *this,wchar_t param_1)

{
  wint_t wVar1;
  
  wVar1 = towupper(param_1);
  return wVar1;
}

