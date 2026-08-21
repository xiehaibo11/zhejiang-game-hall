
/* std::__ndk1::__codecvt_utf16<char32_t, false>::do_in(mbstate_t&, char const*, char const*, char
   const*&, char32_t*, char32_t*, char32_t*&) const */

ulong __thiscall
std::__ndk1::__codecvt_utf16<char32_t,false>::do_in
          (__codecvt_utf16<char32_t,false> *this,mbstate_t *param_1,char *param_2,char *param_3,
          char **param_4,wchar32 *param_5,wchar32 *param_6,wchar32 **param_7)

{
  byte bVar1;
  ushort uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = *(ulong *)(this + 0x10);
  if ((((((byte)this[0x18] >> 2 & 1) != 0) && (1 < (long)param_3 - (long)param_2)) &&
      (*param_2 == -2)) && (param_2[1] == -1)) {
    param_2 = param_2 + 2;
  }
  for (; (param_2 < param_3 + -1 && (param_5 < param_6)); param_5 = param_5 + 1) {
    bVar1 = *param_2 & 0xfc;
    uVar2 = CONCAT11(*param_2,param_2[1]);
    uVar5 = (ulong)uVar2;
    if (bVar1 == 0xd8) {
      if ((long)param_3 - (long)param_2 < 4) {
        uVar3 = 1;
        goto LAB_011fec9c;
      }
      if (((param_2[2] & 0xfcU) != 0xdc) ||
         (uVar5 = (((ulong)uVar2 & 0x3ff) << 10 | ((ulong)(byte)param_2[2] & 3) << 8 |
                  (ulong)(byte)param_2[3]) + 0x10000, uVar4 < uVar5)) goto LAB_011fec90;
      uVar3 = 4;
    }
    else {
      if (bVar1 == 0xdc) {
LAB_011fec90:
        uVar3 = 2;
        goto LAB_011fec9c;
      }
      uVar3 = 2;
      if (uVar4 < uVar5) goto LAB_011fec9c;
    }
    param_2 = param_2 + uVar3;
    *param_5 = (wchar32)uVar5;
  }
  uVar3 = (ulong)(param_2 < param_3);
LAB_011fec9c:
  *param_4 = param_2;
  *param_7 = param_5;
  return uVar3;
}

