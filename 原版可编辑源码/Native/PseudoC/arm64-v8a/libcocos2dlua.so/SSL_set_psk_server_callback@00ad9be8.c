
void SSL_set_psk_server_callback(SSL *ssl,psk_server_callback *psk_server_callback)

{
  ssl->options = (ulong)psk_server_callback;
  return;
}

