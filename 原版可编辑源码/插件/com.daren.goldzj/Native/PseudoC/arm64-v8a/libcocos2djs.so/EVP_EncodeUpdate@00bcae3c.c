
void EVP_EncodeUpdate(EVP_ENCODE_CTX *ctx,uchar *out,int *outl,uchar *in,int inl)

{
  uchar *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  size_t __n;
  ulong uVar5;
  
  *outl = 0;
  if (inl < 1) {
    return;
  }
  iVar3 = ctx->length;
  if (0x50 < iVar3) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: ctx->length <= (int)sizeof(ctx->enc_data)","crypto/evp/encode.c",
                0x86);
  }
  lVar4 = (long)ctx->num;
  __n = iVar3 - lVar4;
  if (inl < (int)__n) {
    memcpy(ctx->enc_data + lVar4,in,(long)inl);
    ctx->num = ctx->num + inl;
    return;
  }
  if (ctx->num == 0) {
    uVar5 = 0;
  }
  else {
    memcpy(ctx->enc_data + lVar4,in,__n);
    in = in + __n;
    inl = inl - (int)__n;
    iVar2 = EVP_EncodeBlock(out,ctx->enc_data,ctx->length);
    puVar1 = out + iVar2;
    ctx->num = 0;
    out = puVar1 + 1;
    puVar1[0] = '\n';
    puVar1[1] = '\0';
    iVar3 = ctx->length;
    uVar5 = (ulong)(iVar2 + 1);
    if (uVar5 >> 0x1f != 0) goto LAB_00bcaf6c;
  }
  if (iVar3 <= inl) {
    do {
      iVar3 = EVP_EncodeBlock(out,in,iVar3);
      puVar1 = out + iVar3;
      uVar5 = uVar5 + (long)(iVar3 + 1);
      in = in + ctx->length;
      inl = inl - ctx->length;
      out = puVar1 + 1;
      puVar1[0] = '\n';
      puVar1[1] = '\0';
      if (uVar5 >> 0x1f != 0) break;
      iVar3 = ctx->length;
    } while (iVar3 <= inl);
  }
LAB_00bcaf6c:
  if (uVar5 >> 0x1f == 0) {
    if (inl != 0) {
      memcpy(ctx->enc_data,in,(long)inl);
    }
    ctx->num = inl;
    *outl = (int)uVar5;
  }
  else {
    *outl = 0;
  }
  return;
}

