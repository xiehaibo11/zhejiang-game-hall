
int SSL_set1_param(SSL *ssl,X509_VERIFY_PARAM *vpm)

{
  int iVar1;
  
  iVar1 = X509_VERIFY_PARAM_set1((X509_VERIFY_PARAM *)ssl->cipher_list,vpm);
  return iVar1;
}

