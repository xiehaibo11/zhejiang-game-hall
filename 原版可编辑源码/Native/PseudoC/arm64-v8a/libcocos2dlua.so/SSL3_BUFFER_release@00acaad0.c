
void SSL3_BUFFER_release(undefined8 *param_1)

{
  CRYPTO_free((void *)*param_1);
  *param_1 = 0;
  return;
}

