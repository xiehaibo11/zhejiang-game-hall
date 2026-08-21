
void CT_POLICY_EVAL_CTX_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    X509_free((X509 *)*param_1);
    X509_free((X509 *)param_1[1]);
    CRYPTO_free(param_1);
    return;
  }
  return;
}

