
undefined8 * PKCS8_set0_pbe(char *param_1,int param_2,void *param_3,X509_ALGOR *param_4)

{
  ASN1_OCTET_STRING *a;
  undefined8 *puVar1;
  
  a = PKCS12_item_i2d_encrypt(param_4,(ASN1_ITEM *)PKCS8_PRIV_KEY_INFO_it,param_1,param_2,param_3,1)
  ;
  if (a == (ASN1_OCTET_STRING *)0x0) {
    ERR_put_error(0x23,0x84,0x67,"crypto/pkcs12/p12_p8e.c",0x36);
  }
  else {
    puVar1 = (undefined8 *)CRYPTO_zalloc(0x10,"crypto/pkcs12/p12_p8e.c",0x3a);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = param_4;
      puVar1[1] = a;
      return puVar1;
    }
    ERR_put_error(0x23,0x84,0x41,"crypto/pkcs12/p12_p8e.c",0x3d);
    ASN1_OCTET_STRING_free(a);
  }
  return (undefined8 *)0x0;
}

