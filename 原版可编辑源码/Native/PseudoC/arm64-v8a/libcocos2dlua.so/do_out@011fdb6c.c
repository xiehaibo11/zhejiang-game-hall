
/* std::__ndk1::__codecvt_utf8<char16_t>::do_out(mbstate_t&, char16_t const*, char16_t const*,
   char16_t const*&, char*, char*, char*&) const */

undefined8 __thiscall
std::__ndk1::__codecvt_utf8<char16_t>::do_out
          (__codecvt_utf8<char16_t> *this,mbstate_t *param_1,wchar16 *param_2,wchar16 *param_3,
          wchar16 **param_4,char *param_5,char *param_6,char **param_7)

{
  wchar16 wVar1;
  byte bVar2;
  undefined8 uVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  
  uVar6 = *(ulong *)(this + 0x10);
  pbVar5 = (byte *)param_5;
  if (((byte)this[0x18] >> 1 & 1) != 0) {
    if ((long)param_6 - (long)param_5 < 3) {
LAB_011fdc58:
      uVar3 = 1;
      goto LAB_011fdc5c;
    }
    param_5[0] = -0x11;
    param_5[1] = -0x45;
    pbVar5 = (byte *)(param_5 + 3);
    param_5[2] = -0x41;
  }
  if (param_2 < param_3) {
    uVar3 = 2;
    pbVar4 = pbVar5;
    do {
      wVar1 = *param_2;
      pbVar5 = pbVar4;
      if (((ushort)wVar1 >> 0xb == 0x1b) || (uVar6 < (ushort)wVar1)) goto LAB_011fdc5c;
      if ((ushort)wVar1 < 0x80) {
        if ((long)param_6 - (long)pbVar4 < 1) goto LAB_011fdc58;
        pbVar5 = pbVar4 + 1;
        *pbVar4 = (byte)wVar1;
      }
      else {
        bVar2 = (byte)wVar1 & 0x3f | 0x80;
        if ((ushort)wVar1 < 0x800) {
          if ((long)param_6 - (long)pbVar4 < 2) goto LAB_011fdc58;
          *pbVar4 = (byte)((ushort)wVar1 >> 6) | 0xc0;
          pbVar5 = pbVar4 + 2;
          pbVar4[1] = bVar2;
        }
        else {
          if ((long)param_6 - (long)pbVar4 < 3) goto LAB_011fdc58;
          pbVar5 = pbVar4 + 3;
          *pbVar4 = (byte)((ushort)wVar1 >> 0xc) | 0xe0;
          pbVar4[1] = (byte)((ushort)wVar1 >> 6) & 0x3f | 0x80;
          pbVar4[2] = bVar2;
        }
      }
      param_2 = param_2 + 1;
      pbVar4 = pbVar5;
    } while (param_2 < param_3);
  }
  uVar3 = 0;
LAB_011fdc5c:
  *param_4 = param_2;
  *param_7 = (char *)pbVar5;
  return uVar3;
}

