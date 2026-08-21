
undefined8 CMS_RecipientInfo_kari_set0_pkey(long param_1,EVP_PKEY *param_2)

{
  int iVar1;
  EVP_PKEY_CTX *ctx;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  EVP_PKEY_CTX_free(*(EVP_PKEY_CTX **)(lVar2 + 0x28));
  *(undefined8 *)(lVar2 + 0x28) = 0;
  if (param_2 != (EVP_PKEY *)0x0) {
    ctx = EVP_PKEY_CTX_new(param_2,(ENGINE *)0x0);
    if ((ctx == (EVP_PKEY_CTX *)0x0) || (iVar1 = EVP_PKEY_derive_init(ctx), iVar1 == 0)) {
      EVP_PKEY_CTX_free(ctx);
      return 0;
    }
    *(EVP_PKEY_CTX **)(lVar2 + 0x28) = ctx;
  }
  return 1;
}

