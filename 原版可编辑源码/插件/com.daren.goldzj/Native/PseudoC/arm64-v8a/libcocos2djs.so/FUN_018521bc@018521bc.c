
int FUN_018521bc(void)

{
  int iVar1;
  
  if (DAT_01d54354 != 0) {
    DAT_01d54354 = 0;
    iVar1 = pthread_key_delete(DAT_01d54350);
    return iVar1;
  }
  return 0x1d54000;
}

