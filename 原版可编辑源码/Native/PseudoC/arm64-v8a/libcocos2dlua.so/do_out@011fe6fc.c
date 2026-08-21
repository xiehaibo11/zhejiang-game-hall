
/* std::__ndk1::__codecvt_utf16<char16_t, false>::do_out(mbstate_t&, char16_t const*, char16_t
   const*, char16_t const*&, char*, char*, char*&) const */

undefined8 __thiscall
std::__ndk1::__codecvt_utf16<char16_t,false>::do_out
          (__codecvt_utf16<char16_t,false> *this,mbstate_t *param_1,wchar16 *param_2,
          wchar16 *param_3,wchar16 **param_4,char *param_5,char *param_6,char **param_7)

{
  wchar16 wVar1;
  undefined8 uVar2;
  ushort *puVar3;
  ushort *puVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(this + 0x10);
  puVar3 = (ushort *)param_5;
  if (((byte)this[0x18] >> 1 & 1) != 0) {
    if ((long)param_6 - (long)param_5 < 2) {
LAB_011fe768:
      uVar2 = 1;
      goto LAB_011fe76c;
    }
    puVar3 = (ushort *)(param_5 + 2);
    param_5[0] = -2;
    param_5[1] = -1;
  }
  if (param_2 < param_3) {
    uVar2 = 2;
    puVar4 = puVar3;
    do {
      wVar1 = *param_2;
      puVar3 = puVar4;
      if (((ushort)wVar1 >> 0xb == 0x1b) || (uVar5 < (ushort)wVar1)) goto LAB_011fe76c;
      if ((long)param_6 - (long)puVar4 < 2) goto LAB_011fe768;
      param_2 = param_2 + 1;
      puVar3 = puVar4 + 1;
      *puVar4 = (ushort)wVar1 >> 8 | wVar1 << 8;
      puVar4 = puVar3;
    } while (param_2 < param_3);
  }
  uVar2 = 0;
LAB_011fe76c:
  *param_4 = param_2;
  *param_7 = (char *)puVar3;
  return uVar2;
}

