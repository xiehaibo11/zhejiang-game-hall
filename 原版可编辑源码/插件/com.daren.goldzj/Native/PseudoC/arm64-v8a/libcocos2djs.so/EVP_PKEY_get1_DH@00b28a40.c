
dh_st * EVP_PKEY_get1_DH(EVP_PKEY *pkey)

{
  rsa_st *dh;
  
  if ((pkey->type == 0x1c) || (pkey->type == 0x398)) {
    dh = (pkey->pkey).rsa;
    if (dh != (rsa_st *)0x0) {
      DH_up_ref((DH *)dh);
    }
  }
  else {
    ERR_put_error(6,0x77,0x80,"crypto/evp/p_lib.c",0x15b);
    dh = (rsa_st *)0x0;
  }
  return (dh_st *)dh;
}

