
int OCSP_request_verify(OCSP_REQUEST *req,stack_st_X509 *certs,X509_STORE *store,ulong flags)

{
  bool bVar1;
  int iVar2;
  X509_STORE_CTX *ctx;
  X509 *x509;
  EVP_PKEY *pkey;
  char *pcVar3;
  uint uVar4;
  stack_st_X509 *chain;
  int line;
  OCSP_SIGNATURE *pOVar5;
  X509_NAME *name;
  
  uVar4 = (uint)flags;
  ctx = X509_STORE_CTX_new();
  if (ctx == (X509_STORE_CTX *)0x0) {
    iVar2 = 0x41;
    line = 0x152;
LAB_00b3ccc8:
    ERR_put_error(0x27,0x74,iVar2,"crypto/ocsp/ocsp_vfy.c",line);
  }
  else {
    if (req[2].tbsRequest == (OCSP_REQINFO *)0x0) {
      iVar2 = 0x80;
      line = 0x157;
      goto LAB_00b3ccc8;
    }
    pOVar5 = req->optionalSignature;
    if ((pOVar5 == (OCSP_SIGNATURE *)0x0) || (*(int *)&pOVar5->signatureAlgorithm != 4)) {
      iVar2 = 0x81;
      line = 0x15d;
      goto LAB_00b3ccc8;
    }
    name = (X509_NAME *)pOVar5->signature;
    if (((uVar4 >> 1 & 1) == 0) &&
       (x509 = X509_find_by_subject((stack_st_X509 *)(req[2].tbsRequest)->requestExtensions,name),
       x509 != (X509 *)0x0)) {
      bVar1 = true;
    }
    else {
      x509 = X509_find_by_subject(certs,name);
      if (x509 == (X509 *)0x0) {
        iVar2 = 0x76;
        line = 0x164;
        goto LAB_00b3ccc8;
      }
      bVar1 = false;
    }
    if ((flags & 0x200) != 0 && !bVar1) {
      uVar4 = uVar4 | 0x10;
    }
    if ((uVar4 >> 2 & 1) == 0) {
      pkey = (EVP_PKEY *)X509_get0_pubkey(x509);
      iVar2 = ASN1_item_verify((ASN1_ITEM *)OCSP_REQINFO_it,(X509_ALGOR *)req[2].tbsRequest,
                               (ASN1_BIT_STRING *)(req[2].tbsRequest)->requestList,req,pkey);
      if (iVar2 < 1) {
        iVar2 = 0x75;
        line = 0x16e;
        goto LAB_00b3ccc8;
      }
    }
    if ((uVar4 >> 4 & 1) != 0) {
LAB_00b3cdc4:
      iVar2 = 1;
      goto LAB_00b3ccd0;
    }
    if ((uVar4 >> 3 & 1) == 0) {
      chain = (stack_st_X509 *)(req[2].tbsRequest)->requestExtensions;
    }
    else {
      chain = (stack_st_X509 *)0x0;
    }
    iVar2 = X509_STORE_CTX_init(ctx,store,x509,chain);
    if (iVar2 == 0) {
      iVar2 = 0xb;
      line = 0x17a;
      goto LAB_00b3ccc8;
    }
    X509_STORE_CTX_set_purpose(ctx,8);
    X509_STORE_CTX_set_trust(ctx,7);
    iVar2 = X509_verify_cert(ctx);
    if (0 < iVar2) goto LAB_00b3cdc4;
    iVar2 = X509_STORE_CTX_get_error(ctx);
    ERR_put_error(0x27,0x74,0x65,"crypto/ocsp/ocsp_vfy.c",0x184);
    pcVar3 = X509_verify_cert_error_string((long)iVar2);
    ERR_add_error_data(2,"Verify error:",pcVar3);
  }
  iVar2 = 0;
LAB_00b3ccd0:
  X509_STORE_CTX_free(ctx);
  return iVar2;
}

