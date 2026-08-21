
int SSL_accept(SSL *ssl)

{
  int iVar1;
  
  if (ssl->handshake_func == (_func_3149 *)0x0) {
    SSL_set_accept_state(ssl);
  }
  iVar1 = SSL_do_handshake(ssl);
  return iVar1;
}

