
void OPENSSL_INIT_free(undefined8 *param_1)

{
  free((void *)*param_1);
  free(param_1);
  return;
}

