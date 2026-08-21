
void FUN_01250078(void)

{
  int iVar1;
  
  iVar1 = pthread_key_create(&DAT_017958e0,FUN_012500ac);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012542ec("cannot create thread specific key for __cxa_get_globals()");
}

