
void EVP_EncodeFinal(EVP_ENCODE_CTX *ctx,uchar *out,int *outl)

{
  uint uVar1;
  uint uVar2;
  
  if (ctx->num == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = EVP_EncodeBlock(out,ctx->enc_data,ctx->num);
    uVar2 = uVar1 + 1;
    out[uVar1] = '\n';
    out[uVar2] = '\0';
    ctx->num = 0;
  }
  *outl = uVar2;
  return;
}

