
char * SSL_get_servername(SSL *s,int type)

{
  uchar **ppuVar1;
  _func_3094 **pp_Var2;
  
  if (type == 0) {
    ppuVar1 = &s->tlsext_ecpointformatlist;
    pp_Var2 = (_func_3094 **)ppuVar1;
    if ((s->ctx != (SSL_CTX *)0x0) && (pp_Var2 = &s->ctx->info_callback, *ppuVar1 != (uchar *)0x0))
    {
      pp_Var2 = (_func_3094 **)ppuVar1;
    }
    return (char *)*pp_Var2;
  }
  return (char *)0x0;
}

