
/* std::__ndk1::__throw_system_error(int, char const*) */

void std::__ndk1::__throw_system_error(int param_1,char *param_2)

{
  int iVar1;
  system_error *psVar2;
  
  psVar2 = (system_error *)__cxa_allocate_exception(0x20);
  if (((DAT_01d53e30 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01d53e30), iVar1 != 0)) {
    DAT_01d53e28 = &PTR__error_category_01cde988;
    __cxa_guard_release(&DAT_01d53e30);
  }
  system_error::system_error(psVar2,param_1,&DAT_01d53e28,param_2);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(psVar2,&system_error::typeinfo,system_error::~system_error);
}

