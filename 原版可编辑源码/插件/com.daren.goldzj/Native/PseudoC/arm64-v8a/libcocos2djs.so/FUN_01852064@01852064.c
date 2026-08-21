
void FUN_01852064(void)

{
  int iVar1;
  
  iVar1 = pthread_key_create(&DAT_01d54350,FUN_018520a4);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  DAT_01d54354 = 1;
  return;
}

