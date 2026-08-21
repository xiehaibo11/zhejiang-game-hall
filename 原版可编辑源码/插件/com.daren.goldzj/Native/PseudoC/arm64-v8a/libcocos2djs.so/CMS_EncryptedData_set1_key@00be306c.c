
int CMS_EncryptedData_set1_key(CMS_ContentInfo *cms,EVP_CIPHER *ciph,uchar *key,size_t keylen)

{
  int iVar1;
  ASN1_VALUE *pAVar2;
  ASN1_OBJECT *pAVar3;
  void *__dest;
  int line;
  undefined8 *puVar4;
  
  if ((key == (uchar *)0x0) || (keylen == 0)) {
    iVar1 = 0x82;
    line = 0xbb;
LAB_00be30dc:
    ERR_put_error(0x2e,0x7b,iVar1,"crypto/cms/cms_enc.c",line);
    iVar1 = 0;
  }
  else {
    if (ciph == (EVP_CIPHER *)0x0) {
      iVar1 = OBJ_obj2nid(*(ASN1_OBJECT **)cms);
      if (iVar1 != 0x1a) {
        iVar1 = 0x7a;
        line = 199;
        goto LAB_00be30dc;
      }
      puVar4 = *(undefined8 **)(cms + 8);
    }
    else {
      pAVar2 = ASN1_item_new((ASN1_ITEM *)CMS_EncryptedData_it);
      *(ASN1_VALUE **)(cms + 8) = pAVar2;
      if (pAVar2 == (ASN1_VALUE *)0x0) {
        iVar1 = 0x41;
        line = 0xc1;
        goto LAB_00be30dc;
      }
      pAVar3 = OBJ_nid2obj(0x1a);
      puVar4 = *(undefined8 **)(cms + 8);
      *(ASN1_OBJECT **)cms = pAVar3;
      *puVar4 = 0;
    }
    puVar4 = (undefined8 *)puVar4[1];
    puVar4[3] = ciph;
    __dest = CRYPTO_malloc((int)keylen,"crypto/cms/cms_enc.c",0xab);
    puVar4[4] = __dest;
    iVar1 = 0;
    if (__dest != (void *)0x0) {
      memcpy(__dest,key,keylen);
      puVar4[5] = keylen;
      if (ciph != (EVP_CIPHER *)0x0) {
        pAVar3 = OBJ_nid2obj(0x15);
        *puVar4 = pAVar3;
      }
      iVar1 = 1;
    }
  }
  return iVar1;
}

