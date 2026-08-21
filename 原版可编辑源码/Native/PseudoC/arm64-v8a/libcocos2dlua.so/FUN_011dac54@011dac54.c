
void FUN_011dac54(undefined8 param_1)

{
  int iVar1;
  system_error *psVar2;
  
  psVar2 = (system_error *)__cxa_allocate_exception(0x20);
  if (((DAT_017939d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_017939d8), iVar1 != 0)) {
    std::__ndk1::error_category::error_category((error_category *)&DAT_017939d0);
    DAT_017939d0 = &PTR__error_category_0172e0e0;
    __cxa_atexit(std::__ndk1::error_category::~error_category,&DAT_017939d0,&PTR_LOOP_016979c0);
    __cxa_guard_release(&DAT_017939d8);
  }
  std::__ndk1::system_error::system_error(psVar2,1,&DAT_017939d0,param_1);
  *(undefined ***)psVar2 = &PTR__failure_0172df18;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(psVar2,&std::__ndk1::ios_base::failure::typeinfo,
              std::__ndk1::ios_base::failure::~failure);
}

