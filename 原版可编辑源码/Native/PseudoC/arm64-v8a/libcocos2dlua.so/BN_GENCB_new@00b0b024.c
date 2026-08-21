
void * BN_GENCB_new(void)

{
  void *pvVar1;
  
  pvVar1 = CRYPTO_malloc(0x18,"crypto/bn/bn_lib.c",0x3c6);
  if (pvVar1 != (void *)0x0) {
    return pvVar1;
  }
  ERR_put_error(3,0x8f,0x41,"crypto/bn/bn_lib.c",0x3c7);
  return (void *)0x0;
}

