
int PKCS7_SIGNER_INFO_sign(PKCS7_SIGNER_INFO *si)

{
  int iVar1;
  char *name;
  EVP_MD *type;
  EVP_MD_CTX *ctx;
  int line;
  int local_40 [2];
  uchar *local_38;
  EVP_PKEY_CTX *local_28;
  
  local_38 = (uchar *)0x0;
  iVar1 = OBJ_obj2nid(si->digest_alg->algorithm);
  name = OBJ_nid2sn(iVar1);
  type = EVP_get_digestbyname(name);
  if (type == (EVP_MD *)0x0) {
    return 0;
  }
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  if (ctx == (EVP_MD_CTX *)0x0) {
    iVar1 = 0x41;
    line = 0x33c;
  }
  else {
    iVar1 = EVP_DigestSignInit(ctx,&local_28,type,(ENGINE *)0x0,si->pkey);
    if (iVar1 < 1) goto LAB_00b52aac;
    iVar1 = EVP_PKEY_CTX_ctrl(local_28,-1,8,5,0,si);
    if (iVar1 < 1) {
      iVar1 = 0x98;
      line = 0x345;
    }
    else {
      iVar1 = ASN1_item_i2d((ASN1_VALUE *)si->auth_attr,&local_38,(ASN1_ITEM *)PKCS7_ATTR_SIGN_it);
      if ((local_38 == (uchar *)0x0) ||
         (iVar1 = EVP_DigestUpdate(ctx,local_38,(long)iVar1), iVar1 < 1)) goto LAB_00b52aac;
      CRYPTO_free(local_38);
      local_38 = (uchar *)0x0;
      iVar1 = EVP_DigestSignFinal(ctx,(uchar *)0x0,(size_t *)local_40);
      if ((iVar1 < 1) ||
         ((local_38 = CRYPTO_malloc(local_40[0],"crypto/pkcs7/pk7_doit.c",0x353),
          local_38 == (uchar *)0x0 ||
          (iVar1 = EVP_DigestSignFinal(ctx,local_38,(size_t *)local_40), iVar1 < 1))))
      goto LAB_00b52aac;
      iVar1 = EVP_PKEY_CTX_ctrl(local_28,-1,8,5,1,si);
      if (0 < iVar1) {
        EVP_MD_CTX_free(ctx);
        ASN1_STRING_set0(si->enc_digest,local_38,local_40[0]);
        return 1;
      }
      iVar1 = 0x98;
      line = 0x35b;
    }
  }
  ERR_put_error(0x21,0x8b,iVar1,"crypto/pkcs7/pk7_doit.c",line);
LAB_00b52aac:
  CRYPTO_free(local_38);
  EVP_MD_CTX_free(ctx);
  return 0;
}

