
void FUN_01835218(void)

{
  int iVar1;
  
  iVar1 = pthread_key_create(&DAT_01d53e58,FUN_0183524c);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01838484("cannot create thread specific key for __cxa_get_globals()");
}

