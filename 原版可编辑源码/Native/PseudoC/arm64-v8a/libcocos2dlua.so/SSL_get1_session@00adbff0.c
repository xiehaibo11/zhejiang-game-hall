
SSL_SESSION * SSL_get1_session(SSL *ssl)

{
  SSL_CTX *pSVar1;
  undefined1 auStack_24 [4];
  
  CRYPTO_THREAD_read_lock(ssl[6].session);
  pSVar1 = ssl->ctx;
  if (pSVar1 != (SSL_CTX *)0x0) {
    CRYPTO_atomic_add(&pSVar1->client_cert_cb,1,auStack_24,*(undefined8 *)pSVar1->sid_ctx);
  }
  CRYPTO_THREAD_unlock(ssl[6].session);
  return (SSL_SESSION *)pSVar1;
}

