
/* std::__ndk1::__codecvt_utf16<wchar_t, true>::do_out(mbstate_t&, wchar_t const*, wchar_t const*,
   wchar_t const*&, char*, char*, char*&) const */

undefined8 __thiscall
std::__ndk1::__codecvt_utf16<wchar_t,true>::do_out
          (__codecvt_utf16<wchar_t,true> *this,mbstate_t *param_1,wchar_t *param_2,wchar_t *param_3,
          wchar_t **param_4,char *param_5,char *param_6,char **param_7)

{
  int iVar1;
  wchar_t wVar2;
  byte bVar3;
  undefined8 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong uVar7;
  
  uVar7 = *(ulong *)(this + 0x18);
  pbVar5 = (byte *)param_5;
  if (((byte)this[0x20] >> 1 & 1) != 0) {
    if ((long)param_6 - (long)param_5 < 2) {
LAB_0181e168:
      uVar4 = 1;
      goto LAB_0181e16c;
    }
    pbVar5 = (byte *)(param_5 + 2);
    param_5[0] = -1;
    param_5[1] = -2;
  }
  if (param_2 < param_3) {
    uVar4 = 2;
    pbVar6 = pbVar5;
    do {
      wVar2 = *param_2;
      pbVar5 = pbVar6;
      if (((wVar2 & 0xfffff800U) == 0xd800) || (uVar7 < (uint)wVar2)) goto LAB_0181e16c;
      bVar3 = (byte)((uint)wVar2 >> 8);
      if ((uint)wVar2 >> 0x10 == 0) {
        if ((long)param_6 - (long)pbVar6 < 2) goto LAB_0181e168;
        *pbVar6 = (byte)wVar2;
        pbVar5 = pbVar6 + 2;
        pbVar6[1] = bVar3;
      }
      else {
        if ((long)param_6 - (long)pbVar6 < 4) goto LAB_0181e168;
        iVar1 = ((uint)wVar2 >> 10 & 0x7c0) + 0x3fc0;
        pbVar6[2] = (byte)wVar2;
        pbVar5 = pbVar6 + 4;
        *pbVar6 = (byte)iVar1 | (byte)((uint)wVar2 >> 10) & 0x3f;
        pbVar6[1] = (byte)((uint)iVar1 >> 8) | 0xd8;
        pbVar6[3] = bVar3 & 3 | 0xdc;
      }
      param_2 = param_2 + 1;
      pbVar6 = pbVar5;
    } while (param_2 < param_3);
  }
  uVar4 = 0;
LAB_0181e16c:
  *param_4 = param_2;
  *param_7 = (char *)pbVar5;
  return uVar4;
}

