
undefined4 * SCT_new(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)CRYPTO_zalloc(0x68,"crypto/ct/ct_sct.c",0x18);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[0x16] = 0xffffffff;
    *puVar1 = 0xffffffff;
    return puVar1;
  }
  ERR_put_error(0x32,100,0x41,"crypto/ct/ct_sct.c",0x1b);
  return (undefined4 *)0x0;
}

