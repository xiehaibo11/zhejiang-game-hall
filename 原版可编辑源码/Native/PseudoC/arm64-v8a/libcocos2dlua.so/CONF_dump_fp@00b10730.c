
int CONF_dump_fp(lhash_st_CONF_VALUE *conf,FILE *out)

{
  int iVar1;
  BIO *bp;
  CONF local_48;
  
  bp = BIO_new_fp(out,0);
  if (bp == (BIO *)0x0) {
    ERR_put_error(0xe,0x68,7,"crypto/conf/conf_lib.c",0x9b);
    iVar1 = 0;
  }
  else {
    if (DAT_01782e18 == (CONF_METHOD *)0x0) {
      DAT_01782e18 = NCONF_default();
    }
    (*DAT_01782e18->init)(&local_48);
    local_48.data = conf;
    iVar1 = (*(local_48.meth)->dump)(&local_48,bp);
    BIO_free(bp);
  }
  return iVar1;
}

