
int lws_ssl_pending(long param_1)

{
  int iVar1;
  
  if (*(SSL **)(param_1 + 0x2b0) != (SSL *)0x0) {
    iVar1 = SSL_pending(*(SSL **)(param_1 + 0x2b0));
    return iVar1;
  }
  return 0;
}

