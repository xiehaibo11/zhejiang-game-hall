
void closeRegisterRecordFile(void)

{
  if (DAT_0013fdf8 != (FILE *)0x0) {
    fclose(DAT_0013fdf8);
    DAT_0013fdf8 = (FILE *)0x0;
  }
  if (DAT_0013fdf0 != (void *)0x0) {
    free(DAT_0013fdf0);
    DAT_0013fdf0 = (void *)0x0;
  }
  return;
}

