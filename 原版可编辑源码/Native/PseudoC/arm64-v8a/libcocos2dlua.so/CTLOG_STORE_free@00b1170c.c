
void CTLOG_STORE_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    OPENSSL_sk_pop_free(*param_1,CTLOG_free);
    CRYPTO_free(param_1);
    return;
  }
  return;
}

