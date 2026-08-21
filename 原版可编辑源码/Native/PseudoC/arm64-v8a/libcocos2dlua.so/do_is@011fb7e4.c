
/* std::__ndk1::ctype_byname<wchar_t>::do_is(wchar_t const*, wchar_t const*, unsigned long*) const
    */

wchar_t * __thiscall
std::__ndk1::ctype_byname<wchar_t>::do_is
          (ctype_byname<wchar_t> *this,wchar_t *param_1,wchar_t *param_2,ulong *param_3)

{
  wchar_t __wc;
  wchar_t *pwVar1;
  int iVar2;
  ulong uVar3;
  
  pwVar1 = param_1;
  do {
    if (param_1 == param_2) {
      return pwVar1;
    }
    __wc = *param_1;
    if ((uint)__wc < 0x80) {
      uVar3 = *(ulong *)(&DAT_014a2658 + (ulong)(uint)__wc * 8);
LAB_011fb81c:
      *param_3 = uVar3;
    }
    else {
      *param_3 = 0;
      iVar2 = iswspace(__wc);
      if (iVar2 != 0) {
        *param_3 = *param_3 | 1;
      }
      iVar2 = iswprint(__wc);
      if (iVar2 != 0) {
        *param_3 = *param_3 | 2;
      }
      iVar2 = iswcntrl(__wc);
      if (iVar2 != 0) {
        *param_3 = *param_3 | 4;
      }
      iVar2 = iswupper(__wc);
      if (iVar2 != 0) {
        *param_3 = *param_3 | 8;
      }
      iVar2 = iswlower(__wc);
      if (iVar2 != 0) {
        *param_3 = *param_3 | 0x10;
      }
      iVar2 = iswalpha(__wc);
      if (iVar2 != 0) {
        *param_3 = *param_3 | 0x20;
      }
      iVar2 = iswdigit(__wc);
      if (iVar2 != 0) {
        *param_3 = *param_3 | 0x40;
      }
      iVar2 = iswpunct(__wc);
      if (iVar2 != 0) {
        *param_3 = *param_3 | 0x80;
      }
      iVar2 = iswxdigit(__wc);
      if (iVar2 != 0) {
        *param_3 = *param_3 | 0x100;
      }
      iVar2 = iswblank(__wc);
      if (iVar2 != 0) {
        uVar3 = *param_3 | 0x200;
        goto LAB_011fb81c;
      }
    }
    param_1 = param_1 + 1;
    param_3 = param_3 + 1;
    pwVar1 = param_2;
  } while( true );
}

