
bool OPENSSL_atexit(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = CRYPTO_malloc(0x10,"crypto/init.c",0x288);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = DAT_01784970;
    DAT_01784970 = puVar1;
  }
  return puVar1 != (undefined8 *)0x0;
}

