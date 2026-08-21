
int EVP_DigestInit_ex(EVP_MD_CTX *ctx,EVP_MD *type,ENGINE *impl)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  EVP_MD *pEVar4;
  
  EVP_MD_CTX_clear_flags(ctx,2);
  if ((ctx->engine == (ENGINE *)0x0) || (ctx->digest == (EVP_MD *)0x0)) {
    if (type != (EVP_MD *)0x0) goto LAB_00b2d3e4;
    if (ctx->digest != (EVP_MD *)0x0) goto LAB_00b2d4cc;
    ERR_put_error(6,0x80,0x8b,"crypto/evp/digest.c",0x6e);
LAB_00b2d550:
    iVar2 = 0;
  }
  else {
    if ((type != (EVP_MD *)0x0) && (type->type != ctx->digest->type)) {
LAB_00b2d3e4:
      ENGINE_finish(ctx->engine);
      if (impl == (ENGINE *)0x0) {
        impl = ENGINE_get_digest_engine(type->type);
        if (impl != (ENGINE *)0x0) goto LAB_00b2d450;
      }
      else {
        iVar2 = ENGINE_init(impl);
        if (iVar2 == 0) {
          ERR_put_error(6,0x80,0x86,"crypto/evp/digest.c",0x53);
          goto LAB_00b2d550;
        }
LAB_00b2d450:
        type = ENGINE_get_digest(impl,type->type);
        if (type == (EVP_MD *)0x0) {
          ERR_put_error(6,0x80,0x86,"crypto/evp/digest.c",0x5f);
          ENGINE_finish(impl);
          goto LAB_00b2d550;
        }
      }
      pEVar4 = ctx->digest;
      ctx->engine = impl;
      if (pEVar4 != type) {
        if ((pEVar4 != (EVP_MD *)0x0) && (iVar2 = *(int *)((long)&pEVar4->sign + 4), iVar2 != 0)) {
          CRYPTO_clear_free(ctx->md_data,(long)iVar2,"crypto/evp/digest.c",0x76);
          ctx->md_data = (void *)0x0;
        }
        ctx->digest = type;
        if (((ctx->flags & 0x100) == 0) && (iVar2 = *(int *)((long)&type->sign + 4), iVar2 != 0)) {
          ctx->update = (_func_1088 *)type->update;
          pvVar3 = (void *)CRYPTO_zalloc((long)iVar2,"crypto/evp/digest.c",0x7c);
          ctx->md_data = pvVar3;
          if (pvVar3 == (void *)0x0) {
            ERR_put_error(6,0x80,0x41,"crypto/evp/digest.c",0x7e);
            goto LAB_00b2d550;
          }
        }
      }
    }
LAB_00b2d4cc:
    if (((ctx->pctx == (EVP_PKEY_CTX *)0x0) ||
        (iVar1 = EVP_PKEY_CTX_ctrl(ctx->pctx,-1,0xf8,7,0,ctx), iVar1 == -2)) ||
       (iVar2 = 0, 0 < iVar1)) {
      if ((ctx->flags & 0x100) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00b2d520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar2 = (*ctx->digest->init)(ctx);
        return iVar2;
      }
      iVar2 = 1;
    }
  }
  return iVar2;
}

