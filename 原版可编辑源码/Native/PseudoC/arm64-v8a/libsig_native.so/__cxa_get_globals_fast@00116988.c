
void __cxa_get_globals_fast(void)

{
  int iVar1;
  
  iVar1 = pthread_once((pthread_once_t *)&DAT_0013a0c4,FUN_001169c4);
  if (iVar1 == 0) {
    pthread_getspecific(DAT_0013a0c0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00117f48("execute once failure in __cxa_get_globals_fast()");
}

