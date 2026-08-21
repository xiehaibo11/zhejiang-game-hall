
undefined8 CTLOG_new_from_base64(long *param_1,undefined8 param_2,undefined8 param_3)

{
  uchar *ptr;
  int iVar1;
  EVP_PKEY *pkey;
  long lVar2;
  uchar *local_40;
  uchar *local_38;
  
  local_38 = (uchar *)0x0;
  iVar1 = FUN_00ba3024(param_2,&local_38);
  ptr = local_38;
  if (param_1 == (long *)0x0) {
    ERR_put_error(0x32,0x76,7,"crypto/ct/ct_b64.c",0x84);
  }
  else if (iVar1 < 1) {
    ERR_put_error(0x32,0x76,0x6e,"crypto/ct/ct_b64.c",0x89);
  }
  else {
    local_40 = local_38;
    pkey = d2i_PUBKEY((EVP_PKEY **)0x0,&local_40,(long)iVar1);
    CRYPTO_free(ptr);
    if (pkey == (EVP_PKEY *)0x0) {
      ERR_put_error(0x32,0x76,0x6e,"crypto/ct/ct_b64.c",0x91);
    }
    else {
      lVar2 = CTLOG_new(pkey,param_3);
      *param_1 = lVar2;
      if (lVar2 != 0) {
        return 1;
      }
      EVP_PKEY_free(pkey);
    }
  }
  return 0;
}

