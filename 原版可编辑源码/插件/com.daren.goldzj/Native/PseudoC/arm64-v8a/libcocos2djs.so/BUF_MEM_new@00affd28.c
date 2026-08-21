
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

BUF_MEM * BUF_MEM_new(void)

{
  BUF_MEM *pBVar1;
  
                    /* catch() { ... } // from try @ 00affcb8 with catch @ 00affd2c */
  pBVar1 = (BUF_MEM *)CRYPTO_zalloc(0x20,"crypto/buffer/buffer.c",0x23);
  if (pBVar1 != (BUF_MEM *)0x0) {
                    /* catch() { ... } // from try @ 00affc98 with catch @ 00affd4c */
    return pBVar1;
  }
  ERR_put_error(7,0x65,0x41,"crypto/buffer/buffer.c",0x25);
  return (BUF_MEM *)0x0;
}

