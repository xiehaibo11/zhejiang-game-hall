
long SSL_SESSION_get_timeout(SSL_SESSION *s)

{
  long lVar1;
  
  lVar1 = 0;
  if (s != (SSL_SESSION *)0x0) {
    lVar1 = *(long *)(s->krb5_client_princ + 0x30);
  }
  return lVar1;
}

