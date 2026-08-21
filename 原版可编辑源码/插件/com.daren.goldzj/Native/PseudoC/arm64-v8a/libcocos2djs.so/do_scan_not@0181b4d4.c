
/* std::__ndk1::ctype_byname<wchar_t>::do_scan_not(unsigned long, wchar_t const*, wchar_t const*)
   const */

wchar_t * __thiscall
std::__ndk1::ctype_byname<wchar_t>::do_scan_not
          (ctype_byname<wchar_t> *this,ulong param_1,wchar_t *param_2,wchar_t *param_3)

{
  wchar_t __wc;
  wchar_t *pwVar1;
  int iVar2;
  uint uVar3;
  
  pwVar1 = param_2;
  do {
    if (param_2 == param_3) {
      return pwVar1;
    }
    __wc = *param_2;
    uVar3 = (uint)param_1;
    if (((((((param_1 & 1) == 0) || (iVar2 = iswspace(__wc), iVar2 == 0)) &&
          (((uVar3 >> 1 & 1) == 0 || (iVar2 = iswprint(__wc), iVar2 == 0)))) &&
         (((uVar3 >> 2 & 1) == 0 || (iVar2 = iswcntrl(__wc), iVar2 == 0)))) &&
        (((uVar3 >> 3 & 1) == 0 || (iVar2 = iswupper(__wc), iVar2 == 0)))) &&
       ((((((uVar3 >> 4 & 1) == 0 || (iVar2 = iswlower(__wc), iVar2 == 0)) &&
          (((uVar3 >> 5 & 1) == 0 || (iVar2 = iswalpha(__wc), iVar2 == 0)))) &&
         (((uVar3 >> 6 & 1) == 0 || (iVar2 = iswdigit(__wc), iVar2 == 0)))) &&
        ((((uVar3 >> 7 & 1) == 0 || (iVar2 = iswpunct(__wc), iVar2 == 0)) &&
         (((uVar3 >> 8 & 1) == 0 || (iVar2 = iswxdigit(__wc), iVar2 == 0)))))))) {
      if ((uVar3 >> 9 & 1) == 0) {
        return param_2;
      }
      iVar2 = iswblank(__wc);
      if (iVar2 == 0) {
        return param_2;
      }
    }
    param_2 = param_2 + 1;
    pwVar1 = param_3;
  } while( true );
}

