
BIO * FUN_00b52854(undefined8 *param_1,BIO *param_2,int param_3)

{
  int iVar1;
  BIO *bp;
  EVP_MD *md;
  int line;
  
  do {
    bp = BIO_find_type(param_2,0x208);
    if (bp == (BIO *)0x0) {
      iVar1 = 0x6c;
      line = 0x252;
LAB_00b528f8:
      ERR_put_error(0x21,0x7f,iVar1,"crypto/pkcs7/pk7_doit.c",line);
      return (BIO *)0x0;
    }
    BIO_ctrl(bp,0x78,0,param_1);
    if ((EVP_MD_CTX *)*param_1 == (EVP_MD_CTX *)0x0) {
      iVar1 = 0x44;
      line = 599;
      goto LAB_00b528f8;
    }
    md = EVP_MD_CTX_md((EVP_MD_CTX *)*param_1);
    iVar1 = EVP_MD_type(md);
    if (iVar1 == param_3) {
      return bp;
    }
    param_2 = BIO_next(bp);
  } while( true );
}

