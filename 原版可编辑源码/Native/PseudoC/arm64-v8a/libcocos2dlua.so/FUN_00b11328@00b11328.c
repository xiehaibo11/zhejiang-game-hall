
undefined8 * FUN_00b11328(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *ptr;
  char *pcVar2;
  
  if ((DAT_01782e20 != 0) || (DAT_01782e20 = OPENSSL_sk_new_null(), DAT_01782e20 != 0)) {
    ptr = (undefined8 *)CRYPTO_zalloc(0x30,"crypto/conf/conf_mod.c",0xea);
    if (ptr == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    *ptr = param_1;
    pcVar2 = CRYPTO_strdup(param_2,"crypto/conf/conf_mod.c",0xef);
    ptr[1] = pcVar2;
    ptr[2] = param_3;
    ptr[3] = param_4;
    if (pcVar2 != (char *)0x0) {
      iVar1 = OPENSSL_sk_push(DAT_01782e20,ptr);
      if (iVar1 != 0) {
        return ptr;
      }
      CRYPTO_free((void *)ptr[1]);
    }
    CRYPTO_free(ptr);
  }
  return (undefined8 *)0x0;
}

