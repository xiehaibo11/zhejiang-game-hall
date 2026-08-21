
int EVP_CIPHER_CTX_rand_key(EVP_CIPHER_CTX *ctx,uchar *key)

{
  int iVar1;
  int line;
  EVP_CIPHER *pEVar2;
  
  pEVar2 = ctx->cipher;
  if ((*(byte *)((long)&pEVar2->flags + 1) >> 1 & 1) == 0) {
    iVar1 = RAND_bytes(key,ctx->key_len);
    return (int)(0 < iVar1);
  }
  if (pEVar2 == (EVP_CIPHER *)0x0) {
    iVar1 = 0x83;
    line = 0x23e;
  }
  else if (pEVar2->ctrl == (_func_1094 *)0x0) {
    iVar1 = 0x84;
    line = 0x243;
  }
  else {
    iVar1 = (*pEVar2->ctrl)(ctx,6,0,key);
    if (iVar1 != -1) {
      return iVar1;
    }
    iVar1 = 0x85;
    line = 0x24a;
  }
  ERR_put_error(6,0x7c,iVar1,"crypto/evp/evp_enc.c",line);
  return 0;
}

