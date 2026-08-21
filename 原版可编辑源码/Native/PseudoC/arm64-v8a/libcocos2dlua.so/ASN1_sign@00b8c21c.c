
int ASN1_sign(undefined1 *i2d,X509_ALGOR *algor1,X509_ALGOR *algor2,ASN1_BIT_STRING *signature,
             char *data,EVP_PKEY *pkey,EVP_MD *type)

{
  int iVar1;
  uint num;
  int iVar2;
  EVP_MD_CTX *ctx;
  ASN1_TYPE *pAVar3;
  ASN1_OBJECT *pAVar4;
  void *d;
  uchar *md;
  int line;
  uint local_6c;
  void *local_68;
  
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  local_6c = 0;
  if (ctx == (EVP_MD_CTX *)0x0) {
    iVar1 = 0x41;
    iVar2 = 0x27;
LAB_00b8c464:
    ERR_put_error(0xd,0x80,iVar1,"crypto/asn1/a_sign.c",iVar2);
  }
  else {
    if (algor1 == (X509_ALGOR *)0x0) {
LAB_00b8c2ec:
      if (algor2 != (X509_ALGOR *)0x0) {
        pAVar3 = algor2->parameter;
        if (type->pkey_type == 0x71) {
          ASN1_TYPE_free(pAVar3);
          algor2->parameter = (ASN1_TYPE *)0x0;
        }
        else if ((pAVar3 == (ASN1_TYPE *)0x0) || (pAVar3->type != 5)) {
          ASN1_TYPE_free(pAVar3);
          pAVar3 = ASN1_TYPE_new();
          algor2->parameter = pAVar3;
          if (pAVar3 == (ASN1_TYPE *)0x0) goto LAB_00b8c468;
          pAVar3->type = 5;
        }
        ASN1_OBJECT_free(algor2->algorithm);
        pAVar4 = OBJ_nid2obj(type->pkey_type);
        algor2->algorithm = pAVar4;
        if (pAVar4 == (ASN1_OBJECT *)0x0) {
LAB_00b8c430:
          iVar1 = 0xa2;
          iVar2 = 0x42;
          goto LAB_00b8c464;
        }
        if (pAVar4->length == 0) goto LAB_00b8c44c;
      }
      iVar1 = (*(code *)i2d)(data,0);
      d = CRYPTO_malloc(iVar1,"crypto/asn1/a_sign.c",0x4c);
      num = EVP_PKEY_size(pkey);
      local_6c = num;
      md = CRYPTO_malloc(num,"crypto/asn1/a_sign.c",0x4e);
      if ((d == (void *)0x0) || (md == (uchar *)0x0)) {
        iVar2 = 0x41;
        line = 0x51;
      }
      else {
        local_68 = d;
        (*(code *)i2d)(data,&local_68);
        iVar2 = EVP_DigestInit_ex(ctx,type,(ENGINE *)0x0);
        if (((iVar2 != 0) && (iVar2 = EVP_DigestUpdate(ctx,d,(long)iVar1), iVar2 != 0)) &&
           (iVar2 = EVP_SignFinal(ctx,md,&local_6c,pkey), iVar2 != 0)) {
          CRYPTO_free(signature->data);
          signature->data = md;
          signature->flags = signature->flags & 0xfffffffffffffff0U | 8;
          md = (uchar *)0x0;
          signature->length = local_6c;
          goto LAB_00b8c478;
        }
        iVar2 = 6;
                    /* try { // try from 00b8c504 to 00c8c543 has its CatchHandler @ 00b8c8f4 */
        line = 0x5c;
      }
      local_6c = 0;
      ERR_put_error(0xd,0x80,iVar2,"crypto/asn1/a_sign.c",line);
      goto LAB_00b8c478;
    }
    pAVar3 = algor1->parameter;
    if (type->pkey_type == 0x71) {
      ASN1_TYPE_free(pAVar3);
      algor1->parameter = (ASN1_TYPE *)0x0;
LAB_00b8c2cc:
      ASN1_OBJECT_free(algor1->algorithm);
      pAVar4 = OBJ_nid2obj(type->pkey_type);
      algor1->algorithm = pAVar4;
      if (pAVar4 == (ASN1_OBJECT *)0x0) goto LAB_00b8c430;
      if (pAVar4->length != 0) goto LAB_00b8c2ec;
LAB_00b8c44c:
                    /* catch() { ... } // from try @ 00b8c694 with catch @ 00b8c458
                       catch() { ... } // from try @ 00b8c7b4 with catch @ 00b8c458
                       catch() { ... } // from try @ 00b8c8a8 with catch @ 00b8c458 */
      iVar1 = 0x9a;
      iVar2 = 0x47;
      goto LAB_00b8c464;
    }
    if ((pAVar3 != (ASN1_TYPE *)0x0) && (pAVar3->type == 5)) goto LAB_00b8c2cc;
    ASN1_TYPE_free(pAVar3);
    pAVar3 = ASN1_TYPE_new();
    algor1->parameter = pAVar3;
    if (pAVar3 != (ASN1_TYPE *)0x0) {
      pAVar3->type = 5;
      goto LAB_00b8c2cc;
    }
  }
LAB_00b8c468:
  d = (void *)0x0;
  md = (uchar *)0x0;
  iVar1 = 0;
  num = 0;
LAB_00b8c478:
  EVP_MD_CTX_free(ctx);
  CRYPTO_clear_free(d,iVar1,"crypto/asn1/a_sign.c",0x6b);
  CRYPTO_clear_free(md,(long)(int)num,"crypto/asn1/a_sign.c",0x6c);
  return local_6c;
}

