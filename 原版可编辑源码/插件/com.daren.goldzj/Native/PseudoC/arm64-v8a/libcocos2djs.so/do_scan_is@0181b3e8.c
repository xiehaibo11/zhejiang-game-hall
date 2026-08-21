
/* std::__ndk1::ctype_byname<wchar_t>::do_scan_is(unsigned long, wchar_t const*, wchar_t const*)
   const */

wchar_t * __thiscall
std::__ndk1::ctype_byname<wchar_t>::do_scan_is
          (ctype_byname<wchar_t> *this,ulong param_1,wchar_t *param_2,wchar_t *param_3)

{
  wchar_t __wc;
  int iVar1;
  uint uVar2;
  
  if (param_2 != param_3) {
    while( true ) {
      __wc = *param_2;
      uVar2 = (uint)param_1;
      if ((((((param_1 & 1) != 0) && (iVar1 = iswspace(__wc), iVar1 != 0)) ||
           (((uVar2 >> 1 & 1) != 0 && (iVar1 = iswprint(__wc), iVar1 != 0)))) ||
          (((uVar2 >> 2 & 1) != 0 && (iVar1 = iswcntrl(__wc), iVar1 != 0)))) ||
         (((uVar2 >> 3 & 1) != 0 && (iVar1 = iswupper(__wc), iVar1 != 0)))) break;
      if (((uVar2 >> 4 & 1) != 0) && (iVar1 = iswlower(__wc), iVar1 != 0)) {
        return param_2;
      }
      if (((uVar2 >> 5 & 1) != 0) && (iVar1 = iswalpha(__wc), iVar1 != 0)) {
        return param_2;
      }
      if (((uVar2 >> 6 & 1) != 0) && (iVar1 = iswdigit(__wc), iVar1 != 0)) {
        return param_2;
      }
      if (((uVar2 >> 7 & 1) != 0) && (iVar1 = iswpunct(__wc), iVar1 != 0)) {
        return param_2;
      }
      if (((uVar2 >> 8 & 1) != 0) && (iVar1 = iswxdigit(__wc), iVar1 != 0)) {
        return param_2;
      }
      if (((uVar2 >> 9 & 1) != 0) && (iVar1 = iswblank(__wc), iVar1 != 0)) {
        return param_2;
      }
      param_2 = param_2 + 1;
      if (param_3 == param_2) {
        return param_3;
      }
    }
  }
  return param_2;
}

