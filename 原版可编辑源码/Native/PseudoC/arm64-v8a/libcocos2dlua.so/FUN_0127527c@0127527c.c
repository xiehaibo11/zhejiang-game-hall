
int FUN_0127527c(void)

{
  int iVar1;
  
  if (DAT_01795e24 != 0) {
    DAT_01795e24 = 0;
    iVar1 = pthread_key_delete(DAT_01795e20);
    return iVar1;
  }
  return 0x1795000;
}

