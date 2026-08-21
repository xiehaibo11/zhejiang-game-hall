
void engine_cleanup_add_first(undefined8 param_1)

{
  undefined8 *puVar1;
  
  if ((DAT_01d39108 == 0) && (DAT_01d39108 = OPENSSL_sk_new_null(), DAT_01d39108 == 0)) {
    return;
  }
  puVar1 = CRYPTO_malloc(8,"crypto/engine/eng_lib.c",0x7b);
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  *puVar1 = param_1;
  OPENSSL_sk_insert(DAT_01d39108,puVar1,0);
  return;
}

