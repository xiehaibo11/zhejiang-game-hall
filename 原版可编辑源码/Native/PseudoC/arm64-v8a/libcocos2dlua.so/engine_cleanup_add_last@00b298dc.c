
void engine_cleanup_add_last(undefined8 param_1)

{
  undefined8 *puVar1;
  
  if ((DAT_01782e88 == 0) && (DAT_01782e88 = OPENSSL_sk_new_null(), DAT_01782e88 == 0)) {
    return;
  }
  puVar1 = CRYPTO_malloc(8,"crypto/engine/eng_lib.c",0x7b);
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  *puVar1 = param_1;
  OPENSSL_sk_push(DAT_01782e88,puVar1);
  return;
}

