
undefined8 * BN_CTX_secure_new(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)CRYPTO_zalloc(0x40,"crypto/bn/bn_ctx.c",0x8a);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    *(undefined4 *)((long)puVar1 + 0x3c) = 8;
    return puVar1;
  }
  ERR_put_error(3,0x6a,0x41,"crypto/bn/bn_ctx.c",0x8b);
  return (undefined8 *)0x0;
}

