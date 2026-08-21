
void SSL_set_psk_client_callback(SSL *ssl,psk_client_callback *psk_client_callback)

{
  *(psk_client_callback **)&ssl->references = psk_client_callback;
  return;
}

