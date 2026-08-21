
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DSA_METHOD * DSA_get_default_method(void)

{
  if (DAT_01782e68 == (DSA_METHOD *)0x0) {
    DAT_01782e68 = DSA_OpenSSL();
  }
  return DAT_01782e68;
}

