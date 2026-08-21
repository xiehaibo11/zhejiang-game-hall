
/* WARNING: Type propagation algorithm not settling */

int CMS_set1_signers_certs(CMS_ContentInfo *cms,stack_st_X509 *certs,uint flags)

{
  int iVar1;
  int iVar2;
  int iVar3;
  X509 *pXVar4;
  EVP_PKEY *pEVar5;
  long lVar6;
  int *piVar7;
  int *piVar8;
  undefined8 uVar9;
  int iVar10;
  long lVar11;
  
  iVar1 = OBJ_obj2nid(*(ASN1_OBJECT **)cms);
  if (iVar1 == 0x16) {
    lVar11 = *(long *)(cms + 8);
    if (lVar11 != 0) {
      uVar9 = *(undefined8 *)(lVar11 + 0x18);
      iVar1 = OPENSSL_sk_num(*(undefined8 *)(lVar11 + 0x28));
      if (iVar1 < 1) {
        return 0;
      }
      iVar1 = 0;
      iVar10 = 0;
      do {
        lVar6 = OPENSSL_sk_value(*(undefined8 *)(lVar11 + 0x28),iVar10);
        if (*(long *)(lVar6 + 0x38) == 0) {
          iVar3 = OPENSSL_sk_num(certs);
          if (0 < iVar3) {
            iVar3 = 0;
            do {
              pXVar4 = (X509 *)OPENSSL_sk_value(certs,iVar3);
              piVar7 = *(int **)(lVar6 + 8);
              if (*piVar7 == 1) {
                iVar2 = cms_keyid_cert_cmp(*(undefined8 *)(piVar7 + 2),pXVar4);
joined_r0x00b92450:
                if (iVar2 == 0) {
                  if (pXVar4 != (X509 *)0x0) {
                    X509_up_ref(pXVar4);
                    EVP_PKEY_free(*(EVP_PKEY **)(lVar6 + 0x40));
                    pEVar5 = X509_get_pubkey(pXVar4);
                    *(EVP_PKEY **)(lVar6 + 0x40) = pEVar5;
                  }
                  X509_free(*(X509 **)(lVar6 + 0x38));
                  *(X509 **)(lVar6 + 0x38) = pXVar4;
                  iVar1 = iVar1 + 1;
                  break;
                }
              }
              else if (*piVar7 == 0) {
                iVar2 = cms_ias_cert_cmp(*(undefined8 *)(piVar7 + 2),pXVar4);
                goto joined_r0x00b92450;
              }
              iVar3 = iVar3 + 1;
              iVar2 = OPENSSL_sk_num(certs);
            } while (iVar3 < iVar2);
          }
          if ((((flags >> 4 & 1) == 0) && (*(long *)(lVar6 + 0x38) == 0)) &&
             (iVar3 = OPENSSL_sk_num(uVar9), 0 < iVar3)) {
            iVar3 = 0;
            do {
              piVar7 = (int *)OPENSSL_sk_value(uVar9,iVar3);
              if (*piVar7 == 0) {
                piVar8 = *(int **)(lVar6 + 8);
                pXVar4 = *(X509 **)(piVar7 + 2);
                if (*piVar8 == 1) {
                  iVar2 = cms_keyid_cert_cmp(*(undefined8 *)(piVar8 + 2),pXVar4);
                }
                else {
                  if (*piVar8 != 0) goto LAB_00b9249c;
                  iVar2 = cms_ias_cert_cmp(*(undefined8 *)(piVar8 + 2),pXVar4);
                }
                if (iVar2 == 0) {
                  if (pXVar4 != (X509 *)0x0) {
                    X509_up_ref(pXVar4);
                    EVP_PKEY_free(*(EVP_PKEY **)(lVar6 + 0x40));
                    pEVar5 = X509_get_pubkey(pXVar4);
                    *(EVP_PKEY **)(lVar6 + 0x40) = pEVar5;
                  }
                  X509_free(*(X509 **)(lVar6 + 0x38));
                  *(X509 **)(lVar6 + 0x38) = pXVar4;
                  iVar1 = iVar1 + 1;
                  break;
                }
              }
LAB_00b9249c:
              iVar3 = iVar3 + 1;
              iVar2 = OPENSSL_sk_num(uVar9);
            } while (iVar3 < iVar2);
          }
        }
        iVar10 = iVar10 + 1;
        iVar3 = OPENSSL_sk_num(*(undefined8 *)(lVar11 + 0x28));
        if (iVar3 <= iVar10) {
          return iVar1;
        }
      } while( true );
    }
  }
  else {
    ERR_put_error(0x2e,0x85,0x6c,"crypto/cms/cms_sd.c",0x1a);
  }
  return -1;
}

