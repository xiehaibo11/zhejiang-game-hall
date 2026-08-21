
DSA * d2i_DSA_PUBKEY(DSA **a,uchar **pp,long length)

{
  EVP_PKEY *pkey;
  dsa_st *pdVar1;
  uchar *local_38;
  
                    /* catch() { ... } // from try @ 00b66874 with catch @ 00b66a24 */
  local_38 = *pp;
                    /* catch() { ... } // from try @ 00b66704 with catch @ 00b66a28
                       catch() { ... } // from try @ 00b66858 with catch @ 00b66a28 */
  pkey = d2i_PUBKEY((EVP_PKEY **)0x0,&local_38,length);
  if (pkey == (EVP_PKEY *)0x0) {
    pdVar1 = (dsa_st *)0x0;
  }
  else {
    pdVar1 = EVP_PKEY_get1_DSA(pkey);
    EVP_PKEY_free(pkey);
    if ((pdVar1 != (dsa_st *)0x0) && (*pp = local_38, a != (DSA **)0x0)) {
      DSA_free(*a);
      *a = pdVar1;
    }
  }
  return pdVar1;
}

