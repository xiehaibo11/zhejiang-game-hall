
/* std::__ndk1::__codecvt_utf8<char16_t>::do_in(mbstate_t&, char const*, char const*, char const*&,
   char16_t*, char16_t*, char16_t*&) const */

undefined8 __thiscall
std::__ndk1::__codecvt_utf8<char16_t>::do_in
          (__codecvt_utf8<char16_t> *this,mbstate_t *param_1,char *param_2,char *param_3,
          char **param_4,wchar16 *param_5,wchar16 *param_6,wchar16 **param_7)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar6 = *(ulong *)(this + 0x10);
  if ((((((byte)this[0x18] >> 2 & 1) != 0) && (2 < (long)param_3 - (long)param_2)) &&
      (*param_2 == -0x11)) && ((param_2[1] == -0x45 && (param_2[2] == -0x41)))) {
    param_2 = param_2 + 3;
  }
  do {
    if (param_3 <= param_2) {
      uVar5 = 0;
LAB_011fddc4:
      *param_4 = param_2;
      *param_7 = param_5;
      return uVar5;
    }
    if (param_6 <= param_5) goto LAB_011fddb8;
    bVar4 = *param_2;
    uVar7 = (ulong)bVar4;
    if ((char)bVar4 < '\0') {
      if (0xc1 < bVar4) {
        if (bVar4 < 0xe0) {
          if ((long)param_3 - (long)param_2 < 2) {
LAB_011fddb8:
            uVar5 = 1;
            goto LAB_011fddc4;
          }
          if (((param_2[1] & 0xc0U) == 0x80) &&
             (uVar7 = ((ulong)bVar4 & 0x1f) << 6 | (ulong)(byte)param_2[1] & 0x3f, uVar7 <= uVar6))
          {
            lVar9 = 2;
            goto LAB_011fdda0;
          }
        }
        else if (bVar4 < 0xf0) {
          if ((long)param_3 - (long)param_2 < 3) goto LAB_011fddb8;
          bVar3 = param_2[1];
          if (bVar4 == 0xed) {
            bVar4 = bVar3 & 0xe0;
joined_r0x011fdd64:
            if (bVar4 != 0x80) goto LAB_011fddc0;
          }
          else {
            if (bVar4 != 0xe0) {
              bVar4 = bVar3 & 0xc0;
              goto joined_r0x011fdd64;
            }
            if ((bVar3 & 0xe0) != 0xa0) goto LAB_011fddc0;
          }
          if (((param_2[2] & 0xc0U) == 0x80) &&
             (uVar8 = uVar7 << 0xc, uVar1 = ((ulong)bVar3 & 0x3f) << 6,
             uVar2 = (ulong)(byte)param_2[2] & 0x3f, uVar7 = uVar8 | uVar1 | uVar2,
             (uVar8 & 0xffc0 | uVar1 | uVar2) <= uVar6)) {
            lVar9 = 3;
            goto LAB_011fdda0;
          }
        }
      }
LAB_011fddc0:
      uVar5 = 2;
      goto LAB_011fddc4;
    }
    if (uVar6 < uVar7) goto LAB_011fddc0;
    lVar9 = 1;
LAB_011fdda0:
    param_2 = param_2 + lVar9;
    *param_5 = (wchar16)uVar7;
    param_5 = param_5 + 1;
  } while( true );
}

