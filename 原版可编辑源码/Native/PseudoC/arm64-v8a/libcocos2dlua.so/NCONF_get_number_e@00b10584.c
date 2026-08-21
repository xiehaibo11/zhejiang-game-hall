
int NCONF_get_number_e(CONF *conf,char *group,char *name,long *result)

{
  int iVar1;
  char *pcVar2;
  int reason;
  int line;
  long lVar3;
  
  if (result == (long *)0x0) {
    iVar1 = 0x70;
    reason = 0x43;
    line = 0x11e;
  }
  else {
    pcVar2 = _CONF_get_string(conf,group,name);
    if (pcVar2 != (char *)0x0) {
      *result = 0;
      iVar1 = (*conf->meth->is_number)(conf,*pcVar2);
      while (iVar1 != 0) {
        lVar3 = *result;
        iVar1 = (*conf->meth->to_int)(conf,*pcVar2);
        *result = lVar3 * 10 + (long)iVar1;
        iVar1 = (*conf->meth->is_number)(conf,pcVar2[1]);
        pcVar2 = pcVar2 + 1;
      }
      return 1;
    }
    if (conf != (CONF *)0x0) {
      ERR_put_error(0xe,0x6d,0x6c,"crypto/conf/conf_lib.c",0x113);
      ERR_add_error_data(4,"group=",group," name=",name);
      return 0;
    }
    iVar1 = 0x6d;
    reason = 0x6a;
    line = 0x110;
  }
  ERR_put_error(0xe,iVar1,reason,"crypto/conf/conf_lib.c",line);
  return 0;
}

