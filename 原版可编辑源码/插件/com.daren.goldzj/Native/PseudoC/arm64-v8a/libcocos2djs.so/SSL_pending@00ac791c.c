
int SSL_pending(SSL *s)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00ac7924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*s->method->ssl_pending)(s);
  return iVar1;
}

