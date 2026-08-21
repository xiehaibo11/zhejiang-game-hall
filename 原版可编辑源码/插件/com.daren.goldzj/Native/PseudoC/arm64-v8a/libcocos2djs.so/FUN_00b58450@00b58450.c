
void FUN_00b58450(undefined8 *param_1)

{
                    /* try { // try from 00b58468 to 00c5846f has its CatchHandler @ 00b58470 */
                    /* catch() { ... } // from try @ 00b58410 with catch @ 00b58470
                       catch() { ... } // from try @ 00b58468 with catch @ 00b58470
                       try { // try from 00b58470 to 00c5848b has its CatchHandler @ 00b58314 */
  CRYPTO_free((void *)*param_1);
  OPENSSL_sk_pop_free(param_1[2],&LAB_00b584a0);
                    /* catch() { ... } // from try @ 00b58588 with catch @ 00b5848c
                       catch() { ... } // from try @ 00b586d4 with catch @ 00b5848c
                       catch() { ... } // from try @ 00b58754 with catch @ 00b5848c */
  CRYPTO_free(param_1);
  return;
}

