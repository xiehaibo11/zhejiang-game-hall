
void * __cxa_get_globals(void)

{
  int iVar1;
  void *__pointer;
  
  iVar1 = pthread_once((pthread_once_t *)&DAT_01d53e5c,FUN_01835218);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01838484("execute once failure in __cxa_get_globals_fast()");
  }
  __pointer = pthread_getspecific(DAT_01d53e58);
  if (__pointer == (void *)0x0) {
    __pointer = (void *)FUN_018365b4(1,0x10);
    if (__pointer == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01838484("cannot allocate __cxa_eh_globals");
    }
    iVar1 = pthread_setspecific(DAT_01d53e58,__pointer);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01838484("std::__libcpp_tls_set failure in __cxa_get_globals()");
    }
  }
  return __pointer;
}

