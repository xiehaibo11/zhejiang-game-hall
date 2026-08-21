
X509_LOOKUP * X509_LOOKUP_new(X509_LOOKUP_METHOD *method)

{
  int iVar1;
  X509_LOOKUP *ctx;
  
  ctx = (X509_LOOKUP *)CRYPTO_zalloc(0x20,"crypto/x509/x509_lu.c",0x16);
  if (ctx != (X509_LOOKUP *)0x0) {
    ctx->method = method;
    if ((method->new_item != (_func_1834 *)0x0) && (iVar1 = (*method->new_item)(ctx), iVar1 == 0)) {
      CRYPTO_free(ctx);
      ctx = (X509_LOOKUP *)0x0;
    }
  }
  return ctx;
}

