
void SSL_set_client_CA_list(SSL *s,stack_st_X509_NAME *name_list)

{
  OPENSSL_sk_pop_free(s->tlsext_debug_cb,X509_NAME_free);
  s->tlsext_debug_cb = (_func_3155 *)name_list;
  return;
}

