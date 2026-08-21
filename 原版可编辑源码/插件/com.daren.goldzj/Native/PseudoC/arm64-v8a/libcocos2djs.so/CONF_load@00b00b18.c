
lhash_st_CONF_VALUE * CONF_load(lhash_st_CONF_VALUE *conf,char *file,long *eline)

{
  int iVar1;
  BIO *bp;
  lhash_st_CONF_VALUE *plVar2;
  CONF local_48;
  
  bp = BIO_new_file(file,"rb");
  if (bp == (BIO *)0x0) {
    ERR_put_error(0xe,100,2,"crypto/conf/conf_lib.c",0x38);
    plVar2 = (lhash_st_CONF_VALUE *)0x0;
  }
  else {
    if (DAT_01d39098 == (CONF_METHOD *)0x0) {
      DAT_01d39098 = NCONF_default();
    }
    (*DAT_01d39098->init)(&local_48);
    local_48.data = conf;
    iVar1 = (*(local_48.meth)->load_bio)(&local_48,bp,eline);
    plVar2 = (lhash_st_CONF_VALUE *)0x0;
    if (iVar1 != 0) {
      plVar2 = local_48.data;
    }
    BIO_free(bp);
  }
  return plVar2;
}

