
undefined8 EVP_CIPHER_CTX_reset(long *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  
  if (param_1 != (long *)0x0) {
    if (*param_1 != 0) {
      pcVar2 = *(code **)(*param_1 + 0x28);
      if ((pcVar2 != (code *)0x0) && (uVar1 = (*pcVar2)(param_1), (int)uVar1 == 0)) {
        return uVar1;
      }
      if (((void *)param_1[0xf] != (void *)0x0) && (*(int *)(*param_1 + 0x30) != 0)) {
        OPENSSL_cleanse((void *)param_1[0xf],(long)*(int *)(*param_1 + 0x30));
      }
    }
    CRYPTO_free((void *)param_1[0xf]);
    ENGINE_finish((ENGINE *)param_1[1]);
    memset(param_1,0,0xa8);
  }
  return 1;
}

