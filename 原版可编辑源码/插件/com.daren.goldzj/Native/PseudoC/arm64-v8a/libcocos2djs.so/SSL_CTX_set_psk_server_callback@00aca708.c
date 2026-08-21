
void SSL_CTX_set_psk_server_callback(SSL_CTX *ctx,psk_server_callback *psk_server_callback)

{
  ctx->next_protos_advertised_cb_arg = psk_server_callback;
  return;
}

