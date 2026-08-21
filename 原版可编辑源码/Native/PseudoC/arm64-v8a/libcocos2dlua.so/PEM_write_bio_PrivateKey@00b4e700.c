
int PEM_write_bio_PrivateKey
              (BIO *bp,EVP_PKEY *x,EVP_CIPHER *enc,uchar *kstr,int klen,undefined1 *cb,void *u)

{
  int iVar1;
  EVP_PKEY_ASN1_METHOD *pEVar2;
  char acStack_a0 [80];
  
  pEVar2 = x->ameth;
  if ((pEVar2 != (EVP_PKEY_ASN1_METHOD *)0x0) && (*(long *)(pEVar2 + 0x48) == 0)) {
    BIO_snprintf(acStack_a0,0x50,"%s PRIVATE KEY",*(undefined8 *)(pEVar2 + 0x10));
    iVar1 = PEM_ASN1_write_bio(i2d_PrivateKey,acStack_a0,bp,x,enc,kstr,klen,cb,u);
    return iVar1;
  }
  iVar1 = PEM_write_bio_PKCS8PrivateKey(bp,x,enc,(char *)kstr,klen,cb,u);
  return iVar1;
}

