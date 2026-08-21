
int closeCrashRecordFile(void)

{
  int iVar1;
  
  iVar1 = 0;
  if (DAT_0013fde0 != (FILE *)0x0) {
    iVar1 = fclose(DAT_0013fde0);
    DAT_0013fde0 = (FILE *)0x0;
  }
  return iVar1;
}

