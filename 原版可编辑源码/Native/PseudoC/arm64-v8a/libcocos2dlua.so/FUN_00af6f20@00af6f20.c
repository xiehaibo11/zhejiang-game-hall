
ulong FUN_00af6f20(byte *param_1,char *param_2)

{
  int iVar1;
  ulong uVar2;
  SSL *ssl;
  
  if ((*param_1 >> 5 & 1) == 0) {
    uVar2 = 0xfffffffe;
  }
  else {
    if (*(SSL_CTX **)(param_1 + 0x18) == (SSL_CTX *)0x0) {
      iVar1 = 1;
      ssl = *(SSL **)(param_1 + 0x20);
    }
    else {
      iVar1 = SSL_CTX_use_PrivateKey_file(*(SSL_CTX **)(param_1 + 0x18),param_2,1);
      ssl = *(SSL **)(param_1 + 0x20);
    }
    if (ssl != (SSL *)0x0) {
      iVar1 = SSL_use_PrivateKey_file(ssl,param_2,1);
    }
    uVar2 = (ulong)(0 < iVar1);
  }
  return uVar2;
}

