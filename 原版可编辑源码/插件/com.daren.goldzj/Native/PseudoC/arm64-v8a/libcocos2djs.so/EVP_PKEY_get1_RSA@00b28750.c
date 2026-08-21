
rsa_st * EVP_PKEY_get1_RSA(EVP_PKEY *pkey)

{
  rsa_st *r;
  
  if (pkey->type == 6) {
    r = (pkey->pkey).rsa;
    if (r != (RSA *)0x0) {
      RSA_up_ref(r);
    }
  }
  else {
    ERR_put_error(6,0x79,0x7f,"crypto/evp/p_lib.c",0x108);
    r = (rsa_st *)0x0;
  }
  return r;
}

