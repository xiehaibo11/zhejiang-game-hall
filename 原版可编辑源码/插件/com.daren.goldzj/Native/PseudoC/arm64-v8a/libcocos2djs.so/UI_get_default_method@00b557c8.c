
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

UI_METHOD * UI_get_default_method(void)

{
  if (DAT_01d3ad98 == (UI_METHOD *)0x0) {
    DAT_01d3ad98 = UI_OpenSSL();
  }
  return DAT_01d3ad98;
}

