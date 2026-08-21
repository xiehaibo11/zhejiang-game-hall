
/* std::__ndk1::future_category() */

undefined8 * std::__ndk1::future_category(void)

{
  int iVar1;
  
  if (((DAT_01795360 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01795360), iVar1 != 0)) {
    error_category::error_category((error_category *)&DAT_01795358);
    DAT_01795358 = &PTR__error_category_01731430;
    __cxa_atexit(error_category::~error_category,&DAT_01795358,&PTR_LOOP_016979c0);
    __cxa_guard_release(&DAT_01795360);
  }
  return &DAT_01795358;
}

