
long CONF_get_number(lhash_st_CONF_VALUE *conf,char *group,char *name)

{
  code *pcVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  CONF local_48;
  
  if (conf == (lhash_st_CONF_VALUE *)0x0) {
    pcVar3 = _CONF_get_string((CONF *)0x0,group,name);
    if (pcVar3 != (char *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xb10584);
      (*pcVar1)();
    }
    ERR_put_error(0xe,0x6d,0x6a,"crypto/conf/conf_lib.c",0x110);
  }
  else {
    if (DAT_01782e18 == (CONF_METHOD *)0x0) {
      DAT_01782e18 = NCONF_default();
    }
    (*DAT_01782e18->init)(&local_48);
    local_48.data = conf;
    pcVar3 = _CONF_get_string(&local_48,group,name);
    if (pcVar3 != (char *)0x0) {
      iVar2 = (*(local_48.meth)->is_number)(&local_48,*pcVar3);
      lVar4 = 0;
      while (iVar2 != 0) {
        iVar2 = (*(local_48.meth)->to_int)(&local_48,*pcVar3);
        lVar4 = lVar4 * 10 + (long)iVar2;
        iVar2 = (*(local_48.meth)->is_number)(&local_48,pcVar3[1]);
        pcVar3 = pcVar3 + 1;
      }
      return lVar4;
    }
    ERR_put_error(0xe,0x6d,0x6c,"crypto/conf/conf_lib.c",0x113);
    ERR_add_error_data(4,"group=",group," name=",name);
  }
  ERR_clear_error();
  return 0;
}

