
undefined8 SCT_CTX_set1_pubkey(undefined8 *param_1,X509_PUBKEY *param_2)

{
  int iVar1;
  EVP_PKEY *pkey;
  undefined8 uVar2;
  
  pkey = X509_PUBKEY_get(param_2);
  uVar2 = 0;
  if (pkey != (EVP_PKEY *)0x0) {
    iVar1 = FUN_00b135ec(param_2,param_1 + 1,param_1 + 2);
    if (iVar1 == 0) {
      EVP_PKEY_free(pkey);
      uVar2 = 0;
    }
    else {
      EVP_PKEY_free((EVP_PKEY *)*param_1);
      uVar2 = 1;
      *param_1 = pkey;
    }
  }
  return uVar2;
}

