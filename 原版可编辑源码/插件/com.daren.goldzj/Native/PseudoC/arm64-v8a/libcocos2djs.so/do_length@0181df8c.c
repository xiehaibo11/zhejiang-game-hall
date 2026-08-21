
/* std::__ndk1::__codecvt_utf16<wchar_t, false>::do_length(mbstate_t&, char const*, char const*,
   unsigned long) const */

int __thiscall
std::__ndk1::__codecvt_utf16<wchar_t,false>::do_length
          (__codecvt_utf16<wchar_t,false> *this,mbstate_t *param_1,char *param_2,char *param_3,
          ulong param_4)

{
  byte bVar1;
  byte *pbVar2;
  ulong uVar3;
  ulong uVar4;
  
  pbVar2 = (byte *)param_2;
  if ((((((byte)this[0x20] >> 2 & 1) != 0) && (1 < (long)param_3 - (long)param_2)) &&
      (*param_2 == -2)) && (pbVar2 = (byte *)(param_2 + 2), param_2[1] != -1)) {
    pbVar2 = (byte *)param_2;
  }
  if ((param_4 != 0) && (pbVar2 < param_3 + -1)) {
    uVar3 = 1;
    do {
      bVar1 = *pbVar2 & 0xfc;
      uVar4 = (ulong)CONCAT11(*pbVar2,pbVar2[1]);
      if (bVar1 == 0xd8) {
        if ((((long)param_3 - (long)pbVar2 < 4) || ((pbVar2[2] & 0xfc) != 0xdc)) ||
           (*(ulong *)(this + 0x18) <
            ((uVar4 & 0x3c0) * 0x400 + 0x10000 | (uVar4 & 0x3f) << 10 | ((ulong)pbVar2[2] & 3) << 8
            | (ulong)pbVar2[3]))) break;
        pbVar2 = pbVar2 + 4;
      }
      else {
        if ((bVar1 == 0xdc) || (*(ulong *)(this + 0x18) < uVar4)) break;
        pbVar2 = pbVar2 + 2;
      }
      if ((param_4 <= uVar3) || (uVar3 = uVar3 + 1, param_3 + -1 <= pbVar2)) break;
    } while( true );
  }
  return (int)pbVar2 - (int)param_2;
}

