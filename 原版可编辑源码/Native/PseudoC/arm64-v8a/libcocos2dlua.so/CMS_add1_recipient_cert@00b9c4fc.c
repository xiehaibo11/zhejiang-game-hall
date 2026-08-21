
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
  
                    /* try { // try from 00b9c500 to 00c9c557 has its CatchHandler @ 00b9b8d4 */
  iVar1 = OBJ_obj2nid(*(ASN1_OBJECT **)cms);
  if (iVar1 == 0x17) {
    lVar6 = *(long *)(cms + 8);
    if (lVar6 != 0) {
      val = ASN1_item_new((ASN1_ITEM *)CMS_RecipientInfo_it);
      if (val == (ASN1_VALUE *)0x0) {
LAB_00b9c71c:
                    /* catch() { ... } // from try @ 00b9c31c with catch @ 00b9c720 */
                    /* catch() { ... } // from try @ 00b9c3c8 with catch @ 00b9c728 */
        iVar1 = 0x65;
        reason = 0x41;
        line = 0xe0;
      }
      else {
        pEVar2 = (EVP_PKEY *)X509_get0_pubkey(recip);
                    /* try { // try from 00b9c558 to 00c9c563 has its CatchHandler @ 00b9c5b4 */
        if (pEVar2 == (EVP_PKEY *)0x0) {
          iVar1 = 0x65;
          reason = 0x71;
          line = 0xc3;
          goto LAB_00b9c734;
        }
                    /* try { // try from 00b9c564 to 00c9c83b has its CatchHandler @ 00b9b8d4 */
        if (((pEVar2->ameth != (EVP_PKEY_ASN1_METHOD *)0x0) &&
            (pcVar4 = *(code **)(pEVar2->ameth + 0xb0), pcVar4 != (code *)0x0)) &&
           (iVar1 = (*pcVar4)(pEVar2,8,0,&local_44), 0 < iVar1)) {
          if (local_44 != 1) {
            if (local_44 != 0) {
              iVar1 = 0x65;
              reason = 0x7d;
              line = 0xd5;
              goto LAB_00b9c734;
            }
            goto LAB_00b9c598;
          }
                    /* catch() { ... } // from try @ 00b9c1ec with catch @ 00b9c678 */
          iVar1 = cms_RecipientInfo_kari_init(val,recip,pEVar2,flags);
          if (iVar1 == 0) goto LAB_00b9c738;
          goto LAB_00b9c70c;
        }
LAB_00b9c598:
        pAVar3 = ASN1_item_new((ASN1_ITEM *)CMS_KeyTransRecipientInfo_it);
        *(ASN1_VALUE **)(val + 8) = pAVar3;
        if (pAVar3 == (ASN1_VALUE *)0x0) goto LAB_00b9c738;
        *(undefined4 *)val = 0;
                    /* catch() { ... } // from try @ 00b9c558 with catch @ 00b9c5b4 */
                    /* catch() { ... } // from try @ 00b9c4f4 with catch @ 00b9c5b8 */
                    /* catch() { ... } // from try @ 00b9b92c with catch @ 00b9c5bc */
                    /* catch() { ... } // from try @ 00b9be80 with catch @ 00b9c5c0 */
                    /* catch() { ... } // from try @ 00b9bf84 with catch @ 00b9c5c4 */
        *(ulong *)pAVar3 = (ulong)((flags & 0x10000) >> 0xf);
                    /* catch() { ... } // from try @ 00b9bf78 with catch @ 00b9c5cc */
        iVar1 = cms_set1_SignerIdentifier(*(undefined8 *)(pAVar3 + 8),recip,flags >> 0x10 & 1);
                    /* catch() { ... } // from try @ 00b9bfcc with catch @ 00b9c5d0 */
        if (iVar1 == 0) goto LAB_00b9c738;
                    /* catch() { ... } // from try @ 00b9bfac with catch @ 00b9c5d4 */
                    /* catch() { ... } // from try @ 00b9ba98 with catch @ 00b9c5d8 */
        X509_up_ref(recip);
                    /* catch() { ... } // from try @ 00b9bd58 with catch @ 00b9c5dc */
                    /* catch() { ... } // from try @ 00b9bda8 with catch @ 00b9c5e0 */
        EVP_PKEY_up_ref(pEVar2);
        *(X509 **)(pAVar3 + 0x20) = recip;
        *(EVP_PKEY **)(pAVar3 + 0x28) = pEVar2;
        if ((flags >> 0x12 & 1) != 0) {
                    /* catch() { ... } // from try @ 00b9c1a0 with catch @ 00b9c650 */
          ctx = EVP_PKEY_CTX_new(pEVar2,(ENGINE *)0x0);
          *(EVP_PKEY_CTX **)(pAVar3 + 0x30) = ctx;
                    /* catch() { ... } // from try @ 00b9c16c with catch @ 00b9c660 */
          if ((ctx == (EVP_PKEY_CTX *)0x0) || (iVar1 = EVP_PKEY_encrypt_init(ctx), iVar1 < 1))
          goto LAB_00b9c738;
LAB_00b9c70c:
                    /* catch() { ... } // from try @ 00b9c300 with catch @ 00b9c70c */
                    /* catch() { ... } // from try @ 00b9c344 with catch @ 00b9c710 */
          iVar1 = OPENSSL_sk_push(*(undefined8 *)(lVar6 + 0x10),val);
          if (iVar1 != 0) {
            return (CMS_RecipientInfo *)val;
          }
          goto LAB_00b9c71c;
        }
        if (*(int *)val == 1) {
                    /* catch() { ... } // from try @ 00b9c178 with catch @ 00b9c6b4 */
          if ((*(EVP_PKEY_CTX **)(*(long *)(val + 8) + 0x28) == (EVP_PKEY_CTX *)0x0) ||
             (pEVar2 = EVP_PKEY_CTX_get0_pkey(*(EVP_PKEY_CTX **)(*(long *)(val + 8) + 0x28)),
             pEVar2 == (EVP_PKEY *)0x0)) goto LAB_00b9c738;
          pEVar5 = pEVar2->ameth;
          if (pEVar5 != (EVP_PKEY_ASN1_METHOD *)0x0) goto LAB_00b9c6c8;
          goto LAB_00b9c70c;
        }
        if (*(int *)val != 0) goto LAB_00b9c738;
                    /* catch() { ... } // from try @ 00b9bd88 with catch @ 00b9c600 */
        pEVar2 = *(EVP_PKEY **)(*(long *)(val + 8) + 0x28);
        pEVar5 = pEVar2->ameth;
        if (pEVar5 == (EVP_PKEY_ASN1_METHOD *)0x0) goto LAB_00b9c70c;
LAB_00b9c6c8:
        if (*(code **)(pEVar5 + 0xb0) == (code *)0x0) goto LAB_00b9c70c;
                    /* catch() { ... } // from try @ 00b9c0f4 with catch @ 00b9c6d0 */
                    /* catch() { ... } // from try @ 00b9c0a0 with catch @ 00b9c6d4 */
                    /* catch() { ... } // from try @ 00b9bc80 with catch @ 00b9c6d8 */
        iVar1 = (**(code **)(pEVar5 + 0xb0))(pEVar2,7,0,val);
        if (iVar1 == -2) {
                    /* catch() { ... } // from try @ 00b9bd30 with catch @ 00b9c6e8
                       catch() { ... } // from try @ 00b9bdf0 with catch @ 00b9c6e8 */
                    /* catch() { ... } // from try @ 00b9c364 with catch @ 00b9c6ec */
          iVar1 = 0xab;
          reason = 0x7d;
                    /* catch() { ... } // from try @ 00b9c310 with catch @ 00b9c6fc */
          line = 0x47;
        }
        else {
          if (0 < iVar1) goto LAB_00b9c70c;
          iVar1 = 0xab;
          reason = 0x6f;
          line = 0x4b;
        }
      }
LAB_00b9c734:
      ERR_put_error(0x2e,iVar1,reason,"crypto/cms/cms_env.c",line);
      goto LAB_00b9c738;
    }
  }
  else {
                    /* catch() { ... } // from try @ 00b9c0d4 with catch @ 00b9c620 */
    ERR_put_error(0x2e,0x83,0x6b,"crypto/cms/cms_env.c",0x1b);
  }
  val = (ASN1_VALUE *)0x0;
                    /* catch() { ... } // from try @ 00b9c1c0 with catch @ 00b9c630 */
LAB_00b9c738:
  ASN1_item_free(val,(ASN1_ITEM *)CMS_RecipientInfo_it);
  return (CMS_RecipientInfo *)0x0;
}

