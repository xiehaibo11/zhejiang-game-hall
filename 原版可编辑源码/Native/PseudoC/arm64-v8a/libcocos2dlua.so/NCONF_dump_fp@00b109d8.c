
int NCONF_dump_fp(CONF *conf,FILE *out)

{
  int iVar1;
  BIO *bp;
  
  bp = BIO_new_fp(out,0);
  if (bp == (BIO *)0x0) {
    ERR_put_error(0xe,0x6a,7,"crypto/conf/conf_lib.c",0x135);
    iVar1 = 0;
  }
  else {
    if (conf == (CONF *)0x0) {
      ERR_put_error(0xe,0x69,0x69,"crypto/conf/conf_lib.c",0x141);
      iVar1 = 0;
    }
    else {
      iVar1 = (*conf->meth->dump)(conf,bp);
    }
    BIO_free(bp);
  }
  return iVar1;
}

