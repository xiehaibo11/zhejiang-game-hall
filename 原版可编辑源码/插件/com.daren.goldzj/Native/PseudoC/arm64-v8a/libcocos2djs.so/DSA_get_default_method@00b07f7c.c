
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DSA_METHOD * DSA_get_default_method(void)

{
  if (DAT_01d390e8 == (DSA_METHOD *)0x0) {
    DAT_01d390e8 = DSA_OpenSSL();
  }
  return DAT_01d390e8;
}

