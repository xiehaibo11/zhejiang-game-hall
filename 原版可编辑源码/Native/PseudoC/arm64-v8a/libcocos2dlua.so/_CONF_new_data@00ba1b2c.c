
int _CONF_new_data(CONF *conf)

{
  int iVar1;
  lhash_st_CONF_VALUE *plVar2;
  
  iVar1 = 0;
  if (conf != (CONF *)0x0) {
    if (conf->data == (lhash_st_CONF_VALUE *)0x0) {
      plVar2 = (lhash_st_CONF_VALUE *)OPENSSL_LH_new(&DAT_00ba1b74,FUN_00ba1bac);
      conf->data = plVar2;
      if (plVar2 == (lhash_st_CONF_VALUE *)0x0) {
        return 0;
      }
    }
    iVar1 = 1;
  }
  return iVar1;
}

