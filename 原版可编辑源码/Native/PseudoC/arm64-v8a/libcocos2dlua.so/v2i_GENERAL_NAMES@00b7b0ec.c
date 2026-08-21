
GENERAL_NAMES *
v2i_GENERAL_NAMES(X509V3_EXT_METHOD *method,X509V3_CTX *ctx,stack_st_CONF_VALUE *nval)

{
  int iVar1;
  int iVar2;
  GENERAL_NAMES *pGVar3;
  CONF_VALUE *cnf;
  GENERAL_NAME *pGVar4;
  
  pGVar3 = (GENERAL_NAMES *)OPENSSL_sk_new_null();
  if (pGVar3 == (GENERAL_NAMES *)0x0) {
    ERR_put_error(0x22,0x76,0x41,"crypto/x509v3/v3_alt.c",0x16a);
  }
  else {
    iVar1 = OPENSSL_sk_num(nval);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        cnf = (CONF_VALUE *)OPENSSL_sk_value(nval,iVar1);
        pGVar4 = v2i_GENERAL_NAME_ex((GENERAL_NAME *)0x0,method,ctx,cnf,0);
        if (pGVar4 == (GENERAL_NAME *)0x0) {
          OPENSSL_sk_pop_free(pGVar3,GENERAL_NAME_free);
          return (GENERAL_NAMES *)0x0;
        }
        OPENSSL_sk_push(pGVar3,pGVar4);
        iVar1 = iVar1 + 1;
        iVar2 = OPENSSL_sk_num(nval);
      } while (iVar1 < iVar2);
    }
  }
  return pGVar3;
}

