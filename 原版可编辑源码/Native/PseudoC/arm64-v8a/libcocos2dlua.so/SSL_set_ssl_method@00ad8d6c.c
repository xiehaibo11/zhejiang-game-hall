
int SSL_set_ssl_method(SSL *s,SSL_METHOD *method)

{
  int iVar1;
  _func_3058 **pp_Var2;
  SSL_METHOD *pSVar3;
  _func_3058 *p_Var4;
  
                    /* try { // try from 00ad8d6c to 00bd8d8f has its CatchHandler @ 00ad8dc8 */
  pSVar3 = s->method;
  if (pSVar3 == method) {
    iVar1 = 1;
  }
  else {
                    /* try { // try from 00ad8d90 to 00bd8de3 has its CatchHandler @ 00ad8d24 */
    p_Var4 = (_func_3058 *)s->handshake_func;
    if (pSVar3->version == method->version) {
      s->method = method;
      iVar1 = 1;
    }
    else {
      (*pSVar3->ssl_accept)(s);
      s->method = method;
                    /* catch() { ... } // from try @ 00ad8d6c with catch @ 00ad8dc8 */
      iVar1 = (*method->ssl_clear)(s);
    }
    if (p_Var4 == pSVar3->ssl_read) {
      pp_Var2 = &method->ssl_read;
    }
    else {
                    /* try { // try from 00ad8de4 to 00bd8e77 has its CatchHandler @ 00ad8de4
                       catch() { ... } // from try @ 00ad8de4 with catch @ 00ad8de4
                       catch() { ... } // from try @ 00ad8e80 with catch @ 00ad8de4 */
      if (p_Var4 != (_func_3058 *)pSVar3->ssl_connect) {
        return iVar1;
      }
      pp_Var2 = (_func_3058 **)&method->ssl_connect;
    }
    s->handshake_func = (_func_3149 *)*pp_Var2;
  }
  return iVar1;
}

