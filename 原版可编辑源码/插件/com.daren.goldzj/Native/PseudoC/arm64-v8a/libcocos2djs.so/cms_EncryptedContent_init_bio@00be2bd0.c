
BIO * cms_EncryptedContent_init_bio(long param_1)

{
  bool bVar1;
  int iVar2;
  BIO_METHOD *type;
  BIO *bp;
  char *name;
  EVP_CIPHER *pEVar3;
  ASN1_OBJECT *pAVar4;
  ASN1_TYPE *type_00;
  int iVar5;
  long lVar6;
  uchar *key;
  uchar *iv;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  uchar auStack_78 [16];
  EVP_CIPHER_CTX *local_68;
  
  lVar8 = *(long *)(param_1 + 0x18);
  puVar7 = *(undefined8 **)(param_1 + 8);
  type = BIO_f_cipher();
  bp = BIO_new(type);
  if (bp == (BIO *)0x0) {
    ERR_put_error(0x2e,0x78,0x41,"crypto/cms/cms_enc.c",0x29);
    return (BIO *)0x0;
  }
  BIO_ctrl(bp,0x81,0,&local_68);
  if (lVar8 == 0) {
    iVar2 = OBJ_obj2nid((ASN1_OBJECT *)*puVar7);
    name = OBJ_nid2sn(iVar2);
    pEVar3 = EVP_get_cipherbyname(name);
    if (pEVar3 != (EVP_CIPHER *)0x0) goto LAB_00be2c74;
    iVar2 = 0x94;
    iVar5 = 0x3a;
LAB_00be2e90:
    ERR_put_error(0x2e,0x78,iVar2,"crypto/cms/cms_enc.c",iVar5);
  }
  else {
    pEVar3 = *(EVP_CIPHER **)(param_1 + 0x18);
    if (*(long *)(param_1 + 0x20) != 0) {
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
LAB_00be2c74:
    iVar2 = EVP_CipherInit_ex(local_68,pEVar3,(ENGINE *)0x0,(uchar *)0x0,(uchar *)0x0,
                              (uint)(lVar8 != 0));
    if (iVar2 < 1) {
      iVar2 = 0x65;
      iVar5 = 0x41;
      goto LAB_00be2e90;
    }
    if (lVar8 == 0) {
      iVar2 = EVP_CIPHER_asn1_to_param(local_68,(ASN1_TYPE *)puVar7[1]);
      if (iVar2 < 1) {
        iVar2 = 0x66;
        iVar5 = 0x51;
        goto LAB_00be2e90;
      }
      iVar2 = EVP_CIPHER_CTX_key_length(local_68);
      iv = (uchar *)0x0;
      lVar6 = (long)iVar2;
LAB_00be2d5c:
      key = CRYPTO_malloc((int)lVar6,"crypto/cms/cms_enc.c",0x57);
      if (key == (uchar *)0x0) {
        iVar2 = 0x41;
        iVar5 = 0x59;
      }
      else {
        iVar2 = EVP_CIPHER_CTX_rand_key(local_68,key);
        if (iVar2 < 1) goto LAB_00be2f58;
        if (*(long *)(param_1 + 0x20) != 0) goto LAB_00be2d98;
        *(long *)(param_1 + 0x28) = lVar6;
        *(uchar **)(param_1 + 0x20) = key;
        if (lVar8 == 0) {
          ERR_clear_error();
          key = (uchar *)0x0;
          bVar1 = false;
        }
        else {
          key = (uchar *)0x0;
          bVar1 = true;
        }
LAB_00be2da0:
        plVar10 = (long *)(param_1 + 0x28);
        puVar9 = (undefined8 *)(param_1 + 0x20);
        if ((*plVar10 != lVar6) &&
           (iVar2 = EVP_CIPHER_CTX_set_key_length(local_68,(int)*plVar10), iVar2 < 1)) {
          if ((lVar8 != 0) || (*(int *)(param_1 + 0x30) != 0)) {
            iVar2 = 0x76;
            iVar5 = 0x74;
            goto LAB_00be2f54;
          }
          CRYPTO_clear_free(*puVar9,*plVar10,"crypto/cms/cms_enc.c",0x78);
          *puVar9 = key;
          *plVar10 = lVar6;
          ERR_clear_error();
          key = (uchar *)0x0;
        }
        iVar2 = EVP_CipherInit_ex(local_68,(EVP_CIPHER *)0x0,(ENGINE *)0x0,(uchar *)*puVar9,iv,
                                  (uint)(lVar8 != 0));
        if (iVar2 < 1) {
          iVar2 = 0x65;
          iVar5 = 0x83;
        }
        else {
          if (lVar8 == 0) {
LAB_00be2e20:
            if (!bVar1) {
              CRYPTO_clear_free(*puVar9,*plVar10,"crypto/cms/cms_enc.c",0x9b);
              *puVar9 = 0;
            }
            CRYPTO_clear_free(key,lVar6,"crypto/cms/cms_enc.c",0x9e);
            return bp;
          }
          type_00 = ASN1_TYPE_new();
          puVar7[1] = type_00;
          if (type_00 == (ASN1_TYPE *)0x0) {
            iVar2 = 0x41;
            iVar5 = 0x89;
          }
          else {
            iVar2 = EVP_CIPHER_param_to_asn1(local_68,type_00);
            if (0 < iVar2) {
              if (((ASN1_TYPE *)puVar7[1])->type == -1) {
                ASN1_TYPE_free((ASN1_TYPE *)puVar7[1]);
                puVar7[1] = 0;
              }
              goto LAB_00be2e20;
            }
            iVar2 = 0x66;
            iVar5 = 0x8e;
          }
        }
      }
LAB_00be2f54:
      ERR_put_error(0x2e,0x78,iVar2,"crypto/cms/cms_enc.c",iVar5);
      goto LAB_00be2f58;
    }
    pEVar3 = EVP_CIPHER_CTX_cipher(local_68);
    iVar2 = EVP_CIPHER_type(pEVar3);
    pAVar4 = OBJ_nid2obj(iVar2);
    *puVar7 = pAVar4;
    iVar2 = EVP_CIPHER_CTX_iv_length(local_68);
    if (iVar2 < 1) {
      iv = (uchar *)0x0;
LAB_00be2d3c:
      iVar2 = EVP_CIPHER_CTX_key_length(local_68);
      lVar6 = (long)iVar2;
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_00be2d5c;
      key = (uchar *)0x0;
LAB_00be2d98:
      bVar1 = false;
      goto LAB_00be2da0;
    }
    iv = auStack_78;
    iVar2 = RAND_bytes(auStack_78,iVar2);
    if (0 < iVar2) goto LAB_00be2d3c;
  }
  lVar6 = 0;
  key = (uchar *)0x0;
LAB_00be2f58:
  CRYPTO_clear_free(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                    "crypto/cms/cms_enc.c",0x9b);
  *(undefined8 *)(param_1 + 0x20) = 0;
  CRYPTO_clear_free(key,lVar6,"crypto/cms/cms_enc.c",0x9e);
  BIO_free(bp);
  return (BIO *)0x0;
}

