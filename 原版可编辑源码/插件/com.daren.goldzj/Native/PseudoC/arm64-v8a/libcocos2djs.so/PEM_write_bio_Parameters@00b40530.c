
int PEM_write_bio_Parameters(BIO *bp,EVP_PKEY *x)

{
  int iVar1;
  EVP_PKEY_ASN1_METHOD *pEVar2;
  char acStack_70 [80];
  
  pEVar2 = x->ameth;
  if ((pEVar2 == (EVP_PKEY_ASN1_METHOD *)0x0) || (*(long *)(pEVar2 + 0x78) == 0)) {
    iVar1 = 0;
  }
  else {
    BIO_snprintf(acStack_70,0x50,"%s PARAMETERS",*(undefined8 *)(pEVar2 + 0x10));
    iVar1 = PEM_ASN1_write_bio(*(undefined1 **)(x->ameth + 0x78),acStack_70,bp,x,(EVP_CIPHER *)0x0,
                               (uchar *)0x0,0,(undefined1 *)0x0,(void *)0x0);
  }
  return iVar1;
}

