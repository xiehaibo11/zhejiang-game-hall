
int EVP_EncryptFinal_ex(EVP_CIPHER_CTX *ctx,uchar *out,int *outl)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  EVP_CIPHER *pEVar4;
  
  pEVar4 = ctx->cipher;
  if ((*(byte *)((long)&pEVar4->flags + 2) >> 4 & 1) == 0) {
    uVar1 = pEVar4->block_size;
    if (0x20 < uVar1) {
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: b <= sizeof ctx->buf","crypto/evp/evp_enc.c",0x188);
    }
    if (uVar1 - 1 != 0) {
      uVar2 = ctx->buf_len;
      if ((ctx->flags & 0x100) == 0) {
        if (uVar2 < uVar1) {
          memset(ctx->buf + uVar2,uVar1 - uVar2,(ulong)((uVar1 - 1) - uVar2) + 1);
        }
        iVar3 = (*pEVar4->do_cipher)(ctx,out,ctx->buf,(size_t)uVar1);
        if (iVar3 == 0) {
          return 0;
        }
        *outl = uVar1;
        return iVar3;
      }
      if (uVar2 != 0) {
        ERR_put_error(6,0x7f,0x8a,"crypto/evp/evp_enc.c",0x191);
        goto LAB_00b2622c;
      }
    }
    *outl = 0;
    iVar3 = 1;
  }
  else {
    iVar3 = (*pEVar4->do_cipher)(ctx,out,(uchar *)0x0,0);
    if (-1 < iVar3) {
      *outl = iVar3;
      return 1;
    }
LAB_00b2622c:
    iVar3 = 0;
  }
  return iVar3;
}

