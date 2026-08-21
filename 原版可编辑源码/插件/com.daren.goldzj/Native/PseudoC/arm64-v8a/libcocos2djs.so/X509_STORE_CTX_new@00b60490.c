
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

X509_STORE_CTX * X509_STORE_CTX_new(void)

{
  X509_STORE_CTX *pXVar1;
  
  pXVar1 = (X509_STORE_CTX *)CRYPTO_zalloc(0xf8,"crypto/x509/x509_vfy.c",0x89a);
  if (pXVar1 != (X509_STORE_CTX *)0x0) {
    return pXVar1;
  }
  ERR_put_error(0xb,0x8e,0x41,"crypto/x509/x509_vfy.c",0x89d);
  return (X509_STORE_CTX *)0x0;
}

