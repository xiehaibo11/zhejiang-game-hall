
/* std::__ndk1::ctype_byname<wchar_t>::do_narrow(wchar_t const*, wchar_t const*, char, char*) const
    */

wchar_t * __thiscall
std::__ndk1::ctype_byname<wchar_t>::do_narrow
          (ctype_byname<wchar_t> *this,wchar_t *param_1,wchar_t *param_2,char param_3,char *param_4)

{
  uint uVar1;
  wchar_t __c;
  wchar_t *pwVar2;
  uint uVar3;
  __locale_t __dataset;
  
  pwVar2 = param_1;
  while (param_1 != param_2) {
    __c = *param_1;
    __dataset = uselocale(*(__locale_t *)(this + 0x10));
    uVar3 = wctob(__c);
    if (__dataset != (__locale_t)0x0) {
      uselocale(__dataset);
    }
    param_1 = param_1 + 1;
    uVar1 = (uint)(byte)param_3;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3;
    }
    *param_4 = (char)uVar1;
    pwVar2 = param_2;
    param_4 = param_4 + 1;
  }
  return pwVar2;
}

