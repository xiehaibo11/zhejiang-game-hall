
/* std::__ndk1::iostream_category() */

undefined8 * std::__ndk1::iostream_category(void)

{
  int iVar1;
  
  if (((DAT_01d524c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01d524c8), iVar1 != 0)) {
    error_category::error_category((error_category *)&DAT_01d524c0);
    DAT_01d524c0 = &PTR__error_category_01cdb720;
    __cxa_atexit(error_category::~error_category,&DAT_01d524c0,&PTR_LOOP_01d1b000);
    __cxa_guard_release(&DAT_01d524c8);
  }
  return &DAT_01d524c0;
}

