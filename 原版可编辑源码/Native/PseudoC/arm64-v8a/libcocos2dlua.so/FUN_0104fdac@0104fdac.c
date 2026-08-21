
void FUN_0104fdac(long param_1)

{
  if (*(SSL_CTX **)(param_1 + 0x1b0) != (SSL_CTX *)0x0) {
    SSL_CTX_free(*(SSL_CTX **)(param_1 + 0x1b0));
  }
  if (((*(byte *)(param_1 + 0x200) & 1) == 0) && (*(SSL_CTX **)(param_1 + 0x1b8) != (SSL_CTX *)0x0))
  {
    SSL_CTX_free(*(SSL_CTX **)(param_1 + 0x1b8));
    return;
  }
  return;
}

