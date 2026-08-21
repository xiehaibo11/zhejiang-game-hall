
X509_VERIFY_PARAM * X509_VERIFY_PARAM_lookup(char *name)

{
  int iVar1;
  X509_VERIFY_PARAM *pXVar2;
  char *local_90 [14];
  
  local_90[0] = name;
  if ((DAT_01784f98 != 0) && (iVar1 = OPENSSL_sk_find(DAT_01784f98,local_90), iVar1 != -1)) {
    pXVar2 = (X509_VERIFY_PARAM *)OPENSSL_sk_value(DAT_01784f98,iVar1);
    return pXVar2;
  }
  pXVar2 = OBJ_bsearch_(local_90,&PTR_s_default_013f3c58_8_016c0908,5,0x70,(cmp *)&LAB_00b717a4);
  return pXVar2;
}

