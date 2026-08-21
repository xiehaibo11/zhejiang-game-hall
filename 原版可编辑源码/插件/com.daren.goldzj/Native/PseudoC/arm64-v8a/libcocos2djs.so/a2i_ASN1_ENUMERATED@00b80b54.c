
int a2i_ASN1_ENUMERATED(BIO *bp,ASN1_ENUMERATED *bs,char *buf,int size)

{
  int iVar1;
  
  iVar1 = a2i_ASN1_INTEGER(bp,bs,buf,size);
  if (iVar1 == 1) {
    bs->type = bs->type & 0x100U | 2;
  }
  return iVar1;
}

