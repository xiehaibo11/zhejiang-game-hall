
void * PKCS12_item_decrypt_d2i
                 (X509_ALGOR *algor,ASN1_ITEM *it,char *pass,int passlen,ASN1_OCTET_STRING *oct,
                 int zbuf)

{
  uchar *puVar1;
  ASN1_VALUE *pAVar2;
  int local_34;
  uchar *local_30;
  uchar *local_28;
  
  puVar1 = PKCS12_pbe_crypt(algor,pass,passlen,oct->data,oct->length,&local_28,&local_34,0);
  if (puVar1 == (uchar *)0x0) {
    ERR_put_error(0x23,0x6a,0x75,"crypto/pkcs12/p12_decr.c",0x5e);
    pAVar2 = (ASN1_VALUE *)0x0;
  }
  else {
    local_30 = local_28;
    pAVar2 = ASN1_item_d2i((ASN1_VALUE **)0x0,&local_30,(long)local_34,it);
    if (zbuf != 0) {
      OPENSSL_cleanse(local_28,(long)local_34);
    }
    if (pAVar2 == (ASN1_VALUE *)0x0) {
      ERR_put_error(0x23,0x6a,0x65,"crypto/pkcs12/p12_decr.c",0x72);
    }
    CRYPTO_free(local_28);
  }
  return pAVar2;
}

