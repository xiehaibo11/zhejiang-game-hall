
/* std::__ndk1::__codecvt_utf16<char16_t, true>::do_out(mbstate_t&, char16_t const*, char16_t
   const*, char16_t const*&, char*, char*, char*&) const */

undefined8 __thiscall
std::__ndk1::__codecvt_utf16<char16_t,true>::do_out
          (__codecvt_utf16<char16_t,true> *this,mbstate_t *param_1,wchar16 *param_2,wchar16 *param_3
          ,wchar16 **param_4,char *param_5,char *param_6,char **param_7)

{
  wchar16 wVar1;
  undefined8 uVar2;
  wchar16 *pwVar3;
  wchar16 *pwVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(this + 0x10);
  pwVar3 = (wchar16 *)param_5;
  if (((byte)this[0x18] >> 1 & 1) != 0) {
    if ((long)param_6 - (long)param_5 < 2) {
LAB_011fe938:
      uVar2 = 1;
      goto LAB_011fe93c;
    }
    pwVar3 = (wchar16 *)(param_5 + 2);
    param_5[0] = -1;
    param_5[1] = -2;
  }
  if (param_2 < param_3) {
    uVar2 = 2;
    pwVar4 = pwVar3;
    do {
      wVar1 = *param_2;
      pwVar3 = pwVar4;
      if (((ushort)wVar1 >> 0xb == 0x1b) || (uVar5 < (ushort)wVar1)) goto LAB_011fe93c;
      if ((long)param_6 - (long)pwVar4 < 2) goto LAB_011fe938;
      param_2 = param_2 + 1;
      pwVar3 = pwVar4 + 1;
      *pwVar4 = wVar1;
      pwVar4 = pwVar3;
    } while (param_2 < param_3);
  }
  uVar2 = 0;
LAB_011fe93c:
  *param_4 = param_2;
  *param_7 = (char *)pwVar3;
  return uVar2;
}

