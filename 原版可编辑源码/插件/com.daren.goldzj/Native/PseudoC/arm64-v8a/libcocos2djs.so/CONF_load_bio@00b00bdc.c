
lhash_st_CONF_VALUE * CONF_load_bio(lhash_st_CONF_VALUE *conf,BIO *bp,long *eline)

{
  lhash_st_CONF_VALUE *plVar1;
  int iVar2;
  CONF local_48;
  
  if (DAT_01d39098 == (CONF_METHOD *)0x0) {
    DAT_01d39098 = NCONF_default();
  }
  (*DAT_01d39098->init)(&local_48);
  local_48.data = conf;
  iVar2 = (*(local_48.meth)->load_bio)(&local_48,bp,eline);
  plVar1 = (lhash_st_CONF_VALUE *)0x0;
  if (iVar2 != 0) {
    plVar1 = local_48.data;
  }
  return plVar1;
}

