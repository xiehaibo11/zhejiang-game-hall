
CMS_RecipientInfo *
CMS_add0_recipient_key
          (CMS_ContentInfo *cms,int nid,uchar *key,size_t keylen,uchar *id,size_t idlen,
          ASN1_GENERALIZEDTIME *date,ASN1_OBJECT *otherTypeId,ASN1_TYPE *otherType)

{
  int iVar1;
  ASN1_VALUE *val;
  ASN1_VALUE *pAVar2;
  ASN1_VALUE *pAVar3;
  ASN1_OBJECT *aobj;
  int reason;
  int line;
  undefined8 *puVar4;
  X509_ALGOR *alg;
  long lVar5;
  
  iVar1 = OBJ_obj2nid(*(ASN1_OBJECT **)cms);
  if (iVar1 == 0x17) {
    lVar5 = *(long *)(cms + 8);
    if (lVar5 != 0) {
      if (nid < 0x315) {
        if (nid == 0) {
          if (keylen == 0x10) {
            nid = 0x314;
          }
          else if (keylen == 0x20) {
            nid = 0x316;
          }
          else {
            if (keylen != 0x18) {
              iVar1 = 100;
              reason = 0x76;
              line = 0x1ea;
              goto LAB_00b8e200;
            }
            nid = 0x315;
          }
        }
        else {
          if (nid != 0x314) {
LAB_00b8e2a4:
            iVar1 = 100;
            reason = 0x99;
            line = 500;
            goto LAB_00b8e200;
          }
          if (keylen != 0x10) goto LAB_00b8e288;
        }
      }
      else if (nid == 0x315) {
        if (keylen != 0x18) {
LAB_00b8e288:
          iVar1 = 100;
          reason = 0x76;
          line = 0x1f9;
          goto LAB_00b8e200;
        }
      }
      else {
        if (nid != 0x316) goto LAB_00b8e2a4;
        if (keylen != 0x20) goto LAB_00b8e288;
      }
      val = ASN1_item_new((ASN1_ITEM *)CMS_RecipientInfo_it);
      if (val != (ASN1_VALUE *)0x0) {
        pAVar2 = ASN1_item_new((ASN1_ITEM *)CMS_KEKRecipientInfo_it);
        *(ASN1_VALUE **)(val + 8) = pAVar2;
        if (pAVar2 != (ASN1_VALUE *)0x0) {
          *(undefined4 *)val = 2;
          if (otherTypeId != (ASN1_OBJECT *)0x0) {
            pAVar3 = ASN1_item_new((ASN1_ITEM *)CMS_OtherKeyAttribute_it);
            *(ASN1_VALUE **)(*(long *)(pAVar2 + 8) + 0x10) = pAVar3;
            if (pAVar3 == (ASN1_VALUE *)0x0) goto LAB_00b8e388;
          }
          iVar1 = OPENSSL_sk_push(*(undefined8 *)(lVar5 + 0x10),val);
          if (iVar1 != 0) {
            *(undefined8 *)pAVar2 = 4;
            *(uchar **)(pAVar2 + 0x20) = key;
            *(size_t *)(pAVar2 + 0x28) = keylen;
            ASN1_STRING_set0((ASN1_STRING *)**(undefined8 **)(pAVar2 + 8),id,(int)idlen);
            puVar4 = *(undefined8 **)(*(long *)(pAVar2 + 8) + 0x10);
            *(ASN1_GENERALIZEDTIME **)(*(long *)(pAVar2 + 8) + 8) = date;
            if (puVar4 != (undefined8 *)0x0) {
              *puVar4 = otherTypeId;
              puVar4[1] = otherType;
            }
            alg = *(X509_ALGOR **)(pAVar2 + 0x10);
            aobj = OBJ_nid2obj(nid);
            X509_ALGOR_set0(alg,aobj,-1,(void *)0x0);
            return (CMS_RecipientInfo *)val;
          }
        }
      }
LAB_00b8e388:
      ERR_put_error(0x2e,100,0x41,"crypto/cms/cms_env.c",0x22a);
      goto LAB_00b8e208;
    }
  }
  else {
    iVar1 = 0x83;
    reason = 0x6b;
    line = 0x1b;
LAB_00b8e200:
    ERR_put_error(0x2e,iVar1,reason,"crypto/cms/cms_env.c",line);
  }
  val = (ASN1_VALUE *)0x0;
LAB_00b8e208:
  ASN1_item_free(val,(ASN1_ITEM *)CMS_RecipientInfo_it);
  return (CMS_RecipientInfo *)0x0;
}

