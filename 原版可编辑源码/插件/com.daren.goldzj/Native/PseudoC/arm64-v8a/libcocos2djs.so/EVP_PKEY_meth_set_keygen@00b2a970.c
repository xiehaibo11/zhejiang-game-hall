
void EVP_PKEY_meth_set_keygen(EVP_PKEY_METHOD *pmeth,keygen_init *keygen_init,keygen *keygen)

{
  *(keygen_init **)(pmeth + 0x30) = keygen_init;
  *(keygen **)(pmeth + 0x38) = keygen;
  return;
}

