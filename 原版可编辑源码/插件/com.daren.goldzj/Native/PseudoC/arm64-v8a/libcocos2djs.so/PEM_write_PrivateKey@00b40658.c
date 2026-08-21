
int PEM_write_PrivateKey
              (FILE *fp,EVP_PKEY *x,EVP_CIPHER *enc,uchar *kstr,int klen,undefined1 *cb,void *u)

{
  int iVar1;
  BIO *bp;
  EVP_PKEY_ASN1_METHOD *pEVar2;
  char acStack_a0 [80];
  
  bp = BIO_new_fp(fp,0);
  if (bp == (BIO *)0x0) {
    ERR_put_error(9,0x8b,7,"crypto/pem/pem_pkey.c",0xbc);
    iVar1 = 0;
  }
  else {
    pEVar2 = x->ameth;
    if ((pEVar2 == (EVP_PKEY_ASN1_METHOD *)0x0) || (*(long *)(pEVar2 + 0x48) != 0)) {
      iVar1 = PEM_write_bio_PKCS8PrivateKey(bp,x,enc,(char *)kstr,klen,cb,u);
    }
    else {
      BIO_snprintf(acStack_a0,0x50,"%s PRIVATE KEY",*(undefined8 *)(pEVar2 + 0x10));
      iVar1 = PEM_ASN1_write_bio(i2d_PrivateKey,acStack_a0,bp,x,enc,kstr,klen,cb,u);
    }
    BIO_free(bp);
  }
  return iVar1;
}

