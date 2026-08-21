
void closeBackupRecordFile(void)

{
  if (DAT_0013fdd8 != (FILE *)0x0) {
    fclose(DAT_0013fdd8);
    DAT_0013fdd8 = (FILE *)0x0;
  }
  if (DAT_0013fdd0 != (void *)0x0) {
    free(DAT_0013fdd0);
    DAT_0013fdd0 = (void *)0x0;
  }
  return;
}

