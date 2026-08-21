
/* std::__ndk1::ctype<char>::do_tolower(char*, char const*) const */

char * __thiscall
std::__ndk1::ctype<char>::do_tolower(ctype<char> *this,char *param_1,char *param_2)

{
  char *pcVar1;
  int iVar2;
  byte bVar3;
  
  pcVar1 = param_1;
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    bVar3 = *param_1;
    if (-1 < (char)bVar3) {
      if (((DAT_01d52dc8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_01d52dc8), iVar2 != 0)) {
        DAT_01d52dc0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
        __cxa_guard_release(&DAT_01d52dc8);
      }
      iVar2 = isupper((uint)bVar3);
      bVar3 = *param_1;
      if (iVar2 != 0) {
        bVar3 = *param_1 + 0x20;
      }
    }
    *param_1 = bVar3;
    pcVar1 = param_2;
  }
  return pcVar1;
}

