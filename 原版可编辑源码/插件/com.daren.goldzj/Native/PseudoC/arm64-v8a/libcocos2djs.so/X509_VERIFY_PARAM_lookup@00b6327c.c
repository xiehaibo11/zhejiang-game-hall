
X509_VERIFY_PARAM * X509_VERIFY_PARAM_lookup(char *name)

{
  int iVar1;
  X509_VERIFY_PARAM *pXVar2;
  char *local_90 [14];
  
  local_90[0] = name;
  if ((DAT_01d3b218 != 0) && (iVar1 = OPENSSL_sk_find(DAT_01d3b218,local_90), iVar1 != -1)) {
    pXVar2 = (X509_VERIFY_PARAM *)OPENSSL_sk_value(DAT_01d3b218,iVar1);
    return pXVar2;
  }
                    /* try { // try from 00b632dc to 00c632e7 has its CatchHandler @ 00b634bc */
  pXVar2 = OBJ_bsearch_(local_90,&PTR_s_default_018c5788_8_01c859b8,5,0x70,(cmp *)&LAB_00b63324);
                    /* try { // try from 00b632ec to 00c632ff has its CatchHandler @ 00b6346c */
  return pXVar2;
}

