
void FUN_00124558(void)

{
  int iVar1;
  
  iVar1 = pthread_key_create(&DAT_00176ed8,FUN_00124598);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  DAT_00176edc = 1;
  return;
}

