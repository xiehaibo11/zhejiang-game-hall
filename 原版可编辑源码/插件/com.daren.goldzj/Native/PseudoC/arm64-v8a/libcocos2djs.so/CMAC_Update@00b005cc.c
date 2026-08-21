
int CMAC_Update(CMAC_CTX *ctx,void *data,size_t dlen)

{
  size_t __n;
  uint inl;
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (*(int *)(ctx + 0x88) == -1) {
    return 0;
  }
  if (dlen != 0) {
    inl = EVP_CIPHER_CTX_block_size(*(EVP_CIPHER_CTX **)ctx);
    iVar1 = *(int *)(ctx + 0x88);
    uVar3 = (ulong)(int)inl;
    if (0 < iVar1) {
      uVar2 = uVar3 - (long)iVar1;
      __n = dlen;
      if (uVar2 <= dlen) {
        __n = uVar2;
      }
      memcpy(ctx + (long)iVar1 + 0x68,data,__n);
      dlen = dlen - __n;
      *(int *)(ctx + 0x88) = (int)__n + *(int *)(ctx + 0x88);
      if (dlen == 0) {
        return 1;
      }
      iVar1 = EVP_Cipher(*(EVP_CIPHER_CTX **)ctx,(uchar *)(ctx + 0x48),(uchar *)(ctx + 0x68),inl);
      if (iVar1 == 0) {
        return 0;
      }
      data = (void *)((long)data + __n);
    }
    if (uVar3 < dlen) {
      do {
        iVar1 = EVP_Cipher(*(EVP_CIPHER_CTX **)ctx,(uchar *)(ctx + 0x48),data,inl);
        if (iVar1 == 0) {
          return 0;
        }
        dlen = dlen - uVar3;
        data = (void *)((long)data + uVar3);
      } while (uVar3 < dlen);
    }
    memcpy(ctx + 0x68,data,dlen);
    *(int *)(ctx + 0x88) = (int)dlen;
  }
  return 1;
}

