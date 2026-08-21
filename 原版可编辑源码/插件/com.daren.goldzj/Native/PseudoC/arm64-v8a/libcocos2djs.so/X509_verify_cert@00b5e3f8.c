
int X509_verify_cert(X509_STORE_CTX *ctx)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  X509_STORE_CTX *ctx_00;
  undefined8 uVar7;
  undefined8 uVar8;
  _func_1855 *p_Var9;
  stack_st_void *psVar10;
  
  if (*(long *)&ctx->current_method == 0) {
    iVar1 = 0x69;
    iVar2 = 0x101;
  }
  else {
    lVar3._0_4_ = ctx->valid;
    lVar3._4_4_ = ctx->last_untrusted;
    if (lVar3 == 0) {
      psVar10 = (ctx->ex_data).sk;
                    /* try { // try from 00b5e474 to 00c5e5d7 has its CatchHandler @ 00b5e420 */
      lVar3 = OPENSSL_sk_new_null();
      ctx->valid = (int)lVar3;
      ctx->last_untrusted = (int)((ulong)lVar3 >> 0x20);
      if ((lVar3 == 0) ||
         (iVar1 = OPENSSL_sk_push(lVar3,*(undefined8 *)&ctx->current_method), iVar1 == 0)) {
        ERR_put_error(0xb,0x7f,0x41,"crypto/x509/x509_vfy.c",0x116);
        iVar1 = 0x11;
        goto LAB_00b5e458;
      }
      X509_up_ref(*(undefined8 *)&ctx->current_method);
      uVar4 = *(undefined8 *)&ctx->current_method;
      *(undefined4 *)((long)&ctx->cleanup + 4) = 1;
      lVar3 = X509_get0_pubkey(uVar4);
      if (lVar3 == 0) {
LAB_00b5e4e0:
        lVar3 = *(long *)&ctx->current_method;
        *(undefined4 *)((long)&ctx->tree + 4) = 0;
        if (lVar3 == 0) {
          uVar4._0_4_ = ctx->valid;
          uVar4._4_4_ = ctx->last_untrusted;
          lVar3 = OPENSSL_sk_value(uVar4,0);
        }
        *(long *)&ctx->error = lVar3;
        ctx->explicit_policy = 0x42;
        iVar1 = (*ctx->verify)((X509_STORE_CTX *)0x0);
        if (iVar1 == 0) {
          return 0;
        }
      }
      else {
        iVar1 = *(int *)((long)&ctx->crls[1].stack.data + 4);
        if (0 < iVar1) {
          if (4 < iVar1) {
            iVar1 = 5;
          }
          iVar2 = EVP_PKEY_security_bits();
          if (iVar2 < (int)(&UINT_018bf4b8)[iVar1]) goto LAB_00b5e4e0;
        }
      }
      if ((psVar10 == (stack_st_void *)0x0) ||
         (iVar1 = OPENSSL_sk_num((psVar10->stack).data), iVar1 < 1)) {
LAB_00b5e634:
                    /* try { // try from 00b5e634 to 00c5e7e3 has its CatchHandler @ 00b5e5d8 */
        iVar1 = FUN_00b5e714(ctx);
joined_r0x00b5e640:
        if (0 < iVar1) {
          return iVar1;
        }
      }
      else {
        psVar10 = (ctx->ex_data).sk;
        lVar3 = *(long *)&ctx->current_method;
        X509_free(*(X509 **)&psVar10[1].stack);
        (psVar10->stack).comp = (_func_257 *)0x0;
        *(undefined8 *)&psVar10[1].stack = 0;
        *(undefined8 *)((long)&psVar10[1].stack.data + 4) = 0xffffffffffffffff;
        iVar1 = FUN_00b61bbc(*(undefined4 *)((long)&ctx->cleanup + 4),(ctx->ex_data).sk,
                             *(undefined8 *)&ctx->current_method,0);
        if (iVar1 == 0) {
                    /* try { // try from 00b5e62c to 00c5e633 has its CatchHandler @ 00b5e954 */
          if (((psVar10 != (stack_st_void *)0x0) && (((ulong)psVar10[1].stack.data & 5) != 0)) ||
             (-1 < *(int *)((long)&psVar10[1].stack.data + 4))) goto LAB_00b5e634;
          X509_get_pubkey_parameters((EVP_PKEY *)0x0,*(stack_st_X509 **)&ctx->valid);
          iVar1 = X509_chain_check_suiteb(0,lVar3,0,(ctx->crls->stack).comp);
          if (iVar1 != 0) {
            *(undefined4 *)((long)&ctx->tree + 4) = 0;
            lVar6 = lVar3;
            if (lVar3 == 0) {
              uVar7._0_4_ = ctx->valid;
              uVar7._4_4_ = ctx->last_untrusted;
              lVar6 = OPENSSL_sk_value(uVar7,0);
            }
            *(long *)&ctx->error = lVar6;
            ctx->explicit_policy = iVar1;
            iVar2 = (*ctx->verify)((X509_STORE_CTX *)0x0);
            iVar1 = 0;
            if (iVar2 == 0) goto LAB_00b5e700;
          }
          *(undefined4 *)((long)&ctx->tree + 4) = 0;
          if (lVar3 == 0) {
            uVar8._0_4_ = ctx->valid;
            uVar8._4_4_ = ctx->last_untrusted;
            lVar3 = OPENSSL_sk_value(uVar8,0);
          }
          p_Var9 = ctx->verify;
          *(long *)&ctx->error = lVar3;
          ctx->explicit_policy = 0x41;
          ctx_00 = (X509_STORE_CTX *)0x0;
LAB_00b5e6f0:
          iVar1 = (*p_Var9)(ctx_00);
          goto joined_r0x00b5e640;
        }
        X509_get_pubkey_parameters((EVP_PKEY *)0x0,*(stack_st_X509 **)&ctx->valid);
        if (iVar1 < 1) {
          *(long *)&ctx->error = lVar3;
          *(undefined8 *)((long)&ctx->tree + 4) = 0x1100000000;
          iVar1 = -1;
          iVar2 = ctx->explicit_policy;
          goto joined_r0x00b5e704;
        }
        iVar1 = X509_chain_check_suiteb(0,lVar3,0,(ctx->crls->stack).comp);
        if (iVar1 == 0) {
LAB_00b5e5cc:
          if (((ulong)psVar10[1].stack.comp & 1) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b5e46c with catch @ 00b5e5d4
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b5e634 with catch @ 00b5e5d8
                       catch(type#1 @ 00000000) { ... } // from try @ 00b5e7ec with catch @ 00b5e5d8
                        */
            iVar2 = FUN_00b6174c(ctx);
            iVar1 = 0;
            if (iVar2 == 0) goto LAB_00b5e700;
          }
          p_Var9 = ctx->verify;
          ctx_00 = (X509_STORE_CTX *)0x1;
          *(undefined4 *)((long)&ctx->tree + 4) = 0;
          *(long *)&ctx->error = lVar3;
          goto LAB_00b5e6f0;
        }
        *(undefined4 *)((long)&ctx->tree + 4) = 0;
        lVar6 = lVar3;
        if (lVar3 == 0) {
          uVar5._0_4_ = ctx->valid;
          uVar5._4_4_ = ctx->last_untrusted;
          lVar6 = OPENSSL_sk_value(uVar5,0);
        }
        *(long *)&ctx->error = lVar6;
        ctx->explicit_policy = iVar1;
        iVar2 = (*ctx->verify)((X509_STORE_CTX *)0x0);
        iVar1 = 0;
        if (iVar2 != 0) goto LAB_00b5e5cc;
      }
LAB_00b5e700:
      iVar2 = ctx->explicit_policy;
joined_r0x00b5e704:
      if (iVar2 != 0) {
        return iVar1;
      }
      ctx->explicit_policy = 1;
      return iVar1;
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b5e474 with catch @ 00b5e420
                        */
    iVar1 = 0x42;
    iVar2 = 0x10b;
  }
  ERR_put_error(0xb,0x7f,iVar1,"crypto/x509/x509_vfy.c",iVar2);
  iVar1 = 0x45;
LAB_00b5e458:
  ctx->explicit_policy = iVar1;
                    /* try { // try from 00b5e46c to 00c5e473 has its CatchHandler @ 00b5e5d4 */
  return -1;
}

