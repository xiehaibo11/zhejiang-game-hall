
void EVP_PKEY_meth_set_derive(EVP_PKEY_METHOD *pmeth,derive_init *derive_init,derive *derive)

{
  *(derive_init **)(pmeth + 0xb0) = derive_init;
  *(derive **)(pmeth + 0xb8) = derive;
  return;
}

