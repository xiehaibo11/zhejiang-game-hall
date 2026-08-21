
void CTLOG_STORE_free(undefined8 *param_1)

{
                    /* try { // try from 00b0229c to 00c022a3 has its CatchHandler @ 00b02a48 */
  if (param_1 != (undefined8 *)0x0) {
                    /* try { // try from 00b022a4 to 00c022af has its CatchHandler @ 00b02a4c */
    OPENSSL_sk_pop_free(*param_1,CTLOG_free);
                    /* try { // try from 00b022c4 to 00c022cb has its CatchHandler @ 00b029dc */
    CRYPTO_free(param_1);
    return;
  }
  return;
}

