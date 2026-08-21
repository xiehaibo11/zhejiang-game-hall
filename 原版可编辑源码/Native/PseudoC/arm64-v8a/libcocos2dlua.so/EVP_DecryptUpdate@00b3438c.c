
int EVP_DecryptUpdate(EVP_CIPHER_CTX *ctx,uchar *out,int *outl,uchar *in,int inl)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  EVP_CIPHER *pEVar4;
  ulong uVar5;
  
  pEVar4 = ctx->cipher;
  if ((*(byte *)((long)&pEVar4->flags + 2) >> 4 & 1) == 0) {
    if (inl < 1) {
      *outl = 0;
      return (uint)(inl == 0);
    }
    if ((ctx->flags & 0x100) != 0) {
      iVar3 = EVP_EncryptUpdate(ctx,out,outl,in,inl);
      return iVar3;
    }
    uVar1 = pEVar4->block_size;
    uVar5 = (ulong)uVar1;
    if (0x20 < uVar1) {
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: b <= sizeof ctx->final","crypto/evp/evp_enc.c",0x1c1);
    }
    if (ctx->final_used == 0) {
      bVar2 = false;
LAB_00b34514:
      iVar3 = EVP_EncryptUpdate(ctx,out,outl,in,inl);
      if (iVar3 != 0) {
        if ((uVar1 < 2) || (ctx->buf_len != 0)) {
          ctx->final_used = 0;
        }
        else {
          *outl = *outl - uVar1;
          ctx->final_used = 1;
          memcpy(ctx->final,out + *outl,uVar5);
        }
        if (bVar2) {
          *outl = *outl + uVar1;
        }
        return 1;
      }
      return 0;
    }
    if (out != in) {
      if (((out == in) || ((int)uVar1 < 1)) ||
         ((ulong)(long)(int)uVar1 <= (ulong)((long)out - (long)in) &&
          (ulong)((long)out - (long)in) <= (ulong)-(long)(int)uVar1)) {
        memcpy(out,ctx->final,uVar5);
        out = out + uVar5;
        bVar2 = true;
        goto LAB_00b34514;
      }
    }
    iVar3 = 0x1c7;
  }
  else {
    uVar5 = (ulong)inl;
    if (((inl < 1) || (out == in)) ||
       (uVar5 <= (ulong)((long)out - (long)in) && (ulong)((long)out - (long)in) <= -uVar5)) {
      iVar3 = (*pEVar4->do_cipher)(ctx,out,in,uVar5);
      if (-1 < iVar3) {
        *outl = iVar3;
        return 1;
      }
      *outl = 0;
      return 0;
    }
    iVar3 = 0x1ab;
  }
  ERR_put_error(6,0xa6,0xa2,"crypto/evp/evp_enc.c",iVar3);
  return 0;
}

