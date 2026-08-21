
void FUN_001169c4(void)

{
  int iVar1;
  
  iVar1 = pthread_key_create(&DAT_0013a0c0,FUN_001169f8);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00117f48("cannot create thread specific key for __cxa_get_globals()");
}

