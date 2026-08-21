
/* std::__ndk1::system_category() */

undefined8 * std::__ndk1::system_category(void)

{
  int iVar1;
  
  if (((DAT_01795340 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01795340), iVar1 != 0)) {
    DAT_01795338 = &PTR__error_category_01731348;
    __cxa_guard_release(&DAT_01795340);
  }
  return &DAT_01795338;
}

