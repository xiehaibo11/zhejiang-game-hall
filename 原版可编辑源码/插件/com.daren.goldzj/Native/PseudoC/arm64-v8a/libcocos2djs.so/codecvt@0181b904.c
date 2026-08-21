
/* std::__ndk1::codecvt<wchar_t, char, mbstate_t>::codecvt(unsigned long) */

void __thiscall
std::__ndk1::codecvt<wchar_t,char,mbstate_t>::codecvt
          (codecvt<wchar_t,char,mbstate_t> *this,ulong param_1)

{
  int iVar1;
  
  *(undefined ***)this = &PTR__codecvt_01cdbbe0;
  *(ulong *)(this + 8) = param_1 - 1;
  if (((DAT_01d52dc8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01d52dc8), iVar1 != 0)) {
    DAT_01d52dc0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_01d52dc8);
  }
  *(__locale_t *)(this + 0x10) = DAT_01d52dc0;
  return;
}

