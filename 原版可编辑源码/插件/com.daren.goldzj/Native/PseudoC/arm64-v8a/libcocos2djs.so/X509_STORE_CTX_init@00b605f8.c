
int X509_STORE_CTX_init(X509_STORE_CTX *ctx,X509_STORE *store,X509 *x509,stack_st_X509 *chain)

{
  _func_1846 *p_Var1;
  _func_1845 *p_Var2;
  _func_1844 *p_Var3;
  _func_1843 *p_Var4;
  _func_1858 *p_Var5;
  _func_1860 *p_Var6;
  _func_1850 *p_Var7;
  _func_1862 *p_Var8;
  _func_1852 *p_Var9;
  int iVar10;
  X509_VERIFY_PARAM *to;
  X509_VERIFY_PARAM *from;
  X509_PURPOSE *xp;
  undefined8 uVar11;
  X509_NAME *nm;
  code *pcVar12;
  long lVar13;
  
  ctx->ctx = store;
  *(X509 **)&ctx->current_method = x509;
  ctx->cert = (X509 *)chain;
  ctx->untrusted = (stack_st_X509 *)0x0;
  ctx->param = (X509_VERIFY_PARAM *)0x0;
  ctx->explicit_policy = 0;
  (ctx->ex_data).sk = (stack_st_void *)0x0;
  (ctx->ex_data).dummy = 0;
  ctx->valid = 0;
  ctx->last_untrusted = 0;
  ctx->cleanup = (_func_1866 *)0x0;
  ctx->tree = (X509_POLICY_TREE *)0x0;
  ctx->chain = (stack_st_X509 *)0x0;
  ctx->parent = (X509_STORE_CTX *)0x0;
  ctx->current_crl_score = 0;
  ctx->current_reasons = 0;
  ctx->current_cert = (X509 *)0x0;
  *(undefined8 *)&ctx->error = 0;
  ctx->current_crl = (X509_CRL *)0x0;
  ctx->current_issuer = (X509 *)0x0;
  if (store == (X509_STORE *)0x0) {
    ctx->lookup_crls = (_func_1865 *)0x0;
    ctx->verify_cb = X509_STORE_CTX_get1_issuer;
    ctx->get_issuer = (_func_1857 *)&LAB_00b60908;
    ctx->other_ctx = FUN_00b609f0;
    ctx->verify = (_func_1855 *)&DAT_00b609ec;
    ctx->get_crl = (_func_1860 *)&LAB_00b60ea8;
    ctx->check_crl = (_func_1861 *)&LAB_00b611c4;
    ctx->check_issued = FUN_00b60be8;
    ctx->check_revocation = (_func_1859 *)0x0;
    ctx->cert_crl = (_func_1862 *)&LAB_00b6126c;
    ctx->check_policy = X509_STORE_CTX_get1_certs;
LAB_00b60798:
    pcVar12 = X509_STORE_CTX_get1_crls;
  }
  else {
    ctx->lookup_crls = (_func_1865 *)(store->ex_data).sk;
    p_Var1 = (_func_1846 *)&LAB_00b60908;
    if (store->check_issued != (_func_1846 *)0x0) {
      p_Var1 = store->check_issued;
    }
    ctx->get_issuer = (_func_1857 *)p_Var1;
    p_Var2 = X509_STORE_CTX_get1_issuer;
    if (store->get_issuer != (_func_1845 *)0x0) {
      p_Var2 = store->get_issuer;
    }
    ctx->verify_cb = (_func_1856 *)p_Var2;
    p_Var3 = (_func_1844 *)&DAT_00b609ec;
    if (store->verify_cb != (_func_1844 *)0x0) {
      p_Var3 = store->verify_cb;
    }
    ctx->verify = (_func_1855 *)p_Var3;
    p_Var4 = FUN_00b609f0;
    if (store->verify != (_func_1843 *)0x0) {
      p_Var4 = store->verify;
    }
    ctx->other_ctx = p_Var4;
    p_Var5 = FUN_00b60be8;
    if ((_func_1858 *)store->check_revocation != (_func_1858 *)0x0) {
      p_Var5 = (_func_1858 *)store->check_revocation;
    }
    ctx->check_issued = p_Var5;
    ctx->check_revocation = (_func_1859 *)store->get_crl;
    p_Var6 = (_func_1860 *)&LAB_00b60ea8;
    if ((_func_1860 *)store->check_crl != (_func_1860 *)0x0) {
      p_Var6 = (_func_1860 *)store->check_crl;
    }
    ctx->get_crl = p_Var6;
    p_Var7 = (_func_1850 *)&LAB_00b611c4;
    if (store->cert_crl != (_func_1850 *)0x0) {
      p_Var7 = store->cert_crl;
    }
    ctx->check_crl = (_func_1861 *)p_Var7;
    p_Var8 = (_func_1862 *)&LAB_00b6126c;
    if ((_func_1862 *)store->lookup_certs != (_func_1862 *)0x0) {
      p_Var8 = (_func_1862 *)store->lookup_certs;
    }
    ctx->cert_crl = p_Var8;
    p_Var9 = X509_STORE_CTX_get1_certs;
    if (store->lookup_crls != (_func_1852 *)0x0) {
      p_Var9 = store->lookup_crls;
    }
    ctx->check_policy = (_func_1863 *)p_Var9;
    pcVar12 = store->cleanup;
    if (pcVar12 == (_func_1864 *)0x0) goto LAB_00b60798;
  }
  ctx->lookup_certs = pcVar12;
  to = X509_VERIFY_PARAM_new();
  ctx->crls = (stack_st_X509_CRL *)to;
  if (to == (X509_VERIFY_PARAM *)0x0) {
    iVar10 = 0x907;
    goto LAB_00b60890;
  }
  if (store == (X509_STORE *)0x0) {
    to->inh_flags = to->inh_flags | 0x11;
LAB_00b607fc:
    from = X509_VERIFY_PARAM_lookup("default");
    iVar10 = X509_VERIFY_PARAM_inherit(to,from);
    if (iVar10 != 0) {
      if (*(int *)&ctx->crls[1].stack.field_0x4 == 0) {
        iVar10 = X509_PURPOSE_get_by_id(ctx->crls[1].stack.num);
        xp = X509_PURPOSE_get0(iVar10);
        if (xp != (X509_PURPOSE *)0x0) {
          iVar10 = X509_PURPOSE_get_trust(xp);
          *(int *)&ctx->crls[1].stack.field_0x4 = iVar10;
        }
      }
      iVar10 = CRYPTO_new_ex_data(5,ctx,(CRYPTO_EX_DATA *)&ctx->parent);
      if (iVar10 != 0) {
        return 1;
      }
      iVar10 = 0x92b;
      goto LAB_00b60890;
    }
  }
  else {
    iVar10 = X509_VERIFY_PARAM_inherit(to,store->param);
    if (iVar10 != 0) {
      to = (X509_VERIFY_PARAM *)ctx->crls;
      goto LAB_00b607fc;
    }
  }
  iVar10 = 0x918;
LAB_00b60890:
  ERR_put_error(0xb,0x8f,0x41,"crypto/x509/x509_vfy.c",iVar10);
  if (ctx->lookup_crls != (_func_1865 *)0x0) {
    (*ctx->lookup_crls)(ctx,nm);
    ctx->lookup_crls = (_func_1865 *)0x0;
  }
  if ((X509_VERIFY_PARAM *)ctx->crls != (X509_VERIFY_PARAM *)0x0) {
    lVar13._0_4_ = ctx->current_crl_score;
    lVar13._4_4_ = ctx->current_reasons;
    if (lVar13 == 0) {
      X509_VERIFY_PARAM_free((X509_VERIFY_PARAM *)ctx->crls);
    }
    ctx->crls = (stack_st_X509_CRL *)0x0;
  }
  X509_policy_tree_free((X509_POLICY_TREE *)ctx->chain);
  ctx->chain = (stack_st_X509 *)0x0;
  uVar11._0_4_ = ctx->valid;
  uVar11._4_4_ = ctx->last_untrusted;
  OPENSSL_sk_pop_free(uVar11,X509_free);
  ctx->valid = 0;
  ctx->last_untrusted = 0;
  CRYPTO_free_ex_data(5,ctx,(CRYPTO_EX_DATA *)&ctx->parent);
  ctx->parent = (X509_STORE_CTX *)0x0;
  return 0;
}

