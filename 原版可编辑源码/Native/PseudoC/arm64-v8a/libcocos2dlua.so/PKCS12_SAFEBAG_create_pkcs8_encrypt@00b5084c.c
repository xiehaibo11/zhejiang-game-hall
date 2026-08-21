
PKCS12_SAFEBAG *
PKCS12_SAFEBAG_create_pkcs8_encrypt
          (int param_1,char *param_2,int param_3,uchar *param_4,int param_5,int param_6,
          PKCS8_PRIV_KEY_INFO *param_7)

{
  char *name;
  EVP_CIPHER *cipher;
  X509_SIG *a;
  PKCS12_SAFEBAG *pPVar1;
  ASN1_OBJECT *pAVar2;
  
  name = OBJ_nid2sn(param_1);
  cipher = EVP_get_cipherbyname(name);
  if (cipher != (EVP_CIPHER *)0x0) {
    param_1 = -1;
  }
  a = PKCS8_encrypt(param_1,cipher,param_2,param_3,param_4,param_5,param_6,param_7);
  if (a == (X509_SIG *)0x0) {
    ERR_put_error(0x23,0x85,0x41,"crypto/pkcs12/p12_sbag.c",0x9d);
  }
  else {
    pPVar1 = PKCS12_SAFEBAG_new();
    if (pPVar1 != (PKCS12_SAFEBAG *)0x0) {
      pAVar2 = OBJ_nid2obj(0x97);
      pPVar1->type = pAVar2;
      (pPVar1->value).shkeybag = a;
      return pPVar1;
    }
    ERR_put_error(0x23,0x71,0x41,"crypto/pkcs12/p12_sbag.c",0x81);
    ERR_put_error(0x23,0x85,0x41,"crypto/pkcs12/p12_sbag.c",0xa4);
    X509_SIG_free(a);
  }
  return (PKCS12_SAFEBAG *)0x0;
}

