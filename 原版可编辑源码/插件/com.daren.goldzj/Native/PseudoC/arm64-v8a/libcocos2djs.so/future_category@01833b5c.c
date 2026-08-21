
/* std::__ndk1::future_category() */

undefined8 * std::__ndk1::future_category(void)

{
  int iVar1;
  
  if (((DAT_01d53e50 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01d53e50), iVar1 != 0)) {
    error_category::error_category((error_category *)&DAT_01d53e48);
    DAT_01d53e48 = &PTR__error_category_01cdea70;
    __cxa_atexit(error_category::~error_category,&DAT_01d53e48,&PTR_LOOP_01d1b000);
    __cxa_guard_release(&DAT_01d53e50);
  }
  return &DAT_01d53e48;
}

