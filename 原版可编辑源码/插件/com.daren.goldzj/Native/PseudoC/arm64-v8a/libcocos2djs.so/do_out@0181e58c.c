
/* std::__ndk1::__codecvt_utf16<char16_t, true>::do_out(mbstate_t&, char16_t const*, char16_t
   const*, char16_t const*&, char*, char*, char*&) const */

undefined8 __thiscall
std::__ndk1::__codecvt_utf16<char16_t,true>::do_out
          (__codecvt_utf16<char16_t,true> *this,mbstate_t *param_1,wchar16 *param_2,wchar16 *param_3
          ,wchar16 **param_4,char *param_5,char *param_6,char **param_7)

{
  wchar16 wVar1;
  undefined8 uVar2;
  char *pcVar3;
  char *pcVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(this + 0x10);
  pcVar3 = param_5;
  if (((byte)this[0x18] >> 1 & 1) != 0) {
    if ((long)param_6 - (long)param_5 < 2) {
LAB_0181e610:
      uVar2 = 1;
      goto LAB_0181e614;
    }
    pcVar3 = param_5 + 2;
    param_5[0] = -1;
    param_5[1] = -2;
  }
  if (param_2 < param_3) {
    uVar2 = 2;
    pcVar4 = pcVar3;
    do {
      wVar1 = *param_2;
      pcVar3 = pcVar4;
      if (((ushort)wVar1 >> 0xb == 0x1b) || (uVar5 < (ushort)wVar1)) goto LAB_0181e614;
      if ((long)param_6 - (long)pcVar4 < 2) goto LAB_0181e610;
      *pcVar4 = (char)wVar1;
      pcVar3 = pcVar4 + 2;
      param_2 = param_2 + 1;
      pcVar4[1] = (char)((ushort)wVar1 >> 8);
      pcVar4 = pcVar3;
    } while (param_2 < param_3);
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
  }
LAB_0181e614:
  *param_4 = param_2;
  *param_7 = pcVar3;
  return uVar2;
}

