
int FUN_00b708a8(BIO *param_1,undefined8 param_2,ASN1_BIT_STRING *param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  char *buf;
  
  BIO_printf(param_1,"%*s%s:\n%*s",(ulong)param_4,&DAT_0189703a,param_2,(ulong)(param_4 + 2),
             &DAT_0189703a);
  iVar2 = ASN1_BIT_STRING_get_bit(param_3,0);
  bVar1 = iVar2 == 0;
  if (!bVar1) {
    BIO_puts(param_1,"Unused");
  }
  iVar2 = ASN1_BIT_STRING_get_bit(param_3,1);
  if (iVar2 != 0) {
    if (!bVar1) {
      BIO_puts(param_1,", ");
    }
    BIO_puts(param_1,"Key Compromise");
    bVar1 = false;
  }
  iVar2 = ASN1_BIT_STRING_get_bit(param_3,2);
  if (iVar2 != 0) {
    if (!bVar1) {
      BIO_puts(param_1,", ");
    }
    BIO_puts(param_1,"CA Compromise");
    bVar1 = false;
  }
  iVar2 = ASN1_BIT_STRING_get_bit(param_3,3);
  if (iVar2 != 0) {
    if (!bVar1) {
      BIO_puts(param_1,", ");
    }
    BIO_puts(param_1,"Affiliation Changed");
    bVar1 = false;
  }
  iVar2 = ASN1_BIT_STRING_get_bit(param_3,4);
  if (iVar2 != 0) {
    if (!bVar1) {
      BIO_puts(param_1,", ");
    }
    BIO_puts(param_1,"Superseded");
    bVar1 = false;
  }
  iVar2 = ASN1_BIT_STRING_get_bit(param_3,5);
  if (iVar2 != 0) {
    if (!bVar1) {
      BIO_puts(param_1,", ");
    }
    BIO_puts(param_1,"Cessation Of Operation");
    bVar1 = false;
  }
  iVar2 = ASN1_BIT_STRING_get_bit(param_3,6);
  if (iVar2 != 0) {
    if (!bVar1) {
      BIO_puts(param_1,", ");
    }
    BIO_puts(param_1,"Certificate Hold");
    bVar1 = false;
  }
  iVar2 = ASN1_BIT_STRING_get_bit(param_3,7);
  if (iVar2 != 0) {
    if (!bVar1) {
      BIO_puts(param_1,", ");
    }
    BIO_puts(param_1,"Privilege Withdrawn");
    bVar1 = false;
  }
  iVar2 = ASN1_BIT_STRING_get_bit(param_3,8);
  if (iVar2 == 0) {
    if (bVar1) {
      buf = "<EMPTY>\n";
      goto LAB_00b70aec;
    }
  }
  else {
    if (!bVar1) {
      BIO_puts(param_1,", ");
    }
    BIO_puts(param_1,"AA Compromise");
  }
  buf = "\n";
LAB_00b70aec:
  iVar2 = BIO_puts(param_1,buf);
  return iVar2;
}

