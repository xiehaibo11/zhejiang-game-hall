
bool FUN_00bdce98(undefined8 param_1,ASN1_STRING *param_2,BIO *param_3,ulong param_4)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = BIO_printf(param_3,"%*s",param_4 & 0xffffffff,&DAT_013c996e);
  if (iVar2 < 1) {
    bVar1 = false;
  }
  else {
    iVar2 = i2a_ASN1_STRING(param_3,param_2,4);
    bVar1 = 0 < iVar2;
  }
  return bVar1;
}

