
EVP_PKEY_METHOD * EVP_PKEY_meth_find(int type)

{
  int *piVar1;
  int iVar2;
  EVP_PKEY_METHOD *pEVar3;
  undefined8 *puVar4;
  int local_f0 [52];
  undefined1 *local_18;
  
  local_18 = (undefined1 *)local_f0;
  local_f0[0] = type;
  piVar1 = local_f0;
  if ((DAT_01784810 != 0) &&
     (iVar2 = OPENSSL_sk_find(DAT_01784810,local_f0), piVar1 = (int *)local_18, -1 < iVar2)) {
    pEVar3 = (EVP_PKEY_METHOD *)OPENSSL_sk_value(DAT_01784810,iVar2);
    return pEVar3;
  }
  local_18 = (undefined1 *)piVar1;
  puVar4 = OBJ_bsearch_(&local_18,&PTR_rsa_pkey_meth_0176ea20,10,8,(cmp *)&LAB_00b38f98);
  pEVar3 = (EVP_PKEY_METHOD *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    pEVar3 = (EVP_PKEY_METHOD *)*puVar4;
  }
  return pEVar3;
}

