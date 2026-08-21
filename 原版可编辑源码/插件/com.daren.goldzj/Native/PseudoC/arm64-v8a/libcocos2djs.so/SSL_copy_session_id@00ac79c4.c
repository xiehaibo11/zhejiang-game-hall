
void SSL_copy_session_id(SSL *to,SSL *from)

{
  uint uVar1;
  int iVar2;
  SSL_SESSION *session;
  SSL_METHOD *pSVar3;
  undefined1 auStack_24 [4];
  
                    /* try { // try from 00ac79c4 to 00bc7aa3 has its CatchHandler @ 00ac7868 */
  session = SSL_get_session(from);
  iVar2 = SSL_set_session(to,session);
  if (iVar2 != 0) {
    if (to->method != from->method) {
      (*to->method->ssl_accept)(to);
      pSVar3 = from->method;
      to->method = pSVar3;
      iVar2 = (*pSVar3->ssl_clear)(to);
      if (iVar2 == 0) {
        return;
      }
    }
    CRYPTO_atomic_add(from->verify_callback + 0x1d8,1,auStack_24,
                      *(undefined8 *)(from->verify_callback + 0x1e0));
    ssl_cert_free(to->verify_callback);
    to->verify_callback = from->verify_callback;
    uVar1 = *(uint *)&from->info_callback;
    if (uVar1 < 0x21) {
                    /* catch() { ... } // from try @ 00ac79bc with catch @ 00ac7a84 */
      *(uint *)&to->info_callback = uVar1;
      memcpy((void *)((long)&to->info_callback + 4),(void *)((long)&from->info_callback + 4),
             (ulong)uVar1);
    }
    else {
      ERR_put_error(0x14,0xda,0x111,"ssl/ssl_lib.c",0x2c9);
    }
  }
  return;
}

