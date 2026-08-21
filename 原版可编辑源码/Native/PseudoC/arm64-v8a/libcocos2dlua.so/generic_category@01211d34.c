
/* std::__ndk1::generic_category() */

undefined8 * std::__ndk1::generic_category(void)

{
  int iVar1;
  
  if (((DAT_01795330 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01795330), iVar1 != 0)) {
    DAT_01795328 = &PTR__error_category_017312e8;
    __cxa_guard_release(&DAT_01795330);
  }
  return &DAT_01795328;
}

