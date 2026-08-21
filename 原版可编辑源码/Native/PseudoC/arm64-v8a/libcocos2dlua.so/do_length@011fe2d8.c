
/* std::__ndk1::__codecvt_utf16<wchar_t, false>::do_length(mbstate_t&, char const*, char const*,
   unsigned long) const */

int __thiscall
std::__ndk1::__codecvt_utf16<wchar_t,false>::do_length
          (__codecvt_utf16<wchar_t,false> *this,mbstate_t *param_1,char *param_2,char *param_3,
          ulong param_4)

{
  byte bVar1;
  ushort uVar2;
  byte *pbVar3;
  ulong uVar4;
  
  pbVar3 = (byte *)param_2;
  if ((((((byte)this[0x20] >> 2 & 1) != 0) && (1 < (long)param_3 - (long)param_2)) &&
      (*param_2 == -2)) && (pbVar3 = (byte *)(param_2 + 2), param_2[1] != -1)) {
    pbVar3 = (byte *)param_2;
  }
  if ((param_4 != 0) && (pbVar3 < param_3 + -1)) {
    uVar4 = 1;
    do {
      bVar1 = *pbVar3 & 0xfc;
      uVar2 = CONCAT11(*pbVar3,pbVar3[1]);
      if (bVar1 == 0xd8) {
        if ((((long)param_3 - (long)pbVar3 < 4) || ((pbVar3[2] & 0xfc) != 0xdc)) ||
           (*(ulong *)(this + 0x18) <
            (((ulong)uVar2 & 0x3ff) << 10 | ((ulong)pbVar3[2] & 3) << 8 | (ulong)pbVar3[3]) +
            0x10000)) break;
        pbVar3 = pbVar3 + 4;
      }
      else {
        if ((bVar1 == 0xdc) || (*(ulong *)(this + 0x18) < (ulong)uVar2)) break;
        pbVar3 = pbVar3 + 2;
      }
      if ((param_4 <= uVar4) || (uVar4 = uVar4 + 1, param_3 + -1 <= pbVar3)) break;
    } while( true );
  }
  return (int)pbVar3 - (int)param_2;
}

