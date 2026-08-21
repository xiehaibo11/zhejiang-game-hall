
/* std::__ndk1::system_category() */

undefined8 * std::__ndk1::system_category(void)

{
  int iVar1;
  
  if (((DAT_01d53e30 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01d53e30), iVar1 != 0)) {
    DAT_01d53e28 = &PTR__error_category_01cde988;
    __cxa_guard_release(&DAT_01d53e30);
  }
  return &DAT_01d53e28;
}

