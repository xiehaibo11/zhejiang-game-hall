
long * FUN_00b38674(long param_1,ENGINE *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  EVP_PKEY_METHOD *pEVar3;
  long *plVar4;
  int line;
  code *pcVar5;
  int *local_118;
  int local_110 [52];
  
  if (param_3 == -1) {
    if (param_1 == 0) {
      return (long *)0x0;
    }
    if (*(int **)(param_1 + 0x10) == (int *)0x0) {
      return (long *)0x0;
    }
    param_3 = **(int **)(param_1 + 0x10);
LAB_00b38728:
    bVar1 = true;
    if (*(ENGINE **)(param_1 + 0x18) != (ENGINE *)0x0) {
      param_2 = *(ENGINE **)(param_1 + 0x18);
    }
    if (param_2 == (ENGINE *)0x0) goto LAB_00b386ac;
LAB_00b3873c:
    iVar2 = ENGINE_init(param_2);
    if (iVar2 == 0) {
      iVar2 = 0x26;
      line = 0x61;
      goto LAB_00b38808;
    }
LAB_00b38748:
    pEVar3 = ENGINE_get_pkey_meth(param_2,param_3);
joined_r0x00b386f8:
    if (pEVar3 != (EVP_PKEY_METHOD *)0x0) {
      plVar4 = (long *)CRYPTO_zalloc(0x50,"crypto/evp/pmeth_lib.c",0x77);
      if (plVar4 == (long *)0x0) {
        ENGINE_finish(param_2);
        ERR_put_error(6,0x9d,0x41,"crypto/evp/pmeth_lib.c",0x7c);
        return (long *)0x0;
      }
      *plVar4 = (long)pEVar3;
      plVar4[1] = (long)param_2;
      *(undefined4 *)(plVar4 + 4) = 0;
      plVar4[2] = param_1;
      if (bVar1) {
        EVP_PKEY_up_ref(param_1);
      }
      if (*(code **)(pEVar3 + 8) != (code *)0x0) {
        iVar2 = (**(code **)(pEVar3 + 8))(plVar4);
        if (iVar2 < 1) {
          if ((*plVar4 != 0) && (pcVar5 = *(code **)(*plVar4 + 0x18), pcVar5 != (code *)0x0)) {
            (*pcVar5)(plVar4);
          }
          EVP_PKEY_free((EVP_PKEY *)plVar4[2]);
          EVP_PKEY_free((EVP_PKEY *)plVar4[3]);
          ENGINE_finish((ENGINE *)plVar4[1]);
          CRYPTO_free(plVar4);
          return (long *)0x0;
        }
        return plVar4;
      }
      return plVar4;
    }
  }
  else {
    if (param_1 != 0) goto LAB_00b38728;
    bVar1 = false;
    if (param_2 != (ENGINE *)0x0) goto LAB_00b3873c;
LAB_00b386ac:
    param_2 = ENGINE_get_pkey_meth_engine(param_3);
    if (param_2 != (ENGINE *)0x0) goto LAB_00b38748;
    local_118 = local_110;
    local_110[0] = param_3;
    if ((DAT_01784810 != 0) && (iVar2 = OPENSSL_sk_find(DAT_01784810,local_110), -1 < iVar2)) {
      pEVar3 = (EVP_PKEY_METHOD *)OPENSSL_sk_value(DAT_01784810,iVar2);
      param_2 = (ENGINE *)0x0;
      goto joined_r0x00b386f8;
    }
    plVar4 = OBJ_bsearch_(&local_118,&PTR_rsa_pkey_meth_0176ea20,10,8,(cmp *)&LAB_00b38f98);
    if (plVar4 != (long *)0x0) {
      pEVar3 = (EVP_PKEY_METHOD *)*plVar4;
      param_2 = (ENGINE *)0x0;
      goto joined_r0x00b386f8;
    }
  }
  iVar2 = 0x9c;
  line = 0x73;
LAB_00b38808:
  ERR_put_error(6,0x9d,iVar2,"crypto/evp/pmeth_lib.c",line);
  return (long *)0x0;
}

