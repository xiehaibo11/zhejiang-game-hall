
int i2d_PKCS8PrivateKey_fp
              (FILE *fp,EVP_PKEY *x,EVP_CIPHER *enc,char *kstr,int klen,undefined1 *cb,void *u)

{
  int iVar1;
  BIO *a;
  
  a = BIO_new_fp(fp,0);
  if (a == (BIO *)0x0) {
    ERR_put_error(9,0x7d,7,"crypto/pem/pem_pk8.c",0xb8);
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_00bdd8c4(a,x,1,0xffffffff,enc,kstr,klen,cb,u);
    BIO_free(a);
  }
  return iVar1;
}

