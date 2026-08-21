
void FUN_01275124(void)

{
  int iVar1;
  
  iVar1 = pthread_key_create(&DAT_01795e20,FUN_01275164);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  DAT_01795e24 = 1;
  return;
}

