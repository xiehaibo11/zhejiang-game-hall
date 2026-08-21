
/* std::__ndk1::__codecvt_utf16<char32_t, false>::do_out(mbstate_t&, char32_t const*, char32_t
   const*, char32_t const*&, char*, char*, char*&) const */

undefined8 __thiscall
std::__ndk1::__codecvt_utf16<char32_t,false>::do_out
          (__codecvt_utf16<char32_t,false> *this,mbstate_t *param_1,wchar32 *param_2,
          wchar32 *param_3,wchar32 **param_4,char *param_5,char *param_6,char **param_7)

{
  int iVar1;
  wchar32 wVar2;
  byte bVar3;
  undefined8 uVar4;
  ulong uVar5;
  byte *pbVar6;
  long lVar7;
  
  uVar5 = *(ulong *)(this + 0x10);
  if (((byte)this[0x18] >> 1 & 1) != 0) {
    if ((long)param_6 - (long)param_5 < 2) {
LAB_011feb88:
      uVar4 = 1;
      goto LAB_011feb8c;
    }
    param_5[0] = -2;
    param_5[1] = -1;
    param_5 = param_5 + 2;
  }
  if (param_2 < param_3) {
    uVar4 = 2;
    do {
      wVar2 = *param_2;
      if (((uint)wVar2 >> 0xb == 0x1b) || (uVar5 < (uint)wVar2)) goto LAB_011feb8c;
      bVar3 = (byte)((uint)wVar2 >> 8);
      if ((uint)wVar2 >> 0x10 == 0) {
        if ((long)param_6 - (long)param_5 < 2) goto LAB_011feb88;
        pbVar6 = (byte *)(param_5 + 1);
        *param_5 = bVar3;
        lVar7 = 2;
      }
      else {
        if ((long)param_6 - (long)param_5 < 4) goto LAB_011feb88;
        iVar1 = ((uint)wVar2 >> 10 & 0x7c0) + 0x3fc0;
        param_5[2] = bVar3 & 3 | 0xdc;
        pbVar6 = (byte *)(param_5 + 3);
        param_5[1] = (byte)iVar1 | (byte)((uint)wVar2 >> 10) & 0x3f;
        lVar7 = 4;
        *param_5 = (byte)((uint)iVar1 >> 8) | 0xd8;
      }
      param_2 = param_2 + 1;
      param_5 = param_5 + lVar7;
      *pbVar6 = (byte)wVar2;
    } while (param_2 < param_3);
  }
  uVar4 = 0;
LAB_011feb8c:
  *param_4 = param_2;
  *param_7 = param_5;
  return uVar4;
}

