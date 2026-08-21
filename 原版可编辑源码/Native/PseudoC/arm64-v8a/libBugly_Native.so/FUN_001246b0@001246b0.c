
int FUN_001246b0(void)

{
  int iVar1;
  
  if (DAT_00176edc != 0) {
    DAT_00176edc = 0;
    iVar1 = pthread_key_delete(DAT_00176ed8);
    return iVar1;
  }
  return 0x176000;
}

