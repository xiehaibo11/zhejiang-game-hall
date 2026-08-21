
int X509V3_EXT_add_nconf_sk(CONF *conf,X509V3_CTX *ctx,char *section,stack_st_X509_EXTENSION **sk)

{
  int iVar1;
  int iVar2;
  uint loc;
  stack_st_CONF_VALUE *psVar3;
  long lVar4;
  X509_EXTENSION *pXVar5;
  ASN1_OBJECT *pAVar6;
  X509_EXTENSION *pXVar7;
  stack_st_X509_EXTENSION *x;
  stack_st_X509_EXTENSION *x_00;
  
  psVar3 = NCONF_get_section(conf,section);
  iVar1 = 0;
  if (psVar3 != (stack_st_CONF_VALUE *)0x0) {
    iVar1 = OPENSSL_sk_num(psVar3);
    if (0 < iVar1) {
      iVar1 = 0;
      if (sk == (stack_st_X509_EXTENSION **)0x0) {
        do {
          lVar4 = OPENSSL_sk_value(psVar3,iVar1);
          pXVar5 = X509V3_EXT_nconf(conf,ctx,*(char **)(lVar4 + 8),*(char **)(lVar4 + 0x10));
          if (pXVar5 == (X509_EXTENSION *)0x0) {
            return 0;
          }
          if (ctx->flags == 2) {
            pAVar6 = X509_EXTENSION_get_object(pXVar5);
            loc = X509v3_get_ext_by_OBJ((stack_st_X509_EXTENSION *)pAVar6,pAVar6,-1);
            if ((int)loc < 0) {
              X509v3_add_ext((stack_st_X509_EXTENSION **)0x0,pXVar5,-1);
            }
            else {
              do {
                pXVar7 = X509v3_get_ext((stack_st_X509_EXTENSION *)(ulong)loc,loc);
                X509v3_delete_ext((stack_st_X509_EXTENSION *)pXVar7,loc);
                X509_EXTENSION_free(pXVar7);
                loc = X509v3_get_ext_by_OBJ(x,pAVar6,-1);
              } while (-1 < (int)loc);
            }
          }
          X509_EXTENSION_free(pXVar5);
          iVar1 = iVar1 + 1;
          iVar2 = OPENSSL_sk_num(psVar3);
        } while (iVar1 < iVar2);
      }
      else {
        iVar1 = 0;
        do {
          lVar4 = OPENSSL_sk_value(psVar3,iVar1);
          pXVar5 = X509V3_EXT_nconf(conf,ctx,*(char **)(lVar4 + 8),*(char **)(lVar4 + 0x10));
          if (pXVar5 == (X509_EXTENSION *)0x0) {
            return 0;
          }
          if (ctx->flags == 2) {
            x_00 = *sk;
            pAVar6 = X509_EXTENSION_get_object(pXVar5);
            while (iVar2 = X509v3_get_ext_by_OBJ(x_00,pAVar6,-1), -1 < iVar2) {
              pXVar7 = X509v3_get_ext(x_00,iVar2);
              X509v3_delete_ext(x_00,iVar2);
              X509_EXTENSION_free(pXVar7);
            }
          }
          X509v3_add_ext(sk,pXVar5,-1);
          X509_EXTENSION_free(pXVar5);
          iVar1 = iVar1 + 1;
          iVar2 = OPENSSL_sk_num(psVar3);
        } while (iVar1 < iVar2);
      }
    }
    iVar1 = 1;
  }
  return iVar1;
}

