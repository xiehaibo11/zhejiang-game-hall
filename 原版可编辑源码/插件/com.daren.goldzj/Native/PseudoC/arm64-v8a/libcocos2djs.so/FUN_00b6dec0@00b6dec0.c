
X509_EXTENSION *
FUN_00b6dec0(char *param_1,char *param_2,int param_3,int param_4,X509V3_CTX *param_5)

{
  char *pcVar1;
  int iVar2;
  ASN1_OBJECT *obj;
  uchar *ptr;
  ASN1_TYPE *a;
  ASN1_OCTET_STRING *data;
  X509_EXTENSION *pXVar3;
  long local_50;
  uchar *local_48;
  
  local_50 = 0;
  obj = OBJ_txt2obj(param_1,0);
  if (obj == (ASN1_OBJECT *)0x0) {
    ERR_put_error(0x22,0x74,0x73,"crypto/x509v3/v3_conf.c",0xea);
    pcVar1 = ", name=";
LAB_00b6df80:
    ERR_add_error_data(2,pcVar1 + 2,param_1);
    ptr = (uchar *)0x0;
    data = (ASN1_OCTET_STRING *)0x0;
  }
  else {
    if (param_4 == 2) {
      local_48 = (uchar *)0x0;
      a = ASN1_generate_v3(param_2,param_5);
      ptr = (uchar *)0x0;
      if (a != (ASN1_TYPE *)0x0) {
        iVar2 = i2d_ASN1_TYPE(a,&local_48);
        local_50 = (long)iVar2;
        ASN1_TYPE_free(a);
        ptr = local_48;
      }
      if (ptr != (uchar *)0x0) goto LAB_00b6e00c;
LAB_00b6df24:
      ERR_put_error(0x22,0x74,0x74,"crypto/x509v3/v3_conf.c",0xf6);
      pcVar1 = ", value=";
      param_1 = param_2;
      goto LAB_00b6df80;
    }
    if ((param_4 != 1) ||
       (ptr = (uchar *)OPENSSL_hexstr2buf(param_2,&local_50), ptr == (uchar *)0x0))
    goto LAB_00b6df24;
LAB_00b6e00c:
    data = ASN1_OCTET_STRING_new();
    if (data != (ASN1_OCTET_STRING *)0x0) {
      data->data = ptr;
      data->length = (int)local_50;
      pXVar3 = X509_EXTENSION_create_by_OBJ((X509_EXTENSION **)0x0,obj,param_3,data);
      ptr = (uchar *)0x0;
      goto LAB_00b6df90;
    }
    ERR_put_error(0x22,0x74,0x41,"crypto/x509v3/v3_conf.c",0xfc);
  }
  pXVar3 = (X509_EXTENSION *)0x0;
LAB_00b6df90:
  ASN1_OBJECT_free(obj);
  ASN1_OCTET_STRING_free(data);
  CRYPTO_free(ptr);
  return pXVar3;
}

