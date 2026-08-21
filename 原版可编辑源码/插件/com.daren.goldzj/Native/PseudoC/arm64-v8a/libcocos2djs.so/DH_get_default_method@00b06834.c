
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

DH_METHOD * DH_get_default_method(void)

{
  if (DAT_01d390e0 == (DH_METHOD *)0x0) {
    DAT_01d390e0 = DH_OpenSSL();
                    /* catch() { ... } // from try @ 00b06170 with catch @ 00b06850 */
  }
  return DAT_01d390e0;
}

