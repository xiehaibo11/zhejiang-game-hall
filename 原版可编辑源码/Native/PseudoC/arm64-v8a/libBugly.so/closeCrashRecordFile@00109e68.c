
int closeCrashRecordFile(void)

{
  int iVar1;
  
  iVar1 = 0;
  if (DAT_0013ed88 != (FILE *)0x0) {
    iVar1 = fclose(DAT_0013ed88);
    DAT_0013ed88 = (FILE *)0x0;
  }
  return iVar1;
}

