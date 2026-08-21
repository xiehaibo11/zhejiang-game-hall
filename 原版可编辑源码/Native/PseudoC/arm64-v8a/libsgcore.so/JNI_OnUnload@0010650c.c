
void JNI_OnUnload(void)

{
  if (DAT_00113058 != (void *)0x0) {
    free(DAT_00113058);
  }
  if (DAT_00113060 != (void *)0x0) {
    free(DAT_00113060);
  }
  if (DAT_00113068 != (void *)0x0) {
    free(DAT_00113068);
    return;
  }
  return;
}

