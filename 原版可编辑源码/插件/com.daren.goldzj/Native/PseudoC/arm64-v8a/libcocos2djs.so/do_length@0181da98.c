
/* std::__ndk1::__codecvt_utf8<char16_t>::do_length(mbstate_t&, char const*, char const*, unsigned
   long) const */

int __thiscall
std::__ndk1::__codecvt_utf8<char16_t>::do_length
          (__codecvt_utf8<char16_t> *this,mbstate_t *param_1,char *param_2,char *param_3,
          ulong param_4)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar4 = *(ulong *)(this + 0x10);
  pbVar3 = (byte *)param_2;
  if ((((((byte)this[0x18] >> 2 & 1) != 0) && (2 < (long)param_3 - (long)param_2)) &&
      (*param_2 == -0x11)) &&
     ((param_2[1] == -0x45 && (pbVar3 = (byte *)(param_2 + 3), param_2[2] != -0x41)))) {
    pbVar3 = (byte *)param_2;
  }
  if ((param_4 != 0) && (pbVar3 < param_3)) {
    uVar5 = 1;
    do {
      bVar2 = *pbVar3;
      uVar6 = (ulong)bVar2;
      if ((char)bVar2 < '\0') {
        if (bVar2 < 0xc2) break;
        if (bVar2 < 0xe0) {
          if ((((long)param_3 - (long)pbVar3 < 2) || ((pbVar3[1] & 0xc0) != 0x80)) ||
             (uVar4 < ((ulong)pbVar3[1] & 0x3f | (uVar6 & 0x1f) << 6))) break;
          pbVar3 = pbVar3 + 2;
        }
        else {
          if ((0xef < bVar2) || ((long)param_3 - (long)pbVar3 < 3)) break;
          bVar1 = pbVar3[1];
          if (bVar2 == 0xed) {
            bVar2 = bVar1 & 0xe0;
joined_r0x0181dbb0:
            if (bVar2 != 0x80) break;
          }
          else {
            if (bVar2 != 0xe0) {
              bVar2 = bVar1 & 0xc0;
              goto joined_r0x0181dbb0;
            }
            if ((bVar1 & 0xe0) != 0xa0) break;
          }
          if (((pbVar3[2] & 0xc0) != 0x80) ||
             (uVar4 < ((uVar6 & 0xf) << 0xc | ((ulong)bVar1 & 0x3f) << 6 | (ulong)pbVar3[2] & 0x3f))
             ) break;
          pbVar3 = pbVar3 + 3;
        }
      }
      else {
        if (uVar4 < uVar6) break;
        pbVar3 = pbVar3 + 1;
      }
      if ((param_4 <= uVar5) || (uVar5 = uVar5 + 1, param_3 <= pbVar3)) break;
    } while( true );
  }
  return (int)pbVar3 - (int)param_2;
}

