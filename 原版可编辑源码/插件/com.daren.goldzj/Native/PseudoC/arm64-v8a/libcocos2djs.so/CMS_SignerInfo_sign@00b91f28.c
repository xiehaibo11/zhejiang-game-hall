
int CMS_SignerInfo_sign(CMS_SignerInfo *si)

{
  int iVar1;
  char *name;
  EVP_MD *type;
  EVP_PKEY_CTX *pEVar2;
  ASN1_TIME *a;
  int reason;
  int line;
  EVP_MD_CTX *ctx;
  int local_48 [2];
  uchar *local_40;
  EVP_PKEY_CTX *local_38;
  
  ctx = *(EVP_MD_CTX **)(si + 0x48);
  local_40 = (uchar *)0x0;
  iVar1 = OBJ_obj2nid((ASN1_OBJECT *)**(undefined8 **)(si + 0x10));
  name = OBJ_nid2sn(iVar1);
  type = EVP_get_digestbyname(name);
  if (type == (EVP_MD *)0x0) {
    return 0;
  }
  iVar1 = CMS_signed_get_attr_by_NID(si,0x34,-1);
  if (iVar1 < 0) {
    a = X509_gmtime_adj((ASN1_TIME *)0x0,0);
    if ((a != (ASN1_TIME *)0x0) &&
       (iVar1 = CMS_signed_add1_attr_by_NID(si,0x34,a->type,a,-1), 0 < iVar1)) {
      ASN1_TIME_free(a);
      pEVar2 = *(EVP_PKEY_CTX **)(si + 0x50);
      goto joined_r0x00b91fc8;
    }
    ASN1_TIME_free(a);
    iVar1 = 0x67;
    reason = 0x41;
    line = 0x18c;
  }
  else {
    pEVar2 = *(EVP_PKEY_CTX **)(si + 0x50);
joined_r0x00b91fc8:
    if (pEVar2 == (EVP_PKEY_CTX *)0x0) {
      EVP_MD_CTX_reset(ctx);
      iVar1 = EVP_DigestSignInit(ctx,&local_38,type,(ENGINE *)0x0,*(EVP_PKEY **)(si + 0x40));
      pEVar2 = local_38;
      if (iVar1 < 1) goto LAB_00b92130;
    }
    local_38 = pEVar2;
    iVar1 = EVP_PKEY_CTX_ctrl(local_38,-1,8,0xb,0,si);
    if (iVar1 < 1) {
      iVar1 = 0x97;
      reason = 0x6e;
      line = 0x297;
    }
    else {
      iVar1 = ASN1_item_i2d(*(ASN1_VALUE **)(si + 0x18),&local_40,
                            (ASN1_ITEM *)CMS_Attributes_Sign_it);
      if (((local_40 == (uchar *)0x0) ||
          (iVar1 = EVP_DigestUpdate(ctx,local_40,(long)iVar1), iVar1 < 1)) ||
         (iVar1 = EVP_DigestSignFinal(ctx,(uchar *)0x0,(size_t *)local_48), iVar1 < 1))
      goto LAB_00b92130;
      CRYPTO_free(local_40);
      local_40 = CRYPTO_malloc(local_48[0],"crypto/cms/cms_sd.c",0x2a4);
      if ((local_40 == (uchar *)0x0) ||
         (iVar1 = EVP_DigestSignFinal(ctx,local_40,(size_t *)local_48), iVar1 < 1))
      goto LAB_00b92130;
      iVar1 = EVP_PKEY_CTX_ctrl(local_38,-1,8,0xb,1,si);
      if (0 < iVar1) {
        EVP_MD_CTX_reset(ctx);
        ASN1_STRING_set0(*(ASN1_STRING **)(si + 0x28),local_40,local_48[0]);
        return 1;
      }
      iVar1 = 0x97;
      reason = 0x6e;
      line = 0x2ac;
    }
  }
  ERR_put_error(0x2e,iVar1,reason,"crypto/cms/cms_sd.c",line);
LAB_00b92130:
  CRYPTO_free(local_40);
  EVP_MD_CTX_reset(ctx);
  return 0;
}

