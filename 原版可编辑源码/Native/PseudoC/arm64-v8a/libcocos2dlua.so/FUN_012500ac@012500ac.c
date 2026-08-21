
void FUN_012500ac(void)

{
  int iVar1;
  
  FUN_01251440();
  iVar1 = pthread_setspecific(DAT_017958e0,(void *)0x0);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012542ec("cannot zero out thread value for __cxa_get_globals()");
}

