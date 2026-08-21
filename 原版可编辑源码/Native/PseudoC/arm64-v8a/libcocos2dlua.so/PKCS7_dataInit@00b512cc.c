
BIO * PKCS7_dataInit(PKCS7 *p7,BIO *bio)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  BIO_METHOD *pBVar5;
  ASN1_OBJECT *pAVar6;
  void *p2;
  EVP_PKEY *pkey;
  EVP_PKEY_CTX *ctx;
  uchar *out;
  long lVar7;
  ASN1_TYPE *type;
  PKCS7_ENC_CONTENT *pPVar8;
  PKCS7_SIGN_ENVELOPE *pPVar9;
  stack_st_PKCS7_RECIP_INFO *psVar10;
  X509_ALGOR *pXVar11;
  BIO *pBVar12;
  EVP_CIPHER *cipher;
  stack_st_X509_ALGOR *psVar13;
  pkcs7_st *ppVar14;
  X509_ALGOR *pXVar15;
  ASN1_OCTET_STRING *pAVar16;
  EVP_CIPHER_CTX *local_c8;
  uchar auStack_c0 [16];
  uchar auStack_b0 [64];
  BIO *local_70;
  int local_68 [2];
  
  local_70 = (BIO *)0x0;
  if (p7 == (PKCS7 *)0x0) {
    iVar1 = 0x8f;
    iVar2 = 0xce;
LAB_00b513a4:
    ERR_put_error(0x21,0x69,iVar1,"crypto/pkcs7/pk7_doit.c",iVar2);
    return (BIO *)0x0;
  }
  if ((p7->d).ptr == (char *)0x0) {
    iVar1 = 0x7a;
    iVar2 = 0xdc;
    goto LAB_00b513a4;
  }
  iVar1 = OBJ_obj2nid(p7->type);
  p7->state = 0;
  pXVar11 = (X509_ALGOR *)0x0;
  cipher = (EVP_CIPHER *)0x0;
  psVar13 = (stack_st_X509_ALGOR *)0x0;
  psVar10 = (stack_st_PKCS7_RECIP_INFO *)0x0;
  pXVar15 = (X509_ALGOR *)0x0;
  pAVar16 = (ASN1_OCTET_STRING *)0x0;
  switch(iVar1) {
  case 0x15:
    break;
  case 0x16:
    ppVar14 = ((p7->d).sign)->contents;
    psVar13 = ((p7->d).sign)->md_algs;
    iVar1 = OBJ_obj2nid(ppVar14->type);
    if (iVar1 != 0x15) {
      iVar1 = OBJ_obj2nid(ppVar14->type);
      if (((iVar1 - 0x15U < 6) || (pAVar16 = (ppVar14->d).data, pAVar16 == (ASN1_OCTET_STRING *)0x0)
          ) || (pAVar16->length != 4)) {
        pXVar11 = (X509_ALGOR *)0x0;
LAB_00b514c0:
        cipher = (EVP_CIPHER *)0x0;
        psVar10 = (stack_st_PKCS7_RECIP_INFO *)0x0;
        pXVar15 = (X509_ALGOR *)0x0;
        goto LAB_00b514c8;
      }
      pXVar11 = (X509_ALGOR *)0x0;
      goto LAB_00b514a4;
    }
    pXVar11 = (X509_ALGOR *)0x0;
LAB_00b51430:
    pAVar16 = (ppVar14->d).data;
    goto LAB_00b51434;
  case 0x17:
    pPVar8 = ((p7->d).enveloped)->enc_data;
    cipher = pPVar8->cipher;
    if (cipher == (EVP_CIPHER *)0x0) {
      iVar1 = 0x74;
      iVar2 = 0xf7;
      goto LAB_00b51794;
    }
    psVar10 = ((p7->d).enveloped)->recipientinfo;
    pXVar15 = pPVar8->algorithm;
    pXVar11 = (X509_ALGOR *)0x0;
    psVar13 = (stack_st_X509_ALGOR *)0x0;
LAB_00b514c8:
    pAVar16 = (ASN1_OCTET_STRING *)0x0;
    break;
  case 0x18:
    pPVar9 = (p7->d).signed_and_enveloped;
    cipher = pPVar9->enc_data->cipher;
    if (cipher != (EVP_CIPHER *)0x0) {
      psVar10 = pPVar9->recipientinfo;
      psVar13 = pPVar9->md_algs;
      pXVar15 = pPVar9->enc_data->algorithm;
      pXVar11 = (X509_ALGOR *)0x0;
      goto LAB_00b514c8;
    }
    iVar1 = 0x74;
    iVar2 = 0xee;
    goto LAB_00b51794;
  case 0x19:
    pXVar11 = ((p7->d).digest)->md;
    ppVar14 = ((p7->d).digest)->contents;
    iVar1 = OBJ_obj2nid(ppVar14->type);
    if (iVar1 == 0x15) {
      psVar13 = (stack_st_X509_ALGOR *)0x0;
      goto LAB_00b51430;
    }
    iVar1 = OBJ_obj2nid(ppVar14->type);
    if (((iVar1 - 0x15U < 6) || (pAVar16 = (ppVar14->d).data, pAVar16 == (ASN1_OCTET_STRING *)0x0))
       || (pAVar16->length != 4)) {
      psVar13 = (stack_st_X509_ALGOR *)0x0;
      goto LAB_00b514c0;
    }
    psVar13 = (stack_st_X509_ALGOR *)0x0;
LAB_00b514a4:
    pAVar16 = (ASN1_OCTET_STRING *)pAVar16->data;
LAB_00b51434:
    cipher = (EVP_CIPHER *)0x0;
    psVar10 = (stack_st_PKCS7_RECIP_INFO *)0x0;
    pXVar15 = (X509_ALGOR *)0x0;
    break;
  default:
    iVar1 = 0x70;
    iVar2 = 0x102;
LAB_00b51794:
    ERR_put_error(0x21,0x69,iVar1,"crypto/pkcs7/pk7_doit.c",iVar2);
    goto LAB_00b51798;
  }
  iVar1 = OPENSSL_sk_num(psVar13);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      uVar4 = OPENSSL_sk_value(psVar13,iVar1);
      iVar2 = FUN_00b51948(&local_70,uVar4);
      if (iVar2 == 0) goto LAB_00b51798;
      iVar1 = iVar1 + 1;
      iVar2 = OPENSSL_sk_num(psVar13);
    } while (iVar1 < iVar2);
  }
  if ((pXVar11 == (X509_ALGOR *)0x0) || (iVar1 = FUN_00b51948(&local_70,pXVar11), iVar1 != 0)) {
    pBVar12 = local_70;
    if (cipher != (EVP_CIPHER *)0x0) {
      pBVar5 = BIO_f_cipher();
      pBVar12 = BIO_new(pBVar5);
      if (pBVar12 == (BIO *)0x0) {
        ERR_put_error(0x21,0x69,0x20,"crypto/pkcs7/pk7_doit.c",0x114);
        goto LAB_00b5179c;
      }
      BIO_ctrl(pBVar12,0x81,0,&local_c8);
      iVar1 = EVP_CIPHER_key_length(cipher);
      iVar2 = EVP_CIPHER_iv_length(cipher);
      iVar3 = EVP_CIPHER_type(cipher);
      pAVar6 = OBJ_nid2obj(iVar3);
      pXVar15->algorithm = pAVar6;
      if ((((0 < iVar2) && (iVar3 = RAND_bytes(auStack_c0,iVar2), iVar3 < 1)) ||
          (iVar3 = EVP_CipherInit_ex(local_c8,cipher,(ENGINE *)0x0,(uchar *)0x0,(uchar *)0x0,1),
          iVar3 < 1)) ||
         ((iVar3 = EVP_CIPHER_CTX_rand_key(local_c8,auStack_b0), iVar3 < 1 ||
          (iVar3 = EVP_CipherInit_ex(local_c8,(EVP_CIPHER *)0x0,(ENGINE *)0x0,auStack_b0,auStack_c0,
                                     1), iVar3 < 1)))) goto LAB_00b5179c;
      if (0 < iVar2) {
        type = pXVar15->parameter;
        if (type == (ASN1_TYPE *)0x0) {
          type = ASN1_TYPE_new();
          pXVar15->parameter = type;
          if (type == (ASN1_TYPE *)0x0) goto LAB_00b5179c;
        }
        iVar2 = EVP_CIPHER_param_to_asn1(local_c8,type);
        if (iVar2 < 0) goto LAB_00b5179c;
      }
      iVar2 = OPENSSL_sk_num(psVar10);
      if (0 < iVar2) {
        iVar2 = 0;
        do {
          p2 = (void *)OPENSSL_sk_value(psVar10,iVar2);
          pkey = (EVP_PKEY *)X509_get0_pubkey(*(undefined8 *)((long)p2 + 0x20));
          if ((pkey == (EVP_PKEY *)0x0) ||
             (ctx = EVP_PKEY_CTX_new(pkey,(ENGINE *)0x0), ctx == (EVP_PKEY_CTX *)0x0))
          goto LAB_00b5179c;
          iVar3 = EVP_PKEY_encrypt_init(ctx);
          if (iVar3 < 1) {
LAB_00b518b0:
            EVP_PKEY_CTX_free(ctx);
            CRYPTO_free((void *)0x0);
            goto LAB_00b5179c;
          }
          iVar3 = EVP_PKEY_CTX_ctrl(ctx,-1,0x100,3,0,p2);
          if (iVar3 < 1) {
            iVar1 = 0x98;
            iVar2 = 0x6e;
LAB_00b51904:
            ERR_put_error(0x21,0x84,iVar1,"crypto/pkcs7/pk7_doit.c",iVar2);
            EVP_PKEY_CTX_free(ctx);
            CRYPTO_free((void *)0x0);
            goto LAB_00b5179c;
          }
          iVar3 = EVP_PKEY_encrypt(ctx,(uchar *)0x0,(size_t *)local_68,auStack_b0,(long)iVar1);
          if (iVar3 < 1) goto LAB_00b518b0;
          out = CRYPTO_malloc(local_68[0],"crypto/pkcs7/pk7_doit.c",0x75);
          if (out == (uchar *)0x0) {
            iVar1 = 0x41;
            iVar2 = 0x78;
            goto LAB_00b51904;
          }
          iVar3 = EVP_PKEY_encrypt(ctx,out,(size_t *)local_68,auStack_b0,(long)iVar1);
          if (iVar3 < 1) {
            EVP_PKEY_CTX_free(ctx);
            CRYPTO_free(out);
            goto LAB_00b5179c;
          }
          ASN1_STRING_set0(*(ASN1_STRING **)((long)p2 + 0x18),out,local_68[0]);
          EVP_PKEY_CTX_free(ctx);
          CRYPTO_free((void *)0x0);
          iVar2 = iVar2 + 1;
          iVar3 = OPENSSL_sk_num(psVar10);
        } while (iVar2 < iVar3);
      }
      OPENSSL_cleanse(auStack_b0,(long)iVar1);
      if (local_70 != (BIO *)0x0) {
        BIO_push(local_70,pBVar12);
        pBVar12 = local_70;
      }
    }
    local_70 = pBVar12;
    pBVar12 = local_70;
    if (bio != (BIO *)0x0) goto joined_r0x00b51808;
    iVar1 = OBJ_obj2nid(p7->type);
    if ((iVar1 == 0x16) && (lVar7 = PKCS7_ctrl(p7,2,0,(char *)0x0), lVar7 != 0)) {
      pBVar5 = BIO_s_null();
      bio = BIO_new(pBVar5);
joined_r0x00b51878:
      pBVar12 = local_70;
      if (bio != (BIO *)0x0) goto joined_r0x00b51808;
    }
    else if ((pAVar16 != (ASN1_OCTET_STRING *)0x0) && (0 < pAVar16->length)) {
      bio = BIO_new_mem_buf(pAVar16->data,pAVar16->length);
      goto joined_r0x00b51878;
    }
    pBVar5 = BIO_s_mem();
    bio = BIO_new(pBVar5);
    if (bio != (BIO *)0x0) {
      BIO_ctrl(bio,0x82,0,(void *)0x0);
      pBVar12 = local_70;
joined_r0x00b51808:
      if (pBVar12 != (BIO *)0x0) {
        local_70 = pBVar12;
        BIO_push(pBVar12,bio);
        return pBVar12;
      }
      return bio;
    }
  }
LAB_00b51798:
  pBVar12 = (BIO *)0x0;
LAB_00b5179c:
  BIO_free_all(local_70);
  BIO_free_all(pBVar12);
  return (BIO *)0x0;
}

