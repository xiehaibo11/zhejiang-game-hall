
void __cxa_get_globals_fast(void)

{
  int iVar1;
  
  iVar1 = pthread_once((pthread_once_t *)&DAT_01d53e5c,FUN_01835218);
  if (iVar1 == 0) {
    pthread_getspecific(DAT_01d53e58);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01838484("execute once failure in __cxa_get_globals_fast()");
}

