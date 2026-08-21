
size_t CRYPTO_128_unwrap(undefined8 param_1,undefined8 *param_2,void *param_3)

{
  undefined8 *b;
  int iVar1;
  size_t len;
  undefined1 auStack_28 [8];
  
  len = FUN_00b45150(param_1,auStack_28);
  if (len != 0) {
    b = &DAT_013e1e4e;
    if (param_2 != (undefined8 *)0x0) {
      b = param_2;
    }
    iVar1 = CRYPTO_memcmp(auStack_28,b,8);
    if (iVar1 != 0) {
      OPENSSL_cleanse(param_3,len);
      len = 0;
    }
  }
  return len;
}

