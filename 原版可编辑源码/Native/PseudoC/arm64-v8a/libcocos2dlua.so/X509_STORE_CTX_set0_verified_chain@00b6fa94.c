
void X509_STORE_CTX_set0_verified_chain(long param_1,undefined8 param_2)

{
                    /* catch() { ... } // from try @ 00b6f80c with catch @ 00b6fa94 */
                    /* catch() { ... } // from try @ 00b6f8f0 with catch @ 00b6fa9c */
  OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x98),X509_free);
  *(undefined8 *)(param_1 + 0x98) = param_2;
  return;
}

