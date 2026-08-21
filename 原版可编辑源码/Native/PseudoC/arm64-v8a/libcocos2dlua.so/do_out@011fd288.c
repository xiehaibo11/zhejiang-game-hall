
/* std::__ndk1::codecvt<char32_t, char, mbstate_t>::do_out(mbstate_t&, char32_t const*, char32_t
   const*, char32_t const*&, char*, char*, char*&) const */

undefined8 __thiscall
std::__ndk1::codecvt<char32_t,char,mbstate_t>::do_out
          (codecvt<char32_t,char,mbstate_t> *this,mbstate_t *param_1,wchar32 *param_2,
          wchar32 *param_3,wchar32 **param_4,char *param_5,char *param_6,char **param_7)

{
  wchar32 wVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  byte *pbVar5;
  
  if (param_2 < param_3) {
    uVar4 = 2;
    pbVar5 = (byte *)param_5;
    do {
      wVar1 = *param_2;
      if ((0x10 < (uint)wVar1 >> 0x10) || ((wVar1 & 0xfffff800U) == 0xd800)) goto LAB_011fd380;
      if ((uint)wVar1 < 0x80) {
        if ((long)param_6 - (long)pbVar5 < 1) goto LAB_011fd38c;
        param_5 = (char *)(pbVar5 + 1);
        *pbVar5 = (byte)wVar1;
      }
      else {
        bVar2 = (byte)wVar1 & 0x3f | 0x80;
        if ((uint)wVar1 < 0x800) {
          if ((long)param_6 - (long)pbVar5 < 2) goto LAB_011fd38c;
          *pbVar5 = (byte)((uint)wVar1 >> 6) | 0xc0;
          param_5 = (char *)(pbVar5 + 2);
          pbVar5[1] = bVar2;
        }
        else {
          bVar3 = (byte)((uint)wVar1 >> 6) & 0x3f | 0x80;
          if ((uint)wVar1 >> 0x10 == 0) {
            if ((long)param_6 - (long)pbVar5 < 3) {
LAB_011fd38c:
              uVar4 = 1;
              goto LAB_011fd380;
            }
            pbVar5[1] = bVar3;
            *pbVar5 = (byte)((uint)wVar1 >> 0xc) | 0xe0;
            param_5 = (char *)(pbVar5 + 3);
            pbVar5[2] = bVar2;
          }
          else {
            if ((long)param_6 - (long)pbVar5 < 4) goto LAB_011fd38c;
            pbVar5[2] = bVar3;
            param_5 = (char *)(pbVar5 + 4);
            *pbVar5 = (byte)((uint)wVar1 >> 0x12) | 0xf0;
            pbVar5[1] = (byte)((uint)wVar1 >> 0xc) & 0x3f | 0x80;
            pbVar5[3] = bVar2;
          }
        }
      }
      param_2 = param_2 + 1;
      pbVar5 = (byte *)param_5;
    } while (param_2 < param_3);
  }
  uVar4 = 0;
  pbVar5 = (byte *)param_5;
LAB_011fd380:
  *param_4 = param_2;
  *param_7 = (char *)pbVar5;
  return uVar4;
}

