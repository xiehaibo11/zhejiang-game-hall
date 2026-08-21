
long BUF_MEM_new_ex(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = CRYPTO_zalloc(0x20,"crypto/buffer/buffer.c",0x23);
  if (lVar1 == 0) {
                    /* catch() { ... } // from try @ 00affcc0 with catch @ 00affd08 */
    ERR_put_error(7,0x65,0x41,"crypto/buffer/buffer.c",0x25);
    lVar1 = 0;
  }
  else {
    *(undefined8 *)(lVar1 + 0x18) = param_1;
  }
  return lVar1;
}

