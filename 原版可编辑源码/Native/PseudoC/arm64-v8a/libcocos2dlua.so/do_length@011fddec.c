
/* std::__ndk1::__codecvt_utf8<char16_t>::do_length(mbstate_t&, char const*, char const*, unsigned
   long) const */

int __thiscall
std::__ndk1::__codecvt_utf8<char16_t>::do_length
          (__codecvt_utf8<char16_t> *this,mbstate_t *param_1,char *param_2,char *param_3,
          ulong param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = *(ulong *)(this + 0x10);
  pbVar4 = (byte *)param_2;
  if ((((((byte)this[0x18] >> 2 & 1) != 0) && (2 < (long)param_3 - (long)param_2)) &&
      (*param_2 == -0x11)) &&
     ((param_2[1] == -0x45 && (pbVar4 = (byte *)(param_2 + 3), param_2[2] != -0x41)))) {
    pbVar4 = (byte *)param_2;
  }
  if ((param_4 != 0) && (pbVar4 < param_3)) {
    uVar6 = 1;
    do {
      bVar3 = *pbVar4;
      if ((char)bVar3 < '\0') {
        if (bVar3 < 0xc2) break;
        if (bVar3 < 0xe0) {
          if ((((long)param_3 - (long)pbVar4 < 2) || ((pbVar4[1] & 0xc0) != 0x80)) ||
             (uVar5 < (((ulong)bVar3 & 0x1f) << 6 | (ulong)pbVar4[1] & 0x3f))) break;
          pbVar4 = pbVar4 + 2;
        }
        else {
          if ((0xef < bVar3) || ((long)param_3 - (long)pbVar4 < 3)) break;
          bVar2 = pbVar4[1];
          if (bVar3 == 0xed) {
            bVar1 = bVar2 & 0xe0;
joined_r0x011fdf08:
            if (bVar1 != 0x80) break;
          }
          else {
            if (bVar3 != 0xe0) {
              bVar1 = bVar2 & 0xc0;
              goto joined_r0x011fdf08;
            }
            if ((bVar2 & 0xe0) != 0xa0) break;
          }
          if (((pbVar4[2] & 0xc0) != 0x80) ||
             (uVar5 < (((ulong)bVar3 & 0xf) << 0xc | ((ulong)bVar2 & 0x3f) << 6 |
                      (ulong)pbVar4[2] & 0x3f))) break;
          pbVar4 = pbVar4 + 3;
        }
      }
      else {
        if (uVar5 < bVar3) break;
        pbVar4 = pbVar4 + 1;
      }
      if ((param_4 <= uVar6) || (uVar6 = uVar6 + 1, param_3 <= pbVar4)) break;
    } while( true );
  }
  return (int)pbVar4 - (int)param_2;
}

