
int PKCS7_signatureVerify(BIO *bio,PKCS7 *p7,PKCS7_SIGNER_INFO *si,X509 *x509)

{
  int iVar1;
  int iVar2;
  EVP_MD_CTX *out;
  BIO *bp;
  EVP_MD *pEVar3;
  X509_ATTRIBUTE *attr;
  ASN1_TYPE *pAVar4;
  char *name;
  EVP_PKEY *pkey;
  ASN1_STRING *pAVar5;
  ASN1_OCTET_STRING *pAVar6;
  ASN1_VALUE *val;
  uint local_8c;
  uchar *local_88;
  uchar auStack_80 [64];
  EVP_MD_CTX *local_38;
  
  out = (EVP_MD_CTX *)EVP_MD_CTX_new();
  if (out == (EVP_MD_CTX *)0x0) {
    iVar1 = 0x41;
    iVar2 = 0x3b2;
  }
  else {
    iVar1 = OBJ_obj2nid(p7->type);
    if ((iVar1 == 0x16) || (iVar1 = OBJ_obj2nid(p7->type), iVar1 == 0x18)) {
      iVar1 = OBJ_obj2nid(si->digest_alg->algorithm);
      while ((bio != (BIO *)0x0 && (bp = BIO_find_type(bio,0x208), bp != (BIO *)0x0))) {
        BIO_ctrl(bp,0x78,0,&local_38);
        if (local_38 == (EVP_MD_CTX *)0x0) {
          iVar1 = 0x44;
          iVar2 = 0x3c7;
          goto LAB_00b52e98;
        }
        pEVar3 = EVP_MD_CTX_md(local_38);
        iVar2 = EVP_MD_type(pEVar3);
        if (iVar2 == iVar1) {
LAB_00b52dd8:
          iVar2 = EVP_MD_CTX_copy_ex(out,local_38);
          if (iVar2 == 0) goto LAB_00b52e9c;
          val = (ASN1_VALUE *)si->auth_attr;
          if ((val == (ASN1_VALUE *)0x0) || (iVar2 = OPENSSL_sk_num(val), iVar2 == 0)) {
LAB_00b52f44:
            pAVar6 = si->enc_digest;
            pkey = (EVP_PKEY *)X509_get0_pubkey(x509);
            if (pkey != (EVP_PKEY *)0x0) {
              iVar1 = EVP_VerifyFinal(out,pAVar6->data,pAVar6->length,pkey);
              if (iVar1 < 1) {
                iVar1 = 0x69;
                iVar2 = 0x40b;
                goto LAB_00b52f94;
              }
              iVar1 = 1;
              goto LAB_00b52ea0;
            }
          }
          else {
            local_88 = (uchar *)0x0;
            iVar2 = EVP_DigestFinal_ex(out,auStack_80,&local_8c);
            if (iVar2 == 0) goto LAB_00b52e9c;
            iVar2 = X509at_get_attr_by_NID((stack_st_X509_ATTRIBUTE *)val,0x33,-1);
            attr = X509at_get_attr((stack_st_X509_ATTRIBUTE *)val,iVar2);
            pAVar4 = X509_ATTRIBUTE_get0_type(attr,0);
            if ((pAVar4 == (ASN1_TYPE *)0x0) ||
               (pAVar5 = (pAVar4->value).asn1_string, pAVar5 == (ASN1_STRING *)0x0)) {
              iVar1 = 0x6c;
              iVar2 = 1000;
              goto LAB_00b52e98;
            }
            if ((pAVar5->length == local_8c) &&
               (iVar2 = memcmp(pAVar5->data,auStack_80,(ulong)(uint)pAVar5->length), iVar2 == 0)) {
              name = OBJ_nid2sn(iVar1);
              pEVar3 = EVP_get_digestbyname(name);
              iVar1 = EVP_DigestInit_ex(out,pEVar3,(ENGINE *)0x0);
              if (iVar1 == 0) goto LAB_00b52e9c;
              iVar1 = ASN1_item_i2d(val,&local_88,(ASN1_ITEM *)PKCS7_ATTR_VERIFY_it);
              if (0 < iVar1) {
                iVar1 = EVP_DigestUpdate(out,local_88,(long)iVar1);
                if (iVar1 != 0) {
                  CRYPTO_free(local_88);
                  goto LAB_00b52f44;
                }
                goto LAB_00b52e9c;
              }
              iVar1 = 0xd;
              iVar2 = 0x3f8;
            }
            else {
              iVar1 = 0x65;
              iVar2 = 0x3ed;
            }
LAB_00b52f94:
            ERR_put_error(0x21,0x71,iVar1,"crypto/pkcs7/pk7_doit.c",iVar2);
          }
          iVar1 = -1;
          goto LAB_00b52ea0;
        }
        pEVar3 = EVP_MD_CTX_md(local_38);
        iVar2 = EVP_MD_pkey_type(pEVar3);
        if (iVar2 == iVar1) goto LAB_00b52dd8;
        bio = BIO_next(bp);
      }
      iVar1 = 0x6c;
      iVar2 = 0x3c2;
    }
    else {
      iVar1 = 0x72;
      iVar2 = 0x3b7;
    }
  }
LAB_00b52e98:
  ERR_put_error(0x21,0x71,iVar1,"crypto/pkcs7/pk7_doit.c",iVar2);
LAB_00b52e9c:
  iVar1 = 0;
LAB_00b52ea0:
  EVP_MD_CTX_free(out);
  return iVar1;
}

