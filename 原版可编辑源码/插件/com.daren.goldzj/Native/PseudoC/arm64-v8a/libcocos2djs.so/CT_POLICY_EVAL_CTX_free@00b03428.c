
void CT_POLICY_EVAL_CTX_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    X509_free((X509 *)*param_1);
                    /* try { // try from 00b03444 to 00c0344f has its CatchHandler @ 00b03664 */
    X509_free((X509 *)param_1[1]);
    CRYPTO_free(param_1);
    return;
  }
  return;
}

