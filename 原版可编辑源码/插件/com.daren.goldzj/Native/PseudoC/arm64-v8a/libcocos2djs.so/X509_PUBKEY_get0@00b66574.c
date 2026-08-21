
long X509_PUBKEY_get0(long param_1)

{
  EVP_PKEY *pkey;
  EVP_PKEY *local_18;
  
  local_18 = (EVP_PKEY *)0x0;
  if ((param_1 != 0) && (*(long *)(param_1 + 8) != 0)) {
    if (*(long *)(param_1 + 0x10) != 0) {
      return *(long *)(param_1 + 0x10);
    }
    FUN_00b665e4(&local_18,param_1);
    pkey = local_18;
    if (local_18 != (EVP_PKEY *)0x0) {
      ERR_put_error(0xb,0x77,0x44,"crypto/x509/x_pubkey.c",0xa1);
      EVP_PKEY_free(pkey);
    }
  }
  return 0;
}

