
/* std::__ndk1::__codecvt_utf16<wchar_t, true>::do_out(mbstate_t&, wchar_t const*, wchar_t const*,
   wchar_t const*&, char*, char*, char*&) const */

undefined8 __thiscall
std::__ndk1::__codecvt_utf16<wchar_t,true>::do_out
          (__codecvt_utf16<wchar_t,true> *this,mbstate_t *param_1,wchar_t *param_2,wchar_t *param_3,
          wchar_t **param_4,char *param_5,char *param_6,char **param_7)

{
  int iVar1;
  wchar_t wVar2;
  undefined8 uVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  
  uVar6 = *(ulong *)(this + 0x18);
  pbVar4 = (byte *)param_5;
  if (((byte)this[0x20] >> 1 & 1) != 0) {
    if ((long)param_6 - (long)param_5 < 2) {
LAB_011fe4ac:
      uVar3 = 1;
      goto LAB_011fe4b0;
    }
    pbVar4 = (byte *)(param_5 + 2);
    param_5[0] = -1;
    param_5[1] = -2;
  }
  if (param_2 < param_3) {
    uVar3 = 2;
    pbVar5 = pbVar4;
    do {
      wVar2 = *param_2;
      pbVar4 = pbVar5;
      if (((uint)wVar2 >> 0xb == 0x1b) || (uVar6 < (uint)wVar2)) goto LAB_011fe4b0;
      if ((wVar2 & 0xffff0000U) == 0) {
        if ((long)param_6 - (long)pbVar5 < 2) goto LAB_011fe4ac;
        pbVar4 = pbVar5 + 2;
        *(short *)pbVar5 = (short)wVar2;
      }
      else {
        if ((long)param_6 - (long)pbVar5 < 4) goto LAB_011fe4ac;
        iVar1 = ((uint)wVar2 >> 10 & 0x7c0) + 0x3fc0;
        pbVar5[2] = (byte)wVar2;
        pbVar4 = pbVar5 + 4;
        *pbVar5 = (byte)iVar1 | (byte)((uint)wVar2 >> 10) & 0x3f;
        pbVar5[1] = (byte)((uint)iVar1 >> 8) | 0xd8;
        pbVar5[3] = (byte)((uint)wVar2 >> 8) & 3 | 0xdc;
      }
      param_2 = param_2 + 1;
      pbVar5 = pbVar4;
    } while (param_2 < param_3);
  }
  uVar3 = 0;
LAB_011fe4b0:
  *param_4 = param_2;
  *param_7 = (char *)pbVar4;
  return uVar3;
}

