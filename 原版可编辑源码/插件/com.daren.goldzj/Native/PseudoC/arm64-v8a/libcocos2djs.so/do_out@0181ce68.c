
/* std::__ndk1::codecvt<char32_t, char, mbstate_t>::do_out(mbstate_t&, char32_t const*, char32_t
   const*, char32_t const*&, char*, char*, char*&) const */

undefined8 __thiscall
std::__ndk1::codecvt<char32_t,char,mbstate_t>::do_out
          (codecvt<char32_t,char,mbstate_t> *this,mbstate_t *param_1,wchar32 *param_2,
          wchar32 *param_3,wchar32 **param_4,char *param_5,char *param_6,char **param_7)

{
  wchar32 wVar1;
  byte bVar2;
  undefined8 uVar3;
  byte *pbVar4;
  
  if (param_2 < param_3) {
    uVar3 = 2;
    pbVar4 = (byte *)param_5;
    do {
      wVar1 = *param_2;
      if ((0x10 < (uint)wVar1 >> 0x10) || ((wVar1 & 0xfffff800U) == 0xd800)) goto LAB_0181cf70;
      bVar2 = (byte)wVar1;
      if ((uint)wVar1 < 0x80) {
        if ((long)param_6 - (long)pbVar4 < 1) goto LAB_0181cf7c;
        param_5 = (char *)(pbVar4 + 1);
        *pbVar4 = bVar2;
      }
      else if ((uint)wVar1 < 0x800) {
        if ((long)param_6 - (long)pbVar4 < 2) goto LAB_0181cf7c;
        *pbVar4 = (byte)((uint)wVar1 >> 6) | 0xc0;
        param_5 = (char *)(pbVar4 + 2);
        pbVar4[1] = bVar2 & 0x3f | 0x80;
      }
      else if ((uint)wVar1 >> 0x10 == 0) {
        if ((long)param_6 - (long)pbVar4 < 3) {
LAB_0181cf7c:
          uVar3 = 1;
          goto LAB_0181cf70;
        }
        *pbVar4 = (byte)((uint)wVar1 >> 0xc) | 0xe0;
        pbVar4[1] = (byte)((uint)wVar1 >> 6) & 0x3f | 0x80;
        param_5 = (char *)(pbVar4 + 3);
        pbVar4[2] = bVar2 & 0x3f | 0x80;
      }
      else {
        if ((long)param_6 - (long)pbVar4 < 4) goto LAB_0181cf7c;
        param_5 = (char *)(pbVar4 + 4);
        *pbVar4 = (byte)((uint)wVar1 >> 0x12) | 0xf0;
        pbVar4[1] = (byte)((uint)wVar1 >> 0xc) & 0x3f | 0x80;
        pbVar4[2] = (byte)((uint)wVar1 >> 6) & 0x3f | 0x80;
        pbVar4[3] = bVar2 & 0x3f | 0x80;
      }
      param_2 = param_2 + 1;
      pbVar4 = (byte *)param_5;
    } while (param_2 < param_3);
  }
  uVar3 = 0;
  pbVar4 = (byte *)param_5;
LAB_0181cf70:
  *param_4 = param_2;
  *param_7 = (char *)pbVar4;
  return uVar3;
}

