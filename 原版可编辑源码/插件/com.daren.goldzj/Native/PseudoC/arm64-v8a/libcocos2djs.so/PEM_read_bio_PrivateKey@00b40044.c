
EVP_PKEY * PEM_read_bio_PrivateKey(BIO *bp,EVP_PKEY **x,undefined1 *cb,void *u)

{
  char *__s1;
  int iVar1;
  EVP_PKEY_ASN1_METHOD *pEVar2;
  EVP_PKEY *pEVar3;
  X509_SIG *a;
  PKCS8_PRIV_KEY_INFO *p8;
  char acStack_458 [1024];
  long local_58;
  uchar *local_50;
  uchar *local_48;
  char *local_38;
  
  local_38 = (char *)0x0;
  local_50 = (uchar *)0x0;
  local_48 = (uchar *)0x0;
  iVar1 = PEM_bytes_read_bio(&local_50,&local_58,&local_38,"ANY PRIVATE KEY",bp,cb,u);
  __s1 = local_38;
  if (iVar1 == 0) {
    return (EVP_PKEY *)0x0;
  }
  local_48 = local_50;
  iVar1 = strcmp(local_38,"PRIVATE KEY");
  if (iVar1 == 0) {
    p8 = d2i_PKCS8_PRIV_KEY_INFO((PKCS8_PRIV_KEY_INFO **)0x0,&local_48,local_58);
joined_r0x00b40144:
    if (p8 != (PKCS8_PRIV_KEY_INFO *)0x0) {
      pEVar3 = EVP_PKCS82PKEY(p8);
      if (x != (EVP_PKEY **)0x0) {
        EVP_PKEY_free(*x);
        *x = pEVar3;
      }
      PKCS8_PRIV_KEY_INFO_free(p8);
joined_r0x00b40120:
      if (pEVar3 != (EVP_PKEY *)0x0) goto LAB_00b40214;
    }
LAB_00b401f4:
    ERR_put_error(9,0x7b,0xd,"crypto/pem/pem_pkey.c",0x56);
  }
  else {
    iVar1 = strcmp(__s1,"ENCRYPTED PRIVATE KEY");
    if (iVar1 != 0) {
      iVar1 = pem_check_suffix(__s1,"PRIVATE KEY");
      if (((0 < iVar1) &&
          (pEVar2 = EVP_PKEY_asn1_find_str((ENGINE **)0x0,local_38,iVar1),
          pEVar2 != (EVP_PKEY_ASN1_METHOD *)0x0)) && (*(long *)(pEVar2 + 0xb8) != 0)) {
        pEVar3 = d2i_PrivateKey(*(int *)pEVar2,x,&local_48,local_58);
        goto joined_r0x00b40120;
      }
      goto LAB_00b401f4;
    }
    a = d2i_X509_SIG((X509_SIG **)0x0,&local_48,local_58);
    if (a == (X509_SIG *)0x0) goto LAB_00b401f4;
    if (cb == (undefined1 *)0x0) {
      iVar1 = PEM_def_callback(acStack_458,0x400,0,u);
    }
    else {
      iVar1 = (*(code *)cb)(acStack_458,0x400,0,u);
    }
    if (0 < iVar1) {
      p8 = PKCS8_decrypt(a,acStack_458,iVar1);
      X509_SIG_free(a);
      goto joined_r0x00b40144;
    }
    ERR_put_error(9,0x7b,0x68,"crypto/pem/pem_pkey.c",0x3f);
    X509_SIG_free(a);
  }
  pEVar3 = (EVP_PKEY *)0x0;
LAB_00b40214:
  CRYPTO_free(local_38);
  CRYPTO_clear_free(local_50,local_58,"crypto/pem/pem_pkey.c",0x59);
  return pEVar3;
}

