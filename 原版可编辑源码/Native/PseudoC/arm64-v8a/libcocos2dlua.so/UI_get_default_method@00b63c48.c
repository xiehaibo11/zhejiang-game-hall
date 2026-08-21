
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

UI_METHOD * UI_get_default_method(void)

{
  if (DAT_01784b18 == (UI_METHOD *)0x0) {
    DAT_01784b18 = UI_OpenSSL();
  }
  return DAT_01784b18;
}

