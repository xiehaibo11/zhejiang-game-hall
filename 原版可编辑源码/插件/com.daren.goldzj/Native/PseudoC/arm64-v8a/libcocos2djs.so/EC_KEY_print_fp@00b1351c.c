
int EC_KEY_print_fp(FILE *fp,EC_KEY *key,int off)

{
  int iVar1;
  BIO_METHOD *type;
  BIO *bp;
  
  type = BIO_s_file();
  bp = BIO_new(type);
  if (bp == (BIO *)0x0) {
    ERR_put_error(0x10,0xb5,0x20,"crypto/ec/eck_prn.c",0x2c);
    iVar1 = 0;
  }
  else {
    BIO_ctrl(bp,0x6a,0,fp);
    iVar1 = EC_KEY_print(bp,key,off);
    BIO_free(bp);
  }
  return iVar1;
}

