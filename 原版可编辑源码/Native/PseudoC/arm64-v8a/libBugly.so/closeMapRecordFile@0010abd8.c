
void closeMapRecordFile(void)

{
  if (DAT_0013edb8 != (FILE *)0x0) {
    fclose(DAT_0013edb8);
    DAT_0013edb8 = (FILE *)0x0;
  }
  if (DAT_0013edb0 != (void *)0x0) {
    free(DAT_0013edb0);
    DAT_0013edb0 = (void *)0x0;
  }
  return;
}

