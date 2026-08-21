
undefined4 FUN_00b18840(undefined8 param_1,PKCS8_PRIV_KEY_INFO *param_2)

{
  int iVar1;
  undefined4 uVar2;
  ASN1_OCTET_STRING *x;
  X509_ALGOR *local_38;
  int local_2c;
  uchar *local_28;
  
  iVar1 = PKCS8_pkey_get0((ASN1_OBJECT **)0x0,&local_28,&local_2c,&local_38,param_2);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    x = d2i_ASN1_OCTET_STRING((ASN1_OCTET_STRING **)0x0,&local_28,(long)local_2c);
    if (x == (ASN1_OCTET_STRING *)0x0) {
      local_2c = 0;
      local_28 = (uchar *)0x0;
    }
    else {
      local_28 = (uchar *)ASN1_STRING_get0_data(x);
      local_2c = ASN1_STRING_length(x);
    }
    uVar2 = FUN_00b18d5c(param_1,local_38,local_28,local_2c,1);
    ASN1_OCTET_STRING_free(x);
  }
  return uVar2;
}

