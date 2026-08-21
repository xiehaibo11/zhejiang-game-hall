
int CONF_dump_bio(lhash_st_CONF_VALUE *conf,BIO *out)

{
  int iVar1;
  CONF local_48;
  
  if (DAT_01782e18 == (CONF_METHOD *)0x0) {
    DAT_01782e18 = NCONF_default();
  }
  (*DAT_01782e18->init)(&local_48);
  local_48.data = conf;
  iVar1 = (*(local_48.meth)->dump)(&local_48,out);
  return iVar1;
}

