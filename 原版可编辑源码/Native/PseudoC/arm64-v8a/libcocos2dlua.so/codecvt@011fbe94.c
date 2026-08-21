
/* std::__ndk1::codecvt<wchar_t, char, mbstate_t>::codecvt(unsigned long) */

void __thiscall
std::__ndk1::codecvt<wchar_t,char,mbstate_t>::codecvt
          (codecvt<wchar_t,char,mbstate_t> *this,ulong param_1)

{
  int iVar1;
  
  *(undefined ***)this = &PTR__codecvt_0172e5a0;
  *(ulong *)(this + 8) = param_1 - 1;
  if (((DAT_017942d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_017942d8), iVar1 != 0)) {
    DAT_017942d0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_017942d8);
  }
  *(__locale_t *)(this + 0x10) = DAT_017942d0;
  return;
}

