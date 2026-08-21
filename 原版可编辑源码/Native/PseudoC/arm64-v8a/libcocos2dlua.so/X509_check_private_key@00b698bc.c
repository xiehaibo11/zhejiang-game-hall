
int X509_check_private_key(X509 *x509,EVP_PKEY *pkey)

{
  int iVar1;
  EVP_PKEY *a;
  
  if (((x509 == (X509 *)0x0) ||
      (a = (EVP_PKEY *)X509_PUBKEY_get0(x509->ex_kusage), a == (EVP_PKEY *)0x0)) ||
     (iVar1 = EVP_PKEY_cmp(a,pkey), iVar1 == -2)) {
    ERR_put_error(0xb,0x80,0x75,"crypto/x509/x509_cmp.c",0x12d);
    iVar1 = -2;
  }
  else if (iVar1 == -1) {
    ERR_put_error(0xb,0x80,0x73,"crypto/x509/x509_cmp.c",0x12a);
    iVar1 = -1;
  }
  else if (iVar1 == 0) {
    ERR_put_error(0xb,0x80,0x74,"crypto/x509/x509_cmp.c",0x127);
    iVar1 = 0;
  }
  return (int)(0 < iVar1);
}

