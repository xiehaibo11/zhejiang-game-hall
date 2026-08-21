
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

BN_CTX * BN_CTX_new(void)

{
  BN_CTX *pBVar1;
  
  pBVar1 = (BN_CTX *)CRYPTO_zalloc(0x40,"crypto/bn/bn_ctx.c",0x8a);
  if (pBVar1 != (BN_CTX *)0x0) {
    *(undefined8 *)(pBVar1 + 0x18) = 0;
    *(undefined8 *)(pBVar1 + 0x10) = 0;
    *(undefined8 *)(pBVar1 + 0x28) = 0;
    *(undefined8 *)(pBVar1 + 0x20) = 0;
    *(undefined8 *)(pBVar1 + 8) = 0;
    *(undefined8 *)pBVar1 = 0;
    return pBVar1;
  }
  ERR_put_error(3,0x6a,0x41,"crypto/bn/bn_ctx.c",0x8b);
  return (BN_CTX *)0x0;
}

