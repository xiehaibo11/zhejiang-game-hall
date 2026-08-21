
/* std::__ndk1::__cloc() */

__locale_t std::__ndk1::__cloc(void)

{
  int iVar1;
  
  if (((DAT_01d52dc8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01d52dc8), iVar1 != 0)) {
    DAT_01d52dc0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_01d52dc8);
  }
  return DAT_01d52dc0;
}

