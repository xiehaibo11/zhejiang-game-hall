
ec_key_st * EVP_PKEY_get1_EC_KEY(EVP_PKEY *pkey)

{
  rsa_st *key;
  
  if (pkey->type == 0x198) {
    key = (pkey->pkey).rsa;
    if (key != (rsa_st *)0x0) {
      EC_KEY_up_ref((EC_KEY *)key);
    }
  }
  else {
    ERR_put_error(6,0x83,0x8e,"crypto/evp/p_lib.c",0x13f);
    key = (rsa_st *)0x0;
  }
  return (ec_key_st *)key;
}

