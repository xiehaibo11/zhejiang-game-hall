
void FUN_00165428(void)

{
  int iVar1;
  
  iVar1 = pthread_key_create(&DAT_0016c524,FUN_00165464);
  if (iVar1 == 0) {
    DAT_0016c520 = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

