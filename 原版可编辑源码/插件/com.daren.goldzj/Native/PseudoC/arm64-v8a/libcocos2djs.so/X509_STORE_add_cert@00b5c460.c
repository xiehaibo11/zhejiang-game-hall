
int X509_STORE_add_cert(X509_STORE *ctx,X509 *x)

{
  bool bVar1;
  int iVar2;
  X509_OBJECT *x_00;
  X509_OBJECT *pXVar3;
  int line;
  
                    /* catch() { ... } // from try @ 00b5cb58 with catch @ 00b5c468 */
  if (x != (X509 *)0x0) {
    x_00 = (X509_OBJECT *)CRYPTO_zalloc(0x10,"crypto/x509/x509_lu.c",0x19b);
    if (x_00 == (X509_OBJECT *)0x0) {
      iVar2 = 0x96;
      line = 0x19e;
    }
    else {
      x_00->type = 1;
      (x_00->data).x509 = x;
      X509_up_ref(x);
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
        ERR_put_error(0xb,0x7c,0x65,"crypto/x509/x509_lu.c",0x146);
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
      iVar2 = 0x7c;
      line = 0x152;
    }
    ERR_put_error(0xb,iVar2,0x41,"crypto/x509/x509_lu.c",line);
  }
  return 0;
}

