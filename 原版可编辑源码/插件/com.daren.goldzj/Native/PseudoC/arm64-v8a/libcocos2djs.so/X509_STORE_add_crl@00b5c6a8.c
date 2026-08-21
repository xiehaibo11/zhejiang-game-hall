
int X509_STORE_add_crl(X509_STORE *ctx,X509_CRL *x)

{
  bool bVar1;
  int iVar2;
  X509_OBJECT *x_00;
  X509_OBJECT *pXVar3;
  int line;
  
  if (x != (X509_CRL *)0x0) {
    x_00 = (X509_OBJECT *)CRYPTO_zalloc(0x10,"crypto/x509/x509_lu.c",0x19b);
    if (x_00 == (X509_OBJECT *)0x0) {
      iVar2 = 0x96;
      line = 0x19e;
    }
    else {
      x_00->type = 2;
      (x_00->data).crl = x;
      X509_CRL_up_ref(x);
      CRYPTO_THREAD_write_lock(*(undefined8 *)(ctx + 1));
      pXVar3 = X509_OBJECT_retrieve_match(ctx->objs,x_00);
      if (pXVar3 == (X509_OBJECT *)0x0) {
        iVar2 = OPENSSL_sk_push(ctx->objs,x_00);
        CRYPTO_THREAD_unlock(*(undefined8 *)(ctx + 1));
        bVar1 = false;
        if (iVar2 != 0) {
          return 1;
        }
      }
      else {
        ERR_put_error(0xb,0x7d,0x65,"crypto/x509/x509_lu.c",0x168);
        CRYPTO_THREAD_unlock(*(undefined8 *)(ctx + 1));
        bVar1 = true;
      }
      if (x_00->type == 2) {
        X509_CRL_free((x_00->data).crl);
      }
      else if (x_00->type == 1) {
        X509_free((x_00->data).x509);
      }
      CRYPTO_free(x_00);
      if (bVar1) {
        return 0;
      }
      iVar2 = 0x7d;
      line = 0x174;
    }
    ERR_put_error(0xb,iVar2,0x41,"crypto/x509/x509_lu.c",line);
  }
  return 0;
}

