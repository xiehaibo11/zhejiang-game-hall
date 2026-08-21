
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

RSA_METHOD * RSA_get_default_method(void)

{
  if (DAT_01784a50 == (RSA_METHOD *)0x0) {
    DAT_01784a50 = (RSA_METHOD *)RSA_PKCS1_OpenSSL();
  }
  return DAT_01784a50;
}

