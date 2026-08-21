
int SSL_get_verify_depth(SSL *s)

{
  int iVar1;
  
  iVar1 = X509_VERIFY_PARAM_get_depth((X509_VERIFY_PARAM *)s->cipher_list);
  return iVar1;
}

