
int SSL_set_session(SSL *to,SSL_SESSION *session)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_24 [4];
  
  if ((((to->ctx != (SSL_CTX *)0x0) && ((to->shutdown & 1) == 0)) &&
      (iVar1 = SSL_in_init(to), iVar1 == 0)) && (iVar1 = SSL_in_before(to), iVar1 == 0)) {
    FUN_00ace01c(to[1].bbio,to->ctx,1);
  }
  if ((*(SSL_METHOD **)to->mode == to->method) ||
     (iVar2 = SSL_set_ssl_method(to,*(SSL_METHOD **)to->mode), iVar1 = 0, iVar2 != 0)) {
    if (session != (SSL_SESSION *)0x0) {
      CRYPTO_atomic_add(session->krb5_client_princ + 0x28,1,auStack_24,
                        *(undefined8 *)(session->krb5_client_princ + 200));
      uVar3 = *(undefined8 *)(session->krb5_client_princ + 0x20);
      to->first_packet = (int)uVar3;
      to->client_version = (int)((ulong)uVar3 >> 0x20);
    }
    SSL_SESSION_free((SSL_SESSION *)to->ctx);
    iVar1 = 1;
    to->ctx = (SSL_CTX *)session;
  }
  return iVar1;
}

