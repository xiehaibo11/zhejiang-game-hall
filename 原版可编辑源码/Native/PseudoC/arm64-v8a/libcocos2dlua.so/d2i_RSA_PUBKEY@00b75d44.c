
RSA * d2i_RSA_PUBKEY(RSA **a,uchar **pp,long length)

{
  EVP_PKEY *pkey;
  rsa_st *prVar1;
  uchar *local_38;
  
  local_38 = *pp;
  pkey = d2i_PUBKEY((EVP_PKEY **)0x0,&local_38,length);
  if (pkey == (EVP_PKEY *)0x0) {
    prVar1 = (rsa_st *)0x0;
  }
  else {
    prVar1 = EVP_PKEY_get1_RSA(pkey);
    EVP_PKEY_free(pkey);
    if ((prVar1 != (rsa_st *)0x0) && (*pp = local_38, a != (RSA **)0x0)) {
      RSA_free(*a);
      *a = prVar1;
    }
  }
  return prVar1;
}

