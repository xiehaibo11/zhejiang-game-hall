
undefined8 FUN_00b39bcc(EVP_PKEY *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  ASN1_OCTET_STRING *str;
  undefined8 uVar2;
  
  str = ASN1_OCTET_STRING_new();
  if (((str == (ASN1_OCTET_STRING *)0x0) ||
      (iVar1 = ASN1_OCTET_STRING_set(str,(void *)*param_2,param_3), iVar1 == 0)) ||
     (iVar1 = EVP_PKEY_assign(param_1,0x357,str), iVar1 == 0)) {
    ASN1_OCTET_STRING_free(str);
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

