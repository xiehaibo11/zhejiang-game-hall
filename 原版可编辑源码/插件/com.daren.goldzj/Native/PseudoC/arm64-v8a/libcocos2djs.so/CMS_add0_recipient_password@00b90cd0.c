
CMS_RecipientInfo *
CMS_add0_recipient_password
          (CMS_ContentInfo *cms,int iter,int wrap_nid,int pbe_nid,uchar *pass,ssize_t passlen,
          EVP_CIPHER *kekciph)

{
  int iVar1;
  long lVar2;
  X509_ALGOR *pXVar3;
  EVP_CIPHER_CTX *ctx;
  ASN1_TYPE *pAVar4;
  EVP_CIPHER *ctx_00;
  ASN1_OBJECT *pAVar5;
  ASN1_VALUE *val;
  ASN1_VALUE *pAVar6;
  X509_ALGOR *pXVar7;
  ASN1_STRING *pAVar8;
  int line;
  long lVar9;
  uchar auStack_60 [16];
  
  lVar2 = cms_get0_enveloped();
  if (lVar2 == 0) {
    return (CMS_RecipientInfo *)0x0;
  }
  if ((kekciph == (EVP_CIPHER *)0x0) &&
     (kekciph = *(EVP_CIPHER **)(*(long *)(lVar2 + 0x18) + 0x18), kekciph == (EVP_CIPHER *)0x0)) {
    ERR_put_error(0x2e,0xa5,0x7e,"crypto/cms/cms_pwri.c",0x44);
    return (CMS_RecipientInfo *)0x0;
  }
  if ((0 < wrap_nid) && (wrap_nid != 0x37d)) {
    ERR_put_error(0x2e,0xa5,0xb3,"crypto/cms/cms_pwri.c",0x49);
    return (CMS_RecipientInfo *)0x0;
  }
  pXVar3 = X509_ALGOR_new();
  if (pXVar3 == (X509_ALGOR *)0x0) {
    val = (ASN1_VALUE *)0x0;
    goto LAB_00b90fd8;
  }
  ctx = EVP_CIPHER_CTX_new();
  iVar1 = EVP_EncryptInit_ex(ctx,kekciph,(ENGINE *)0x0,(uchar *)0x0,(uchar *)0x0);
  if (iVar1 < 1) {
    iVar1 = 6;
    line = 0x55;
LAB_00b90f30:
    ERR_put_error(0x2e,0xa5,iVar1,"crypto/cms/cms_pwri.c",line);
  }
  else {
    iVar1 = EVP_CIPHER_CTX_iv_length(ctx);
    if (iVar1 < 1) {
LAB_00b90de8:
      ctx_00 = EVP_CIPHER_CTX_cipher(ctx);
      iVar1 = EVP_CIPHER_type(ctx_00);
      pAVar5 = OBJ_nid2obj(iVar1);
      pXVar3->algorithm = pAVar5;
      EVP_CIPHER_CTX_free(ctx);
      val = ASN1_item_new((ASN1_ITEM *)CMS_RecipientInfo_it);
      if (val == (ASN1_VALUE *)0x0) {
LAB_00b90fd8:
        ERR_put_error(0x2e,0xa5,0x41,"crypto/cms/cms_pwri.c",0xa1);
        EVP_CIPHER_CTX_free((EVP_CIPHER_CTX *)0x0);
        if (val == (ASN1_VALUE *)0x0) goto LAB_00b91010;
      }
      else {
        pAVar6 = ASN1_item_new((ASN1_ITEM *)CMS_PasswordRecipientInfo_it);
        *(ASN1_VALUE **)(val + 8) = pAVar6;
        if (pAVar6 == (ASN1_VALUE *)0x0) goto LAB_00b90fd8;
        *(undefined4 *)val = 3;
        X509_ALGOR_free(*(X509_ALGOR **)(pAVar6 + 0x10));
        pXVar7 = X509_ALGOR_new();
        *(X509_ALGOR **)(pAVar6 + 0x10) = pXVar7;
        if (pXVar7 == (X509_ALGOR *)0x0) goto LAB_00b90fd8;
        pAVar5 = OBJ_nid2obj(0x37d);
        **(undefined8 **)(pAVar6 + 0x10) = pAVar5;
        pAVar4 = ASN1_TYPE_new();
        *(ASN1_TYPE **)(*(long *)(pAVar6 + 0x10) + 8) = pAVar4;
        if ((pAVar4 == (ASN1_TYPE *)0x0) ||
           (pAVar8 = ASN1_item_pack(pXVar3,(ASN1_ITEM *)X509_ALGOR_it,&(pAVar4->value).octet_string)
           , pAVar8 == (ASN1_STRING *)0x0)) goto LAB_00b90fd8;
        **(undefined4 **)(*(long *)(pAVar6 + 0x10) + 8) = 0x10;
        X509_ALGOR_free(pXVar3);
        pXVar3 = PKCS5_pbkdf2_set(iter,(uchar *)0x0,0,-1,-1);
        *(X509_ALGOR **)(pAVar6 + 8) = pXVar3;
        if (pXVar3 != (X509_ALGOR *)0x0) {
          if (*(int *)val == 3) {
            lVar9 = *(long *)(val + 8);
            *(uchar **)(lVar9 + 0x20) = pass;
            if ((pass != (uchar *)0x0) && (passlen < 0)) {
              passlen = strlen((char *)pass);
            }
            *(ssize_t *)(lVar9 + 0x28) = passlen;
          }
          else {
            ERR_put_error(0x2e,0xa8,0xb1,"crypto/cms/cms_pwri.c",0x1a);
          }
          *(undefined8 *)pAVar6 = 0;
          iVar1 = OPENSSL_sk_push(*(undefined8 *)(lVar2 + 0x10),val);
          if (iVar1 != 0) {
            return (CMS_RecipientInfo *)val;
          }
          pXVar3 = (X509_ALGOR *)0x0;
          goto LAB_00b90fd8;
        }
        EVP_CIPHER_CTX_free((EVP_CIPHER_CTX *)0x0);
        pXVar3 = (X509_ALGOR *)0x0;
      }
      ASN1_item_free(val,(ASN1_ITEM *)CMS_RecipientInfo_it);
      goto LAB_00b91010;
    }
    iVar1 = RAND_bytes(auStack_60,iVar1);
    if (0 < iVar1) {
      iVar1 = EVP_EncryptInit_ex(ctx,(EVP_CIPHER *)0x0,(ENGINE *)0x0,(uchar *)0x0,auStack_60);
      if (iVar1 < 1) {
        iVar1 = 6;
        line = 0x5f;
      }
      else {
        pAVar4 = ASN1_TYPE_new();
        pXVar3->parameter = pAVar4;
        if (pAVar4 == (ASN1_TYPE *)0x0) {
          iVar1 = 0x41;
          line = 100;
        }
        else {
          iVar1 = EVP_CIPHER_param_to_asn1(ctx,pAVar4);
          if (0 < iVar1) goto LAB_00b90de8;
          iVar1 = 0x66;
          line = 0x69;
        }
      }
      goto LAB_00b90f30;
    }
  }
  EVP_CIPHER_CTX_free(ctx);
LAB_00b91010:
  X509_ALGOR_free(pXVar3);
  return (CMS_RecipientInfo *)0x0;
}

