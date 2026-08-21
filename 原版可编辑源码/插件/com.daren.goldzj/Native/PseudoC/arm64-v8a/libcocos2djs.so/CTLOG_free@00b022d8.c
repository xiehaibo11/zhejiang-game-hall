
void CTLOG_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
                    /* try { // try from 00b022fc to 00c02307 has its CatchHandler @ 00b029c8 */
    CRYPTO_free((void *)*param_1);
    EVP_PKEY_free((EVP_PKEY *)param_1[5]);
    CRYPTO_free(param_1);
    return;
  }
  return;
}

