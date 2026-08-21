
int SSL_renegotiate(SSL *s)

{
  int iVar1;
  
  if (s[1].init_off == 0) {
    s[1].init_off = 1;
  }
  s->new_session = 1;
                    /* WARNING: Could not recover jumptable at 0x00ac8554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*s->method->ssl_renegotiate_check)(s);
  return iVar1;
}

