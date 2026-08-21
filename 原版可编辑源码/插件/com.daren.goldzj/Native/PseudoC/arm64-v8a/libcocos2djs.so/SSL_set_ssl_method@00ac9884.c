
int SSL_set_ssl_method(SSL *s,SSL_METHOD *method)

{
  int iVar1;
  _func_3058 **pp_Var2;
  SSL_METHOD *pSVar3;
  _func_3058 *p_Var4;
  
  pSVar3 = s->method;
  if (pSVar3 == method) {
    iVar1 = 1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ac974c with catch @ 00ac98cc
                        */
  }
  else {
    p_Var4 = (_func_3058 *)s->handshake_func;
    if (pSVar3->version == method->version) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ac9808 with catch @ 00ac98bc
                        */
      s->method = method;
      iVar1 = 1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ac9784 with catch @ 00ac98c4
                        */
    }
    else {
      (*pSVar3->ssl_accept)(s);
      s->method = method;
      iVar1 = (*method->ssl_clear)(s);
    }
    if (p_Var4 == pSVar3->ssl_read) {
      pp_Var2 = &method->ssl_read;
    }
    else {
      if (p_Var4 != (_func_3058 *)pSVar3->ssl_connect) {
        return iVar1;
      }
      pp_Var2 = (_func_3058 **)&method->ssl_connect;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ac972c with catch @ 00ac9908
                        */
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ac984c with catch @ 00ac9910
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ac97c8 with catch @ 00ac9914
                        */
    s->handshake_func = (_func_3149 *)*pp_Var2;
  }
  return iVar1;
}

