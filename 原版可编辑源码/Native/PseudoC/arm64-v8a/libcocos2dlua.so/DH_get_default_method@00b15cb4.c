
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DH_METHOD * DH_get_default_method(void)

{
  if (DAT_01782e60 == (DH_METHOD *)0x0) {
    DAT_01782e60 = DH_OpenSSL();
  }
  return DAT_01782e60;
}

