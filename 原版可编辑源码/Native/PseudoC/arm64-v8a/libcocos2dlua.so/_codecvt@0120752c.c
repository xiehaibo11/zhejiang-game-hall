
/* std::__ndk1::codecvt<wchar_t, char, mbstate_t>::~codecvt() */

void __thiscall
std::__ndk1::codecvt<wchar_t,char,mbstate_t>::~codecvt(codecvt<wchar_t,char,mbstate_t> *this)

{
  int iVar1;
  __locale_t p_Var2;
  
  p_Var2 = *(__locale_t *)(this + 0x10);
  *(undefined ***)this = &PTR__codecvt_0172e5a0;
  if (((DAT_017942d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_017942d8), iVar1 != 0)) {
    DAT_017942d0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_017942d8);
  }
  if (p_Var2 != DAT_017942d0) {
    freelocale(*(__locale_t *)(this + 0x10));
  }
  __shared_weak_count::~__shared_weak_count((__shared_weak_count *)this);
  return;
}

