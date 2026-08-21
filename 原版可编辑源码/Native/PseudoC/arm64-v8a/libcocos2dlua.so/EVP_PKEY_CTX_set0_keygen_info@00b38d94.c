
void EVP_PKEY_CTX_set0_keygen_info(EVP_PKEY_CTX *ctx,int *dat,int datlen)

{
  *(int **)(ctx + 0x40) = dat;
  *(int *)(ctx + 0x48) = datlen;
  return;
}

