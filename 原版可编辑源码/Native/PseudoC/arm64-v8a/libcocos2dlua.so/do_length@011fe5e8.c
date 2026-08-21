
/* std::__ndk1::__codecvt_utf16<wchar_t, true>::do_length(mbstate_t&, char const*, char const*,
   unsigned long) const */

int __thiscall
std::__ndk1::__codecvt_utf16<wchar_t,true>::do_length
          (__codecvt_utf16<wchar_t,true> *this,mbstate_t *param_1,char *param_2,char *param_3,
          ulong param_4)

{
  byte bVar1;
  ushort *puVar2;
  ulong uVar3;
  
  puVar2 = (ushort *)param_2;
  if ((((((byte)this[0x20] >> 2 & 1) != 0) && (1 < (long)param_3 - (long)param_2)) &&
      (*param_2 == -1)) && (puVar2 = (ushort *)(param_2 + 2), param_2[1] != -2)) {
    puVar2 = (ushort *)param_2;
  }
  if ((param_4 != 0) && (puVar2 < param_3 + -1)) {
    uVar3 = 1;
    do {
      bVar1 = *(byte *)((long)puVar2 + 1) & 0xfc;
      if (bVar1 == 0xd8) {
        if ((((long)param_3 - (long)puVar2 < 4) || ((*(byte *)((long)puVar2 + 3) & 0xfc) != 0xdc))
           || (*(ulong *)(this + 0x18) <
               (((ulong)*puVar2 & 0x3ff) << 10 | ((ulong)*(byte *)((long)puVar2 + 3) & 3) << 8 |
               (ulong)(byte)puVar2[1]) + 0x10000)) break;
        puVar2 = puVar2 + 2;
      }
      else {
        if ((bVar1 == 0xdc) || (*(ulong *)(this + 0x18) < (ulong)*puVar2)) break;
        puVar2 = puVar2 + 1;
      }
      if ((param_4 <= uVar3) || (uVar3 = uVar3 + 1, param_3 + -1 <= puVar2)) break;
    } while( true );
  }
  return (int)puVar2 - (int)param_2;
}

