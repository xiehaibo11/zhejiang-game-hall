
long SSL_SESSION_get_time(SSL_SESSION *s)

{
  long lVar1;
  
  lVar1 = 0;
  if (s != (SSL_SESSION *)0x0) {
    lVar1 = *(long *)(s->krb5_client_princ + 0x38);
  }
  return lVar1;
}

