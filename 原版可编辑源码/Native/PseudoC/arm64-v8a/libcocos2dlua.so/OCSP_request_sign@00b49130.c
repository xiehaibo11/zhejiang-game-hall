
int OCSP_request_sign(OCSP_REQUEST *req,X509 *signer,EVP_PKEY *key,EVP_MD *dgst,stack_st_X509 *certs
                     ,ulong flags)

{
  int iVar1;
  int iVar2;
  X509_NAME *name;
  OCSP_SIGNATURE *a;
  OCSP_REQINFO *pOVar3;
  stack_st_X509_EXTENSION *psVar4;
  long lVar5;
  
  name = X509_get_subject_name(signer);
  a = (OCSP_SIGNATURE *)GENERAL_NAME_new();
  if (a != (OCSP_SIGNATURE *)0x0) {
    iVar1 = X509_NAME_set((X509_NAME **)&a->signature,name);
    if (iVar1 == 0) {
      GENERAL_NAME_free((GENERAL_NAME *)a);
    }
    else {
      *(undefined4 *)&a->signatureAlgorithm = 4;
      GENERAL_NAME_free((GENERAL_NAME *)req->optionalSignature);
      req->optionalSignature = a;
      pOVar3 = (OCSP_REQINFO *)OCSP_SIGNATURE_new();
      req[2].tbsRequest = pOVar3;
      if (pOVar3 != (OCSP_REQINFO *)0x0) {
        if (key != (EVP_PKEY *)0x0) {
          iVar1 = X509_check_private_key(signer,key);
          if (iVar1 == 0) {
            ERR_put_error(0x27,0x6e,0x6e,"crypto/ocsp/ocsp_cl.c",0x70);
            goto LAB_00b492b8;
          }
          iVar1 = ASN1_item_sign((ASN1_ITEM *)OCSP_REQINFO_it,(X509_ALGOR *)req[2].tbsRequest,
                                 (X509_ALGOR *)0x0,
                                 (ASN1_BIT_STRING *)(req[2].tbsRequest)->requestList,req,key,dgst);
          if (iVar1 == 0) goto LAB_00b492b8;
        }
        if ((flags & 1) == 0) {
          pOVar3 = req[2].tbsRequest;
          if (pOVar3 == (OCSP_REQINFO *)0x0) {
            pOVar3 = (OCSP_REQINFO *)OCSP_SIGNATURE_new();
            req[2].tbsRequest = pOVar3;
            if (pOVar3 == (OCSP_REQINFO *)0x0) goto LAB_00b492b8;
          }
          if (signer != (X509 *)0x0) {
            psVar4 = pOVar3->requestExtensions;
            if (psVar4 == (stack_st_X509_EXTENSION *)0x0) {
              psVar4 = (stack_st_X509_EXTENSION *)OPENSSL_sk_new_null();
              pOVar3->requestExtensions = psVar4;
              if (psVar4 == (stack_st_X509_EXTENSION *)0x0) goto LAB_00b492b8;
            }
            iVar1 = OPENSSL_sk_push(psVar4,signer);
            if (iVar1 == 0) goto LAB_00b492b8;
            X509_up_ref(signer);
          }
          iVar1 = OPENSSL_sk_num(certs);
          if (0 < iVar1) {
            iVar1 = 0;
            do {
              lVar5 = OPENSSL_sk_value(certs,iVar1);
              pOVar3 = req[2].tbsRequest;
              if (pOVar3 == (OCSP_REQINFO *)0x0) {
                pOVar3 = (OCSP_REQINFO *)OCSP_SIGNATURE_new();
                req[2].tbsRequest = pOVar3;
                if (pOVar3 == (OCSP_REQINFO *)0x0) goto LAB_00b492b8;
              }
              if (lVar5 != 0) {
                psVar4 = pOVar3->requestExtensions;
                if (psVar4 == (stack_st_X509_EXTENSION *)0x0) {
                  psVar4 = (stack_st_X509_EXTENSION *)OPENSSL_sk_new_null();
                  pOVar3->requestExtensions = psVar4;
                  if (psVar4 == (stack_st_X509_EXTENSION *)0x0) goto LAB_00b492b8;
                }
                iVar2 = OPENSSL_sk_push(psVar4,lVar5);
                if (iVar2 == 0) goto LAB_00b492b8;
                X509_up_ref(lVar5);
              }
              iVar1 = iVar1 + 1;
              iVar2 = OPENSSL_sk_num(certs);
              if (iVar2 <= iVar1) {
                return 1;
              }
            } while( true );
          }
        }
        return 1;
      }
    }
  }
LAB_00b492b8:
  OCSP_SIGNATURE_free((OCSP_SIGNATURE *)req[2].tbsRequest);
  req[2].tbsRequest = (OCSP_REQINFO *)0x0;
  return 0;
}

