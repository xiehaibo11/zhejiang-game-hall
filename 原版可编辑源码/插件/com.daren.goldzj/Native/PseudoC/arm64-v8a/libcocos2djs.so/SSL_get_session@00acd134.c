
SSL_SESSION * SSL_get_session(SSL *ssl)

{
  return (SSL_SESSION *)ssl->ctx;
}

