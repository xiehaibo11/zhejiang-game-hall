
void X509_STORE_CTX_set0_verified_chain(long param_1,undefined8 param_2)

{
  OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x98),X509_free);
  *(undefined8 *)(param_1 + 0x98) = param_2;
  return;
}

