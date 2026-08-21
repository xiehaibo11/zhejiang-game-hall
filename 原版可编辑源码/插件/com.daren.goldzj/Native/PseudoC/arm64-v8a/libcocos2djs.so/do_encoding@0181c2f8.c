
/* std::__ndk1::codecvt<wchar_t, char, mbstate_t>::do_encoding() const */

ulong __thiscall
std::__ndk1::codecvt<wchar_t,char,mbstate_t>::do_encoding(codecvt<wchar_t,char,mbstate_t> *this)

{
  int iVar1;
  __locale_t p_Var2;
  ulong uVar3;
  size_t sVar4;
  
  p_Var2 = uselocale(*(__locale_t *)(this + 0x10));
  iVar1 = mbtowc((wchar_t *)0x0,(char *)0x0,4);
  if (p_Var2 != (__locale_t)0x0) {
    uselocale(p_Var2);
  }
  if (iVar1 == 0) {
    if (*(__locale_t *)(this + 0x10) == (__locale_t)0x0) {
      uVar3 = 1;
    }
    else {
      p_Var2 = uselocale(*(__locale_t *)(this + 0x10));
      sVar4 = __ctype_get_mb_cur_max();
      if (p_Var2 != (__locale_t)0x0) {
        uselocale(p_Var2);
      }
      uVar3 = (ulong)(sVar4 == 1);
    }
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

