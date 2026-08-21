
void __cxa_get_globals_fast(void)

{
  int iVar1;
  
  iVar1 = pthread_once((pthread_once_t *)&DAT_017958e4,FUN_01250078);
  if (iVar1 == 0) {
    pthread_getspecific(DAT_017958e0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012542ec("execute once failure in __cxa_get_globals_fast()");
}

