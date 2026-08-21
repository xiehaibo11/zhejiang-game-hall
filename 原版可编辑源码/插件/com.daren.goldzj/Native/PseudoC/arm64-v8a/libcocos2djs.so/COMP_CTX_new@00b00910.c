
COMP_CTX * COMP_CTX_new(COMP_METHOD *meth)

{
  int iVar1;
  COMP_CTX *ctx;
  
  ctx = (COMP_CTX *)CRYPTO_zalloc(0x30,"crypto/comp/comp_lib.c",0x15);
  if (ctx != (COMP_CTX *)0x0) {
    ctx->meth = meth;
    if ((meth->init != (_func_569 *)0x0) && (iVar1 = (*meth->init)(ctx), iVar1 == 0)) {
      CRYPTO_free(ctx);
      ctx = (COMP_CTX *)0x0;
    }
  }
  return ctx;
}

