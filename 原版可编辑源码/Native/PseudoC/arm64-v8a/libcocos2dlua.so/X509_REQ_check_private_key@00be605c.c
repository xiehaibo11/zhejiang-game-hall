
int X509_REQ_check_private_key(X509_REQ *x509,EVP_PKEY *pkey)

{
  int iVar1;
  EVP_PKEY *a;
  int line;
  
  if (x509 == (X509_REQ *)0x0) {
    a = (EVP_PKEY *)0x0;
  }
  else {
    a = X509_PUBKEY_get((X509_PUBKEY *)x509[1].sig_alg);
  }
  iVar1 = EVP_PKEY_cmp(a,pkey);
  switch(iVar1) {
  case 0:
    iVar1 = 0x74;
    line = 0x5e;
    break;
  case 1:
    iVar1 = 1;
    goto LAB_00be6160;
  case -2:
    iVar1 = EVP_PKEY_id(pkey);
    if (iVar1 == 0x198) {
      iVar1 = 0x10;
      line = 0x66;
    }
    else {
      iVar1 = EVP_PKEY_id(pkey);
      if (iVar1 == 0x1c) {
        iVar1 = 0x72;
        line = 0x6e;
      }
      else {
        iVar1 = 0x75;
        line = 0x72;
      }
    }
    break;
  case -1:
    iVar1 = 0x73;
    line = 0x61;
    break;
  default:
    goto switchD_00be60ac_default;
  }
  ERR_put_error(0xb,0x90,iVar1,"crypto/x509/x509_req.c",line);
switchD_00be60ac_default:
  iVar1 = 0;
LAB_00be6160:
  EVP_PKEY_free(a);
  return iVar1;
}

