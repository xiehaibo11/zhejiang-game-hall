
void FUN_0121349c(undefined4 param_1)

{
  int iVar1;
  future_error *pfVar2;
  
  pfVar2 = (future_error *)__cxa_allocate_exception(0x20);
  if (((DAT_01795360 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01795360), iVar1 != 0)) {
    std::__ndk1::error_category::error_category((error_category *)&DAT_01795358);
    DAT_01795358 = &PTR__error_category_01731430;
    __cxa_atexit(std::__ndk1::error_category::~error_category,&DAT_01795358,&PTR_LOOP_016979c0);
    __cxa_guard_release(&DAT_01795360);
  }
  std::__ndk1::future_error::future_error(pfVar2,param_1,&DAT_01795358);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(pfVar2,&std::__ndk1::future_error::typeinfo,std::__ndk1::future_error::~future_error);
}

