
COMP_METHOD * SSL_get_current_expansion(SSL *s)

{
  COMP_METHOD *pCVar1;
  
  if (s->session != (SSL_SESSION *)0x0) {
    pCVar1 = (COMP_METHOD *)COMP_CTX_get_method();
    return pCVar1;
  }
  return (COMP_METHOD *)0x0;
}

