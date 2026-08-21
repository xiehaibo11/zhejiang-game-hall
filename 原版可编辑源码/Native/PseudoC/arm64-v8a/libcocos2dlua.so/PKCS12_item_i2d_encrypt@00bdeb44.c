
ASN1_OCTET_STRING *
PKCS12_item_i2d_encrypt(X509_ALGOR *algor,ASN1_ITEM *it,char *pass,int passlen,void *obj,int zbuf)

{
  int inlen;
  ASN1_OCTET_STRING *a;
  uchar *puVar1;
  uchar *local_48;
  
  local_48 = (uchar *)0x0;
  a = ASN1_OCTET_STRING_new();
  if (a == (ASN1_OCTET_STRING *)0x0) {
    ERR_put_error(0x23,0x6c,0x41,"crypto/pkcs12/p12_decr.c",0x86);
  }
  else {
    inlen = ASN1_item_i2d(obj,&local_48,it);
    if (local_48 == (uchar *)0x0) {
      ERR_put_error(0x23,0x6c,0x66,"crypto/pkcs12/p12_decr.c",0x8b);
    }
    else {
      puVar1 = PKCS12_pbe_crypt(algor,pass,passlen,local_48,inlen,&a->data,&a->length,1);
      if (puVar1 != (uchar *)0x0) {
        if (zbuf != 0) {
          OPENSSL_cleanse(local_48,(long)inlen);
        }
        CRYPTO_free(local_48);
        return a;
      }
      ERR_put_error(0x23,0x6c,0x67,"crypto/pkcs12/p12_decr.c",0x90);
      CRYPTO_free(local_48);
    }
  }
  ASN1_OCTET_STRING_free(a);
  return (ASN1_OCTET_STRING *)0x0;
}

