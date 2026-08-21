
char * CONF_get_string(lhash_st_CONF_VALUE *conf,char *group,char *name)

{
  char *pcVar1;
  CONF CStack_48;
  
  if (conf == (lhash_st_CONF_VALUE *)0x0) {
    pcVar1 = _CONF_get_string((CONF *)0x0,group,name);
    if (pcVar1 != (char *)0x0) {
      return pcVar1;
    }
    ERR_put_error(0xe,0x6d,0x6a,"crypto/conf/conf_lib.c",0x110);
  }
  else {
    if (DAT_01d39098 == (CONF_METHOD *)0x0) {
      DAT_01d39098 = NCONF_default();
    }
    (*DAT_01d39098->init)(&CStack_48);
    CStack_48.data = conf;
    pcVar1 = _CONF_get_string(&CStack_48,group,name);
    if (pcVar1 != (char *)0x0) {
      return pcVar1;
    }
    ERR_put_error(0xe,0x6d,0x6c,"crypto/conf/conf_lib.c",0x113);
    ERR_add_error_data(4,"group=",group," name=",name);
  }
  return (char *)0x0;
}

