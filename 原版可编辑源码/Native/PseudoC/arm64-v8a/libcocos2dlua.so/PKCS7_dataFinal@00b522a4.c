
int PKCS7_dataFinal(PKCS7 *p7,BIO *bio)

{
  int iVar1;
  int iVar2;
  EVP_MD_CTX *out;
  PKCS7_SIGNER_INFO *si;
  X509_ATTRIBUTE *attr;
  ASN1_TYPE *pAVar3;
  uchar *md;
  long lVar4;
  BIO *bp;
  int line;
  PKCS7_SIGNED *pPVar5;
  pkcs7_st *ppVar6;
  ASN1_OCTET_STRING *a;
  stack_st_PKCS7_SIGNER_INFO *psVar7;
  stack_st_X509_ATTRIBUTE *x;
  EVP_MD_CTX *local_a8;
  uint local_a0;
  undefined4 uStack_9c;
  uint local_54;
  
  if (p7 == (PKCS7 *)0x0) {
    iVar1 = 0x8f;
    iVar2 = 0x28b;
LAB_00b52368:
    ERR_put_error(0x21,0x80,iVar1,"crypto/pkcs7/pk7_doit.c",iVar2);
    return 0;
  }
  if ((p7->d).ptr == (char *)0x0) {
    iVar1 = 0x7a;
    iVar2 = 0x290;
    goto LAB_00b52368;
  }
  out = (EVP_MD_CTX *)EVP_MD_CTX_new();
  if (out == (EVP_MD_CTX *)0x0) {
    iVar1 = 0x41;
    iVar2 = 0x296;
    goto LAB_00b52368;
  }
  iVar1 = OBJ_obj2nid(p7->type);
  p7->state = 0;
  switch(iVar1) {
  case 0x15:
    a = (p7->d).data;
    break;
  case 0x16:
    psVar7 = ((p7->d).sign)->signer_info;
    ppVar6 = ((p7->d).sign)->contents;
    iVar1 = OBJ_obj2nid(ppVar6->type);
    if (iVar1 == 0x15) {
      a = (ppVar6->d).data;
    }
    else {
      iVar1 = OBJ_obj2nid(ppVar6->type);
      if (((iVar1 - 0x15U < 6) || (pPVar5 = (ppVar6->d).sign, pPVar5 == (PKCS7_SIGNED *)0x0)) ||
         (*(int *)&pPVar5->version != 4)) {
        a = (ASN1_STRING *)0x0;
      }
      else {
        a = (ASN1_OCTET_STRING *)pPVar5->md_algs;
      }
    }
    iVar1 = OBJ_obj2nid(((p7->d).sign)->contents->type);
    if ((iVar1 == 0x15) && (p7->detached != 0)) {
      ASN1_OCTET_STRING_free(a);
      a = (ASN1_OCTET_STRING *)0x0;
      (((p7->d).sign)->contents->d).ptr = (char *)0x0;
    }
LAB_00b524cc:
    if (psVar7 != (stack_st_PKCS7_SIGNER_INFO *)0x0) goto LAB_00b524d0;
    break;
  case 0x17:
    a = ((p7->d).enveloped)->enc_data->enc_data;
    if (a == (ASN1_OCTET_STRING *)0x0) {
      a = ASN1_OCTET_STRING_new();
      if (a == (ASN1_OCTET_STRING *)0x0) {
        iVar2 = 0x80;
        iVar1 = 0x41;
        line = 0x2b4;
        goto LAB_00b5238c;
      }
      ((p7->d).enveloped)->enc_data->enc_data = a;
    }
    break;
  case 0x18:
    psVar7 = ((p7->d).signed_and_enveloped)->signer_info;
    a = ((p7->d).signed_and_enveloped)->enc_data->enc_data;
    if (a != (ASN1_OCTET_STRING *)0x0) goto LAB_00b524cc;
    a = ASN1_OCTET_STRING_new();
    if (a == (ASN1_OCTET_STRING *)0x0) {
      iVar2 = 0x80;
      iVar1 = 0x41;
      line = 0x2a8;
      goto LAB_00b5238c;
    }
    ((p7->d).signed_and_enveloped)->enc_data->enc_data = a;
    if (psVar7 == (stack_st_PKCS7_SIGNER_INFO *)0x0) break;
LAB_00b524d0:
    iVar1 = OPENSSL_sk_num(psVar7);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        si = (PKCS7_SIGNER_INFO *)OPENSSL_sk_value(psVar7,iVar1);
        if (si->pkey != (EVP_PKEY *)0x0) {
          iVar2 = OBJ_obj2nid(si->digest_alg->algorithm);
          lVar4 = FUN_00b52854(&local_a8,bio,iVar2);
          if ((lVar4 == 0) || (iVar2 = EVP_MD_CTX_copy_ex(out,local_a8), iVar2 == 0))
          goto LAB_00b52740;
          iVar2 = OPENSSL_sk_num(si->auth_attr);
          if (iVar2 < 1) {
            local_a0 = EVP_PKEY_size(si->pkey);
            md = CRYPTO_malloc(local_a0,"crypto/pkcs7/pk7_doit.c",0x2f6);
            if (md == (uchar *)0x0) goto LAB_00b52740;
            iVar2 = EVP_SignFinal(out,md,&local_a0,si->pkey);
            if (iVar2 == 0) {
              CRYPTO_free(md);
              iVar2 = 0x80;
              iVar1 = 6;
              line = 0x2fc;
              goto LAB_00b5238c;
            }
            ASN1_STRING_set0(si->enc_digest,md,local_a0);
          }
          else {
            x = si->auth_attr;
            iVar2 = X509at_get_attr_by_NID(x,0x34,-1);
            attr = X509at_get_attr(x,iVar2);
            pAVar3 = X509_ATTRIBUTE_get0_type(attr,0);
            if ((pAVar3 == (ASN1_TYPE *)0x0) &&
               (iVar2 = PKCS7_add0_attrib_signing_time(si,(ASN1_TIME *)0x0), iVar2 == 0)) {
              iVar2 = 0x88;
              iVar1 = 0x41;
              line = 0x269;
              goto LAB_00b5238c;
            }
            iVar2 = EVP_DigestFinal_ex(out,(uchar *)&local_a0,&local_54);
            if (iVar2 == 0) {
              iVar2 = 0x88;
              iVar1 = 6;
              line = 0x270;
              goto LAB_00b5238c;
            }
            iVar2 = PKCS7_add1_attrib_digest(si,(uchar *)&local_a0,local_54);
            if (iVar2 == 0) {
              iVar2 = 0x88;
              iVar1 = 0x41;
              line = 0x274;
              goto LAB_00b5238c;
            }
            iVar2 = PKCS7_SIGNER_INFO_sign(si);
            if (iVar2 == 0) goto LAB_00b52740;
          }
        }
        iVar1 = iVar1 + 1;
        iVar2 = OPENSSL_sk_num(psVar7);
      } while (iVar1 < iVar2);
    }
    break;
  case 0x19:
    ppVar6 = ((p7->d).digest)->contents;
    iVar1 = OBJ_obj2nid(ppVar6->type);
    if (iVar1 == 0x15) {
      a = (ppVar6->d).data;
    }
    else {
      iVar1 = OBJ_obj2nid(ppVar6->type);
      if (((iVar1 - 0x15U < 6) || (pPVar5 = (ppVar6->d).sign, pPVar5 == (PKCS7_SIGNED *)0x0)) ||
         (*(int *)&pPVar5->version != 4)) {
        a = (ASN1_STRING *)0x0;
      }
      else {
        a = (ASN1_OCTET_STRING *)pPVar5->md_algs;
      }
    }
    iVar1 = OBJ_obj2nid(((p7->d).digest)->contents->type);
    if ((iVar1 == 0x15) && (p7->detached != 0)) {
      ASN1_OCTET_STRING_free(a);
      a = (ASN1_STRING *)0x0;
      (((p7->d).digest)->contents->d).ptr = (char *)0x0;
    }
    iVar1 = OBJ_obj2nid(((p7->d).digest)->md->algorithm);
    lVar4 = FUN_00b52854(&local_a8,bio,iVar1);
    if (((lVar4 != 0) &&
        (iVar1 = EVP_DigestFinal_ex(local_a8,(uchar *)&local_a0,&local_54), iVar1 != 0)) &&
       (iVar1 = ASN1_OCTET_STRING_set((ASN1_STRING *)((p7->d).sign)->crl,&local_a0,local_54),
       iVar1 != 0)) break;
    goto LAB_00b52740;
  default:
    iVar2 = 0x80;
    iVar1 = 0x70;
    line = 0x2d0;
LAB_00b5238c:
    ERR_put_error(0x21,iVar2,iVar1,"crypto/pkcs7/pk7_doit.c",line);
    goto LAB_00b52740;
  }
  iVar1 = OBJ_obj2nid(p7->type);
  if ((iVar1 != 0x16) || (lVar4 = PKCS7_ctrl(p7,2,0,(char *)0x0), lVar4 == 0)) {
    if (a == (ASN1_STRING *)0x0) {
LAB_00b52740:
      iVar1 = 0;
      goto LAB_00b5274c;
    }
    if (((byte)a->flags >> 4 & 1) == 0) {
      bp = BIO_find_type(bio,0x401);
      if (bp == (BIO *)0x0) {
        ERR_put_error(0x21,0x80,0x6b,"crypto/pkcs7/pk7_doit.c",0x31a);
        iVar1 = 0;
      }
      else {
        lVar4 = BIO_ctrl(bp,3,0,&local_a0);
        BIO_set_flags(bp,0x200);
        BIO_ctrl(bp,0x82,0,(void *)0x0);
        ASN1_STRING_set0(a,(void *)CONCAT44(uStack_9c,local_a0),(int)lVar4);
        iVar1 = 1;
      }
      goto LAB_00b5274c;
    }
  }
  iVar1 = 1;
LAB_00b5274c:
  EVP_MD_CTX_free(out);
  return iVar1;
}

