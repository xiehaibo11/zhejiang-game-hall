
PKCS8_PRIV_KEY_INFO * PKCS8_decrypt(X509_SIG *p8,char *pass,int passlen)

{
  PKCS8_PRIV_KEY_INFO *pPVar1;
  ASN1_OCTET_STRING *local_30;
  X509_ALGOR *pXStack_28;
  
  X509_SIG_get0(p8,&pXStack_28,&local_30);
  pPVar1 = PKCS12_item_decrypt_d2i
                     (pXStack_28,(ASN1_ITEM *)PKCS8_PRIV_KEY_INFO_it,pass,passlen,local_30,1);
  return pPVar1;
}

