
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
  
                    /* try { // try from 00b67660 to 00c676c3 has its CatchHandler @ 00b674f8 */
  psVar3 = param_1[1].ex_data.sk;
                    /* catch() { ... } // from try @ 00b67644 with catch @ 00b6767c */
                    /* catch() { ... } // from try @ 00b67594 with catch @ 00b67680 */
  if (psVar3 != (stack_st_void *)0x0) {
    return psVar3;
  }
                    /* catch() { ... } // from try @ 00b675f4 with catch @ 00b67684 */
                    /* catch() { ... } // from try @ 00b675c4 with catch @ 00b67688 */
  CRYPTO_THREAD_write_lock(param_1[1].policy_cache);
  if ((param_1[1].ex_data.sk != (stack_st_void *)0x0) ||
     (psVar3 = CRYPTO_malloc(0x28,"crypto/x509v3/pcy_cache.c",0x54), psVar3 == (stack_st_void *)0x0)
     ) goto LAB_00b678d0;
                    /* try { // try from 00b676c4 to 00c67783 has its CatchHandler @ 00b676c4
                       catch() { ... } // from try @ 00b676c4 with catch @ 00b676c4
                       catch() { ... } // from try @ 00b677d0 with catch @ 00b676c4 */
  (psVar3->stack).sorted = -1;
  (psVar3->stack).num_alloc = -1;
  *(undefined8 *)&psVar3->stack = 0;
  (psVar3->stack).data = (char **)0x0;
  (psVar3->stack).comp = (_func_257 *)0xffffffffffffffff;
  *(undefined8 *)&psVar3[1].stack = 0xffffffffffffffff;
  param_1[1].ex_data.sk = psVar3;
  a = X509_get_ext_d2i(param_1,0x191,&local_54,(int *)0x0);
  if (a == (POLICY_CONSTRAINTS *)0x0) {
    if (local_54 != -1) goto LAB_00b678b0;
LAB_00b67738:
    pvVar6 = X509_get_ext_d2i(param_1,0x59,&local_54,(int *)0x0);
    if (pvVar6 == (void *)0x0) {
                    /* try { // try from 00b67880 to 00c679e3 has its CatchHandler @ 00b67880
                       catch() { ... } // from try @ 00b67880 with catch @ 00b67880
                       catch() { ... } // from try @ 00b67a00 with catch @ 00b67880 */
      if (local_54 == -1) goto LAB_00b678d0;
      goto LAB_00b678b0;
    }
    psVar10 = param_1[1].ex_data.sk;
    iVar1 = OPENSSL_sk_num(pvVar6);
    if (iVar1 == 0) {
LAB_00b67814:
      lVar9 = 0;
LAB_00b67818:
      iVar1 = 0;
    }
    else {
      ppcVar7 = (char **)OPENSSL_sk_new(&LAB_00b679a8);
      (psVar10->stack).data = ppcVar7;
      if (ppcVar7 == (char **)0x0) goto LAB_00b67814;
      iVar1 = OPENSSL_sk_num(pvVar6);
                    /* try { // try from 00b67784 to 00c6779f has its CatchHandler @ 00b67844 */
      if (0 < iVar1) {
        iVar1 = 0;
        do {
          uVar8 = OPENSSL_sk_value(pvVar6,iVar1);
          lVar9 = policy_data_new(uVar8,0,local_54);
          if (lVar9 == 0) goto LAB_00b67818;
                    /* try { // try from 00b677b4 to 00c677cf has its CatchHandler @ 00b67840 */
          iVar2 = OBJ_obj2nid(*(ASN1_OBJECT **)(lVar9 + 8));
          if (iVar2 == 0x2ea) {
            if (*(long *)&psVar10->stack != 0) {
LAB_00b67940:
              iVar1 = -1;
              *(uint *)&param_1[1].sig_alg = *(uint *)&param_1[1].sig_alg | 0x800;
              goto LAB_00b6781c;
            }
            *(long *)&psVar10->stack = lVar9;
          }
          else {
                    /* try { // try from 00b677d0 to 00c6787f has its CatchHandler @ 00b676c4 */
            iVar2 = OPENSSL_sk_find((psVar10->stack).data,lVar9);
            if (iVar2 != -1) goto LAB_00b67940;
            iVar2 = OPENSSL_sk_push((psVar10->stack).data,lVar9);
            if (iVar2 == 0) goto LAB_00b67818;
          }
          iVar1 = iVar1 + 1;
          iVar2 = OPENSSL_sk_num(pvVar6);
        } while (iVar1 < iVar2);
      }
      lVar9 = 0;
      iVar1 = 1;
    }
LAB_00b6781c:
    policy_data_free(lVar9);
    OPENSSL_sk_pop_free(pvVar6,POLICYINFO_free);
    local_54 = iVar1;
    if (iVar1 < 1) {
      OPENSSL_sk_pop_free((psVar10->stack).data,policy_data_free);
      (psVar10->stack).data = (char **)0x0;
      goto LAB_00b678d0;
    }
                    /* catch() { ... } // from try @ 00b677b4 with catch @ 00b67840 */
                    /* catch() { ... } // from try @ 00b67784 with catch @ 00b67844 */
    pvVar6 = X509_get_ext_d2i(param_1,0x2eb,&local_54,(int *)0x0);
    if (pvVar6 == (void *)0x0) {
      if (local_54 == -1) goto LAB_00b678f8;
      goto LAB_00b678b0;
    }
    local_54 = policy_cache_set_mapping(param_1,pvVar6);
    if (local_54 < 1) goto LAB_00b678b0;
LAB_00b678f8:
    pAVar4 = X509_get_ext_d2i(param_1,0x2ec,&local_54,(int *)0x0);
    if (pAVar4 != (ASN1_INTEGER *)0x0) {
      if (pAVar4->type != 0x102) {
        lVar9 = ASN1_INTEGER_get(pAVar4);
        (psVar3->stack).sorted = (int)lVar9;
        (psVar3->stack).num_alloc = (int)((ulong)lVar9 >> 0x20);
        goto LAB_00b678c0;
      }
      goto LAB_00b678b4;
    }
    if (local_54 != -1) goto LAB_00b678b4;
  }
  else {
    pAVar4 = a->requireExplicitPolicy;
    if (pAVar4 == (ASN1_INTEGER *)0x0) {
      pAVar4 = a->inhibitPolicyMapping;
      if (pAVar4 != (ASN1_INTEGER *)0x0) goto LAB_00b67724;
    }
    else if (pAVar4->type != 0x102) {
      p_Var5 = (_func_257 *)ASN1_INTEGER_get(pAVar4);
      (psVar3->stack).comp = p_Var5;
      pAVar4 = a->inhibitPolicyMapping;
      if (pAVar4 == (ASN1_INTEGER *)0x0) goto LAB_00b67738;
LAB_00b67724:
      if (pAVar4->type != 0x102) {
        lVar9 = ASN1_INTEGER_get(pAVar4);
        *(long *)&psVar3[1].stack = lVar9;
        goto LAB_00b67738;
      }
    }
LAB_00b678b0:
    pAVar4 = (ASN1_INTEGER *)0x0;
LAB_00b678b4:
    *(uint *)&param_1[1].sig_alg = *(uint *)&param_1[1].sig_alg | 0x800;
  }
LAB_00b678c0:
  POLICY_CONSTRAINTS_free(a);
  ASN1_INTEGER_free(pAVar4);
LAB_00b678d0:
  CRYPTO_THREAD_unlock(param_1[1].policy_cache);
  return param_1[1].ex_data.sk;
}

