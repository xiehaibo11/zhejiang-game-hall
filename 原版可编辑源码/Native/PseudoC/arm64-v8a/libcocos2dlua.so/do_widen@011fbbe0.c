
/* std::__ndk1::ctype_byname<wchar_t>::do_widen(char) const */

wint_t __thiscall
std::__ndk1::ctype_byname<wchar_t>::do_widen(ctype_byname<wchar_t> *this,char param_1)

{
  wint_t wVar1;
  __locale_t __dataset;
  
  __dataset = uselocale(*(__locale_t *)(this + 0x10));
  wVar1 = btowc((uint)(byte)param_1);
  if (__dataset != (__locale_t)0x0) {
    uselocale(__dataset);
  }
  return wVar1;
}

