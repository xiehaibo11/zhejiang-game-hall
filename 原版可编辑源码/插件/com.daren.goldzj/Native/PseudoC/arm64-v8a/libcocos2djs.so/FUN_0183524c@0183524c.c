
void FUN_0183524c(void)

{
  int iVar1;
  
  FUN_01836734();
  iVar1 = pthread_setspecific(DAT_01d53e58,(void *)0x0);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01838484("cannot zero out thread value for __cxa_get_globals()");
}

