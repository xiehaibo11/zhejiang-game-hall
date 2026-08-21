
void closeBackupRecordFile(void)

{
  if (DAT_0013ed80 != (FILE *)0x0) {
    fclose(DAT_0013ed80);
    DAT_0013ed80 = (FILE *)0x0;
  }
  if (DAT_0013ed78 != (void *)0x0) {
    free(DAT_0013ed78);
    DAT_0013ed78 = (void *)0x0;
  }
  return;
}

