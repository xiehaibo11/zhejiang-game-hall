
long SCT_CTX_new(void)

{
  long lVar1;
  
  lVar1 = CRYPTO_zalloc(0x48,"crypto/ct/ct_sct_ctx.c",0x19);
  if (lVar1 == 0) {
    ERR_put_error(0x32,0x7e,0x41,"crypto/ct/ct_sct_ctx.c",0x1c);
  }
  return lVar1;
}

