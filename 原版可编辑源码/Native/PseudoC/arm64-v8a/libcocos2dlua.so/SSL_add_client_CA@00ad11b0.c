
int SSL_add_client_CA(SSL *ssl,X509 *x)

{
  int iVar1;
  _func_3155 *p_Var2;
  X509_NAME *pXVar3;
  
  if (x != (X509 *)0x0) {
    if (ssl->tlsext_debug_cb == (_func_3155 *)0x0) {
      p_Var2 = (_func_3155 *)OPENSSL_sk_new_null();
      ssl->tlsext_debug_cb = p_Var2;
      if (p_Var2 == (_func_3155 *)0x0) {
        return 0;
      }
    }
    pXVar3 = X509_get_subject_name(x);
    pXVar3 = X509_NAME_dup(pXVar3);
    if (pXVar3 == (X509_NAME *)0x0) {
      return 0;
    }
    iVar1 = OPENSSL_sk_push(ssl->tlsext_debug_cb,pXVar3);
    if (iVar1 != 0) {
      return 1;
    }
    X509_NAME_free(pXVar3);
  }
  return 0;
}

