
void policy_data_free(byte *param_1)

{
  if (param_1 != (byte *)0x0) {
    ASN1_OBJECT_free(*(ASN1_OBJECT **)(param_1 + 8));
    if ((*param_1 >> 2 & 1) == 0) {
                    /* try { // try from 00b679e4 to 00c679ff has its CatchHandler @ 00b67a5c */
      OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x10),POLICYQUALINFO_free);
    }
    OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x18),ASN1_OBJECT_free);
                    /* try { // try from 00b67a00 to 00c67a97 has its CatchHandler @ 00b67880 */
    CRYPTO_free(param_1);
    return;
  }
  return;
}

