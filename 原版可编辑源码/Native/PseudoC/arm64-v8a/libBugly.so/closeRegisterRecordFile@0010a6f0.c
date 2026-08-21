
void closeRegisterRecordFile(void)

{
  if (DAT_0013eda0 != (FILE *)0x0) {
    fclose(DAT_0013eda0);
    DAT_0013eda0 = (FILE *)0x0;
  }
  if (DAT_0013eda8 != (void *)0x0) {
    free(DAT_0013eda8);
    DAT_0013eda8 = (void *)0x0;
  }
  return;
}

