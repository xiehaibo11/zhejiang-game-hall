
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

X509_VERIFY_PARAM * X509_VERIFY_PARAM_new(void)

{
  X509_VERIFY_PARAM *pXVar1;
  
  pXVar1 = (X509_VERIFY_PARAM *)CRYPTO_zalloc(0x70,"crypto/x509/x509_vpm.c",0x72);
  if (pXVar1 != (X509_VERIFY_PARAM *)0x0) {
    FUN_00b62740(pXVar1);
  }
  return pXVar1;
}

