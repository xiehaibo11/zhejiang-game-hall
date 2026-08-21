
void FUN_011a6d10(void)

{
  int iVar1;
  
  if (DAT_01781870 == -1) {
    iVar1 = pthread_atfork((__prepare *)0x0,(__parent *)0x0,FUN_011a7b6c);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  FUN_011a7b6c();
  return;
}

