
/* std::__ndk1::__codecvt_utf16<char16_t, true>::do_length(mbstate_t&, char const*, char const*,
   unsigned long) const */

int __thiscall
std::__ndk1::__codecvt_utf16<char16_t,true>::do_length
          (__codecvt_utf16<char16_t,true> *this,mbstate_t *param_1,char *param_2,char *param_3,
          ulong param_4)

{
  bool bVar1;
  char *pcVar2;
  ulong uVar3;
  char *pcVar4;
  
  pcVar2 = param_2;
  if ((((((byte)this[0x18] >> 2 & 1) != 0) && (1 < (long)param_3 - (long)param_2)) &&
      (*param_2 == -1)) && (pcVar2 = param_2 + 2, param_2[1] != -2)) {
    pcVar2 = param_2;
  }
  if ((param_4 != 0) && (pcVar2 < param_3 + -1)) {
    uVar3 = 1;
    do {
      if (((pcVar2[1] & 0xf8U) == 0xd8) ||
         (pcVar4 = pcVar2 + 2, *(ulong *)(this + 0x10) < (ulong)CONCAT11(pcVar2[1],*pcVar2))) break;
      if (param_3 + -1 <= pcVar4) {
        return (int)pcVar4 - (int)param_2;
      }
      bVar1 = uVar3 < param_4;
      uVar3 = uVar3 + 1;
      pcVar2 = pcVar4;
    } while (bVar1);
  }
  return (int)pcVar2 - (int)param_2;
}

