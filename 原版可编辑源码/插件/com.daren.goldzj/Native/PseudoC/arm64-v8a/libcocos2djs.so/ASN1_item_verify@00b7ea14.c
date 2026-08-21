
int ASN1_item_verify(ASN1_ITEM *it,X509_ALGOR *algor1,ASN1_BIT_STRING *signature,void *data,
                    EVP_PKEY *pkey)

{
  int iVar1;
  int iVar2;
  EVP_MD_CTX *ctx;
  char *name;
  EVP_MD *type;
  code *pcVar3;
  int local_50;
  int local_4c;
  uchar *local_48;
  
  local_48 = (uchar *)0x0;
  if (pkey == (EVP_PKEY *)0x0) {
    iVar1 = 0x43;
    iVar2 = 0x61;
LAB_00b7eb20:
    ERR_put_error(0xd,0xc5,iVar1,"crypto/asn1/a_verify.c",iVar2);
    return -1;
  }
  if ((signature->type == 3) && ((signature->flags & 7) != 0)) {
    iVar1 = 0xdc;
    iVar2 = 0x66;
    goto LAB_00b7eb20;
  }
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  if (ctx == (EVP_MD_CTX *)0x0) {
    iVar1 = 0x41;
    iVar2 = 0x6c;
  }
  else {
    iVar1 = OBJ_obj2nid(algor1->algorithm);
    iVar1 = OBJ_find_sigid_algs(iVar1,&local_4c,&local_50);
    if (iVar1 == 0) {
      iVar1 = 199;
      iVar2 = 0x72;
    }
    else if (local_4c == 0) {
      if ((pkey->ameth == (EVP_PKEY_ASN1_METHOD *)0x0) ||
         (pcVar3 = *(code **)(pkey->ameth + 200), pcVar3 == (code *)0x0)) {
        iVar1 = 199;
        iVar2 = 0x78;
      }
      else {
        iVar1 = (*pcVar3)(ctx,it,data,algor1,signature,pkey);
        if (iVar1 != 2) goto LAB_00b7ec78;
LAB_00b7eb9c:
        iVar1 = ASN1_item_i2d(data,&local_48,it);
        if (local_48 != (uchar *)0x0) {
          iVar2 = EVP_DigestUpdate(ctx,local_48,(long)iVar1);
          CRYPTO_clear_free(local_48,iVar1,"crypto/asn1/a_verify.c",0xa4);
          if (iVar2 == 0) {
            iVar1 = 0xa7;
          }
          else {
            iVar1 = EVP_DigestVerifyFinal(ctx,signature->data,(long)signature->length);
            if (0 < iVar1) {
              iVar1 = 1;
              goto LAB_00b7ec78;
            }
            iVar1 = 0xae;
          }
LAB_00b7ecd0:
          ERR_put_error(0xd,0xc5,6,"crypto/asn1/a_verify.c",iVar1);
          iVar1 = 0;
          goto LAB_00b7ec78;
        }
        iVar1 = 0x41;
        iVar2 = 0x9e;
      }
    }
    else {
      name = OBJ_nid2sn(local_4c);
      type = EVP_get_digestbyname(name);
      if (type == (EVP_MD *)0x0) {
        iVar1 = 0xa1;
        iVar2 = 0x89;
      }
      else {
        iVar1 = EVP_PKEY_type(local_50);
        if (iVar1 == *(int *)pkey->ameth) {
          iVar1 = EVP_DigestVerifyInit(ctx,(EVP_PKEY_CTX **)0x0,type,(ENGINE *)0x0,pkey);
          if (iVar1 != 0) goto LAB_00b7eb9c;
          iVar1 = 0x94;
          goto LAB_00b7ecd0;
        }
        iVar1 = 200;
        iVar2 = 0x8f;
      }
    }
  }
  ERR_put_error(0xd,0xc5,iVar1,"crypto/asn1/a_verify.c",iVar2);
  iVar1 = -1;
LAB_00b7ec78:
  EVP_MD_CTX_free(ctx);
  return iVar1;
}

