
CMS_RecipientInfo * CMS_add1_recipient_cert(CMS_ContentInfo *cms,X509 *recip,uint flags)

{
  int iVar1;
  ASN1_VALUE *val;
  EVP_PKEY *pEVar2;
  ASN1_VALUE *pAVar3;
  EVP_PKEY_CTX *ctx;
  int reason;
  int line;
  code *pcVar4;
  EVP_PKEY_ASN1_METHOD *pEVar5;
  long lVar6;
  int local_44;
  
  iVar1 = OBJ_obj2nid(*(ASN1_OBJECT **)cms);
  if (iVar1 == 0x17) {
    lVar6 = *(long *)(cms + 8);
    if (lVar6 != 0) {
      val = ASN1_item_new((ASN1_ITEM *)CMS_RecipientInfo_it);
      if (val == (ASN1_VALUE *)0x0) {
LAB_00b8df1c:
        iVar1 = 0x65;
        reason = 0x41;
        line = 0xe0;
      }
      else {
        pEVar2 = (EVP_PKEY *)X509_get0_pubkey(recip);
        if (pEVar2 == (EVP_PKEY *)0x0) {
          iVar1 = 0x65;
          reason = 0x71;
          line = 0xc3;
          goto LAB_00b8df34;
        }
        if (((pEVar2->ameth != (EVP_PKEY_ASN1_METHOD *)0x0) &&
            (pcVar4 = *(code **)(pEVar2->ameth + 0xb0), pcVar4 != (code *)0x0)) &&
           (iVar1 = (*pcVar4)(pEVar2,8,0,&local_44), 0 < iVar1)) {
          if (local_44 != 1) {
            if (local_44 != 0) {
              iVar1 = 0x65;
              reason = 0x7d;
              line = 0xd5;
              goto LAB_00b8df34;
            }
            goto LAB_00b8dd98;
          }
          iVar1 = cms_RecipientInfo_kari_init(val,recip,pEVar2,flags);
          if (iVar1 == 0) goto LAB_00b8df38;
          goto LAB_00b8df0c;
        }
LAB_00b8dd98:
        pAVar3 = ASN1_item_new((ASN1_ITEM *)CMS_KeyTransRecipientInfo_it);
        *(ASN1_VALUE **)(val + 8) = pAVar3;
        if (pAVar3 == (ASN1_VALUE *)0x0) goto LAB_00b8df38;
        *(undefined4 *)val = 0;
        *(ulong *)pAVar3 = (ulong)((flags & 0x10000) >> 0xf);
        iVar1 = cms_set1_SignerIdentifier(*(undefined8 *)(pAVar3 + 8),recip,flags >> 0x10 & 1);
        if (iVar1 == 0) goto LAB_00b8df38;
        X509_up_ref(recip);
        EVP_PKEY_up_ref(pEVar2);
        *(X509 **)(pAVar3 + 0x20) = recip;
        *(EVP_PKEY **)(pAVar3 + 0x28) = pEVar2;
        if ((flags >> 0x12 & 1) != 0) {
          ctx = EVP_PKEY_CTX_new(pEVar2,(ENGINE *)0x0);
          *(EVP_PKEY_CTX **)(pAVar3 + 0x30) = ctx;
          if ((ctx == (EVP_PKEY_CTX *)0x0) || (iVar1 = EVP_PKEY_encrypt_init(ctx), iVar1 < 1))
          goto LAB_00b8df38;
LAB_00b8df0c:
          iVar1 = OPENSSL_sk_push(*(undefined8 *)(lVar6 + 0x10),val);
          if (iVar1 != 0) {
            return (CMS_RecipientInfo *)val;
          }
          goto LAB_00b8df1c;
        }
        if (*(int *)val == 1) {
          if ((*(EVP_PKEY_CTX **)(*(long *)(val + 8) + 0x28) == (EVP_PKEY_CTX *)0x0) ||
             (pEVar2 = EVP_PKEY_CTX_get0_pkey(*(EVP_PKEY_CTX **)(*(long *)(val + 8) + 0x28)),
             pEVar2 == (EVP_PKEY *)0x0)) goto LAB_00b8df38;
          pEVar5 = pEVar2->ameth;
          if (pEVar5 != (EVP_PKEY_ASN1_METHOD *)0x0) goto LAB_00b8dec8;
          goto LAB_00b8df0c;
        }
        if (*(int *)val != 0) goto LAB_00b8df38;
        pEVar2 = *(EVP_PKEY **)(*(long *)(val + 8) + 0x28);
        pEVar5 = pEVar2->ameth;
        if (pEVar5 == (EVP_PKEY_ASN1_METHOD *)0x0) goto LAB_00b8df0c;
LAB_00b8dec8:
        if (*(code **)(pEVar5 + 0xb0) == (code *)0x0) goto LAB_00b8df0c;
        iVar1 = (**(code **)(pEVar5 + 0xb0))(pEVar2,7,0,val);
        if (iVar1 == -2) {
          iVar1 = 0xab;
          reason = 0x7d;
          line = 0x47;
        }
        else {
          if (0 < iVar1) goto LAB_00b8df0c;
          iVar1 = 0xab;
          reason = 0x6f;
          line = 0x4b;
        }
      }
LAB_00b8df34:
      ERR_put_error(0x2e,iVar1,reason,"crypto/cms/cms_env.c",line);
      goto LAB_00b8df38;
    }
  }
  else {
    ERR_put_error(0x2e,0x83,0x6b,"crypto/cms/cms_env.c",0x1b);
  }
  val = (ASN1_VALUE *)0x0;
LAB_00b8df38:
  ASN1_item_free(val,(ASN1_ITEM *)CMS_RecipientInfo_it);
  return (CMS_RecipientInfo *)0x0;
}

