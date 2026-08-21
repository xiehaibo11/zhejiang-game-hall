
void SCT_LIST_free(undefined8 param_1)

{
  OPENSSL_sk_pop_free(param_1,SCT_free);
  return;
}

