
GENERAL_NAMES * FUN_00b7fc2c(X509V3_CTX *param_1,char *param_2)

{
  stack_st_CONF_VALUE *nval;
  GENERAL_NAMES *pGVar1;
  
  if (*param_2 == '@') {
    nval = X509V3_get_section(param_1,param_2 + 1);
  }
  else {
    nval = X509V3_parse_list(param_2);
  }
  if (nval == (stack_st_CONF_VALUE *)0x0) {
                    /* try { // try from 00b7fca4 to 00c7fcb3 has its CatchHandler @ 00b7fd08 */
    ERR_put_error(0x22,0x9c,0x96,"crypto/x509v3/v3_crld.c",0x37);
    pGVar1 = (GENERAL_NAMES *)0x0;
  }
  else {
    pGVar1 = v2i_GENERAL_NAMES((X509V3_EXT_METHOD *)0x0,param_1,nval);
    if (*param_2 == '@') {
      X509V3_section_free(param_1,nval);
    }
    else {
      OPENSSL_sk_pop_free(nval,X509V3_conf_free);
    }
  }
  return pGVar1;
}

