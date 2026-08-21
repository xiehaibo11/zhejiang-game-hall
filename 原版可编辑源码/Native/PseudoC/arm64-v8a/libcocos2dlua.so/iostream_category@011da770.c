
/* std::__ndk1::iostream_category() */

undefined8 * std::__ndk1::iostream_category(void)

{
  int iVar1;
  
  if (((DAT_017939d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_017939d8), iVar1 != 0)) {
    error_category::error_category((error_category *)&DAT_017939d0);
    DAT_017939d0 = &PTR__error_category_0172e0e0;
    __cxa_atexit(error_category::~error_category,&DAT_017939d0,&PTR_LOOP_016979c0);
    __cxa_guard_release(&DAT_017939d8);
  }
  return &DAT_017939d0;
}

