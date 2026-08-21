
int ASN1_item_sign_ctx(ASN1_ITEM *it,X509_ALGOR *algor1,X509_ALGOR *algor2,
                      ASN1_BIT_STRING *signature,void *asn,EVP_MD_CTX *ctx)

{
  int iVar1;
  int iVar2;
  EVP_MD *md;
  EVP_PKEY_CTX *ctx_00;
  EVP_PKEY *pkey;
  ASN1_OBJECT *pAVar3;
  int line;
  code *pcVar4;
  size_t sVar5;
  uchar *sigret;
  int local_64;
  size_t local_60;
  uchar *local_58;
  
  local_60 = 0;
  local_58 = (uchar *)0x0;
  md = EVP_MD_CTX_md(ctx);
  ctx_00 = (EVP_PKEY_CTX *)EVP_MD_CTX_pkey_ctx(ctx);
  pkey = EVP_PKEY_CTX_get0_pkey(ctx_00);
  if ((md == (EVP_MD *)0x0) || (pkey == (EVP_PKEY *)0x0)) {
    iVar1 = 0xd9;
    iVar2 = 0x97;
  }
  else {
    if (pkey->ameth != (EVP_PKEY_ASN1_METHOD *)0x0) {
      pcVar4 = *(code **)(pkey->ameth + 0xd0);
      if (pcVar4 == (code *)0x0) {
LAB_00b7ded4:
        iVar1 = EVP_MD_type(md);
        iVar1 = OBJ_find_sigid_by_algs(&local_64,iVar1,*(int *)pkey->ameth);
        if (iVar1 == 0) {
          iVar1 = 0xc6;
          iVar2 = 0xb7;
          goto LAB_00b7e038;
        }
        iVar1 = 5;
        if (((byte)pkey->ameth[8] & 4) == 0) {
          iVar1 = -1;
        }
        if (algor1 != (X509_ALGOR *)0x0) {
          pAVar3 = OBJ_nid2obj(local_64);
          X509_ALGOR_set0(algor1,pAVar3,iVar1,(void *)0x0);
        }
        if (algor2 != (X509_ALGOR *)0x0) {
          pAVar3 = OBJ_nid2obj(local_64);
          X509_ALGOR_set0(algor2,pAVar3,iVar1,(void *)0x0);
        }
      }
      else {
        iVar1 = (*pcVar4)(ctx,it,asn,algor1,algor2,signature);
        if (iVar1 == 1) {
          local_60 = (size_t)signature->length;
          sigret = (uchar *)0x0;
          iVar1 = 0;
          sVar5 = 0;
          goto LAB_00b7e048;
        }
        if (iVar1 < 1) {
          iVar1 = 6;
          iVar2 = 0xac;
          goto LAB_00b7e038;
        }
        if (iVar1 == 2) goto LAB_00b7ded4;
      }
      iVar1 = ASN1_item_i2d(asn,&local_58,it);
      iVar2 = EVP_PKEY_size(pkey);
      sVar5 = (size_t)iVar2;
      local_60 = sVar5;
      sigret = CRYPTO_malloc(iVar2,"crypto/asn1/a_sign.c",0xc9);
      if ((sigret == (uchar *)0x0) || (local_58 == (uchar *)0x0)) {
        iVar2 = 0x41;
        line = 0xcc;
      }
      else {
        iVar2 = EVP_DigestUpdate(ctx,local_58,(long)iVar1);
        if ((iVar2 != 0) && (iVar2 = EVP_DigestSignFinal(ctx,sigret,&local_60), iVar2 != 0)) {
          CRYPTO_free(signature->data);
          signature->data = sigret;
          signature->flags = signature->flags & 0xfffffffffffffff0U | 8;
          sigret = (uchar *)0x0;
          signature->length = (int)local_60;
          goto LAB_00b7e048;
        }
        iVar2 = 6;
        line = 0xd3;
      }
      local_60 = 0;
      ERR_put_error(0xd,0xdc,iVar2,"crypto/asn1/a_sign.c",line);
      goto LAB_00b7e048;
    }
    iVar1 = 0xc6;
    iVar2 = 0x9c;
  }
LAB_00b7e038:
  ERR_put_error(0xd,0xdc,iVar1,"crypto/asn1/a_sign.c",iVar2);
  sigret = (uchar *)0x0;
  iVar1 = 0;
  sVar5 = 0;
LAB_00b7e048:
  CRYPTO_clear_free(local_58,iVar1,"crypto/asn1/a_sign.c",0xe1);
  CRYPTO_clear_free(sigret,sVar5,"crypto/asn1/a_sign.c",0xe2);
  return (int)local_60;
}

