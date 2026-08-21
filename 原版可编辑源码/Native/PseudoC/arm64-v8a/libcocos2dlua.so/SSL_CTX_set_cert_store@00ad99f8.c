
void SSL_CTX_set_cert_store(SSL_CTX *param_1,X509_STORE *param_2)

{
  X509_STORE_free(param_1->cert_store);
  param_1->cert_store = param_2;
                    /* try { // try from 00ad9a18 to 00bd9a2f has its CatchHandler @ 00ad9aa0 */
  return;
}

