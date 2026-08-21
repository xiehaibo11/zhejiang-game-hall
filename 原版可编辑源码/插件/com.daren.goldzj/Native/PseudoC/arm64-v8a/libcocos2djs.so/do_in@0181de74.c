
/* std::__ndk1::__codecvt_utf16<wchar_t, false>::do_in(mbstate_t&, char const*, char const*, char
   const*&, wchar_t*, wchar_t*, wchar_t*&) const */

ulong __thiscall
std::__ndk1::__codecvt_utf16<wchar_t,false>::do_in
          (__codecvt_utf16<wchar_t,false> *this,mbstate_t *param_1,char *param_2,char *param_3,
          char **param_4,wchar_t *param_5,wchar_t *param_6,wchar_t **param_7)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = *(ulong *)(this + 0x18);
  if ((((((byte)this[0x20] >> 2 & 1) != 0) && (1 < (long)param_3 - (long)param_2)) &&
      (*param_2 == -2)) && (param_2[1] == -1)) {
    param_2 = param_2 + 2;
  }
  for (; (param_2 < param_3 + -1 && (param_5 < param_6)); param_5 = param_5 + 1) {
    bVar1 = *param_2 & 0xfc;
    uVar4 = (ulong)CONCAT11(*param_2,param_2[1]);
    if (bVar1 == 0xd8) {
      if ((long)param_3 - (long)param_2 < 4) {
        uVar2 = 1;
        goto LAB_0181df64;
      }
      if (((param_2[2] & 0xfcU) != 0xdc) ||
         (uVar4 = (uVar4 & 0x3c0) * 0x400 + 0x10000 | (uVar4 & 0x3f) << 10 |
                  ((ulong)(byte)param_2[2] & 3) << 8 | (ulong)(byte)param_2[3], uVar3 < uVar4))
      goto LAB_0181df58;
      uVar2 = 4;
    }
    else {
      if (bVar1 == 0xdc) {
LAB_0181df58:
        uVar2 = 2;
        goto LAB_0181df64;
      }
      uVar2 = 2;
      if (uVar3 < uVar4) goto LAB_0181df64;
    }
    param_2 = param_2 + uVar2;
    *param_5 = (wchar_t)uVar4;
  }
  uVar2 = (ulong)(param_2 < param_3);
LAB_0181df64:
  *param_4 = param_2;
  *param_7 = param_5;
  return uVar2;
}

