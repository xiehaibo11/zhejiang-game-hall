
/* std::__ndk1::__throw_system_error(int, char const*) */

void std::__ndk1::__throw_system_error(int param_1,char *param_2)

{
  int iVar1;
  system_error *psVar2;
  
  psVar2 = (system_error *)__cxa_allocate_exception(0x20);
  if (((DAT_01795340 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01795340), iVar1 != 0)) {
    DAT_01795338 = &PTR__error_category_01731348;
    __cxa_guard_release(&DAT_01795340);
  }
  system_error::system_error(psVar2,param_1,&DAT_01795338,param_2);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(psVar2,&system_error::typeinfo,system_error::~system_error);
}

