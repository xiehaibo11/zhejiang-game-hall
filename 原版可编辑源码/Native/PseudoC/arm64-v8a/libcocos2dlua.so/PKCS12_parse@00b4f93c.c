
int PKCS12_parse(PKCS12 *p12,char *pass,EVP_PKEY **pkey,X509 **cert,stack_st_X509 **ca)

{
  int iVar1;
  int iVar2;
  stack_st_PKCS7 *psVar3;
  PKCS7 *p7;
  stack_st_PKCS12_SAFEBAG *psVar4;
  stack_st_X509 *psVar5;
  long lVar6;
  X509 *a;
  X509 *x509;
  
  if (p12 == (PKCS12 *)0x0) {
    iVar1 = 0x69;
    iVar2 = 0x29;
LAB_00b4fb70:
    ERR_put_error(0x23,0x76,iVar1,"crypto/pkcs12/p12_kiss.c",iVar2);
  }
  else {
    if (pkey != (EVP_PKEY **)0x0) {
      *pkey = (EVP_PKEY *)0x0;
    }
    if (cert != (X509 **)0x0) {
      *cert = (X509 *)0x0;
    }
    if ((pass == (char *)0x0) || (*pass == '\0')) {
      iVar1 = PKCS12_verify_mac(p12,(char *)0x0,0);
      pass = (char *)0x0;
      if (iVar1 == 0) {
        pass = "";
        iVar1 = PKCS12_verify_mac(p12,"",0);
        if (iVar1 == 0) {
          iVar1 = 0x41;
          goto LAB_00b4fc58;
        }
      }
LAB_00b4f9f0:
      lVar6 = OPENSSL_sk_new_null();
      if (lVar6 == 0) {
        iVar1 = 0x41;
        iVar2 = 0x4d;
        goto LAB_00b4fb70;
      }
      psVar3 = PKCS12_unpack_authsafes(p12);
      if (psVar3 != (stack_st_PKCS7 *)0x0) {
        iVar1 = OPENSSL_sk_num(psVar3);
        if (0 < iVar1) {
          iVar1 = 0;
          do {
            p7 = (PKCS7 *)OPENSSL_sk_value(psVar3,iVar1);
            iVar2 = OBJ_obj2nid(p7->type);
            if (iVar2 == 0x1a) {
              psVar4 = PKCS12_unpack_p7encdata(p7,pass,-1);
joined_r0x00b4fa78:
              if (psVar4 != (stack_st_PKCS12_SAFEBAG *)0x0) {
                iVar2 = FUN_00b4fcb4(psVar4,pass,pkey,lVar6);
                OPENSSL_sk_pop_free(psVar4,PKCS12_SAFEBAG_free);
                if (iVar2 != 0) goto LAB_00b4faa4;
              }
              OPENSSL_sk_pop_free(psVar3,PKCS7_free);
              goto LAB_00b4fc20;
            }
            if (iVar2 == 0x15) {
              psVar4 = PKCS12_unpack_p7data(p7);
              goto joined_r0x00b4fa78;
            }
LAB_00b4faa4:
            iVar1 = iVar1 + 1;
            iVar2 = OPENSSL_sk_num(psVar3);
          } while (iVar1 < iVar2);
        }
        OPENSSL_sk_pop_free(psVar3,PKCS7_free);
        x509 = (X509 *)OPENSSL_sk_pop(lVar6);
        if (x509 != (X509 *)0x0) {
          if (pkey == (EVP_PKEY **)0x0) {
            if (ca == (stack_st_X509 **)0x0) {
              do {
                X509_free(x509);
                x509 = (X509 *)OPENSSL_sk_pop(lVar6);
              } while (x509 != (X509 *)0x0);
            }
            else {
              do {
                if (x509 != (X509 *)0x0) {
                  psVar5 = *ca;
                  if (psVar5 == (stack_st_X509 *)0x0) {
                    psVar5 = (stack_st_X509 *)OPENSSL_sk_new_null();
                    *ca = psVar5;
                    if (psVar5 == (stack_st_X509 *)0x0) goto LAB_00b4fc64;
                  }
                  iVar1 = OPENSSL_sk_push(psVar5,x509);
                  if (iVar1 == 0) goto LAB_00b4fc64;
                }
                X509_free((X509 *)0x0);
                x509 = (X509 *)OPENSSL_sk_pop(lVar6);
              } while (x509 != (X509 *)0x0);
            }
          }
          else {
            do {
              if (((cert != (X509 **)0x0) && (*pkey != (EVP_PKEY *)0x0)) && (*cert == (X509 *)0x0))
              {
                ERR_set_mark();
                iVar1 = X509_check_private_key(x509,*pkey);
                if (iVar1 != 0) {
                  *cert = x509;
                  x509 = (X509 *)0x0;
                }
                ERR_pop_to_mark();
              }
              a = x509;
              if ((ca != (stack_st_X509 **)0x0) && (a = (X509 *)0x0, x509 != (X509 *)0x0)) {
                psVar5 = *ca;
                if (psVar5 == (stack_st_X509 *)0x0) {
                  psVar5 = (stack_st_X509 *)OPENSSL_sk_new_null();
                  *ca = psVar5;
                  if (psVar5 == (stack_st_X509 *)0x0) goto LAB_00b4fc64;
                }
                iVar1 = OPENSSL_sk_push(psVar5,x509);
                if (iVar1 == 0) goto LAB_00b4fc64;
                a = (X509 *)0x0;
              }
              X509_free(a);
              x509 = (X509 *)OPENSSL_sk_pop(lVar6);
            } while (x509 != (X509 *)0x0);
          }
        }
        OPENSSL_sk_pop_free(lVar6,X509_free);
        return 1;
      }
LAB_00b4fc20:
      ERR_put_error(0x23,0x76,0x72,"crypto/pkcs12/p12_kiss.c",0x52);
    }
    else {
      iVar1 = PKCS12_verify_mac(p12,pass,-1);
      if (iVar1 != 0) goto LAB_00b4f9f0;
      iVar1 = 0x45;
LAB_00b4fc58:
      ERR_put_error(0x23,0x76,0x71,"crypto/pkcs12/p12_kiss.c",iVar1);
      lVar6 = 0;
    }
    x509 = (X509 *)0x0;
LAB_00b4fc64:
    if (pkey != (EVP_PKEY **)0x0) {
      EVP_PKEY_free(*pkey);
    }
    if (cert != (X509 **)0x0) {
      X509_free(*cert);
    }
    X509_free(x509);
    OPENSSL_sk_pop_free(lVar6,X509_free);
  }
  return 0;
}

