
stack_st_void * policy_cache_set(X509 *param_1)

{
  int iVar1;
  int iVar2;
  stack_st_void *psVar3;
  POLICY_CONSTRAINTS *a;
  ASN1_INTEGER *pAVar4;
  _func_257 *p_Var5;
  void *pvVar6;
  char **ppcVar7;
  undefined8 uVar8;
  long lVar9;
  stack_st_void *psVar10;
  int local_54;
  
  psVar3 = param_1[1].ex_data.sk;
  if (psVar3 != (stack_st_void *)0x0) {
    return psVar3;
  }
  CRYPTO_THREAD_write_lock(param_1[1].policy_cache);
  if ((param_1[1].ex_data.sk != (stack_st_void *)0x0) ||
     (psVar3 = CRYPTO_malloc(0x28,"crypto/x509v3/pcy_cache.c",0x54), psVar3 == (stack_st_void *)0x0)
     ) goto LAB_00b76d50;
  (psVar3->stack).sorted = -1;
  (psVar3->stack).num_alloc = -1;
  *(undefined8 *)&psVar3->stack = 0;
  (psVar3->stack).data = (char **)0x0;
  (psVar3->stack).comp = (_func_257 *)0xffffffffffffffff;
  *(undefined8 *)&psVar3[1].stack = 0xffffffffffffffff;
  param_1[1].ex_data.sk = psVar3;
  a = X509_get_ext_d2i(param_1,0x191,&local_54,(int *)0x0);
  if (a == (POLICY_CONSTRAINTS *)0x0) {
    if (local_54 != -1) goto LAB_00b76d30;
LAB_00b76bb8:
    pvVar6 = X509_get_ext_d2i(param_1,0x59,&local_54,(int *)0x0);
    if (pvVar6 == (void *)0x0) {
      if (local_54 == -1) goto LAB_00b76d50;
      goto LAB_00b76d30;
    }
    psVar10 = param_1[1].ex_data.sk;
    iVar1 = OPENSSL_sk_num(pvVar6);
    if (iVar1 == 0) {
LAB_00b76c94:
      lVar9 = 0;
LAB_00b76c98:
      iVar1 = 0;
    }
    else {
      ppcVar7 = (char **)OPENSSL_sk_new(&LAB_00b76e28);
      (psVar10->stack).data = ppcVar7;
      if (ppcVar7 == (char **)0x0) goto LAB_00b76c94;
      iVar1 = OPENSSL_sk_num(pvVar6);
      if (0 < iVar1) {
        iVar1 = 0;
        do {
          uVar8 = OPENSSL_sk_value(pvVar6,iVar1);
          lVar9 = policy_data_new(uVar8,0,local_54);
          if (lVar9 == 0) goto LAB_00b76c98;
          iVar2 = OBJ_obj2nid(*(ASN1_OBJECT **)(lVar9 + 8));
          if (iVar2 == 0x2ea) {
            if (*(long *)&psVar10->stack != 0) {
LAB_00b76dc0:
              iVar1 = -1;
              *(uint *)&param_1[1].sig_alg = *(uint *)&param_1[1].sig_alg | 0x800;
              goto LAB_00b76c9c;
            }
            *(long *)&psVar10->stack = lVar9;
          }
          else {
            iVar2 = OPENSSL_sk_find((psVar10->stack).data,lVar9);
            if (iVar2 != -1) goto LAB_00b76dc0;
            iVar2 = OPENSSL_sk_push((psVar10->stack).data,lVar9);
            if (iVar2 == 0) goto LAB_00b76c98;
          }
          iVar1 = iVar1 + 1;
          iVar2 = OPENSSL_sk_num(pvVar6);
        } while (iVar1 < iVar2);
      }
      lVar9 = 0;
      iVar1 = 1;
    }
LAB_00b76c9c:
    policy_data_free(lVar9);
    OPENSSL_sk_pop_free(pvVar6,POLICYINFO_free);
    local_54 = iVar1;
    if (iVar1 < 1) {
      OPENSSL_sk_pop_free((psVar10->stack).data,policy_data_free);
      (psVar10->stack).data = (char **)0x0;
      goto LAB_00b76d50;
    }
    pvVar6 = X509_get_ext_d2i(param_1,0x2eb,&local_54,(int *)0x0);
    if (pvVar6 == (void *)0x0) {
      if (local_54 == -1) goto LAB_00b76d78;
      goto LAB_00b76d30;
    }
    local_54 = policy_cache_set_mapping(param_1,pvVar6);
    if (local_54 < 1) goto LAB_00b76d30;
LAB_00b76d78:
    pAVar4 = X509_get_ext_d2i(param_1,0x2ec,&local_54,(int *)0x0);
    if (pAVar4 != (ASN1_INTEGER *)0x0) {
      if (pAVar4->type != 0x102) {
        lVar9 = ASN1_INTEGER_get(pAVar4);
        (psVar3->stack).sorted = (int)lVar9;
        (psVar3->stack).num_alloc = (int)((ulong)lVar9 >> 0x20);
        goto LAB_00b76d40;
      }
      goto LAB_00b76d34;
    }
    if (local_54 != -1) goto LAB_00b76d34;
  }
  else {
    pAVar4 = a->requireExplicitPolicy;
    if (pAVar4 == (ASN1_INTEGER *)0x0) {
      pAVar4 = a->inhibitPolicyMapping;
      if (pAVar4 != (ASN1_INTEGER *)0x0) goto LAB_00b76ba4;
    }
    else if (pAVar4->type != 0x102) {
      p_Var5 = (_func_257 *)ASN1_INTEGER_get(pAVar4);
      (psVar3->stack).comp = p_Var5;
      pAVar4 = a->inhibitPolicyMapping;
      if (pAVar4 == (ASN1_INTEGER *)0x0) goto LAB_00b76bb8;
LAB_00b76ba4:
      if (pAVar4->type != 0x102) {
        lVar9 = ASN1_INTEGER_get(pAVar4);
        *(long *)&psVar3[1].stack = lVar9;
        goto LAB_00b76bb8;
      }
    }
LAB_00b76d30:
    pAVar4 = (ASN1_INTEGER *)0x0;
LAB_00b76d34:
    *(uint *)&param_1[1].sig_alg = *(uint *)&param_1[1].sig_alg | 0x800;
  }
LAB_00b76d40:
  POLICY_CONSTRAINTS_free(a);
  ASN1_INTEGER_free(pAVar4);
LAB_00b76d50:
  CRYPTO_THREAD_unlock(param_1[1].policy_cache);
  return param_1[1].ex_data.sk;
}

