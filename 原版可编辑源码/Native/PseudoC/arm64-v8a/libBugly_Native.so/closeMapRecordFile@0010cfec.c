
void closeMapRecordFile(void)

{
  if (DAT_0013fe10 != (FILE *)0x0) {
    fclose(DAT_0013fe10);
    DAT_0013fe10 = (FILE *)0x0;
  }
  if (DAT_0013fe08 != (void *)0x0) {
    free(DAT_0013fe08);
    DAT_0013fe08 = (void *)0x0;
  }
  return;
}

