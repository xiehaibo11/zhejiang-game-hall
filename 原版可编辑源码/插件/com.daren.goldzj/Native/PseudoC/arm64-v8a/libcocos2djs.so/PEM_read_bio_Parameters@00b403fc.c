
EVP_PKEY * PEM_read_bio_Parameters(BIO *bp,EVP_PKEY **x)

{
  int iVar1;
  EVP_PKEY *pkey;
  undefined4 local_48 [2];
  uchar *local_40;
  uchar *local_38;
  char *local_28;
  
  local_38 = (uchar *)0x0;
  local_28 = (char *)0x0;
  local_40 = (uchar *)0x0;
  iVar1 = PEM_bytes_read_bio(&local_40,(long *)local_48,&local_28,"PARAMETERS",bp,(undefined1 *)0x0,
                             (void *)0x0);
  if (iVar1 == 0) {
    return (EVP_PKEY *)0x0;
  }
  local_38 = local_40;
  iVar1 = pem_check_suffix(local_28,"PARAMETERS");
  if ((0 < iVar1) && (pkey = EVP_PKEY_new(), pkey != (EVP_PKEY *)0x0)) {
    iVar1 = EVP_PKEY_set_type_str(pkey,local_28,iVar1);
    if ((iVar1 != 0) &&
       ((*(code **)(pkey->ameth + 0x70) != (code *)0x0 &&
        (iVar1 = (**(code **)(pkey->ameth + 0x70))(pkey,&local_38,local_48[0]), iVar1 != 0)))) {
      if (x != (EVP_PKEY **)0x0) {
        EVP_PKEY_free(*x);
        *x = pkey;
      }
      goto LAB_00b404f0;
    }
    EVP_PKEY_free(pkey);
  }
  ERR_put_error(9,0x8c,0xd,"crypto/pem/pem_pkey.c",0x92);
  pkey = (EVP_PKEY *)0x0;
LAB_00b404f0:
  CRYPTO_free(local_28);
  CRYPTO_free(local_40);
  return pkey;
}

