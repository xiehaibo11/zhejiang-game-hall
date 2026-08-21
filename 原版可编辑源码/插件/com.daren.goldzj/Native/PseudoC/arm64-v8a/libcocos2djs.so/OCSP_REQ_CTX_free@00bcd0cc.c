
void OCSP_REQ_CTX_free(OCSP_REQ_CTX *rctx)

{
  if (rctx != (OCSP_REQ_CTX *)0x0) {
    BIO_free(*(BIO **)(rctx + 0x20));
    CRYPTO_free(*(void **)(rctx + 8));
    CRYPTO_free(rctx);
    return;
  }
  return;
}

