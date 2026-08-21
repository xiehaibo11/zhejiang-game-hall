
void EVP_MD_CTX_new(void)

{
  CRYPTO_zalloc(0x30,"crypto/evp/digest.c",0x2e);
  return;
}

