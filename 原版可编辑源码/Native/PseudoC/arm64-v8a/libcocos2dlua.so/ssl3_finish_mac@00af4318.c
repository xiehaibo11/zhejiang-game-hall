
uint ssl3_finish_mac(long param_1,void *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  EVP_MD_CTX *ctx;
  
  ctx = *(EVP_MD_CTX **)(*(long *)(param_1 + 0x90) + 0xe0);
  if (ctx != (EVP_MD_CTX *)0x0) {
    uVar1 = EVP_DigestUpdate(ctx,param_2,(long)param_3);
    return uVar1;
  }
  iVar2 = BIO_write(*(BIO **)(*(long *)(param_1 + 0x90) + 0xd8),param_2,param_3);
  return (uint)(iVar2 == param_3);
}

