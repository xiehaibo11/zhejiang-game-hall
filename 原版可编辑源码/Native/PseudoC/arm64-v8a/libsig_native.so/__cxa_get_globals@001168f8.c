
void * __cxa_get_globals(void)

{
  int iVar1;
  void *__pointer;
  
  iVar1 = pthread_once((pthread_once_t *)&DAT_0013a0c4,FUN_001169c4);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00117f48("execute once failure in __cxa_get_globals_fast()");
  }
  __pointer = pthread_getspecific(DAT_0013a0c0);
  if (__pointer == (void *)0x0) {
    __pointer = (void *)FUN_00117940(1,0x10);
    if (__pointer == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00117f48("cannot allocate __cxa_eh_globals");
    }
    iVar1 = pthread_setspecific(DAT_0013a0c0,__pointer);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00117f48("std::__libcpp_tls_set failure in __cxa_get_globals()");
    }
  }
  return __pointer;
}

