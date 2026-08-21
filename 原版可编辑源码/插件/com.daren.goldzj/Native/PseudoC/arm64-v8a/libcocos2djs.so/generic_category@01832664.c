
/* std::__ndk1::generic_category() */

undefined8 * std::__ndk1::generic_category(void)

{
  int iVar1;
  
  if (((DAT_01d53e20 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01d53e20), iVar1 != 0)) {
    DAT_01d53e18 = &PTR__error_category_01cde928;
    __cxa_guard_release(&DAT_01d53e20);
  }
  return &DAT_01d53e18;
}

