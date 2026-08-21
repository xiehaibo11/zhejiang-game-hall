
void FUN_00be92dc(undefined8 *param_1)

{
  CRYPTO_free((void *)*param_1);
  CRYPTO_free((void *)param_1[1]);
  CRYPTO_free(param_1);
  return;
}

