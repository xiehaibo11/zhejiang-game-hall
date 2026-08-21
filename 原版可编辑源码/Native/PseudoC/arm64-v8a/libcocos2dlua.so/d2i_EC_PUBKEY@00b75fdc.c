
EC_KEY * d2i_EC_PUBKEY(EC_KEY **a,uchar **pp,long length)

{
  EVP_PKEY *pkey;
  ec_key_st *peVar1;
  uchar *local_38;
  
  local_38 = *pp;
  pkey = d2i_PUBKEY((EVP_PKEY **)0x0,&local_38,length);
  if (pkey == (EVP_PKEY *)0x0) {
    peVar1 = (ec_key_st *)0x0;
  }
  else {
    peVar1 = EVP_PKEY_get1_EC_KEY(pkey);
    EVP_PKEY_free(pkey);
    if ((peVar1 != (ec_key_st *)0x0) && (*pp = local_38, a != (EC_KEY **)0x0)) {
      EC_KEY_free(*a);
      *a = peVar1;
    }
  }
  return peVar1;
}

