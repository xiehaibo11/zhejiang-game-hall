
int EVP_CipherInit_ex(EVP_CIPHER_CTX *ctx,EVP_CIPHER *cipher,ENGINE *impl,uchar *key,uchar *iv,
                     int enc)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  EVP_CIPHER *pEVar5;
  ulong uVar6;
  uchar *__dest;
  
  if (enc == 0) {
    iVar3 = 0;
LAB_00b33c64:
    ctx->encrypt = iVar3;
    pEVar5 = ctx->cipher;
    if (ctx->engine == (ENGINE *)0x0) goto LAB_00b33c70;
LAB_00b33c3c:
    if (pEVar5 == (EVP_CIPHER *)0x0) goto LAB_00b33c70;
    if ((cipher != (EVP_CIPHER *)0x0) && (cipher->nid != pEVar5->nid)) goto LAB_00b33c78;
LAB_00b33db8:
    uVar1 = ctx->cipher->block_size;
    if ((0x10 < uVar1) || ((1 << (ulong)(uVar1 & 0x1f) & 0x10102U) == 0)) {
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: ctx->cipher->block_size == 1 || ctx->cipher->block_size == 8 || ctx->cipher->block_size == 16"
                  ,"crypto/evp/evp_enc.c",0x99);
    }
    if ((ctx->flags & 1) == 0) {
      pEVar5 = EVP_CIPHER_CTX_cipher(ctx);
      uVar6 = EVP_CIPHER_flags(pEVar5);
      if ((uVar6 & 0xf0007) == 0x10002) {
        iVar3 = 0xaa;
        iVar2 = 0x9d;
        goto LAB_00b33fe4;
      }
    }
    pEVar5 = EVP_CIPHER_CTX_cipher(ctx);
    uVar6 = EVP_CIPHER_flags(pEVar5);
    if (((uint)uVar6 >> 4 & 1) == 0) {
      pEVar5 = EVP_CIPHER_CTX_cipher(ctx);
      uVar6 = EVP_CIPHER_flags(pEVar5);
      switch(uVar6 & 0xf0007) {
      case 0:
      case 1:
        goto switchD_00b33e6c_caseD_0;
      case 3:
      case 4:
        ctx->num = 0;
      case 2:
        iVar2 = EVP_CIPHER_CTX_iv_length(ctx);
        if (0x10 < iVar2) {
                    /* WARNING: Subroutine does not return */
          OPENSSL_die("assertion failed: EVP_CIPHER_CTX_iv_length(ctx) <= (int)sizeof(ctx->iv)",
                      "crypto/evp/evp_enc.c",0xb1);
        }
        __dest = ctx->oiv;
        if (iv != (uchar *)0x0) {
          iVar2 = EVP_CIPHER_CTX_iv_length(ctx);
          memcpy(__dest,iv,(long)iVar2);
        }
        iVar2 = EVP_CIPHER_CTX_iv_length(ctx);
        break;
      case 5:
        ctx->num = 0;
        if (iv == (uchar *)0x0) goto switchD_00b33e6c_caseD_0;
        iVar2 = EVP_CIPHER_CTX_iv_length(ctx);
        __dest = iv;
        break;
      default:
        goto LAB_00b33fec;
      }
      memcpy(ctx->iv,__dest,(long)iVar2);
    }
switchD_00b33e6c_caseD_0:
    pEVar5 = ctx->cipher;
    if ((key != (uchar *)0x0) || (((byte)pEVar5->flags >> 5 & 1) != 0)) {
      iVar3 = (*pEVar5->init)(ctx,key,iv,iVar3);
      if (iVar3 == 0) {
        return 0;
      }
      pEVar5 = ctx->cipher;
    }
    ctx->buf_len = 0;
    ctx->final_used = 0;
    ctx->block_mask = pEVar5->block_size + -1;
    return 1;
  }
  if (enc != -1) {
    iVar3 = 1;
    goto LAB_00b33c64;
  }
  iVar3 = ctx->encrypt;
  pEVar5 = ctx->cipher;
  if (ctx->engine != (ENGINE *)0x0) goto LAB_00b33c3c;
LAB_00b33c70:
  if (cipher == (EVP_CIPHER *)0x0) {
    if (pEVar5 != (EVP_CIPHER *)0x0) goto LAB_00b33db8;
    iVar3 = 0x83;
    iVar2 = 0x90;
  }
  else {
    if (pEVar5 != (EVP_CIPHER *)0x0) {
LAB_00b33c78:
      uVar6 = ctx->flags;
      if ((pEVar5->cleanup == (_func_1091 *)0x0) || (iVar2 = (*pEVar5->cleanup)(ctx), iVar2 != 0)) {
        pvVar4 = ctx->cipher_data;
        if ((pvVar4 != (void *)0x0) && (iVar2 = ctx->cipher->ctx_size, iVar2 != 0)) {
          OPENSSL_cleanse(pvVar4,(long)iVar2);
          pvVar4 = ctx->cipher_data;
        }
        CRYPTO_free(pvVar4);
        ENGINE_finish(ctx->engine);
        memset(ctx,0,0xa8);
      }
      ctx->encrypt = iVar3;
      ctx->flags = uVar6;
    }
    if (impl == (ENGINE *)0x0) {
      impl = ENGINE_get_cipher_engine(cipher->nid);
      if (impl != (ENGINE *)0x0) goto LAB_00b33d38;
    }
    else {
      iVar2 = ENGINE_init(impl);
      if (iVar2 == 0) {
        iVar3 = 0x86;
        iVar2 = 0x5f;
        goto LAB_00b33fe4;
      }
LAB_00b33d38:
      cipher = ENGINE_get_cipher(impl,cipher->nid);
      if (cipher == (EVP_CIPHER *)0x0) {
        iVar3 = 0x86;
        iVar2 = 0x6e;
        goto LAB_00b33fe4;
      }
    }
    ctx->cipher = cipher;
    ctx->engine = impl;
    if (cipher->ctx_size == 0) {
      ctx->cipher_data = (void *)0x0;
      pEVar5 = cipher;
    }
    else {
      pvVar4 = (void *)CRYPTO_zalloc((long)cipher->ctx_size,"crypto/evp/evp_enc.c",0x7e);
      ctx->cipher_data = pvVar4;
      if (pvVar4 == (void *)0x0) {
        iVar3 = 0x41;
        iVar2 = 0x80;
        goto LAB_00b33fe4;
      }
      pEVar5 = ctx->cipher;
    }
    ctx->key_len = cipher->key_len;
    ctx->flags = ctx->flags & 1;
    if (((byte)pEVar5->flags >> 6 & 1) == 0) goto LAB_00b33db8;
    if (pEVar5 == (EVP_CIPHER *)0x0) {
      iVar3 = 0x83;
      iVar2 = 0x23e;
LAB_00b33fc8:
      ERR_put_error(6,0x7c,iVar3,"crypto/evp/evp_enc.c",iVar2);
    }
    else {
      if (pEVar5->ctrl == (_func_1094 *)0x0) {
        iVar3 = 0x84;
        iVar2 = 0x243;
        goto LAB_00b33fc8;
      }
      iVar2 = (*pEVar5->ctrl)(ctx,0,0,(void *)0x0);
      if (iVar2 != 0) {
        if (iVar2 != -1) goto LAB_00b33db8;
        iVar3 = 0x85;
        iVar2 = 0x24a;
        goto LAB_00b33fc8;
      }
    }
    iVar3 = 0x86;
    iVar2 = 0x8b;
  }
LAB_00b33fe4:
  ERR_put_error(6,0x7b,iVar3,"crypto/evp/evp_enc.c",iVar2);
LAB_00b33fec:
  return 0;
}

