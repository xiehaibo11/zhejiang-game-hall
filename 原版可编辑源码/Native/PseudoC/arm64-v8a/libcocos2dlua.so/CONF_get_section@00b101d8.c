
stack_st_CONF_VALUE * CONF_get_section(lhash_st_CONF_VALUE *conf,char *section)

{
  stack_st_CONF_VALUE *psVar1;
  CONF CStack_48;
  
  psVar1 = (stack_st_CONF_VALUE *)0x0;
  if (conf != (lhash_st_CONF_VALUE *)0x0) {
    if (DAT_01782e18 == (CONF_METHOD *)0x0) {
      DAT_01782e18 = NCONF_default();
    }
    (*DAT_01782e18->init)(&CStack_48);
    CStack_48.data = conf;
    if (section == (char *)0x0) {
      ERR_put_error(0xe,0x6c,0x6b,"crypto/conf/conf_lib.c",0xfc);
      psVar1 = (stack_st_CONF_VALUE *)0x0;
    }
    else {
      psVar1 = _CONF_get_section_values(&CStack_48,section);
    }
  }
  return psVar1;
}

