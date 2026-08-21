
int FUN_00b7fd28(BIO *param_1,undefined8 param_2,ASN1_BIT_STRING *param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  char *buf;
  
                    /* catch() { ... } // from try @ 00b7fd9c with catch @ 00b7fd58
                       catch() { ... } // from try @ 00b7fe00 with catch @ 00b7fd58 */
  BIO_printf(param_1,"%*s%s:\n%*s",(ulong)param_4,&DAT_013c996e,param_2,(ulong)(param_4 + 2),
             &DAT_013c996e);
  iVar2 = ASN1_BIT_STRING_get_bit(param_3,0);
  bVar1 = iVar2 == 0;
  if (!bVar1) {
    BIO_puts(param_1,"Unused");
  }
                    /* try { // try from 00b7fd9c to 00c7fdf7 has its CatchHandler @ 00b7fd58 */
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
                    /* try { // try from 00b7fdf8 to 00c7fdff has its CatchHandler @ 00b7fe9c */
                    /* try { // try from 00b7fe00 to 00c7febb has its CatchHandler @ 00b7fd58 */
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
                    /* catch() { ... } // from try @ 00b7fdf8 with catch @ 00b7fe9c */
                    /* catch() { ... } // from try @ 00b7fd94 with catch @ 00b7fea0 */
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
      goto LAB_00b7ff6c;
    }
  }
  else {
    if (!bVar1) {
      BIO_puts(param_1,", ");
    }
    BIO_puts(param_1,"AA Compromise");
  }
  buf = "\n";
LAB_00b7ff6c:
  iVar2 = BIO_puts(param_1,buf);
  return iVar2;
}

