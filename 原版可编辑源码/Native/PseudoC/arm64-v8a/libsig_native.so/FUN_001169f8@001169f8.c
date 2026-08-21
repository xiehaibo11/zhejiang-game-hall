
void FUN_001169f8(void)

{
  int iVar1;
  
  FUN_00117ac0();
  iVar1 = pthread_setspecific(DAT_0013a0c0,(void *)0x0);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00117f48("cannot zero out thread value for __cxa_get_globals()");
}

