
/* std::__ndk1::__codecvt_utf16<char16_t, false>::do_length(mbstate_t&, char const*, char const*,
   unsigned long) const */

int __thiscall
std::__ndk1::__codecvt_utf16<char16_t,false>::do_length
          (__codecvt_utf16<char16_t,false> *this,mbstate_t *param_1,char *param_2,char *param_3,
          ulong param_4)

{
  bool bVar1;
  byte *pbVar2;
  ulong uVar3;
  
  pbVar2 = (byte *)param_2;
  if ((((((byte)this[0x18] >> 2 & 1) != 0) && (1 < (long)param_3 - (long)param_2)) &&
      (*param_2 == -2)) && (pbVar2 = (byte *)(param_2 + 2), param_2[1] != -1)) {
    pbVar2 = (byte *)param_2;
  }
  if ((param_4 != 0) && (pbVar2 < param_3 + -1)) {
    uVar3 = 1;
    while (((*pbVar2 & 0xf8) != 0xd8 &&
           ((ulong)CONCAT11(*pbVar2,pbVar2[1]) <= *(ulong *)(this + 0x10)))) {
      pbVar2 = pbVar2 + 2;
      if ((param_3 + -1 <= pbVar2) || (bVar1 = param_4 <= uVar3, uVar3 = uVar3 + 1, bVar1)) break;
    }
  }
  return (int)pbVar2 - (int)param_2;
}

