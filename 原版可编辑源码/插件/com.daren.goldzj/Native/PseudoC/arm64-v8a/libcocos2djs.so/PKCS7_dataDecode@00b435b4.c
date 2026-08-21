
BIO * PKCS7_dataDecode(PKCS7 *p7,EVP_PKEY *pkey,BIO *in_bio,X509 *pcert)

{
  PKCS7_ENC_CONTENT *pPVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ASN1_OCTET_STRING *pAVar5;
  undefined8 *puVar6;
  BIO_METHOD *pBVar7;
  BIO *bp;
  char *pcVar8;
  EVP_MD *parg;
  long lVar9;
  X509_NAME *b;
  ASN1_INTEGER *x;
  undefined8 uVar10;
  PKCS7_SIGN_ENVELOPE *pPVar11;
  PKCS7_SIGNED *pPVar12;
  BIO *b_00;
  pkcs7_st *ppVar13;
  stack_st_X509_ALGOR *psVar14;
  BIO *bp_00;
  uchar *key;
  uchar *puVar15;
  EVP_CIPHER *cipher;
  stack_st_PKCS7_RECIP_INFO *psVar16;
  uchar *key_00;
  ASN1_OCTET_STRING *pAVar17;
  BIO *a;
  X509_ALGOR *pXVar18;
  X509_NAME *a_00;
  int local_74;
  uchar *local_70;
  EVP_CIPHER_CTX *local_68;
  
  local_70 = (uchar *)0x0;
  local_68 = (EVP_CIPHER_CTX *)0x0;
  local_74 = 0;
  if (p7 == (PKCS7 *)0x0) {
    ERR_put_error(0x21,0x70,0x8f,"crypto/pkcs7/pk7_doit.c",0x173);
    return (BIO *)0x0;
  }
  if ((p7->d).ptr == (char *)0x0) {
    ERR_put_error(0x21,0x70,0x7a,"crypto/pkcs7/pk7_doit.c",0x178);
    return (BIO *)0x0;
  }
  iVar2 = OBJ_obj2nid(p7->type);
  p7->state = 0;
  if (iVar2 == 0x18) {
    pPVar11 = (p7->d).signed_and_enveloped;
    psVar16 = pPVar11->recipientinfo;
    psVar14 = pPVar11->md_algs;
    pXVar18 = pPVar11->enc_data->algorithm;
    pAVar17 = pPVar11->enc_data->enc_data;
    iVar2 = OBJ_obj2nid(pXVar18->algorithm);
    pcVar8 = OBJ_nid2sn(iVar2);
    cipher = EVP_get_cipherbyname(pcVar8);
    if (cipher == (EVP_CIPHER *)0x0) {
      iVar2 = 0x6f;
      iVar3 = 0x198;
      goto LAB_00b4387c;
    }
joined_r0x00b436e8:
    if ((in_bio == (BIO *)0x0) && (pAVar17 == (ASN1_OCTET_STRING *)0x0)) {
      ERR_put_error(0x21,0x70,0x7a,"crypto/pkcs7/pk7_doit.c",0x1af);
      b_00 = (BIO *)0x0;
      a = (BIO *)0x0;
      goto LAB_00b43888;
    }
    if (psVar14 != (stack_st_X509_ALGOR *)0x0) {
      iVar2 = OPENSSL_sk_num(psVar14);
      if (0 < iVar2) {
        iVar2 = 0;
        b_00 = (BIO *)0x0;
        do {
          puVar6 = (undefined8 *)OPENSSL_sk_value(psVar14,iVar2);
          pBVar7 = BIO_f_md();
          bp = BIO_new(pBVar7);
          if (bp == (BIO *)0x0) {
            iVar2 = 0x20;
            iVar3 = 0x1b8;
LAB_00b43a34:
            ERR_put_error(0x21,0x70,iVar2,"crypto/pkcs7/pk7_doit.c",iVar3);
            a = bp;
            goto LAB_00b43888;
          }
          iVar3 = OBJ_obj2nid((ASN1_OBJECT *)*puVar6);
          pcVar8 = OBJ_nid2sn(iVar3);
          parg = EVP_get_digestbyname(pcVar8);
          if (parg == (EVP_MD *)0x0) {
            iVar2 = 0x6d;
            iVar3 = 0x1c0;
            goto LAB_00b43a34;
          }
          BIO_ctrl(bp,0x6f,0,parg);
          if (b_00 != (BIO *)0x0) {
            BIO_push(b_00,bp);
            bp = b_00;
          }
          iVar2 = iVar2 + 1;
          iVar3 = OPENSSL_sk_num(psVar14);
          b_00 = bp;
        } while (iVar2 < iVar3);
        goto LAB_00b43910;
      }
      bp = (BIO *)0x0;
      if (cipher != (EVP_CIPHER *)0x0) goto LAB_00b43914;
LAB_00b439c0:
      iVar2 = 0;
      bp_00 = bp;
joined_r0x00b43c18:
      bp = bp_00;
      if (in_bio != (BIO *)0x0) {
LAB_00b439cc:
        BIO_push(bp,in_bio);
        return bp;
      }
      if (pAVar17->length < 1) {
        pBVar7 = BIO_s_mem();
        in_bio = BIO_new(pBVar7);
        if (in_bio != (BIO *)0x0) {
          BIO_ctrl(in_bio,0x82,0,(void *)0x0);
          goto LAB_00b439cc;
        }
      }
      else {
        in_bio = BIO_new_mem_buf(pAVar17->data,pAVar17->length);
        if (in_bio != (BIO *)0x0) goto LAB_00b439cc;
      }
      a = (BIO *)0x0;
      bp_00 = (BIO *)0x0;
      key = (uchar *)0x0;
      goto LAB_00b43894;
    }
    bp = (BIO *)0x0;
LAB_00b43910:
    if (cipher == (EVP_CIPHER *)0x0) goto LAB_00b439c0;
LAB_00b43914:
    pBVar7 = BIO_f_cipher();
    bp_00 = BIO_new(pBVar7);
    if (bp_00 != (BIO *)0x0) {
      iVar2 = OPENSSL_sk_num(psVar16);
      if (pcert != (X509 *)0x0) {
        if (0 < iVar2) {
          iVar2 = 0;
          do {
            lVar9 = OPENSSL_sk_value(psVar16,iVar2);
            a_00 = (X509_NAME *)**(undefined8 **)(lVar9 + 8);
            b = X509_get_issuer_name(pcert);
            iVar3 = X509_NAME_cmp(a_00,b);
            if (iVar3 == 0) {
              x = X509_get_serialNumber(pcert);
              iVar3 = ASN1_INTEGER_cmp(x,*(ASN1_INTEGER **)(*(long *)(lVar9 + 8) + 8));
              if (iVar3 == 0) {
                iVar2 = FUN_00b43c88(&local_70,&local_74,lVar9,pkey);
                if (iVar2 < 0) goto LAB_00b43b44;
                ERR_clear_error();
                goto LAB_00b43aa4;
              }
            }
            iVar2 = iVar2 + 1;
            iVar3 = OPENSSL_sk_num(psVar16);
          } while (iVar2 < iVar3);
        }
        iVar2 = 0x73;
        iVar3 = 0x1e6;
        goto LAB_00b439f4;
      }
      if (0 < iVar2) {
        iVar2 = 0;
        do {
          uVar10 = OPENSSL_sk_value(psVar16,iVar2);
          iVar3 = FUN_00b43c88(&local_70,&local_74,uVar10,pkey);
          if (iVar3 < 0) goto LAB_00b43b44;
          ERR_clear_error();
          iVar2 = iVar2 + 1;
          iVar3 = OPENSSL_sk_num(psVar16);
        } while (iVar2 < iVar3);
      }
LAB_00b43aa4:
      local_68 = (EVP_CIPHER_CTX *)0x0;
      BIO_ctrl(bp_00,0x81,0,&local_68);
      iVar2 = EVP_CipherInit_ex(local_68,cipher,(ENGINE *)0x0,(uchar *)0x0,(uchar *)0x0,0);
      if ((iVar2 < 1) || (iVar2 = EVP_CIPHER_asn1_to_param(local_68,pXVar18->parameter), iVar2 < 0))
      {
LAB_00b43b44:
        a = (BIO *)0x0;
        goto LAB_00b4388c;
      }
      iVar2 = EVP_CIPHER_CTX_key_length(local_68);
      key = CRYPTO_malloc(iVar2,"crypto/pkcs7/pk7_doit.c",0x207);
      if ((key == (uchar *)0x0) || (iVar3 = EVP_CIPHER_CTX_rand_key(local_68,key), iVar3 < 1)) {
LAB_00b43c20:
        a = (BIO *)0x0;
        goto LAB_00b43894;
      }
      puVar15 = key;
      if (local_70 == (uchar *)0x0) {
        puVar15 = (uchar *)0x0;
        local_74 = iVar2;
        local_70 = key;
      }
      key_00 = local_70;
      iVar3 = local_74;
      iVar4 = EVP_CIPHER_CTX_key_length(local_68);
      key = puVar15;
      if ((iVar3 != iVar4) && (iVar4 = EVP_CIPHER_CTX_set_key_length(local_68,iVar3), iVar4 == 0)) {
        CRYPTO_clear_free(key_00,(long)iVar3,"crypto/pkcs7/pk7_doit.c",0x21a);
        key = (uchar *)0x0;
        key_00 = puVar15;
        iVar3 = iVar2;
        local_74 = iVar2;
        local_70 = puVar15;
      }
      ERR_clear_error();
      iVar4 = EVP_CipherInit_ex(local_68,(EVP_CIPHER *)0x0,(ENGINE *)0x0,key_00,(uchar *)0x0,0);
      if (iVar4 < 1) goto LAB_00b43c20;
      CRYPTO_clear_free(key_00,(long)iVar3,"crypto/pkcs7/pk7_doit.c",0x225);
      local_70 = (uchar *)0x0;
      CRYPTO_clear_free(key,(long)iVar2,"crypto/pkcs7/pk7_doit.c",0x227);
      if (bp != (BIO *)0x0) {
        BIO_push(bp,bp_00);
        bp_00 = bp;
      }
      goto joined_r0x00b43c18;
    }
    iVar2 = 0x20;
    iVar3 = 0x1cf;
LAB_00b439f4:
    ERR_put_error(0x21,0x70,iVar2,"crypto/pkcs7/pk7_doit.c",iVar3);
    a = (BIO *)0x0;
  }
  else {
    if (iVar2 == 0x17) {
      psVar16 = ((p7->d).enveloped)->recipientinfo;
      pPVar1 = ((p7->d).enveloped)->enc_data;
      pXVar18 = pPVar1->algorithm;
      pAVar17 = pPVar1->enc_data;
      iVar2 = OBJ_obj2nid(pXVar18->algorithm);
      pcVar8 = OBJ_nid2sn(iVar2);
      cipher = EVP_get_cipherbyname(pcVar8);
      if (cipher != (EVP_CIPHER *)0x0) {
        psVar14 = (stack_st_X509_ALGOR *)0x0;
        goto joined_r0x00b436e8;
      }
      iVar2 = 0x6f;
      iVar3 = 0x1a4;
    }
    else if (iVar2 == 0x16) {
      ppVar13 = ((p7->d).sign)->contents;
      iVar2 = OBJ_obj2nid(ppVar13->type);
      if (iVar2 == 0x15) {
        pAVar17 = (ppVar13->d).data;
      }
      else {
        iVar2 = OBJ_obj2nid(ppVar13->type);
        if (((iVar2 - 0x15U < 6) || (pPVar12 = (ppVar13->d).sign, pPVar12 == (PKCS7_SIGNED *)0x0))
           || (*(int *)&pPVar12->version != 4)) {
          pAVar17 = (ASN1_OCTET_STRING *)0x0;
        }
        else {
          pAVar17 = (ASN1_OCTET_STRING *)pPVar12->md_algs;
        }
      }
      iVar2 = OBJ_obj2nid(p7->type);
      pAVar5 = pAVar17;
      if (((iVar2 == 0x16) &&
          (pAVar5 = (ASN1_OCTET_STRING *)PKCS7_ctrl(p7,2,0,(char *)0x0),
          pAVar17 != (ASN1_OCTET_STRING *)0x0)) || (pAVar5 != (ASN1_OCTET_STRING *)0x0)) {
        cipher = (EVP_CIPHER *)0x0;
        pXVar18 = (X509_ALGOR *)0x0;
        psVar16 = (stack_st_PKCS7_RECIP_INFO *)0x0;
        psVar14 = (stack_st_X509_ALGOR *)((p7->d).data)->data;
        goto joined_r0x00b436e8;
      }
      iVar2 = 0x9b;
      iVar3 = 0x18a;
    }
    else {
      iVar2 = 0x70;
      iVar3 = 0x1a9;
    }
LAB_00b4387c:
    ERR_put_error(0x21,0x70,iVar2,"crypto/pkcs7/pk7_doit.c",iVar3);
    b_00 = (BIO *)0x0;
    a = (BIO *)0x0;
LAB_00b43888:
    bp_00 = (BIO *)0x0;
    bp = b_00;
  }
LAB_00b4388c:
  key = (uchar *)0x0;
  iVar2 = 0;
LAB_00b43894:
  CRYPTO_clear_free(local_70,(long)local_74,"crypto/pkcs7/pk7_doit.c",0x243);
  CRYPTO_clear_free(key,(long)iVar2,"crypto/pkcs7/pk7_doit.c",0x244);
  BIO_free_all(bp);
  BIO_free_all(a);
  BIO_free_all(bp_00);
  BIO_free_all((BIO *)0x0);
  return (BIO *)0x0;
}

