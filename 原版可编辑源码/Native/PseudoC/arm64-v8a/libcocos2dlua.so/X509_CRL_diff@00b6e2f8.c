
X509_CRL * X509_CRL_diff(X509_CRL *param_1,X509_CRL *param_2,EVP_PKEY *param_3,EVP_MD *param_4)

{
  int iVar1;
  int iVar2;
  X509_NAME *pXVar3;
  X509_NAME *b;
  X509_CRL *x;
  undefined8 uVar4;
  X509_EXTENSION *ex;
  ASN1_INTEGER *serial;
  long lVar5;
  long lVar6;
  X509_REVOKED *local_48;
  
  lVar5._0_4_ = param_1[1].idp_flags;
  lVar5._4_4_ = param_1[1].idp_reasons;
  if ((lVar5 == 0) &&
     (lVar6._0_4_ = param_2[1].idp_flags, lVar6._4_4_ = param_2[1].idp_reasons, lVar6 == 0)) {
    if ((param_1[1].idp == (ISSUING_DIST_POINT *)0x0) ||
       (param_2[1].idp == (ISSUING_DIST_POINT *)0x0)) {
      iVar1 = 0x82;
      iVar2 = 0x79e;
    }
    else {
      pXVar3 = (X509_NAME *)X509_CRL_get_issuer(param_1);
      b = (X509_NAME *)X509_CRL_get_issuer(param_2);
      iVar1 = X509_NAME_cmp(pXVar3,b);
      if (iVar1 == 0) {
        iVar1 = FUN_00b6e640(param_1,param_2,0x5a);
        if (iVar1 == 0) {
          iVar1 = 0x6e;
          iVar2 = 0x7a8;
        }
        else {
          iVar1 = FUN_00b6e640(param_1,param_2,0x302);
          if (iVar1 == 0) {
            iVar1 = 0x80;
            iVar2 = 0x7ac;
          }
          else {
            iVar1 = ASN1_INTEGER_cmp((ASN1_INTEGER *)param_2[1].idp,(ASN1_INTEGER *)param_1[1].idp);
            if (iVar1 < 1) {
              iVar1 = 0x84;
              iVar2 = 0x7b1;
            }
            else {
                    /* try { // try from 00b6e434 to 00c6e437 has its CatchHandler @ 00b6e548 */
              if ((param_3 == (EVP_PKEY *)0x0) ||
                 ((iVar1 = X509_CRL_verify(param_1,param_3), 0 < iVar1 &&
                  (iVar1 = X509_CRL_verify(param_2,param_3), 0 < iVar1)))) {
                x = X509_CRL_new();
                if ((x != (X509_CRL *)0x0) && (iVar1 = X509_CRL_set_version(x,1), iVar1 != 0)) {
                  pXVar3 = (X509_NAME *)X509_CRL_get_issuer(param_2);
                  iVar1 = X509_CRL_set_issuer_name(x,pXVar3);
                  if (iVar1 != 0) {
                    uVar4 = X509_CRL_get0_lastUpdate(param_2);
                    iVar1 = X509_CRL_set1_lastUpdate(x,uVar4);
                    if (iVar1 != 0) {
                      uVar4 = X509_CRL_get0_nextUpdate(param_2);
                      iVar1 = X509_CRL_set1_nextUpdate(x,uVar4);
                      if ((iVar1 != 0) &&
                         (iVar1 = X509_CRL_add1_ext_i2d(x,0x8c,param_1[1].idp,1,0), iVar1 != 0)) {
                        iVar1 = X509_CRL_get_ext_count(param_2);
                        if (0 < iVar1) {
                          iVar1 = 0;
                          do {
                            ex = X509_CRL_get_ext(param_2,iVar1);
                            iVar2 = X509_CRL_add_ext(x,ex,-1);
                            if (iVar2 == 0) goto LAB_00b6e618;
                            iVar1 = iVar1 + 1;
                            iVar2 = X509_CRL_get_ext_count(param_2);
                          } while (iVar1 < iVar2);
                        }
                        uVar4 = X509_CRL_get_REVOKED(param_2);
                        iVar1 = OPENSSL_sk_num();
                        if (0 < iVar1) {
                          iVar1 = 0;
                          do {
                            serial = (ASN1_INTEGER *)OPENSSL_sk_value(uVar4,iVar1);
                            iVar2 = X509_CRL_get0_by_serial(param_1,&local_48,serial);
                            if (iVar2 == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b6e434 with catch @ 00b6e548
                        */
                              local_48 = (X509_REVOKED *)X509_REVOKED_dup(serial);
                              if (local_48 == (X509_REVOKED *)0x0) goto LAB_00b6e618;
                              iVar2 = X509_CRL_add0_revoked(x,local_48);
                              if (iVar2 == 0) {
                                X509_REVOKED_free(local_48);
                                goto LAB_00b6e618;
                              }
                            }
                            iVar1 = iVar1 + 1;
                            iVar2 = OPENSSL_sk_num(uVar4);
                          } while (iVar1 < iVar2);
                        }
                        if (param_3 == (EVP_PKEY *)0x0) {
                          return x;
                        }
                        if (param_4 == (EVP_MD *)0x0) {
                          return x;
                        }
                        iVar1 = X509_CRL_sign(x,param_3,param_4);
                        if (iVar1 != 0) {
                          return x;
                        }
                      }
                    }
                  }
                }
LAB_00b6e618:
                ERR_put_error(0xb,0x69,0x41,"crypto/x509/x509_vfy.c",0x7f5);
                X509_CRL_free(x);
                return (X509_CRL *)0x0;
              }
              iVar1 = 0x83;
              iVar2 = 0x7b7;
            }
          }
        }
      }
      else {
        iVar1 = 0x81;
        iVar2 = 0x7a3;
      }
    }
  }
  else {
    iVar1 = 0x7f;
    iVar2 = 0x799;
  }
  ERR_put_error(0xb,0x69,iVar1,"crypto/x509/x509_vfy.c",iVar2);
  return (X509_CRL *)0x0;
}

