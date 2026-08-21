
int HMAC_Init_ex(HMAC_CTX *ctx,void *key,int len,EVP_MD *md,ENGINE *impl)

{
  void **s;
  bool bVar1;
  int iVar2;
  EVP_MD *md_00;
  EVP_MD_CTX *pEVar3;
  ulong local_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong local_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong local_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong local_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  md_00 = ctx->md;
  if (md == (EVP_MD *)0x0) {
    bVar1 = false;
    if (md_00 == (EVP_MD *)0x0) {
      return 0;
    }
    md = md_00;
    if (key != (void *)0x0) goto LAB_00b2bd58;
LAB_00b2bdc0:
    md_00 = md;
    if (!bVar1) goto LAB_00b2bf14;
  }
  else {
    if (md_00 != md) {
      if (key == (void *)0x0) {
        return 0;
      }
      if (len < 0) {
        return 0;
      }
    }
    ctx->md = md;
    bVar1 = true;
    md_00 = md;
    if (key == (void *)0x0) goto LAB_00b2bdc0;
LAB_00b2bd58:
    iVar2 = EVP_MD_block_size(md_00);
    if (0x80 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: j <= (int)sizeof(ctx->key)","crypto/hmac/hmac.c",0x28);
    }
    if (iVar2 < len) {
      iVar2 = EVP_DigestInit_ex((EVP_MD_CTX *)(ctx->md_ctx).digest,md_00,impl);
      if (iVar2 == 0) {
        return 0;
      }
      iVar2 = EVP_DigestUpdate((EVP_MD_CTX *)(ctx->md_ctx).digest,key,(long)len);
      if (iVar2 == 0) {
        return 0;
      }
      s = &(ctx->md_ctx).md_data;
      iVar2 = EVP_DigestFinal_ex((EVP_MD_CTX *)(ctx->md_ctx).digest,
                                 (uchar *)((long)&(ctx->md_ctx).md_data + 4),(uint *)s);
      if (iVar2 == 0) {
        return 0;
      }
      len = *(int *)s;
    }
    else {
      if (0x80 < (uint)len) {
        return 0;
      }
      memcpy((void *)((long)&(ctx->md_ctx).md_data + 4),key,(long)len);
      *(int *)&(ctx->md_ctx).md_data = len;
    }
    if (len != 0x80) {
      memset(ctx->key + ((ulong)(uint)len - 0x78),0,(ulong)(0x80 - len));
    }
  }
  local_c0 = *(ulong *)((long)&(ctx->md_ctx).md_data + 4) ^ 0x3636363636363636;
  uStack_b8 = *(ulong *)((long)&(ctx->md_ctx).pctx + 4) ^ 0x3636363636363636;
  uStack_b0 = *(ulong *)((long)&(ctx->md_ctx).update + 4) ^ 0x3636363636363636;
  uStack_a8 = *(ulong *)((long)&(ctx->i_ctx).digest + 4) ^ 0x3636363636363636;
  local_a0 = *(ulong *)((long)&(ctx->i_ctx).engine + 4) ^ 0x3636363636363636;
  uStack_98 = *(ulong *)((long)&(ctx->i_ctx).flags + 4) ^ 0x3636363636363636;
  uStack_90 = *(ulong *)((long)&(ctx->i_ctx).md_data + 4) ^ 0x3636363636363636;
  uStack_88 = *(ulong *)((long)&(ctx->i_ctx).pctx + 4) ^ 0x3636363636363636;
  local_80 = *(ulong *)((long)&(ctx->i_ctx).update + 4) ^ 0x3636363636363636;
  uStack_78 = *(ulong *)((long)&(ctx->o_ctx).digest + 4) ^ 0x3636363636363636;
  uStack_70 = *(ulong *)((long)&(ctx->o_ctx).engine + 4) ^ 0x3636363636363636;
  uStack_68 = *(ulong *)((long)&(ctx->o_ctx).flags + 4) ^ 0x3636363636363636;
  local_60 = *(ulong *)((long)&(ctx->o_ctx).md_data + 4) ^ 0x3636363636363636;
  uStack_58 = *(ulong *)((long)&(ctx->o_ctx).pctx + 4) ^ 0x3636363636363636;
  uStack_50 = *(ulong *)((long)&(ctx->o_ctx).update + 4) ^ 0x3636363636363636;
  uStack_48 = *(ulong *)ctx->key ^ 0x3636363636363636;
  iVar2 = EVP_DigestInit_ex((EVP_MD_CTX *)(ctx->md_ctx).engine,md_00,impl);
  if (iVar2 == 0) {
    return 0;
  }
  pEVar3 = (EVP_MD_CTX *)(ctx->md_ctx).engine;
  iVar2 = EVP_MD_block_size(md_00);
  iVar2 = EVP_DigestUpdate(pEVar3,&local_c0,(long)iVar2);
  if (iVar2 == 0) {
    return 0;
  }
  local_c0 = *(ulong *)((long)&(ctx->md_ctx).md_data + 4) ^ 0x5c5c5c5c5c5c5c5c;
  uStack_b8 = *(ulong *)((long)&(ctx->md_ctx).pctx + 4) ^ 0x5c5c5c5c5c5c5c5c;
  uStack_b0 = *(ulong *)((long)&(ctx->md_ctx).update + 4) ^ 0x5c5c5c5c5c5c5c5c;
  uStack_a8 = *(ulong *)((long)&(ctx->i_ctx).digest + 4) ^ 0x5c5c5c5c5c5c5c5c;
  local_a0 = *(ulong *)((long)&(ctx->i_ctx).engine + 4) ^ 0x5c5c5c5c5c5c5c5c;
  uStack_98 = *(ulong *)((long)&(ctx->i_ctx).flags + 4) ^ 0x5c5c5c5c5c5c5c5c;
  uStack_90 = *(ulong *)((long)&(ctx->i_ctx).md_data + 4) ^ 0x5c5c5c5c5c5c5c5c;
  uStack_88 = *(ulong *)((long)&(ctx->i_ctx).pctx + 4) ^ 0x5c5c5c5c5c5c5c5c;
  local_80 = *(ulong *)((long)&(ctx->i_ctx).update + 4) ^ 0x5c5c5c5c5c5c5c5c;
  uStack_78 = *(ulong *)((long)&(ctx->o_ctx).digest + 4) ^ 0x5c5c5c5c5c5c5c5c;
  uStack_70 = *(ulong *)((long)&(ctx->o_ctx).engine + 4) ^ 0x5c5c5c5c5c5c5c5c;
  uStack_68 = *(ulong *)((long)&(ctx->o_ctx).flags + 4) ^ 0x5c5c5c5c5c5c5c5c;
  local_60 = *(ulong *)((long)&(ctx->o_ctx).md_data + 4) ^ 0x5c5c5c5c5c5c5c5c;
  uStack_58 = *(ulong *)((long)&(ctx->o_ctx).pctx + 4) ^ 0x5c5c5c5c5c5c5c5c;
  uStack_50 = *(ulong *)((long)&(ctx->o_ctx).update + 4) ^ 0x5c5c5c5c5c5c5c5c;
  uStack_48 = *(ulong *)ctx->key ^ 0x5c5c5c5c5c5c5c5c;
  iVar2 = EVP_DigestInit_ex((EVP_MD_CTX *)(ctx->md_ctx).flags,md_00,impl);
  if (iVar2 == 0) {
    return 0;
  }
  pEVar3 = (EVP_MD_CTX *)(ctx->md_ctx).flags;
  iVar2 = EVP_MD_block_size(md_00);
  iVar2 = EVP_DigestUpdate(pEVar3,&local_c0,(long)iVar2);
  if (iVar2 == 0) {
    return 0;
  }
LAB_00b2bf14:
  iVar2 = EVP_MD_CTX_copy_ex((EVP_MD_CTX *)(ctx->md_ctx).digest,(EVP_MD_CTX *)(ctx->md_ctx).engine);
  if (iVar2 == 0) {
    return 0;
  }
  return 1;
}

