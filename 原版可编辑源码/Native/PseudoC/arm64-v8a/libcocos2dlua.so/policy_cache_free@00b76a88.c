
void policy_cache_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    policy_data_free(*param_1);
    OPENSSL_sk_pop_free(param_1[1],policy_data_free);
    CRYPTO_free(param_1);
    return;
  }
  return;
}

