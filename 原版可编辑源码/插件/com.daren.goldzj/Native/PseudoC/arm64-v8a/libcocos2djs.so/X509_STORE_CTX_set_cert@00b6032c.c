
void X509_STORE_CTX_set_cert(X509_STORE_CTX *c,X509 *x)

{
  *(X509 **)&c->current_method = x;
  return;
}

