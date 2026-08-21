
int SSL_renegotiate_abbreviated(SSL *s)

{
  int iVar1;
  
  if (s[1].init_off == 0) {
    s[1].init_off = 1;
  }
  s->new_session = 0;
                    /* WARNING: Could not recover jumptable at 0x00ad7a5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*s->method->ssl_renegotiate_check)(s);
  return iVar1;
}

