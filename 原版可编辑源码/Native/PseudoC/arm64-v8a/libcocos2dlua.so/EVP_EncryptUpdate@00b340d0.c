
int EVP_EncryptUpdate(EVP_CIPHER_CTX *ctx,uchar *out,int *outl,uchar *in,int inl)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  EVP_CIPHER *pEVar6;
  
  pEVar6 = ctx->cipher;
  if ((*(byte *)((long)&pEVar6->flags + 2) >> 4 & 1) == 0) {
    if (inl < 1) {
      *outl = 0;
      return (uint)(inl == 0);
    }
    uVar5 = (ulong)inl;
    if ((out == in) ||
       (uVar5 <= (ulong)((long)out - (long)in) && (ulong)((long)out - (long)in) <= -uVar5)) {
      iVar4 = ctx->buf_len;
      if ((iVar4 == 0) && ((ctx->block_mask & inl) == 0)) {
        iVar4 = (*pEVar6->do_cipher)(ctx,out,in,uVar5);
        if (iVar4 == 0) {
          *outl = 0;
          return 0;
        }
        *outl = inl;
      }
      else {
        iVar2 = pEVar6->block_size;
        if (0x20 < iVar2) {
                    /* WARNING: Subroutine does not return */
          OPENSSL_die("assertion failed: bl <= (int)sizeof(ctx->buf)","crypto/evp/evp_enc.c",0x14d);
        }
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else {
          iVar3 = iVar2 - iVar4;
          if (inl < iVar3) {
            memcpy(ctx->buf + iVar4,in,uVar5);
            ctx->buf_len = ctx->buf_len + inl;
            *outl = 0;
            return 1;
          }
          uVar5 = (ulong)iVar2;
          memcpy(ctx->buf + iVar4,in,(long)iVar3);
          in = in + iVar3;
          if (((0 < iVar2) && (out != in)) &&
             ((ulong)((long)out - (long)in) < uVar5 || -uVar5 < (ulong)((long)out - (long)in))) {
            iVar4 = 0x15a;
            goto LAB_00b341a0;
          }
          iVar4 = (*ctx->cipher->do_cipher)(ctx,out,ctx->buf,uVar5);
          if (iVar4 == 0) {
            return 0;
          }
          inl = inl - iVar3;
          out = out + uVar5;
          iVar4 = iVar2;
        }
        uVar1 = inl & iVar2 - 1U;
        iVar2 = inl - uVar1;
        *outl = iVar4;
        if (0 < iVar2) {
          iVar4 = (*ctx->cipher->do_cipher)(ctx,out,in,(long)iVar2);
          if (iVar4 == 0) {
            return 0;
          }
          *outl = *outl + iVar2;
        }
        if (uVar1 != 0) {
          memcpy(ctx->buf,in + iVar2,(long)(int)uVar1);
        }
        ctx->buf_len = uVar1;
      }
      return 1;
    }
    iVar4 = 0x13e;
  }
  else {
    uVar5 = (ulong)inl;
    if (((inl < 1) || (out == in)) ||
       (uVar5 <= (ulong)((long)out - (long)in) && (ulong)((long)out - (long)in) <= -uVar5)) {
      iVar4 = (*pEVar6->do_cipher)(ctx,out,in,uVar5);
      if (-1 < iVar4) {
        *outl = iVar4;
        return 1;
      }
      return 0;
    }
    iVar4 = 0x12d;
  }
LAB_00b341a0:
  ERR_put_error(6,0xa7,0xa2,"crypto/evp/evp_enc.c",iVar4);
  return 0;
}

