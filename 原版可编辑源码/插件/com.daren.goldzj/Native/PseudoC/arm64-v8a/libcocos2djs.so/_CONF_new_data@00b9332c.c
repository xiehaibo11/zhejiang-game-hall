
int _CONF_new_data(CONF *conf)

{
  int iVar1;
  lhash_st_CONF_VALUE *plVar2;
  
  iVar1 = 0;
  if (conf != (CONF *)0x0) {
    if (conf->data == (lhash_st_CONF_VALUE *)0x0) {
      plVar2 = (lhash_st_CONF_VALUE *)OPENSSL_LH_new(&LAB_00b93374,FUN_00b933ac);
      conf->data = plVar2;
      if (plVar2 == (lhash_st_CONF_VALUE *)0x0) {
        return 0;
      }
    }
    iVar1 = 1;
  }
  return iVar1;
}

