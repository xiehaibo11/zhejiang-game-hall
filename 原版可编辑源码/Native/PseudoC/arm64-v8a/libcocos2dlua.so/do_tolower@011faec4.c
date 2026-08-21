
/* std::__ndk1::ctype<char>::do_tolower(char*, char const*) const */

char * __thiscall
std::__ndk1::ctype<char>::do_tolower(ctype<char> *this,char *param_1,char *param_2)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  
  if (param_1 != param_2) {
    uVar3 = (uint)*param_1;
    if (-1 < *param_1) goto LAB_011faf40;
    while( true ) {
      pbVar2 = (byte *)(param_1 + 1);
      *param_1 = (byte)uVar3;
      param_1 = param_2;
      if ((byte *)param_2 == pbVar2) break;
      uVar3 = (uint)(char)*pbVar2;
      param_1 = (char *)pbVar2;
      if (-1 < (int)uVar3) {
LAB_011faf40:
        if (((DAT_017942d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_017942d8), iVar1 != 0)) {
          DAT_017942d0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
          __cxa_guard_release(&DAT_017942d8);
        }
        iVar1 = isupper(uVar3 & 0xff);
        uVar3 = (uint)(byte)*param_1;
        if (iVar1 != 0) {
          uVar3 = (byte)*param_1 + 0x20;
        }
      }
    }
  }
  return param_1;
}

