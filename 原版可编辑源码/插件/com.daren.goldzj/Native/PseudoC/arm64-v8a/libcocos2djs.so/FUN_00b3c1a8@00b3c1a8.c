
int FUN_00b3c1a8(BIO *param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  
  BIO_printf(param_1,"%*sCertificate ID:\n",param_3,&DAT_0189703a);
  uVar1 = (int)param_3 + 2;
  BIO_printf(param_1,"%*sHash Algorithm: ",(ulong)uVar1,&DAT_0189703a);
  i2a_ASN1_OBJECT(param_1,(ASN1_OBJECT *)*param_2);
  BIO_printf(param_1,"\n%*sIssuer Name Hash: ",(ulong)uVar1,&DAT_0189703a);
  i2a_ASN1_STRING(param_1,(ASN1_STRING *)(param_2 + 2),0);
  BIO_printf(param_1,"\n%*sIssuer Key Hash: ",(ulong)uVar1,&DAT_0189703a);
  i2a_ASN1_STRING(param_1,(ASN1_STRING *)(param_2 + 5),0);
  BIO_printf(param_1,"\n%*sSerial Number: ",(ulong)uVar1,&DAT_0189703a);
  i2a_ASN1_INTEGER(param_1,(ASN1_INTEGER *)(param_2 + 8));
  iVar2 = BIO_printf(param_1,"\n");
  return iVar2;
}

