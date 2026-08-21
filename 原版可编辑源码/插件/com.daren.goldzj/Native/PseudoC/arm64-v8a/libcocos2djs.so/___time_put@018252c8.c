
/* std::__ndk1::__time_put::~__time_put() */

void __thiscall std::__ndk1::__time_put::~__time_put(__time_put *this)

{
  int iVar1;
  __locale_t p_Var2;
  
  p_Var2 = *(__locale_t *)this;
  if (((DAT_01d52dc8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01d52dc8), iVar1 != 0)) {
    DAT_01d52dc0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_01d52dc8);
  }
  if (p_Var2 != DAT_01d52dc0) {
    freelocale(*(__locale_t *)this);
  }
  return;
}

