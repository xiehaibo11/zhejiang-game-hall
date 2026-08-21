
void * __cxa_get_globals(void)

{
  int iVar1;
  void *__pointer;
  
  iVar1 = pthread_once((pthread_once_t *)&DAT_017958e4,FUN_01250078);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012542ec("execute once failure in __cxa_get_globals_fast()");
  }
  __pointer = pthread_getspecific(DAT_017958e0);
  if (__pointer == (void *)0x0) {
    __pointer = (void *)FUN_012512c0(1,0x10);
    if (__pointer == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_012542ec("cannot allocate __cxa_eh_globals");
    }
    iVar1 = pthread_setspecific(DAT_017958e0,__pointer);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012542ec("std::__libcpp_tls_set failure in __cxa_get_globals()");
    }
  }
  return __pointer;
}

