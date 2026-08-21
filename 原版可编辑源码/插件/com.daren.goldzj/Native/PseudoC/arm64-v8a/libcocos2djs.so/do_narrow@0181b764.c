
/* std::__ndk1::ctype_byname<wchar_t>::do_narrow(wchar_t, char) const */

uint __thiscall
std::__ndk1::ctype_byname<wchar_t>::do_narrow
          (ctype_byname<wchar_t> *this,wchar_t param_1,char param_2)

{
  uint uVar1;
  uint uVar2;
  __locale_t __dataset;
  
  __dataset = uselocale(*(__locale_t *)(this + 0x10));
  uVar2 = wctob(param_1);
  if (__dataset != (__locale_t)0x0) {
    uselocale(__dataset);
  }
  uVar1 = (uint)(byte)param_2;
  if (uVar2 != 0xffffffff) {
    uVar1 = uVar2;
  }
  return uVar1;
}

