
undefined8 * FUN_00b01ea8(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *ptr;
  char *pcVar2;
  
  if ((DAT_01d390a0 != 0) || (DAT_01d390a0 = OPENSSL_sk_new_null(), DAT_01d390a0 != 0)) {
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
      iVar1 = OPENSSL_sk_push(DAT_01d390a0,ptr);
      if (iVar1 != 0) {
        return ptr;
      }
      CRYPTO_free((void *)ptr[1]);
    }
    CRYPTO_free(ptr);
  }
                    /* try { // try from 00b01f74 to 00c01f7f has its CatchHandler @ 00b02014 */
                    /* try { // try from 00b01f80 to 00c01fc7 has its CatchHandler @ 00b01e74 */
  return (undefined8 *)0x0;
}

