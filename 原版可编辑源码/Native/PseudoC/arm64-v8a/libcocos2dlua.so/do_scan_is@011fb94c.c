
/* std::__ndk1::ctype_byname<wchar_t>::do_scan_is(unsigned long, wchar_t const*, wchar_t const*)
   const */

wchar_t * __thiscall
std::__ndk1::ctype_byname<wchar_t>::do_scan_is
          (ctype_byname<wchar_t> *this,ulong param_1,wchar_t *param_2,wchar_t *param_3)

{
  wchar_t *pwVar1;
  wchar_t __wc;
  int iVar2;
  uint uVar3;
  
  if (param_2 != param_3) {
    __wc = *param_2;
    uVar3 = (uint)param_1;
    while ((((((param_1 & 1) == 0 || (iVar2 = iswspace(__wc), iVar2 == 0)) &&
             (((uVar3 >> 1 & 1) == 0 || (iVar2 = iswprint(__wc), iVar2 == 0)))) &&
            ((((uVar3 >> 2 & 1) == 0 || (iVar2 = iswcntrl(__wc), iVar2 == 0)) &&
             (((uVar3 >> 3 & 1) == 0 || (iVar2 = iswupper(__wc), iVar2 == 0)))))) &&
           ((((((uVar3 >> 4 & 1) == 0 || (iVar2 = iswlower(__wc), iVar2 == 0)) &&
              (((uVar3 >> 5 & 1) == 0 || (iVar2 = iswalpha(__wc), iVar2 == 0)))) &&
             (((uVar3 >> 6 & 1) == 0 || (iVar2 = iswdigit(__wc), iVar2 == 0)))) &&
            ((((uVar3 >> 7 & 1) == 0 || (iVar2 = iswpunct(__wc), iVar2 == 0)) &&
             (((((uVar3 >> 8 & 1) == 0 || (iVar2 = iswxdigit(__wc), iVar2 == 0)) &&
               (((uVar3 >> 9 & 1) == 0 || (iVar2 = iswblank(__wc), iVar2 == 0)))) &&
              (pwVar1 = param_2 + 1, param_2 = param_3, param_3 != pwVar1))))))))) {
      __wc = *pwVar1;
      param_2 = pwVar1;
    }
  }
  return param_2;
}

