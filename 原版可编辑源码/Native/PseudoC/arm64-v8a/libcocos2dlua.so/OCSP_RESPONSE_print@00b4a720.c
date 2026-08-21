
int OCSP_RESPONSE_print(BIO *bp,OCSP_RESPONSE *o,ulong flags)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  OCSP_BASICRESP *a;
  long lVar5;
  undefined8 *puVar6;
  ASN1_ENUMERATED *a_00;
  X509 *pXVar7;
  char *pcVar8;
  char *pcVar9;
  OCSP_RESPBYTES *pOVar10;
  uint *puVar11;
  undefined8 *puVar12;
  
  pOVar10 = o->responseBytes;
  iVar1 = BIO_puts(bp,"OCSP Response Data:\n");
  if (0 < iVar1) {
    uVar4 = ASN1_ENUMERATED_get(o->responseStatus);
    if ((uVar4 < 7) && ((0x6fU >> (ulong)((uint)uVar4 & 0x1f) & 1) != 0)) {
      pcVar8 = *(char **)((&PTR_DAT_016beea0)[uVar4] + 8);
    }
    else {
      pcVar8 = "(UNKNOWN)";
    }
    iVar1 = BIO_printf(bp,"    OCSP Response Status: %s (0x%lx)\n",pcVar8,uVar4);
    if (0 < iVar1) {
      if (pOVar10 == (OCSP_RESPBYTES *)0x0) {
        return 1;
      }
      iVar1 = BIO_puts(bp,"    Response Type: ");
      if ((0 < iVar1) && (iVar1 = i2a_ASN1_OBJECT(bp,pOVar10->responseType), 0 < iVar1)) {
        iVar1 = OBJ_obj2nid(pOVar10->responseType);
        if (iVar1 != 0x16d) {
          BIO_puts(bp," (unknown response type)\n");
          return 1;
        }
        a = OCSP_response_get1_basic(o);
        if (a != (OCSP_BASICRESP *)0x0) {
          lVar5 = ASN1_INTEGER_get((ASN1_INTEGER *)a->tbsResponseData);
          iVar1 = BIO_printf(bp,"\n    Version: %lu (0x%lx)\n",lVar5 + 1,lVar5);
          if ((0 < iVar1) && (iVar1 = BIO_puts(bp,"    Responder Id: "), 0 < iVar1)) {
            if (*(int *)&a->signatureAlgorithm == 1) {
              i2a_ASN1_STRING(bp,a->signature,0);
            }
            else if (*(int *)&a->signatureAlgorithm == 0) {
              X509_NAME_print_ex(bp,(X509_NAME *)a->signature,0,0x82031f);
            }
            iVar1 = BIO_printf(bp,"\n    Produced At: ");
            if (((0 < iVar1) &&
                (iVar1 = ASN1_GENERALIZEDTIME_print(bp,(ASN1_GENERALIZEDTIME *)a->certs), iVar1 != 0
                )) && (iVar1 = BIO_printf(bp,"\n    Responses:\n"), 0 < iVar1)) {
              iVar1 = OPENSSL_sk_num(a[1].tbsResponseData);
              if (0 < iVar1) {
                iVar1 = 0;
                pcVar8 = "(UNKNOWN)";
                do {
                  lVar5 = OPENSSL_sk_value(a[1].tbsResponseData,iVar1);
                  if (lVar5 != 0) {
                    puVar6 = (undefined8 *)OPENSSL_sk_value(a[1].tbsResponseData,iVar1);
                    FUN_00b4a628(bp,*puVar6,4);
                    puVar11 = (uint *)puVar6[1];
                    pcVar9 = pcVar8;
                    if (*puVar11 < 3) {
                      pcVar9 = *(char **)((&PTR_DAT_016beee0)[(int)*puVar11] + 8);
                    }
                    iVar2 = BIO_printf(bp,"    Cert Status: %s",pcVar9);
                    if (iVar2 < 1) goto LAB_00b4ab9c;
                    if (*puVar11 == 1) {
                      puVar12 = *(undefined8 **)(puVar11 + 2);
                      iVar2 = BIO_printf(bp,"\n    Revocation Time: ");
                      if ((iVar2 < 1) ||
                         (iVar2 = ASN1_GENERALIZEDTIME_print(bp,(ASN1_GENERALIZEDTIME *)*puVar12),
                         iVar2 == 0)) goto LAB_00b4ab9c;
                      a_00 = (ASN1_ENUMERATED *)puVar12[1];
                      if (a_00 != (ASN1_ENUMERATED *)0x0) {
                        uVar4 = ASN1_ENUMERATED_get(a_00);
                        pcVar9 = pcVar8;
                        if ((uVar4 < 9) && ((0x17fU >> (ulong)((uint)uVar4 & 0x1f) & 1) != 0)) {
                          pcVar9 = *(char **)((&PTR_DAT_016bef00)[uVar4] + 8);
                        }
                        iVar2 = BIO_printf(bp,"\n    Revocation Reason: %s (0x%lx)",pcVar9,uVar4);
                        if (iVar2 < 1) goto LAB_00b4ab9c;
                      }
                    }
                    iVar2 = BIO_printf(bp,"\n    This Update: ");
                    if (((((iVar2 < 1) ||
                          (iVar2 = ASN1_GENERALIZEDTIME_print(bp,(ASN1_GENERALIZEDTIME *)puVar6[2]),
                          iVar2 == 0)) ||
                         ((puVar6[3] != 0 &&
                          ((iVar2 = BIO_printf(bp,"\n    Next Update: "), iVar2 < 1 ||
                           (iVar2 = ASN1_GENERALIZEDTIME_print(bp,(ASN1_GENERALIZEDTIME *)puVar6[3])
                           , iVar2 == 0)))))) || (iVar2 = BIO_write(bp,&DAT_013c61e6,1), iVar2 < 1))
                       || ((iVar2 = X509V3_extensions_print
                                              (bp,"Response Single Extensions",
                                               (stack_st_X509_EXTENSION *)puVar6[4],flags,8),
                           iVar2 == 0 || (iVar2 = BIO_write(bp,&DAT_013c61e6,1), iVar2 < 1))))
                    goto LAB_00b4ab9c;
                  }
                  iVar1 = iVar1 + 1;
                  iVar2 = OPENSSL_sk_num(a[1].tbsResponseData);
                } while (iVar1 < iVar2);
              }
              iVar1 = X509V3_extensions_print
                                (bp,"Response Extensions",
                                 (stack_st_X509_EXTENSION *)a[1].signatureAlgorithm,flags,4);
              if ((iVar1 != 0) &&
                 (iVar1 = X509_signature_print
                                    (bp,(X509_ALGOR *)&a[1].signature,
                                     (ASN1_STRING *)a[2].tbsResponseData), 0 < iVar1)) {
                iVar1 = OPENSSL_sk_num(a[2].signatureAlgorithm);
                if (iVar1 < 1) {
                  iVar1 = 1;
                }
                else {
                  iVar2 = 0;
                  iVar1 = 1;
                  do {
                    pXVar7 = (X509 *)OPENSSL_sk_value(a[2].signatureAlgorithm,iVar2);
                    X509_print(bp,pXVar7);
                    pXVar7 = (X509 *)OPENSSL_sk_value(a[2].signatureAlgorithm,iVar2);
                    PEM_write_bio_X509(bp,pXVar7);
                    iVar2 = iVar2 + 1;
                    iVar3 = OPENSSL_sk_num(a[2].signatureAlgorithm);
                  } while (iVar2 < iVar3);
                }
                goto LAB_00b4a884;
              }
            }
          }
        }
LAB_00b4ab9c:
        iVar1 = 0;
        goto LAB_00b4a884;
      }
    }
  }
  iVar1 = 0;
  a = (OCSP_BASICRESP *)0x0;
LAB_00b4a884:
  OCSP_BASICRESP_free(a);
  return iVar1;
}

