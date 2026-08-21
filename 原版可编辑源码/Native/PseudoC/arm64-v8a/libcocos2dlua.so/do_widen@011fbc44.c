
/* std::__ndk1::ctype_byname<wchar_t>::do_widen(char const*, char const*, wchar_t*) const */

char * __thiscall
std::__ndk1::ctype_byname<wchar_t>::do_widen
          (ctype_byname<wchar_t> *this,char *param_1,char *param_2,wchar_t *param_3)

{
  byte bVar1;
  char *pcVar2;
  wchar_t wVar3;
  __locale_t __dataset;
  
  pcVar2 = param_1;
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    bVar1 = *param_1;
    __dataset = uselocale(*(__locale_t *)(this + 0x10));
    wVar3 = btowc((uint)bVar1);
    if (__dataset != (__locale_t)0x0) {
      uselocale(__dataset);
    }
    *param_3 = wVar3;
    pcVar2 = param_2;
    param_3 = param_3 + 1;
  }
  return pcVar2;
}

