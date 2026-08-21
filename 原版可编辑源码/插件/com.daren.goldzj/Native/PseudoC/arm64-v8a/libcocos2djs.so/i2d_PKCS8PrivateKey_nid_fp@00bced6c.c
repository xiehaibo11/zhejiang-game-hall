
int i2d_PKCS8PrivateKey_nid_fp
              (FILE *fp,EVP_PKEY *x,int nid,char *kstr,int klen,undefined1 *cb,void *u)

{
  int iVar1;
  BIO *a;
  
  a = BIO_new_fp(fp,0);
  if (a == (BIO *)0x0) {
    ERR_put_error(9,0x7d,7,"crypto/pem/pem_pk8.c",0xb8);
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_00bce8c4(a,x,1,nid,0,kstr,klen,cb,u);
    BIO_free(a);
  }
  return iVar1;
}

