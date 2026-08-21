
int X509_signature_dump(BIO *bp,ASN1_STRING *sig,int indent)

{
  byte *pbVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  uchar *puVar5;
  long lVar6;
  
  iVar4 = sig->length;
  puVar5 = sig->data;
  lVar6 = 0;
  do {
    if (iVar4 <= lVar6) {
      iVar4 = BIO_write(bp,&DAT_018938a8,1);
      return (uint)(iVar4 == 1);
    }
    if ((int)lVar6 % 0x12 == 0) {
      iVar3 = BIO_write(bp,&DAT_018938a8,1);
      if (iVar3 < 1) {
        return 0;
      }
      iVar3 = BIO_indent(bp,indent,indent);
      if (iVar3 < 1) {
        return 0;
      }
    }
    pbVar1 = puVar5 + lVar6;
    pcVar2 = "";
    if (iVar4 + -1 != (int)lVar6) {
      pcVar2 = ":";
    }
    lVar6 = lVar6 + 1;
    iVar3 = BIO_printf(bp,"%02x%s",(ulong)*pbVar1,pcVar2);
    if (iVar3 < 1) {
      return 0;
    }
  } while( true );
}

