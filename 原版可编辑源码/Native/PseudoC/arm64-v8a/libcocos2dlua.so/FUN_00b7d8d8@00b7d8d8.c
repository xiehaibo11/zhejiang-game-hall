
X509_EXTENSION * FUN_00b7d8d8(long param_1,int param_2,int param_3,ASN1_VALUE *param_4)

{
  int num;
  X509_EXTENSION *pXVar1;
  ASN1_OCTET_STRING *data;
  uchar *local_48;
  uchar *local_38;
  
  local_38 = (uchar *)0x0;
  if (*(ASN1_ITEM **)(param_1 + 8) == (ASN1_ITEM *)0x0) {
    num = (**(code **)(param_1 + 0x28))(param_4,0);
    local_38 = CRYPTO_malloc(num,"crypto/x509v3/v3_conf.c",0x95);
    if (local_38 != (uchar *)0x0) {
      local_48 = local_38;
      (**(code **)(param_1 + 0x28))(param_4,&local_48);
      goto LAB_00b7d968;
    }
  }
  else {
    local_38 = (uchar *)0x0;
    num = ASN1_item_i2d(param_4,&local_38,*(ASN1_ITEM **)(param_1 + 8));
    if (-1 < num) {
LAB_00b7d968:
      data = ASN1_OCTET_STRING_new();
      if (data != (ASN1_OCTET_STRING *)0x0) {
        data->data = local_38;
        local_38 = (uchar *)0x0;
        data->length = num;
        pXVar1 = X509_EXTENSION_create_by_NID((X509_EXTENSION **)0x0,param_2,param_3,data);
        if (pXVar1 != (X509_EXTENSION *)0x0) {
          ASN1_OCTET_STRING_free(data);
          return pXVar1;
        }
      }
      goto LAB_00b7d9b0;
    }
  }
  data = (ASN1_STRING *)0x0;
LAB_00b7d9b0:
  ERR_put_error(0x22,0x87,0x41,"crypto/x509v3/v3_conf.c",0xa8);
  CRYPTO_free(local_38);
  ASN1_OCTET_STRING_free(data);
  return (X509_EXTENSION *)0x0;
}

