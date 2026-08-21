
X509V3_EXT_METHOD * X509V3_EXT_get_nid(int nid)

{
  int iVar1;
  undefined8 *puVar2;
  X509V3_EXT_METHOD *pXVar3;
  int local_88 [26];
  int *local_18;
  
  local_18 = local_88;
  if (-1 < nid) {
    local_88[0] = nid;
    puVar2 = OBJ_bsearch_(&local_18,&PTR_v3_nscert_01d20c40,0x2e,8,(cmp *)&LAB_00b719f0);
    if (puVar2 != (undefined8 *)0x0) {
      return (X509V3_EXT_METHOD *)*puVar2;
    }
    if (DAT_01d3b220 == 0) {
      return (X509V3_EXT_METHOD *)0x0;
    }
    iVar1 = OPENSSL_sk_find(DAT_01d3b220,local_88);
    if (iVar1 != -1) {
      pXVar3 = (X509V3_EXT_METHOD *)OPENSSL_sk_value(DAT_01d3b220,iVar1);
      return pXVar3;
    }
  }
  return (X509V3_EXT_METHOD *)0x0;
}

