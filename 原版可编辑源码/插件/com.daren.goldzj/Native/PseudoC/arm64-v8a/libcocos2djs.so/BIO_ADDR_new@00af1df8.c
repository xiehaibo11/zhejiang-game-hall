
undefined2 * BIO_ADDR_new(void)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)CRYPTO_zalloc(0x70,"crypto/bio/b_addr.c",0x28);
  if (puVar1 != (undefined2 *)0x0) {
                    /* catch() { ... } // from try @ 00af1dec with catch @ 00af1e18 */
    *puVar1 = 0;
    return puVar1;
  }
  ERR_put_error(0x20,0x90,0x41,"crypto/bio/b_addr.c",0x2b);
  return (undefined2 *)0x0;
}

