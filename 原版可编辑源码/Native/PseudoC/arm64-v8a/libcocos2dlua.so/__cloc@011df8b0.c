
/* std::__ndk1::__cloc() */

__locale_t std::__ndk1::__cloc(void)

{
  int iVar1;
  
  if (((DAT_017942d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_017942d8), iVar1 != 0)) {
    DAT_017942d0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
    __cxa_guard_release(&DAT_017942d8);
  }
  return DAT_017942d0;
}

