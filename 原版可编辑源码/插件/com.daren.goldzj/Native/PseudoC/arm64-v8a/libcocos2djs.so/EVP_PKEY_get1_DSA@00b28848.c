
dsa_st * EVP_PKEY_get1_DSA(EVP_PKEY *pkey)

{
  rsa_st *r;
  
  if (pkey->type == 0x74) {
    r = (pkey->pkey).rsa;
    if (r != (rsa_st *)0x0) {
      DSA_up_ref((DSA *)r);
    }
  }
  else {
    ERR_put_error(6,0x78,0x81,"crypto/evp/p_lib.c",0x123);
    r = (rsa_st *)0x0;
  }
  return (dsa_st *)r;
}

