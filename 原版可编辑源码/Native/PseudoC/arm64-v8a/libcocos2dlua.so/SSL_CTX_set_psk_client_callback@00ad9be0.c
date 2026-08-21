
void SSL_CTX_set_psk_client_callback(SSL_CTX *ctx,psk_client_callback *psk_client_callback)

{
  ctx->next_protos_advertised_cb = (_func_3103 *)psk_client_callback;
  return;
}

