
/* std::__ndk1::ctype<char>::do_toupper(char) const */

uint __thiscall std::__ndk1::ctype<char>::do_toupper(ctype<char> *this,char param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(byte)param_1;
  if (-1 < param_1) {
    if (((DAT_01d52dc8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01d52dc8), iVar1 != 0)) {
      DAT_01d52dc0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      __cxa_guard_release(&DAT_01d52dc8);
    }
    iVar1 = islower((uint)(byte)param_1);
    uVar2 = (uint)(byte)param_1;
    if (iVar1 != 0) {
      uVar2 = (byte)param_1 - 0x20;
    }
  }
  return uVar2;
}

