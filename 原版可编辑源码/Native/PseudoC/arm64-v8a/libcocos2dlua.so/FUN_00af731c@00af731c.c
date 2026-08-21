
bool FUN_00af731c(long param_1,char *param_2)

{
  int iVar1;
  SSL *s;
  
  if (*(SSL_CTX **)(param_1 + 0x18) == (SSL_CTX *)0x0) {
    iVar1 = 1;
    s = *(SSL **)(param_1 + 0x20);
  }
  else {
    iVar1 = SSL_CTX_set_cipher_list(*(SSL_CTX **)(param_1 + 0x18),param_2);
    s = *(SSL **)(param_1 + 0x20);
  }
  if (s != (SSL *)0x0) {
    iVar1 = SSL_set_cipher_list(s,param_2);
  }
  return 0 < iVar1;
}

